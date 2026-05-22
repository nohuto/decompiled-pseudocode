/*
 * XREFs of ??_GInputSiteManager@@UEAAPEAXI@Z @ 0x18001D800
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001E018 (--1-$vector@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSiteE.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

InputSiteManager *__fastcall InputSiteManager::`scalar deleting destructor'(InputSiteManager *this, char a2)
{
  const char *v4; // r9
  char *v5; // rcx
  const struct std::nothrow_t *v6; // rdx
  char *v7; // r8
  char *v8; // rcx
  volatile signed __int32 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::~vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>((char *)this + 80);
  v5 = (char *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    v6 = (const struct std::nothrow_t *)((*((_QWORD *)this + 9) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v6 >= 0x1000 )
    {
      v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
      v7 = (char *)*((_QWORD *)v5 - 1);
      v8 = (char *)(v5 - v7);
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v8, v6);
        goto LABEL_14;
      }
      v5 = v7;
    }
    operator delete(v5, v6);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( !v9 )
    goto LABEL_10;
  v10 = _InterlockedDecrement(v9 + 2);
  if ( v10 < 0 )
  {
LABEL_14:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      v4);
    JUMPOUT(0x18001D8D5LL);
  }
  if ( !v10 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_10:
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
