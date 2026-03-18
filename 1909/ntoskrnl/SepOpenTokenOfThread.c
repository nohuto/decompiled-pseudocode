/*
 * XREFs of SepOpenTokenOfThread @ 0x1405D66B0
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1405D62D0 (NtOpenThreadTokenEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall SepOpenTokenOfThread(void *a1, __int64 a2, _QWORD *a3, PVOID *a4, _BYTE *a5, bool *a6, int *a7)
{
  NTSTATUS result; // eax
  _DWORD *v10; // rsi
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v12; // rbp
  int *v13; // r13
  _DWORD *v14; // rdi
  __int64 v15; // r15
  void *v16; // r15
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(
             a1,
             0x800u,
             (POBJECT_TYPE)PsThreadType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v10 = Object;
  *a4 = Object;
  if ( result >= 0 )
  {
    if ( (v10[440] & 8) == 0 )
    {
      *a3 = 0LL;
LABEL_4:
      ObfDereferenceObject(*a4);
      result = -1073741700;
      *a4 = 0LL;
      return result;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (signed __int64 *)((char *)Object + 1744);
    ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1744, 0LL);
    v13 = a7;
    if ( (v10[440] & 8) != 0 )
    {
      v14 = Object;
      v15 = *((_QWORD *)Object + 207);
      *a5 = BYTE1(v10[440]) & 1;
      v16 = (void *)(v15 & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObject(v16);
      *v13 = v14[414] & 3;
      *a6 = (v14[414] & 4) != 0;
    }
    else
    {
      v16 = 0LL;
    }
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    *a3 = v16;
    if ( !v16 )
      goto LABEL_4;
    if ( *v13 <= 0 )
    {
      ObfDereferenceObject(v16);
      ObfDereferenceObject(*a4);
      *a4 = 0LL;
      result = -1073741658;
      *a3 = 0LL;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
