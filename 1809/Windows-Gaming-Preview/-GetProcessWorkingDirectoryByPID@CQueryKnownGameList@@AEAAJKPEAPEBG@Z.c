/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F574
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E9A4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x18003D4CC (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042DE0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
        CQueryKnownGameList *this,
        __int64 a2,
        char **a3)
{
  DWORD v4; // ebp
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  char *v9; // rax
  char *v10; // rbx
  int ProcessWorkingDirectoryByPID; // edi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  char *v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  char *v18; // rdi
  __int64 v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v21; // [rsp+70h] [rbp+18h] BYREF
  char *v22; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B0,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = *((_QWORD *)this + 94);
  if ( !v7 )
  {
    v21 = 260;
    v10 = 0LL;
    v14 = (char *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v14 )
    {
      operator delete(0LL, v13);
      v10 = v14;
      v22 = v14;
      ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(v4, v15, v14, (unsigned __int16 *)&v21);
      if ( ProcessWorkingDirectoryByPID == -2147024774 )
      {
        v16 = 2LL * v21;
        if ( !is_mul_ok(v21, 2uLL) )
          v16 = -1LL;
        v18 = (char *)operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
        if ( v18 != v14 )
        {
          operator delete(v14, v17);
          v10 = v18;
          v22 = v18;
        }
        if ( !v10 )
        {
          v19 = 974LL;
LABEL_25:
          ProcessWorkingDirectoryByPID = -2147024882;
          goto LABEL_26;
        }
        ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(v4, v17, v10, (unsigned __int16 *)&v21);
      }
      if ( ProcessWorkingDirectoryByPID >= 0 )
      {
        *a3 = v10;
        goto LABEL_23;
      }
      v19 = 980LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessWorkingDirectoryByPID);
      goto LABEL_27;
    }
    v19 = 966LL;
    goto LABEL_25;
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v7 + 40LL))(
             v7,
             a2,
             0LL,
             &v21);
  if ( (int)result < 0 )
    return result;
  v8 = 2LL * v21;
  if ( !is_mul_ok(v21, 2uLL) )
    v8 = -1LL;
  v9 = (char *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v22 = v9;
  if ( v9 )
  {
    ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(**((_QWORD **)this + 94) + 40LL))(
                                     *((_QWORD *)this + 94),
                                     v4,
                                     v9,
                                     &v21);
    if ( ProcessWorkingDirectoryByPID < 0 )
      goto LABEL_27;
    *a3 = v10;
LABEL_23:
    operator delete(0LL, v12);
    return 0LL;
  }
  ProcessWorkingDirectoryByPID = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B9,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)0x8007000ELL);
LABEL_27:
  operator delete(v10, v12);
  return (unsigned int)ProcessWorkingDirectoryByPID;
}
