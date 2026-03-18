/*
 * XREFs of HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x1C0024B54
 * Callers:
 *     HUBDSM_GettingAlternateDeviceDescriptor @ 0x1C001C150 (HUBDSM_GettingAlternateDeviceDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C0024610 (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetDeviceDescriptorUsingControlTransfer(__int64 a1)
{
  int Descriptor; // eax
  __int64 v3; // [rsp+28h] [rbp-20h]

  Descriptor = HUBDTX_GetDescriptor(a1, a1 + 1732, 18, 1, 0, 0);
  if ( Descriptor < 0 )
  {
    LODWORD(v3) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x28u,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
      v3);
    HUBSM_AddEvent(a1 + 504, 4004);
  }
}
