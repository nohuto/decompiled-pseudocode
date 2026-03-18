/*
 * XREFs of ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C001B448
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C001F1B4 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     MakeExportSuppressedPfnValid @ 0x1C001B554 (MakeExportSuppressedPfnValid.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxLoadHmodIndex @ 0x1C00D86B0 (xxxLoadHmodIndex.c)
 *     ??0?$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00D8F64 (--0-$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 */

void (*__fastcall xxxGetEventProc(
        struct tagEVENTHOOK *a1))(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 CurrentProcess; // rax
  tagObjLock *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) != 0 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = *((unsigned int *)a1 + 18);
  if ( (_DWORD)v3 != -1 )
  {
    v4 = *(unsigned int *)(*(_QWORD *)(ThreadWin32Thread + 416) + 404LL);
    if ( !_bittest((const int *)&v4, v3) )
    {
      CurrentProcess = PsGetCurrentProcess(v4, v3);
      if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
        return 0LL;
      CUnLockDomainExclusive<DLT_WINEVENT>::CUnLockDomainExclusive<DLT_WINEVENT>(&v11);
      if ( !xxxLoadHmodIndex(*((unsigned int *)a1 + 18)) )
      {
        tagObjLock::LockExclusive(v11);
        return 0LL;
      }
      tagObjLock::LockExclusive(v11);
    }
  }
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) != 0 )
    return 0LL;
  if ( *((_DWORD *)a1 + 18) == -1 )
    return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))*((_QWORD *)a1 + 8);
  v5 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v6 = *((int *)a1 + 18);
  v7 = *(_QWORD *)(v5 + 416);
  v8 = *((_QWORD *)a1 + 8) + *(_QWORD *)(v7 + 8 * v6 + 408);
  if ( (_DWORD)v6 != -1 )
    MakeExportSuppressedPfnValid(*((_QWORD *)a1 + 8) + *(_QWORD *)(v7 + 8 * v6 + 408));
  return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))v8;
}
