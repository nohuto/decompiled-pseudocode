/*
 * XREFs of SetPerfStateIO @ 0x1C0002E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00017AC (WPP_RECORDER_SF_DD.c)
 *     ReadGenAddr @ 0x1C0003898 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00038E8 (WriteGenAddr.c)
 */

__int64 __fastcall SetPerfStateIO(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  int GenAddr; // eax

  v3 = 0;
  if ( a1 )
    WriteGenAddr(a1, a2);
  if ( *(_QWORD *)(a1 + 16) && a3 )
  {
    if ( a1 == -12 )
      GenAddr = 0;
    else
      GenAddr = ReadGenAddr();
    if ( GenAddr != (_DWORD)a3 )
    {
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x17u,
        (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
        a3,
        GenAddr);
      return (unsigned int)-1073741823;
    }
  }
  return v3;
}
