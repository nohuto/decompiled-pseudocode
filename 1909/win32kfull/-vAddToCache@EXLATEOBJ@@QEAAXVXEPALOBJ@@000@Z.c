/*
 * XREFs of ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00D0344
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00B4130 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreDrawStream @ 0x1C00BA5C0 (GreDrawStream.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00D04D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void EXLATEOBJ::vAddToCache(__int64 a1, ...)
{
  __int64 v2; // rbx
  unsigned int v3; // r8d
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  va_list va; // [rsp+48h] [rbp+10h]
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  va_list va1; // [rsp+50h] [rbp+18h]
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF
  va_list va2; // [rsp+58h] [rbp+20h]
  va_list va3; // [rsp+60h] [rbp+28h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v5 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v7 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v9 = va_arg(va3, _QWORD);
  v2 = v5;
  v4[0] = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v3 = 0;
  while ( *(&xlateTable + 4 * ulTableIndex + 1) )
  {
    if ( !*((_DWORD *)&xlateTable + 8 * ulTableIndex) )
    {
      FreeThreadBufferWithTag(*(&xlateTable + 4 * ulTableIndex + 1));
      break;
    }
    ++v3;
    ulTableIndex = ((_BYTE)ulTableIndex + 1) & 7;
    if ( v3 >= 8 )
      goto LABEL_6;
  }
  PopThreadGuardedObject(*(_QWORD *)a1 - 32LL);
  *((_DWORD *)&xlateTable + 8 * ulTableIndex) = 1;
  *(&xlateTable + 4 * ulTableIndex + 1) = *(struct _XLATETABLE near **)a1;
  *((_DWORD *)&xlateTable + 8 * ulTableIndex + 4) = XEPALOBJ::ulTime((XEPALOBJ *)va);
  *((_DWORD *)&xlateTable + 8 * ulTableIndex + 5) = XEPALOBJ::ulTime((XEPALOBJ *)va1);
  *((_DWORD *)&xlateTable + 8 * ulTableIndex + 6) = XEPALOBJ::ulTime((XEPALOBJ *)va2);
  *((_DWORD *)&xlateTable + 8 * ulTableIndex + 7) = XEPALOBJ::ulTime((XEPALOBJ *)va3);
  *(_DWORD *)(*(_QWORD *)a1 + 36LL) = ulTableIndex;
  *(_DWORD *)(v2 + 56) = ulTableIndex;
  ulTableIndex = ((_BYTE)ulTableIndex + 1) & 7;
LABEL_6:
  SEMOBJ::vUnlock((SEMOBJ *)v4);
}
