/*
 * XREFs of SetPerfStateIO @ 0x1C0009160
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00021B8 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0002208 (WriteGenAddr.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0003010 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall SetPerfStateIO(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v6; // eax

  v3 = 0;
  if ( a1 )
    WriteGenAddr((_BYTE *)a1, a2);
  if ( *(_QWORD *)(a1 + 16) && a3 )
  {
    v6 = a1 == -12 ? 0 : ReadGenAddr(a1 + 12);
    if ( v6 != (_DWORD)a3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x17u,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
          a3,
          v6);
      return (unsigned int)-1073741823;
    }
  }
  return v3;
}
