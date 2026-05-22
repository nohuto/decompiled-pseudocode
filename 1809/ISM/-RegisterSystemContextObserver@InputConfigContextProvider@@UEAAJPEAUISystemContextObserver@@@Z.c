/*
 * XREFs of ?RegisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x18009DE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x18009EAE0 (-RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputConfigContextProvider::RegisterSystemContextObserver(
        InputConfigContextProvider *this,
        struct ISystemContextObserver *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // edi
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  memset(v9, 0, 24);
  v4 = SystemContextProvider::RegisterSystemContextObserver(this, a2);
  if ( v4 < 0 )
  {
    v5 = 71LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(InputConfigContextProvider *, _BYTE *))(*(_QWORD *)this + 40LL))(this, v9);
  if ( v4 < 0 )
  {
    if ( v4 == -2147023728 )
      v4 = 0;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(struct ISystemContextObserver *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v9);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  if ( v4 < 0 )
  {
    v5 = 85LL;
    goto LABEL_3;
  }
  return 0LL;
}
