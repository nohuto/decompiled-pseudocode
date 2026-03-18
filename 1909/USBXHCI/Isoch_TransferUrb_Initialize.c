/*
 * XREFs of Isoch_TransferUrb_Initialize @ 0x1C0031E98
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C002FE68 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C000E6C0 (Controller_GetFrameNumber.c)
 *     WPP_RECORDER_SF_DDqDDDD @ 0x1C0033180 (WPP_RECORDER_SF_DDqDDDD.c)
 */

__int64 __fastcall Isoch_TransferUrb_Initialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  unsigned __int16 v5; // ax
  _DWORD *v6; // r14
  unsigned int FrameNumber; // edx
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  int v10; // r8d
  int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rax
  int v14; // r9d
  int v15; // edx

  v2 = *(_QWORD *)(a2 + 48);
  v3 = 0;
  v5 = *(_WORD *)(v2 + 2);
  if ( v5 < 0x39u || (v6 = (_DWORD *)(v2 + 52), v5 > 0x3Au) )
    v6 = (_DWORD *)(v2 + 36);
  if ( (*(_DWORD *)(v2 + 32) & 4) != 0 )
  {
    FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 1, 0LL, 0LL);
    if ( *(_BYTE *)(a1 + 334) )
      goto LABEL_10;
    v8 = *(_DWORD *)(a1 + 360);
    v9 = 1024;
    *(_DWORD *)(v2 + 128) = v8;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL) - 2) > 1 )
      v9 = 255;
    if ( FrameNumber > v8 && FrameNumber - v8 > v9 )
    {
LABEL_10:
      *(_BYTE *)(a1 + 333) = 1;
      *(_DWORD *)(v2 + 128) = FrameNumber + 5;
      *(_DWORD *)(a1 + 360) = FrameNumber + 5;
    }
    v10 = *(_DWORD *)(a1 + 360);
  }
  else
  {
    v10 = *(_DWORD *)(v2 + 128);
    *(_DWORD *)(a1 + 360) = v10;
  }
  v11 = v10 + (unsigned int)(*(_DWORD *)(a1 + 356) + *(_DWORD *)(v2 + 132) - 1) / *(_DWORD *)(a1 + 356);
  v12 = 0;
  *(_DWORD *)(a1 + 360) = v11;
  *v6 = 0;
  for ( *(_DWORD *)(v2 + 136) = 0; v12 < *(_DWORD *)(v2 + 132); *(_DWORD *)(v2 + 12 * v13 + 148) = -1 )
    v13 = v12++;
  v14 = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 2, 0LL, 0LL);
  v15 = *(_DWORD *)(v2 + 128) - v14;
  if ( v15 <= 0 )
    v15 = v14 - *(_DWORD *)(v2 + 128);
  if ( v15 <= 1024 )
    *(_BYTE *)(a1 + 334) = 0;
  else
    v3 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v14);
  return v3;
}
