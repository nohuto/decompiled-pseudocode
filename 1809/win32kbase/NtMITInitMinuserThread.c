/*
 * XREFs of NtMITInitMinuserThread @ 0x1C00ED340
 * Callers:
 *     <none>
 * Callees:
 *     ProtectHandle @ 0x1C0017508 (ProtectHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 */

_BOOL8 __fastcall NtMITInitMinuserThread(HANDLE Handle, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rdi
  BOOL v5; // ebx
  int v6; // edx
  int v7; // esi
  int v8; // edx
  char v10; // [rsp+78h] [rbp+10h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v10, a2, a3);
  RIMLockExclusive((__int64)&gWndLock);
  RIMLockExclusive((__int64)&gInputLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = 1;
  if ( (*(_DWORD *)(ThreadWin32Thread + 1208) & 0x1000000) == 0 )
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
        if ( *(_QWORD *)(ThreadWin32Thread + 736) )
        {
          ProtectHandle(*(void **)(ThreadWin32Thread + 728), v8, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
          ObCloseHandle(*(HANDLE *)(ThreadWin32Thread + 728), 1);
          ObfDereferenceObject(*(PVOID *)(ThreadWin32Thread + 736));
        }
        *(_QWORD *)(ThreadWin32Thread + 728) = Handle;
        *(_QWORD *)(ThreadWin32Thread + 736) = Object;
        *(_DWORD *)(ThreadWin32Thread + 1208) |= 0x1000000u;
      }
    }
    v5 = v7 >= 0;
  }
  qword_1C01D0C90 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C01D0CA0 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit();
  return v5;
}
