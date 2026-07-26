/*
 * XREFs of ndisFIndicateTimestampChange @ 0x1C005B648
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusInternal @ 0x1C001817C (ndisFIndicateStatusInternal.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

char __fastcall ndisFIndicateTimestampChange(__int64 a1, int a2, _WORD *a3, unsigned int a4)
{
  char v6; // di
  size_t v7; // rsi
  void *v8; // rbx
  PVOID PoolWithTag; // rax
  unsigned __int16 v11; // ax

  v6 = 1;
  if ( a4 < 0x36 || *(_BYTE *)a3 != 0x80 || a3[1] < 0x36u || !*((_BYTE *)a3 + 1) )
    return 0;
  v7 = 56LL;
  if ( a2 == 1074073600 )
  {
    v8 = *(void **)(a1 + 776);
    if ( v8 )
      goto LABEL_13;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
    *(_QWORD *)(a1 + 776) = PoolWithTag;
  }
  else
  {
    v8 = *(void **)(a1 + 784);
    if ( v8 )
      goto LABEL_13;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
    *(_QWORD *)(a1 + 784) = PoolWithTag;
  }
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
LABEL_13:
  memset(v8, 0, 0x38uLL);
  v11 = a3[1];
  if ( v11 < 0x38u )
    v7 = v11;
  memmove(v8, a3, v7);
  return v6;
}
