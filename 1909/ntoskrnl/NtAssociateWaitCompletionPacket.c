/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x140008120
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140008320 (KeReleaseSpinLock.c)
 *     KeRegisterObjectNotification @ 0x140008380 (KeRegisterObjectNotification.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObpGetWaitObject @ 0x140008620 (ObpGetWaitObject.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtAssociateWaitCompletionPacket(
        void *a1,
        void *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        _BYTE *a8)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS result; // eax
  NTSTATUS v12; // ebx
  NTSTATUS v13; // edi
  int v14; // r14d
  __int16 *WaitObject; // rbx
  _BYTE *v16; // rsi
  KSPIN_LOCK *v17; // r12
  KIRQL v18; // al
  KIRQL v19; // r13
  _QWORD *v20; // rsi
  PVOID v21; // rdx
  char v22; // bl
  __int64 v23; // rdx
  PVOID v24; // rsi
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  PVOID v26; // [rsp+48h] [rbp-40h] BYREF
  PVOID v27; // [rsp+50h] [rbp-38h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(a1, 1u, IopWaitCompletionPacketObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v12 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, PreviousMode, &v26, 0LL);
    if ( v12 < 0 )
    {
      ObfDereferenceObject(Object);
      return v12;
    }
    v13 = ObReferenceObjectByHandle(a3, 0x100000u, 0LL, PreviousMode, &v27, 0LL);
    v14 = v13;
    if ( v13 < 0 )
    {
      ObfDereferenceObject(Object);
      ObfDereferenceObject(v26);
      return v13;
    }
    WaitObject = (__int16 *)ObpGetWaitObject((char *)v27 - 48);
    if ( WaitObject != &ObpDefaultObject && WaitObject && (((*(_BYTE *)WaitObject & 0x7F) - 2) & 0xFD) != 0 )
    {
      v16 = Object;
      v17 = (KSPIN_LOCK *)((char *)Object + 96);
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
      v19 = v18;
      if ( !v16[104] )
      {
        v16[104] = 1;
        v20 = Object;
        *((_QWORD *)Object + 6) = a4;
        v20[7] = a5;
        *((_DWORD *)v20 + 18) = a6;
        v20[8] = a7;
        v20[10] = v27;
        v21 = v26;
        v20[11] = v26;
        v22 = KeRegisterObjectNotification(WaitObject, v21, v20);
        KeReleaseSpinLock(v17, v19);
        if ( a8 )
        {
          if ( PreviousMode )
          {
            v23 = (__int64)a8;
            if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
              v23 = 0x7FFFFFFF0000LL;
            *(_BYTE *)v23 = *(_BYTE *)v23;
          }
          *a8 = v22;
        }
        return v14;
      }
      KeReleaseSpinLock(v17, v18);
      v14 = -1073741585;
    }
    else
    {
      v14 = -1073741583;
    }
    v24 = Object;
    ObfDereferenceObject(v26);
    ObfDereferenceObject(v27);
    ObfDereferenceObject(v24);
    return v14;
  }
  return result;
}
