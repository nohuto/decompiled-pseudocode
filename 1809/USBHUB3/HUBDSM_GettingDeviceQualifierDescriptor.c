/*
 * XREFs of HUBDSM_GettingDeviceQualifierDescriptor @ 0x1C001DB10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C0024610 (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingDeviceQualifierDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  int Descriptor; // eax
  __int64 v4; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 960);
  Descriptor = HUBDTX_GetDescriptor(v1, (int)v1 + 2042, 10, 6, 0, 0);
  if ( Descriptor < 0 )
  {
    LODWORD(v4) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x2Au,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
      v4);
    HUBSM_AddEvent(v1 + 504, 4004);
  }
  return 1000LL;
}
