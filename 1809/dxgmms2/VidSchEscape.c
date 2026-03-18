/*
 * XREFs of VidSchEscape @ 0x1C00C7FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchEscape(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // r8d
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax

  v3 = -1073741811;
  switch ( *a2 )
  {
    case 0:
      v4 = a2[1] != 0;
      v5 = *(_DWORD *)(a1 + 1936) & 0xFFFFFFFE;
      goto LABEL_17;
    case 2:
      v6 = a2[1];
      switch ( v6 )
      {
        case 4:
          _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFEF);
          return 0;
        case 5:
          _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFF8);
          return 0;
        case 8:
          v7 = a2[2];
          if ( v7 < *(_DWORD *)(a1 + 68) )
          {
            RtlSetBitEx(a1 + 568, v7);
            return 0;
          }
          break;
      }
      return v3;
    case 4:
      v4 = a2[1] != 0 ? 0x200 : 0;
      v5 = *(_DWORD *)(a1 + 1936) & 0xFFFFFDFF;
LABEL_17:
      *(_DWORD *)(a1 + 1936) = v5 | v4;
      return 0;
    case 5:
      g_TdrConfig[6] = a2[1];
      g_TdrConfig[7] = a2[2];
      return 0;
    case 7:
      *(_DWORD *)(a1 + 216) = a2[1];
      return 0;
  }
  return v3;
}
