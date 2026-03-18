/*
 * XREFs of ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00AF344
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C00AD898 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00AE6C0 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     MakeExportSuppressedPfnValid @ 0x1C00AF44C (MakeExportSuppressedPfnValid.c)
 *     xxxLoadHmodIndex @ 0x1C00B29DC (xxxLoadHmodIndex.c)
 */

void (*__fastcall xxxGetEventProc(
        struct tagEVENTHOOK *a1))(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 CurrentProcess; // rax
  tagDomLock *v19; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
  v8 = *((unsigned int *)a1 + 18);
  if ( (_DWORD)v8 != -1 )
  {
    v9 = *(unsigned int *)(*(_QWORD *)(ThreadWin32Thread + 416) + 404LL);
    if ( !_bittest((const int *)&v9, v8) )
    {
      CurrentProcess = PsGetCurrentProcess(v9, v8, v6, v7);
      if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
        return 0LL;
      CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v19);
      if ( !xxxLoadHmodIndex(*((unsigned int *)a1 + 18)) )
      {
        tagDomLock::LockExclusive(v19);
        return 0LL;
      }
      tagDomLock::LockExclusive(v19);
    }
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  if ( *((_DWORD *)a1 + 18) == -1 )
    return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))*((_QWORD *)a1 + 8);
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
  v14 = *((int *)a1 + 18);
  v15 = *(_QWORD *)(v13 + 416);
  v16 = *((_QWORD *)a1 + 8) + *(_QWORD *)(v15 + 8 * v14 + 408);
  if ( (_DWORD)v14 != -1 )
    MakeExportSuppressedPfnValid(*((_QWORD *)a1 + 8) + *(_QWORD *)(v15 + 8 * v14 + 408));
  return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))v16;
}
