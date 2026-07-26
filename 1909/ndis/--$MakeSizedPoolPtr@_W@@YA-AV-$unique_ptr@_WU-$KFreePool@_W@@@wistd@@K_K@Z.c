/*
 * XREFs of ??$MakeSizedPoolPtr@_W@@YA?AV?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@K_K@Z @ 0x1C010ABA8
 * Callers:
 *     ndisMiniportQueryDevicePropertyData @ 0x1C010AA50 (ndisMiniportQueryDevicePropertyData.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 */

_QWORD *__fastcall MakeSizedPoolPtr<wchar_t>(_QWORD *a1, __int64 a2, SIZE_T a3)
{
  _WORD *PoolWithTag; // rax
  _WORD *v6; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x6E61444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a3);
    *v6 = 0;
    *a1 = v6;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
