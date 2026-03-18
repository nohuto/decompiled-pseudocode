/*
 * XREFs of HUBFDO_GetPortStatusForDebugging @ 0x1C000B96C
 * Callers:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000BBB8 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C002BD5C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBFDO_GetPortStatusForDebugging(_QWORD *a1, int a2)
{
  __int64 i; // r8
  __int64 v4; // r8
  __int64 result; // rax
  char v6; // al
  int v7; // ecx
  unsigned __int16 v8; // dx
  __int64 v9; // [rsp+28h] [rbp-30h]

  for ( i = a1[295]; ; i = *(_QWORD *)(v4 + 248) )
  {
    v4 = i - 248;
    result = v4 - 2112;
    if ( a1 == (_QWORD *)(v4 - 2112) )
      break;
    if ( *(unsigned __int16 *)(v4 + 200) == a2 )
    {
      v6 = *(_BYTE *)(v4 + 168) & 0x1C;
      *(_WORD *)(v4 + 172) = a2;
      *(_BYTE *)(v4 + 169) = 0;
      *(_BYTE *)(v4 + 168) = v6 | 0xA3;
      v7 = *(_DWORD *)(v4 + 204) & 0x100;
      v8 = v7 != 0 ? 8 : 4;
      *(_WORD *)(v4 + 170) = v7 != 0 ? 2 : 0;
      *(_WORD *)(v4 + 174) = v8;
      result = HUBMISC_ControlTransfer(
                 (_DWORD)a1,
                 a1[31],
                 v4,
                 (int)v4 + 16,
                 (__int64)HUBFDO_GetPortStatusForDebuggingComplete,
                 v4 + 184,
                 v8,
                 0,
                 0);
      if ( (int)result < 0 )
      {
        LODWORD(v9) = result;
        return WPP_RECORDER_SF_d(a1[315], 2u, 3u, 0x21u, (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids, v9);
      }
      return result;
    }
  }
  return result;
}
