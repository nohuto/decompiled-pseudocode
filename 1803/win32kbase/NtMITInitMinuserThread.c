/*
 * XREFs of NtMITInitMinuserThread @ 0x1C00B4310
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ProtectHandle @ 0x1C005F844 (ProtectHandle.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 */

_BOOL8 __fastcall NtMITInitMinuserThread(HANDLE Handle, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rdi
  BOOL v5; // ebx
  int v6; // edx
  int v7; // esi
  int v8; // edx
  __int64 v9; // rcx
  char v11; // [rsp+78h] [rbp+10h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v11, a2, a3);
  RIMLockExclusive((__int64)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  RIMLockExclusive((__int64)&gInputLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = 1;
  if ( (*(_DWORD *)(ThreadWin32Thread + 1200) & 0x1000000) == 0 )
  {
    v7 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v7 = ProtectHandle(Handle, v6, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
      if ( v7 < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        if ( *(_QWORD *)(ThreadWin32Thread + 720) )
        {
          ProtectHandle(*(void **)(ThreadWin32Thread + 712), v8, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
          ObCloseHandle(*(HANDLE *)(ThreadWin32Thread + 712), 1);
          ObfDereferenceObject(*(PVOID *)(ThreadWin32Thread + 720));
        }
        *(_QWORD *)(ThreadWin32Thread + 712) = Handle;
        *(_QWORD *)(ThreadWin32Thread + 720) = Object;
        *(_DWORD *)(ThreadWin32Thread + 1200) |= 0x1000000u;
      }
    }
    v5 = v7 >= 0;
  }
  qword_1C01A1668 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v9);
  return v5;
}
