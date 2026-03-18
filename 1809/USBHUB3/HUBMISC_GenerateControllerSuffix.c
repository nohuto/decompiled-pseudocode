/*
 * XREFs of HUBMISC_GenerateControllerSuffix @ 0x1C002D808
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00150A0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBID_BuildClassCompatibleID @ 0x1C0019824 (HUBID_BuildClassCompatibleID.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C0010C04 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_H @ 0x1C0027BDC (WPP_RECORDER_SF_H.c)
 *     WPP_RECORDER_SF_HH @ 0x1C0027C88 (WPP_RECORDER_SF_HH.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 */

__int64 __fastcall HUBMISC_GenerateControllerSuffix(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  const void **v6; // rdi
  __int16 v7; // cx
  unsigned __int16 v8; // ax
  unsigned int v9; // edi
  __int64 v10; // rbp
  int v11; // r9d
  unsigned __int16 v12; // dx
  unsigned __int64 v13; // rcx
  NTSTATUS v14; // eax
  int v16; // [rsp+20h] [rbp-38h]

  *(_WORD *)a2 = 0;
  if ( *(_DWORD *)(*a1 + 168LL) == 3 && (v6 = *(const void ***)(*a1 + 176LL), a3 = *(unsigned __int16 *)v6, (_WORD)a3) )
  {
    v7 = *(_WORD *)(a2 + 2);
    v8 = v7 - 2;
    if ( (unsigned __int16)(v7 - 2) > 4u )
    {
      v10 = v8;
      v11 = v8 - 4;
      if ( (unsigned __int16)a3 >= v11 )
      {
        LOWORD(a3) = v7 - 6;
      }
      else
      {
        v12 = *(_WORD *)v6;
        do
        {
          v13 = v12;
          v12 += 2;
          *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * (v13 >> 1)) = 48;
        }
        while ( v12 < v11 );
      }
      memmove(*(void **)(a2 + 8), v6[1], (unsigned __int16)a3);
      v14 = RtlStringCbPrintfW(
              (NTSTRSAFE_PWSTR)(*(_QWORD *)(a2 + 8) + 2 * ((unsigned __int64)(v10 - 4) >> 1)),
              6uLL,
              L"%02X",
              *(unsigned __int16 *)v6);
      v9 = v14;
      if ( v14 >= 0 )
        *(_WORD *)a2 = *(_WORD *)(a2 + 2) - 2;
      else
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 1432LL),
          2u,
          5u,
          0x7Bu,
          (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
          v14);
    }
    else
    {
      WPP_RECORDER_SF_HH(*(_QWORD *)(a1[1] + 1432LL), a2, a3, a4, v16);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    WPP_RECORDER_SF_H(*(_QWORD *)(a1[1] + 1432LL), a2, a3, a4, v16);
    return (unsigned int)-1073741275;
  }
  return v9;
}
