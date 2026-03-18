/*
 * XREFs of ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C001B544
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C00190F0 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     ??0?$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C001A854 (--0-$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     MakeExportSuppressedPfnValid @ 0x1C001B660 (MakeExportSuppressedPfnValid.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxLoadHmodIndex @ 0x1C00B5F5C (xxxLoadHmodIndex.c)
 */

void (*__fastcall xxxGetEventProc(
        struct tagEVENTHOOK *a1))(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v3; // edx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 CurrentProcess; // rax
  tagObjLock *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                 + *((_QWORD *)&gSharedInfo + 1)
                 + 25LL) & 1) != 0 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v3 = *((_DWORD *)a1 + 18);
  if ( v3 != -1 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 412LL);
    if ( !_bittest(&v4, v3) )
    {
      CurrentProcess = PsGetCurrentProcess();
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
  if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                 + *((_QWORD *)&gSharedInfo + 1)
                 + 25LL) & 1) != 0 )
    return 0LL;
  if ( *((_DWORD *)a1 + 18) == -1 )
    return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))*((_QWORD *)a1 + 8);
  v5 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v6 = *((int *)a1 + 18);
  v7 = *(_QWORD *)(v5 + 424);
  v8 = *((_QWORD *)a1 + 8) + *(_QWORD *)(v7 + 8 * v6 + 416);
  if ( (_DWORD)v6 != -1 )
    MakeExportSuppressedPfnValid(*((_QWORD *)a1 + 8) + *(_QWORD *)(v7 + 8 * v6 + 416));
  return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))v8;
}
