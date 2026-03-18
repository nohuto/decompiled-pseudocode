/*
 * XREFs of ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00E503C
 * Callers:
 *     GreDrawStream @ 0x1C0047970 (GreDrawStream.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00E51A4 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void EXLATEOBJ::vAddToCache(__int64 a1, ...)
{
  __int64 v2; // rbx
  unsigned int v3; // r9d
  unsigned int v4; // eax
  unsigned int *v5; // r8
  unsigned int v6; // eax
  unsigned int *v7; // r8
  unsigned int v8; // eax
  unsigned int *v9; // r8
  unsigned int v10; // eax
  int *v11; // r8
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  va_list va; // [rsp+48h] [rbp+10h]
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  va_list va1; // [rsp+50h] [rbp+18h]
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF
  va_list va2; // [rsp+58h] [rbp+20h]
  va_list va3; // [rsp+60h] [rbp+28h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v2 = v13;
  v12[0] = ghsemPalette;
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
  v4 = XEPALOBJ::ulTime((XEPALOBJ *)va);
  *((_DWORD *)&xlateTable + 8 * *v5 + 4) = v4;
  v6 = XEPALOBJ::ulTime((XEPALOBJ *)va1);
  *((_DWORD *)&xlateTable + 8 * *v7 + 5) = v6;
  v8 = XEPALOBJ::ulTime((XEPALOBJ *)va2);
  *((_DWORD *)&xlateTable + 8 * *v9 + 6) = v8;
  v10 = XEPALOBJ::ulTime((XEPALOBJ *)va3);
  *((_DWORD *)&xlateTable + 8 * (unsigned int)*v11 + 7) = v10;
  *(_DWORD *)(*(_QWORD *)a1 + 36LL) = *v11;
  *(_DWORD *)(v2 + 56) = *v11;
  *v11 = ((unsigned __int8)*v11 + 1) & 7;
LABEL_6:
  SEMOBJ::vUnlock((SEMOBJ *)v12);
}
