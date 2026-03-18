/*
 * XREFs of NtSignalAndWaitForSingleObject @ 0x1402ED370
 * Callers:
 *     <none>
 * Callees:
 *     ObpGetWaitObject @ 0x140008590 (ObpGetWaitObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeReleaseMutant @ 0x14006B690 (KeReleaseMutant.c)
 *     KeReleaseSemaphore @ 0x1401091E0 (KeReleaseSemaphore.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtSignalAndWaitForSingleObject(
        HANDLE SignalObject,
        HANDLE WaitObject,
        BOOLEAN Alertable,
        PLARGE_INTEGER Time)
{
  KPROCESSOR_MODE PreviousMode; // di
  LARGE_INTEGER *v7; // rsi
  __int64 v8; // rax
  int v9; // ebx
  void *v10; // r14
  POBJECT_TYPE *v11; // rcx
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+58h] [rbp-30h] BYREF
  PVOID v16; // [rsp+60h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp-20h]

  HandleInformation = 0LL;
  v15 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v7 = Time;
  if ( Time && PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Time < 0x7FFFFFFF0000LL )
      v8 = (__int64)Time;
    v17 = *(_QWORD *)v8;
    v15 = v17;
    v7 = (LARGE_INTEGER *)&v15;
  }
  v9 = ObReferenceObjectByHandleWithTag(SignalObject, 0, 0LL, PreviousMode, 0x7457624Fu, &Object, &HandleInformation);
  if ( v9 >= 0 )
  {
    v9 = ObReferenceObjectByHandleWithTag(WaitObject, 0x100000u, 0LL, PreviousMode, 0x7457624Fu, &v16, 0LL);
    if ( v9 < 0 )
    {
LABEL_21:
      ObfDereferenceObjectWithTag(Object, 0x7457624Fu);
      return v9;
    }
    v10 = (void *)ObpGetWaitObject((__int64)v16 - 48);
    v11 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    v9 = -1073741790;
    if ( v11 == ExEventObjectType )
    {
      if ( PreviousMode && (~LOBYTE(HandleInformation.GrantedAccess) & 2) != 0 )
        goto LABEL_20;
      KeSetEvent((PRKEVENT)Object, 1, 1u);
    }
    else if ( v11 == (POBJECT_TYPE *)ExMutantObjectType )
    {
      KeReleaseMutant((PRKMUTANT)Object, 1, 0, 1u);
    }
    else
    {
      if ( v11 != ExSemaphoreObjectType )
      {
        v9 = -1073741788;
        goto LABEL_20;
      }
      if ( PreviousMode && (~LOBYTE(HandleInformation.GrantedAccess) & 2) != 0 )
        goto LABEL_20;
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 1, 1, 1u);
    }
    v9 = KeWaitForSingleObject(v10, UserRequest, PreviousMode, Alertable, v7);
LABEL_20:
    ObfDereferenceObjectWithTag(v16, 0x7457624Fu);
    goto LABEL_21;
  }
  return v9;
}
