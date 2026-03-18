/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1406B74A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlCompareMemory @ 0x1401C5BB0 (RtlCompareMemory.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     PsOpenThread @ 0x140611DF0 (PsOpenThread.c)
 *     AlpcpUnlockMessage @ 0x140615E4C (AlpcpUnlockMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14061AE2C (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpLookupMessage @ 0x140636970 (AlpcpLookupMessage.c)
 */

__int64 __fastcall NtAlpcOpenSenderThread(
        _QWORD *a1,
        void *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        _OWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v11; // ebx
  __int64 v12; // rcx
  _OWORD *v13; // r9
  PVOID v14; // rdi
  ULONG_PTR v15; // rbx
  __int64 v16; // rsi
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR v19; // [rsp+38h] [rbp-70h] BYREF
  int v20[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-60h] BYREF
  __int128 v22; // [rsp+58h] [rbp-50h]
  __int64 v23; // [rsp+68h] [rbp-40h]
  int v24[4]; // [rsp+70h] [rbp-38h] BYREF
  __int128 v25; // [rsp+80h] [rbp-28h]
  __int128 v26; // [rsp+90h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a1;
      *(_QWORD *)v12 = *(_QWORD *)v12;
      AlpcpProbeAndCaptureMessageHeader(a3, (__int64)&Source2, a4);
      if ( a6 < v13 )
        v13 = a6;
      *(_OWORD *)v24 = *v13;
      v25 = v13[1];
      v26 = v13[2];
    }
    else
    {
      Source2 = *(_OWORD *)a3;
      v22 = *(_OWORD *)(a3 + 16);
      v23 = *(_QWORD *)(a3 + 32);
      *(_OWORD *)v24 = *a6;
      v25 = a6[1];
      v26 = a6[2];
    }
    v14 = Object;
    v11 = AlpcpLookupMessage((__int64)Object, SDWORD2(v22), v23, &v19);
    if ( v11 < 0 )
    {
      ObfDereferenceObject(v14);
    }
    else
    {
      v15 = v19;
      if ( (*(_DWORD *)(v19 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(v19);
        ObfDereferenceObject(v14);
        v11 = -1073740029;
      }
      else
      {
        v16 = *(_QWORD *)(v19 + 32);
        if ( v16 && RtlCompareMemory((const void *)(v16 + 1592), (char *)&Source2 + 8, 0x10uLL) == 16 )
        {
          ObfReferenceObject((PVOID)v16);
          AlpcpUnlockMessage(v15);
          v11 = PsOpenThread(
                  (unsigned __int64)v20,
                  a5,
                  (__int64)v24,
                  (__int128 *)((char *)&Source2 + 8),
                  0,
                  PreviousMode);
          ObfDereferenceObject((PVOID)v16);
          ObfDereferenceObject(v14);
          if ( v11 >= 0 )
            *a1 = *(_QWORD *)v20;
        }
        else
        {
          AlpcpUnlockMessage(v15);
          ObfDereferenceObject(v14);
          v11 = -1073741790;
        }
      }
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}
