/*
 * XREFs of GreSfmOpenTokenEvent @ 0x1C0089700
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0066A70 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreSfmOpenTokenEvent(PHANDLE Handle, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  NTSTATUS v6; // eax
  PVOID v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( ghsemDwmState )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDwmState", (__int64)ghsemDwmState, a3);
  if ( UserIsCurrentProcessDwm(v4) )
  {
    v6 = ObReferenceObjectByHandle(
           *((HANDLE *)gpSfmState + 3),
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           0,
           &Object,
           0LL);
    v7 = Object;
    v8 = v6;
    if ( v6 >= 0 )
    {
      v8 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, Handle);
      ObfDereferenceObject(v7);
    }
  }
  else
  {
    v8 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (__int64)ghsemDwmState, v5);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    PsLeavePriorityRegion(v9);
  }
  return v8;
}
