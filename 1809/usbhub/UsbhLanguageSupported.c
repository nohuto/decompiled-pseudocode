/*
 * XREFs of UsbhLanguageSupported @ 0x1C001CFB0
 * Callers:
 *     UsbhGetProductIdString @ 0x1C001D030 (UsbhGetProductIdString.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhLanguageSupported(__int64 a1, __int64 a2, __int16 a3)
{
  _DWORD *v4; // rax
  _WORD *v5; // rcx

  v4 = PdoExt(a2);
  v5 = (_WORD *)*((_QWORD *)v4 + 273);
  if ( v5 )
  {
    if ( v4[545] )
    {
      while ( *v5 )
      {
        if ( *v5 == a3 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              20,
              (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
              a3);
          return 1;
        }
        ++v5;
      }
    }
  }
  else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
      a3);
  return 0;
}
