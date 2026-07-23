/*
 * XREFs of ExpCenturyDpcRoutine @ 0x1401602C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x140195300 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine9 @ 0x1401C7C00 (KiCustomAccessRoutine9.c)
 */

void __fastcall ExpCenturyDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  _DWORD v7[30]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v8; // [rsp+7Ah] [rbp-DEh]
  __int64 v9; // [rsp+C2h] [rbp-96h]
  __int64 v10; // [rsp+CAh] [rbp-8Eh]
  _DWORD *v11; // [rsp+138h] [rbp-20h]

  v11 = v7;
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v7[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v10 = a3;
    v9 = __ROL8__(a2, a3);
    v8 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine9(a2);
  }
  v6 = *((_QWORD *)PsGetServerSiloGlobals(a2) + 132);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v6 + 928)) == 1 )
  {
    if ( !PsIsHostSilo(v5) )
      ObfReferenceObjectWithTag((PVOID)a2, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v6 + 736), DelayedWorkQueue);
  }
}
