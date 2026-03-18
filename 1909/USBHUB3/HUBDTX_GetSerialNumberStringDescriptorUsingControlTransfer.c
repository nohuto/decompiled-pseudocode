/*
 * XREFs of HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x1C0027B10
 * Callers:
 *     HUBDSM_GettingSerialNumberStringDescriptorWhileRenuemrating @ 0x1C001E420 (HUBDSM_GettingSerialNumberStringDescriptorWhileRenuemrating.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C002699C (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer(__int64 a1)
{
  int Descriptor; // eax
  char v3; // cl
  __int64 v4; // [rsp+28h] [rbp-20h]

  Descriptor = -1073741637;
  v3 = *(_BYTE *)(a1 + 2004);
  if ( !v3 || (Descriptor = HUBDTX_GetDescriptor(a1, a1 + 1732, 255, 3, v3, 1033), Descriptor < 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v4) = Descriptor;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x42u,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        v4);
    }
    HUBSM_AddEvent(a1 + 504, 4004);
  }
}
