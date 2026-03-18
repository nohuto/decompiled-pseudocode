/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1406DA870
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpLookupMessage @ 0x1405E3E30 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14065AD68 (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsOpenThread @ 0x140678030 (PsOpenThread.c)
 */

__int64 __fastcall NtAlpcOpenSenderThread(
        _QWORD *a1,
        void *a2,
        unsigned __int64 a3,
        int a4,
        ACCESS_MASK a5,
        _OWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v12; // ebx
  _OWORD *v13; // r9
  __int64 v14; // rcx
  PVOID v15; // rdi
  ULONG_PTR v16; // rbx
  __int64 v17; // rsi
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-70h] BYREF
  int v21[2]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE Source2[40]; // [rsp+48h] [rbp-60h] BYREF
  int v23[4]; // [rsp+70h] [rbp-38h] BYREF
  __int128 v24; // [rsp+80h] [rbp-28h]
  __int128 v25; // [rsp+90h] [rbp-18h]

  memset(Source2, 0, sizeof(Source2));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v12 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    if ( PreviousMode )
    {
      v14 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v14 = (__int64)a1;
      *(_QWORD *)v14 = *(_QWORD *)v14;
      AlpcpProbeAndCaptureMessageHeader(a3, (__int64)Source2, a4);
      if ( a6 < v13 )
        v13 = a6;
      *(_OWORD *)v23 = *v13;
      v24 = v13[1];
      v25 = v13[2];
    }
    else
    {
      *(_OWORD *)Source2 = *(_OWORD *)a3;
      *(_OWORD *)&Source2[16] = *(_OWORD *)(a3 + 16);
      *(_QWORD *)&Source2[32] = *(_QWORD *)(a3 + 32);
      *(_OWORD *)v23 = *a6;
      v24 = a6[1];
      v25 = a6[2];
    }
    v15 = Object;
    v12 = AlpcpLookupMessage(
            (__int64)Object,
            *(unsigned int *)&Source2[24],
            *(int *)&Source2[32],
            (__int64)v13,
            &BugCheckParameter2);
    if ( v12 < 0 )
    {
      ObfDereferenceObject(v15);
    }
    else
    {
      v16 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(BugCheckParameter2);
        ObfDereferenceObject(v15);
        v12 = -1073740029;
      }
      else
      {
        v17 = *(_QWORD *)(BugCheckParameter2 + 32);
        if ( v17 && RtlCompareMemory((const void *)(v17 + 1608), &Source2[8], 0x10uLL) == 16 )
        {
          ObfReferenceObject((PVOID)v17);
          AlpcpUnlockMessage(v16);
          v12 = PsOpenThread((unsigned __int64)v21, a5, (__int64)v23, &Source2[8], 0, PreviousMode);
          ObfDereferenceObject((PVOID)v17);
          ObfDereferenceObject(v15);
          if ( v12 >= 0 )
            *a1 = *(_QWORD *)v21;
        }
        else
        {
          AlpcpUnlockMessage(v16);
          ObfDereferenceObject(v15);
          v12 = -1073741790;
        }
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
