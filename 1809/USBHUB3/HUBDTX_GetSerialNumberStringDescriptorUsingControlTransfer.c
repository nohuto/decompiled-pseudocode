/*
 * XREFs of HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x1C002560C
 * Callers:
 *     HUBDSM_GettingSerialNumberStringDescriptorWhileRenuemrating @ 0x1C001C8E0 (HUBDSM_GettingSerialNumberStringDescriptorWhileRenuemrating.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C0024610 (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer(__int64 a1)
{
  char v1; // al
  int Descriptor; // edx
  __int64 v4; // [rsp+28h] [rbp-20h]

  v1 = *(_BYTE *)(a1 + 2004);
  Descriptor = -1073741637;
  if ( !v1 || (Descriptor = HUBDTX_GetDescriptor(a1, a1 + 1732, 255, 3, v1, 1033), Descriptor < 0) )
  {
    LODWORD(v4) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x41u,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
      v4);
    HUBSM_AddEvent(a1 + 504, 4004);
  }
}
