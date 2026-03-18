/*
 * XREFs of ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01C336C
 * Callers:
 *     xxxArrangeWindow @ 0x1C01C5D64 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     xxxInitializeMoveSizeData @ 0x1C01C7264 (xxxInitializeMoveSizeData.c)
 */

__int64 __fastcall xxxInitializeMoveSizeDataProgrammaticArrangement(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned int v10; // eax
  __int128 v11; // xmm0
  int v12; // r14d
  unsigned __int16 v13; // cx
  __int64 v14; // r8
  unsigned int DpiForSystem; // eax
  __int64 v16; // r9
  __int64 result; // rax
  int v18; // ecx

  v10 = *(_DWORD *)(a5 + 196) & 0xFFFF7FFF;
  *(_QWORD *)(a5 + 16) = a1;
  *(_DWORD *)(a5 + 196) = v10 | 0x30000;
  if ( a3 == 5 )
    v11 = *(_OWORD *)RealGetProp(*(_QWORD *)(a1 + 120), (unsigned __int16)atomCheckpointProp, 1LL);
  else
    v11 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
  v12 = 0;
  if ( a4 )
  {
    if ( a4 == 1 )
      v12 = 6;
  }
  else
  {
    v12 = 18;
  }
  v13 = 0;
  v14 = 0LL;
  if ( a2 == 3 )
  {
    v14 = 3LL;
    v13 = WORD2(v11) + 2;
  }
  else if ( (unsigned int)(a2 - 4) <= 3 )
  {
    if ( !a3 || a3 == 3 )
    {
      DpiForSystem = GetDpiForSystem();
      v13 = WORD2(v11) + GetDpiDependentMetric(2LL, DpiForSystem) - 1;
    }
    else
    {
      v13 = WORD2(v11) + 2;
    }
    v14 = 9LL;
  }
  v16 = (unsigned __int16)(v11 + (DWORD2(v11) - (int)v11) / 2) | (v13 << 16);
  *a6 = v16;
  result = xxxInitializeMoveSizeData(a1, a5, v14, v16, v12);
  if ( a2 == 3 )
  {
    *(_DWORD *)(a5 + 196) |= 0x400u;
  }
  else if ( a2 > 3 )
  {
    if ( a2 <= 5 )
    {
      result = (unsigned __int8)(*(_BYTE *)(a5 + 196) ^ ((*(_DWORD *)(a5 + 196) | 0x800u) >> 5)) & 0x80;
      v18 = result ^ (*(_DWORD *)(a5 + 196) | 0x800);
      *(_DWORD *)(a5 + 196) = v18;
      if ( (v18 & 0x200000) != 0 && a3 == 4 )
        *(_DWORD *)(a5 + 240) = 4;
      if ( (v12 & 4) != 0 )
        *(_QWORD *)(a5 + 168) = 0LL;
    }
    else if ( a2 <= 7 )
    {
      result = (*(_DWORD *)(a5 + 196) | 0xC00) ^ (*(_BYTE *)(a5 + 196) ^ (unsigned __int8)((*(_DWORD *)(a5 + 196) | 0xC00u) >> 5)) & 0x80u;
      *(_DWORD *)(a5 + 196) = result;
    }
  }
  return result;
}
