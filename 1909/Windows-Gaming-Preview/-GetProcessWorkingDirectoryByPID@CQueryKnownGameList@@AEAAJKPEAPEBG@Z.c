/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F9D4
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003ED24 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x18003D7AC (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800432F0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
        struct _RTL_CRITICAL_SECTION *this,
        DWORD a2,
        char **a3)
{
  ULONG_PTR v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  ULONG_PTR SpinCount; // rax
  int ProcessWorkingDirectoryByPID; // esi
  unsigned __int64 v11; // rax
  char *v12; // rax
  char *v13; // rdi
  const struct std::nothrow_t *v14; // rdx
  const struct std::nothrow_t *v15; // rdx
  char *v16; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  const struct std::nothrow_t *v19; // rdx
  char *v20; // rsi
  __int64 v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v23; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR v24; // [rsp+88h] [rbp+48h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BF,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v7 = 0LL;
  v24 = 0LL;
  v8 = this + 19;
  EnterCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    v7 = this[18].SpinCount;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 8LL))(v7);
    v24 = v7;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( !v7 )
  {
    v23 = 260;
    v13 = 0LL;
    v16 = (char *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v16 )
    {
      operator delete(0LL, v15);
      v13 = v16;
      ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(a2, v17, v16, (unsigned __int16 *)&v23);
      if ( ProcessWorkingDirectoryByPID == -2147024774 )
      {
        v18 = 2LL * v23;
        if ( !is_mul_ok(v23, 2uLL) )
          v18 = -1LL;
        v20 = (char *)operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
        if ( v20 != v16 )
        {
          operator delete(v16, v19);
          v13 = v20;
        }
        if ( !v13 )
        {
          v21 = 996LL;
LABEL_29:
          ProcessWorkingDirectoryByPID = -2147024882;
          goto LABEL_30;
        }
        ProcessWorkingDirectoryByPID = Common::GetProcessWorkingDirectoryByPID(
                                         a2,
                                         (__int64)v19,
                                         v13,
                                         (unsigned __int16 *)&v23);
      }
      if ( ProcessWorkingDirectoryByPID >= 0 )
      {
        *a3 = v13;
LABEL_27:
        operator delete(0LL, v14);
        ProcessWorkingDirectoryByPID = 0;
        goto LABEL_32;
      }
      v21 = 1002LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)ProcessWorkingDirectoryByPID);
      goto LABEL_31;
    }
    v21 = 988LL;
    goto LABEL_29;
  }
  ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v7 + 40LL))(
                                   v7,
                                   a2,
                                   0LL,
                                   &v23);
  if ( ProcessWorkingDirectoryByPID >= 0 )
  {
    v11 = 2LL * v23;
    if ( !is_mul_ok(v23, 2uLL) )
      v11 = -1LL;
    v12 = (char *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( !v12 )
    {
      ProcessWorkingDirectoryByPID = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CF,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL);
LABEL_31:
      operator delete(v13, v14);
      goto LABEL_32;
    }
    ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *, unsigned int *))(*(_QWORD *)v7 + 40LL))(
                                     v7,
                                     a2,
                                     v12,
                                     &v23);
    if ( ProcessWorkingDirectoryByPID < 0 )
      goto LABEL_31;
    *a3 = v13;
    goto LABEL_27;
  }
LABEL_32:
  if ( v7 )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)ProcessWorkingDirectoryByPID;
}
