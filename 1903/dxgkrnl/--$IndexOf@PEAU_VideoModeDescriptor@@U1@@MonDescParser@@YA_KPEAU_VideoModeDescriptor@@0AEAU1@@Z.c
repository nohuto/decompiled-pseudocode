/*
 * XREFs of ??$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z @ 0x1C0020DE4
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C0020A10 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx

  if ( a1 == a2 )
    return -1LL;
  v3 = a1 + 8;
  while ( *(_DWORD *)(v3 - 8) != *(_DWORD *)a3
       || *(_DWORD *)(v3 - 4) != *(_DWORD *)(a3 + 4)
       || *(_DWORD *)v3 != *(_DWORD *)(a3 + 8)
       || *(_DWORD *)(v3 + 4) != *(_DWORD *)(a3 + 12)
       || *(_DWORD *)(v3 + 8) != *(_DWORD *)(a3 + 16)
       || *(_WORD *)(v3 + 12) != *(_WORD *)(a3 + 20)
       || *(_WORD *)(v3 + 14) != *(_WORD *)(a3 + 22)
       || *(_WORD *)(v3 + 16) != *(_WORD *)(a3 + 24)
       || *(_WORD *)(v3 + 18) != *(_WORD *)(a3 + 26)
       || *(_WORD *)(v3 + 20) != *(_WORD *)(a3 + 28)
       || *(_WORD *)(v3 + 22) != *(_WORD *)(a3 + 30)
       || *(_WORD *)(v3 + 24) != *(_WORD *)(a3 + 32)
       || *(_WORD *)(v3 + 26) != *(_WORD *)(a3 + 34)
       || *(_WORD *)(v3 + 28) != *(_WORD *)(a3 + 36)
       || *(_WORD *)(v3 + 30) != *(_WORD *)(a3 + 38)
       || *(_WORD *)(v3 + 32) != *(_WORD *)(a3 + 40)
       || *(_WORD *)(v3 + 34) != *(_WORD *)(a3 + 42)
       || *(_BYTE *)(v3 + 36) != *(_BYTE *)(a3 + 44)
       || *(_BYTE *)(v3 + 37) != *(_BYTE *)(a3 + 45)
       || *(_BYTE *)(v3 + 38) != *(_BYTE *)(a3 + 46)
       || *(_BYTE *)(v3 + 39) != *(_BYTE *)(a3 + 47)
       || *(_BYTE *)(v3 + 40) != *(_BYTE *)(a3 + 48)
       || *(_BYTE *)(v3 + 41) != *(_BYTE *)(a3 + 49)
       || *(_BYTE *)(v3 + 42) != *(_BYTE *)(a3 + 50)
       || *(_BYTE *)(v3 + 43) != *(_BYTE *)(a3 + 51)
       || *(_BYTE *)(v3 + 44) != *(_BYTE *)(a3 + 52) )
  {
    v3 += 56LL;
    if ( v3 - 8 == a2 )
      return -1LL;
  }
  return 0LL;
}
