/*
 * XREFs of ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01E87DC
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01E7130 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     xxxInitializeMoveSizeData @ 0x1C01EB504 (xxxInitializeMoveSizeData.c)
 */

__int64 __fastcall xxxInitializeMoveSizeDataProgrammaticArrangement(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        struct _MOVESIZEDATA *a5,
        int *a6)
{
  unsigned int v10; // eax
  __int128 v11; // xmm0
  int v12; // r14d
  unsigned __int16 v13; // cx
  unsigned int DpiForSystem; // eax
  __int64 v15; // r8
  __int64 result; // rax
  int v17; // ecx

  v10 = *((_DWORD *)a5 + 49) & 0xFFFF7FFF;
  *((_QWORD *)a5 + 2) = a1;
  *((_DWORD *)a5 + 49) = v10 | 0x30000;
  if ( a3 == 5 )
    v11 = *(_OWORD *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
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
  if ( a2 == 3 )
  {
    v13 = WORD2(v11) + 2;
  }
  else if ( (unsigned int)(a2 - 4) <= 3 )
  {
    if ( !a3 || a3 == 3 )
    {
      DpiForSystem = GetDpiForSystem();
      v13 = WORD2(v11) + GetDpiDependentMetric(2LL, DpiForSystem, v15) - 1;
    }
    else
    {
      v13 = WORD2(v11) + 2;
    }
  }
  *a6 = (unsigned __int16)(v11 + (DWORD2(v11) - (int)v11) / 2) | (v13 << 16);
  result = xxxInitializeMoveSizeData((struct tagWND *)a1, a5, v12);
  if ( a2 == 3 )
  {
    *((_DWORD *)a5 + 49) |= 0x400u;
  }
  else if ( a2 > 3 )
  {
    if ( a2 <= 5 )
    {
      result = (unsigned __int8)(*((_BYTE *)a5 + 196) ^ ((*((_DWORD *)a5 + 49) | 0x800u) >> 5)) & 0x80;
      v17 = result ^ (*((_DWORD *)a5 + 49) | 0x800);
      *((_DWORD *)a5 + 49) = v17;
      if ( (v17 & 0x200000) != 0 && a3 == 4 )
        *((_DWORD *)a5 + 60) = 4;
      if ( (v12 & 4) != 0 )
        *((_QWORD *)a5 + 21) = 0LL;
    }
    else if ( a2 <= 7 )
    {
      result = (*((_DWORD *)a5 + 49) | 0xC00) ^ (*((_BYTE *)a5 + 196) ^ (unsigned __int8)((*((_DWORD *)a5 + 49) | 0xC00u) >> 5)) & 0x80u;
      *((_DWORD *)a5 + 49) = result;
    }
  }
  return result;
}
