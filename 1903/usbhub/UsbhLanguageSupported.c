/*
 * XREFs of UsbhLanguageSupported @ 0x1C001DC40
 * Callers:
 *     UsbhGetProductIdString @ 0x1C001D974 (UsbhGetProductIdString.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
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
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                20,
                (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
                a3);
          }
          return 1;
        }
        ++v5;
      }
    }
    goto LABEL_13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        21,
        (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids);
LABEL_13:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        22,
        (__int64)&WPP_80231ebc825b3764d7baacef2b9744df_Traceguids,
        a3);
  }
  return 0;
}
