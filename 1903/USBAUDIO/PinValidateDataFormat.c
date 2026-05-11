/*
 * XREFs of PinValidateDataFormat @ 0x1C0021A94
 * Callers:
 *     ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x1C0009B10 (-IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRI.c)
 *     PinCreate @ 0x1C0021E00 (PinCreate.c)
 *     PinSetDataFormat @ 0x1C0022360 (PinSetDataFormat.c)
 *     PinMIDIDataFormatIntersection @ 0x1C0022680 (PinMIDIDataFormatIntersection.c)
 * Callees:
 *     IsSampleRateInRange @ 0x1C002196C (IsSampleRateInRange.c)
 *     PinMatchChannelConfigToFormat @ 0x1C00219C4 (PinMatchChannelConfigToFormat.c)
 */

__int64 __fastcall PinValidateDataFormat(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v5; // r8
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned int v10; // esi
  unsigned int v11; // ebp
  __int64 v12; // r10

  v3 = *(_DWORD *)a3;
  v5 = *(_QWORD *)(a3 + 48);
  v8 = -1073741811;
  if ( v5 == *(_QWORD *)&KSDATAFORMAT_SPECIFIER_WAVEFORMATEX.Data1
    && (v9 = *(_QWORD *)(a3 + 56), v9 == *(_QWORD *)KSDATAFORMAT_SPECIFIER_WAVEFORMATEX.Data4) )
  {
    if ( v3 < 0x52 )
      return v8;
    if ( *(_WORD *)(a3 + 64) == 0xFFFE )
    {
      v8 = v3 < 0x68 ? 0xC000000D : 0;
      goto LABEL_10;
    }
  }
  else
  {
    if ( v5 != *(_QWORD *)&KSDATAFORMAT_SPECIFIER_NONE.Data1 )
      return v8;
    v9 = *(_QWORD *)(a3 + 56);
    if ( v9 != *(_QWORD *)KSDATAFORMAT_SPECIFIER_NONE.Data4 || v3 != 64 )
      return v8;
  }
  v8 = 0;
LABEL_10:
  if ( (v8 & 0x80000000) == 0 )
  {
    if ( a2 )
    {
      v8 = -1073741198;
      if ( *(_QWORD *)(a2 + 16) == *(_QWORD *)(a3 + 16)
        && *(_QWORD *)(a2 + 24) == *(_QWORD *)(a3 + 24)
        && *(_QWORD *)(a2 + 32) == *(_QWORD *)(a3 + 32)
        && *(_QWORD *)(a2 + 40) == *(_QWORD *)(a3 + 40)
        && *(_QWORD *)(a2 + 48) == v5
        && *(_QWORD *)(a2 + 56) == *(_QWORD *)(a3 + 56) )
      {
        if ( v5 != *(_QWORD *)&KSDATAFORMAT_SPECIFIER_WAVEFORMATEX.Data1
          || v9 != *(_QWORD *)KSDATAFORMAT_SPECIFIER_WAVEFORMATEX.Data4 )
        {
          return 0;
        }
        v10 = *(unsigned __int16 *)(a3 + 66);
        if ( *(_DWORD *)(a2 + 64) == v10 )
        {
          v11 = *(unsigned __int16 *)(a3 + 78);
          if ( *(_DWORD *)(a2 + 72) == v11 && IsSampleRateInRange(a2, *(_DWORD *)(a3 + 68)) )
          {
            if ( *(_WORD *)(a3 + 64) == 0xFFFE )
            {
              if ( *(unsigned __int16 *)(a3 + 82) == *(_DWORD *)(v12 + 104)
                && *(_DWORD *)(a3 + 84) == (unsigned int)PinMatchChannelConfigToFormat(v10, *(_DWORD *)(a1 + 144)) )
              {
                return 0;
              }
            }
            else if ( v10 <= 2 && v11 <= 0x10 )
            {
              return 0;
            }
          }
        }
      }
    }
  }
  return v8;
}
