/*
 * XREFs of PopThermalZoneDpc @ 0x140171560
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x140128400 (IoCancelIrp.c)
 *     _local_unwind @ 0x1401A0030 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1401BA574 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine3 @ 0x1401CE9B0 (KiCustomAccessRoutine3.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

BOOLEAN __fastcall PopThermalZoneDpc(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v9[106]; // [rsp+0h] [rbp-1D8h] BYREF
  _DWORD *v10; // [rsp+1A8h] [rbp-30h]

  v10 = v9;
  memset(&v9[80], 0, 0x5CuLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v9[16] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)&v9[101] = a3;
    *(_QWORD *)&v9[87] = __ROL8__(a2, a3);
    *(_QWORD *)&v9[93] = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine3(a2);
  }
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
