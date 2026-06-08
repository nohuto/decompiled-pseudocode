/*
 * XREFs of SetPerfStateIOHidden @ 0x1C0009210
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddrHidden @ 0x1C000237C (ReadGenAddrHidden.c)
 *     WriteGenAddrHidden @ 0x1C0002478 (WriteGenAddrHidden.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0003010 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall SetPerfStateIOHidden(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // ebx
  int GenAddrHidden; // eax
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v7 = 0;
  WriteGenAddrHidden(a1, (_BYTE *)a2, a3);
  if ( *(_QWORD *)(a2 + 16) )
  {
    if ( a4 )
    {
      GenAddrHidden = ReadGenAddrHidden(a1, a2 + 12);
      if ( GenAddrHidden != (_DWORD)a4 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = GenAddrHidden;
          v10 = a4;
          WPP_RECORDER_SF_DD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x18u,
            (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
            v10,
            v11);
        }
        return (unsigned int)-1073741823;
      }
    }
  }
  return v7;
}
