/*
 * XREFs of ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F7BC
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003ED74 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18003D3C4 (-GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042DE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180043170 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CQueryKnownGameList::GetProcessArgsByPID(
        CQueryKnownGameList *this,
        __int64 a2,
        unsigned __int16 **a3)
{
  DWORD v4; // edi
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rbx
  int v11; // edi
  const struct std::nothrow_t *v12; // rdx
  const struct std::nothrow_t *v13; // rdx
  unsigned __int16 *v14; // rsi
  unsigned int *v15; // r9
  int ProcessArgsByPID; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int16 *v21; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38E,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = *((_QWORD *)this + 94);
  if ( !v7 )
  {
    v20 = 4096;
    v10 = 0LL;
    v14 = (unsigned __int16 *)operator new[](0x2000uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v14 )
    {
      operator delete(0LL, v13);
      v10 = v14;
      v21 = v14;
      ProcessArgsByPID = Common::GetProcessArgsByPID(v4, v14, (unsigned __int16 *)&v20, v15);
      v11 = ProcessArgsByPID;
      if ( ProcessArgsByPID >= 0 )
      {
        *a3 = v14;
        goto LABEL_15;
      }
      v17 = (unsigned int)ProcessArgsByPID;
      v18 = 934LL;
    }
    else
    {
      v11 = -2147024882;
      v17 = 2147942414LL;
      v18 = 931LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v17);
    goto LABEL_18;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v7 + 32LL))(
             v7,
             a2,
             0LL,
             &v20);
  if ( (int)result < 0 )
    return result;
  v8 = 2LL * v20;
  if ( !is_mul_ok(v20, 2uLL) )
    v8 = -1LL;
  v9 = (unsigned __int16 *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v21 = v9;
  if ( v9 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int16 *, unsigned int *))(**((_QWORD **)this + 94) + 32LL))(
            *((_QWORD *)this + 94),
            v4,
            v9,
            &v20);
    if ( v11 < 0 )
      goto LABEL_18;
    *a3 = v10;
LABEL_15:
    operator delete(0LL, v12);
    return 0LL;
  }
  v11 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x397,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x8007000ELL);
LABEL_18:
  operator delete(v10, v12);
  return (unsigned int)v11;
}
