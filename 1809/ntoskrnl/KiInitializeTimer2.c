/*
 * XREFs of KiInitializeTimer2 @ 0x1400FD56C
 * Callers:
 *     KeInitializeTimer2 @ 0x1400FD550 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x14013B020 (KeInitializeIRTimer.c)
 *     ExAllocateTimerInternal2 @ 0x14016BA50 (ExAllocateTimerInternal2.c)
 *     MiStoreEvictThread @ 0x14018A500 (MiStoreEvictThread.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14018E328 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     ExInitializeTimeRefresh @ 0x1409C5288 (ExInitializeTimeRefresh.c)
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 *     PopInitializeDirectedDrips @ 0x1409DD6E0 (PopInitializeDirectedDrips.c)
 * Callees:
 *     <none>
 */

char __fastcall KiInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r10
  _BYTE *i; // rax
  char result; // al

  v4 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)a1 = (a4 >= 0) + 24;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 96) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a2 ^ KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 104) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a3 ^ KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 112) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 120) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  *(_BYTE *)(a1 + 129) = a4 & 0xE;
  for ( i = KiTimer2Combinations; *i != (a4 & 0xE); i += 3 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 5 )
      __fastfail(5u);
  }
  *(_BYTE *)(a1 + 130) = KiTimer2Combinations[3 * v4 + 1];
  result = KiTimer2Combinations[3 * v4 + 2];
  *(_BYTE *)(a1 + 131) = result;
  return result;
}
