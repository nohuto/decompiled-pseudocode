/*
 * XREFs of KiInitializeTimer2 @ 0x1400FD4CC
 * Callers:
 *     KeInitializeTimer2 @ 0x1400FD4B0 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x14013AF00 (KeInitializeIRTimer.c)
 *     ExAllocateTimerInternal2 @ 0x14016B930 (ExAllocateTimerInternal2.c)
 *     MiStoreEvictThread @ 0x14018A3A0 (MiStoreEvictThread.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14018E1C8 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     ExInitializeTimeRefresh @ 0x1409C4288 (ExInitializeTimeRefresh.c)
 *     EtwpInitialize @ 0x1409D0620 (EtwpInitialize.c)
 *     PopInitializeDirectedDrips @ 0x1409DC6E0 (PopInitializeDirectedDrips.c)
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
