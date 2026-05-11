/*
 * XREFs of USBType1RenderClosePin @ 0x1C002EA50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 *     USBHwFreePipes @ 0x1C0029F9C (USBHwFreePipes.c)
 *     USBHwFreeOffloadInformation @ 0x1C0029FD4 (USBHwFreeOffloadInformation.c)
 */

__int64 __fastcall USBType1RenderClosePin(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    8u,
    0x1Au,
    (__int64)&WPP_3fddc3560b1a3736408b317f911f507a_Traceguids,
    a1);
  if ( *(_BYTE *)(v3 + 96) )
    IoFreeWorkItem(*(PIO_WORKITEM *)(v3 + 968));
  ExDeleteNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v3 + 128));
  USBHwFreePipes(a1);
  USBHwFreeOffloadInformation(a1);
  return 0LL;
}
