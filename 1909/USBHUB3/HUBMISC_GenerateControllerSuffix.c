/*
 * XREFs of HUBMISC_GenerateControllerSuffix @ 0x1C00302C8
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0016580 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBID_BuildClassCompatibleID @ 0x1C001B0A4 (HUBID_BuildClassCompatibleID.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C0011E68 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_H @ 0x1C0029EFC (WPP_RECORDER_SF_H.c)
 *     WPP_RECORDER_SF_HH @ 0x1C0029FA8 (WPP_RECORDER_SF_HH.c)
 *     memmove @ 0x1C0041300 (memmove.c)
 */

__int64 __fastcall HUBMISC_GenerateControllerSuffix(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  const void **v7; // rdi
  int v8; // ecx
  NTSTATUS v9; // edi
  __int64 v10; // rbp
  int v11; // r9d
  unsigned __int16 v12; // dx
  unsigned __int64 v13; // rcx
  int v15; // [rsp+20h] [rbp-38h]

  *(_WORD *)a2 = 0;
  v6 = *a1;
  if ( *(_DWORD *)(v6 + 168) == 3 && (v7 = *(const void ***)(v6 + 176), a3 = *(unsigned __int16 *)v7, (_WORD)a3) )
  {
    v8 = *(unsigned __int16 *)(a2 + 2);
    if ( (unsigned __int16)(v8 - 2) > 4u )
    {
      v10 = (unsigned __int16)(v8 - 2);
      v11 = (unsigned __int16)(v8 - 2) - 4;
      if ( (unsigned __int16)a3 >= v11 )
      {
        LOWORD(a3) = v8 - 6;
      }
      else
      {
        v12 = *(_WORD *)v7;
        do
        {
          v13 = v12;
          v12 += 2;
          *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * (v13 >> 1)) = 48;
        }
        while ( v12 < v11 );
      }
      memmove(*(void **)(a2 + 8), v7[1], (unsigned __int16)a3);
      v9 = RtlStringCbPrintfW(
             (NTSTRSAFE_PWSTR)(*(_QWORD *)(a2 + 8) + 2 * ((unsigned __int64)(v10 - 4) >> 1)),
             6uLL,
             L"%02X",
             *(unsigned __int16 *)v7);
      if ( v9 >= 0 )
      {
        *(_WORD *)a2 = *(_WORD *)(a2 + 2) - 2;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 1432),
          2u,
          5u,
          0x7Cu,
          (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
          v9);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_HH(*(_QWORD *)(a1[1] + 1432), (unsigned int)(v8 - 2), a3, a4, v15);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_H(*(_QWORD *)(a1[1] + 1432), a2, a3, a4, v15);
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v9;
}
