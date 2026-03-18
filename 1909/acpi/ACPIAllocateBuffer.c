/*
 * XREFs of ACPIAllocateBuffer @ 0x1C008FE90
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C008FB24 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0097DE4 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009F364 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00A071C (ACPIBusIrpQueryInstanceId.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ACPIAllocateBuffer(SIZE_T *a1, __int64 a2, SIZE_T a3)
{
  __int64 v3; // r11
  SIZE_T v4; // r9
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = *(_QWORD *)(a2 + 8);
  v4 = a3;
  *a1 = a3;
  v5 = -1LL;
  if ( (v3 & 0x200000000000LL) != 0 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(*(_QWORD *)(a2 + 560) + v6) );
    v4 += 10 * v6;
    *a1 = v4;
  }
  if ( (v3 & 0x400000000000LL) != 0 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_BYTE *)(*(_QWORD *)(a2 + 568) + v7) );
    v4 += 10 * v7;
    *a1 = v4;
  }
  if ( (*(_BYTE *)(a2 + 952) & 0x10) != 0 )
  {
    do
      ++v5;
    while ( *(_BYTE *)(*(_QWORD *)(a2 + 576) + v5) );
    v4 += 10 * v5;
    *a1 = v4;
  }
  return ExAllocatePoolWithTag(PagedPool, v4, 0x42706341u);
}
