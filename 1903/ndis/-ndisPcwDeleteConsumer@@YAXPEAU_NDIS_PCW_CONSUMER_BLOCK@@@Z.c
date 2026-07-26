/*
 * XREFs of ?ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C011A474
 * Callers:
 *     ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C011A750 (-ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 * Callees:
 *     ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x1C00FFE50 (-ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z.c)
 */

void __fastcall ndisPcwDeleteConsumer(PVOID P)
{
  __int64 i; // rdi
  _DWORD *v3; // rsi
  void *v4; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 10); i = (unsigned int)(i + 1) )
  {
    v3 = *(_DWORD **)(*((_QWORD *)P + 6) + 8 * i);
    ndisPcwUpdateMiniportDataBlock((__int64)v3, *((_DWORD *)P + 2), *((_QWORD *)P + 2), -1);
    if ( !v3[42] )
      ExFreePoolWithTag(v3, 0);
  }
  v4 = (void *)*((_QWORD *)P + 6);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)P + 6) = 0LL;
  }
  ExFreePoolWithTag(P, 0);
}
