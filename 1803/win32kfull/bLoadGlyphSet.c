/*
 * XREFs of bLoadGlyphSet @ 0x1C0219808
 * Callers:
 *     bLoadTTF @ 0x1C021995C (bLoadTTF.c)
 *     bReloadGlyphSet @ 0x1C021A0A4 (bReloadGlyphSet.c)
 * Callees:
 *     cjComputeGLYPHSET_HIGH_BYTE @ 0x1C021AEC4 (cjComputeGLYPHSET_HIGH_BYTE.c)
 *     cjComputeGLYPHSET_MSFT_GENERAL @ 0x1C021B110 (cjComputeGLYPHSET_MSFT_GENERAL.c)
 *     cjComputeGLYPHSET_MSFT_UNICODE @ 0x1C021B374 (cjComputeGLYPHSET_MSFT_UNICODE.c)
 *     cjComputeGLYPHSET_OLDBIDI @ 0x1C021B628 (cjComputeGLYPHSET_OLDBIDI.c)
 *     cjComputeGLYPHSET_TEMPLATE @ 0x1C021B87C (cjComputeGLYPHSET_TEMPLATE.c)
 */

__int64 __fastcall bLoadGlyphSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID *a5)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG v11; // eax
  PVOID v12; // rax

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 64) + *(unsigned int *)(a1 + 160);
  *a5 = 0LL;
  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    v10 = 1LL;
    goto LABEL_18;
  }
  if ( *(_DWORD *)(a1 + 316) == 2 )
  {
    v10 = 2LL;
LABEL_18:
    v9 = 0LL;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(a1 + 316) != 3 )
  {
    if ( *(_DWORD *)(a1 + 316) != 4 )
    {
      switch ( *(_DWORD *)(a1 + 316) )
      {
        case 5:
          cjComputeGLYPHSET_HIGH_BYTE(a2, a5, a4);
          goto LABEL_20;
        case 6:
          cjComputeGLYPHSET_MSFT_GENERAL(a2, (unsigned __int16)__ROR2__(*(_WORD *)(v7 + 4), 8), a5);
          goto LABEL_20;
        case 7:
          cjComputeGLYPHSET_OLDBIDI(a3, a5, *(unsigned int *)(a1 + 320));
          goto LABEL_20;
      }
LABEL_15:
      *a5 = 0LL;
      goto LABEL_20;
    }
    v9 = *(unsigned int *)(a1 + 320);
    v10 = 4LL;
LABEL_19:
    cjComputeGLYPHSET_TEMPLATE(a3, a5, v9, v10);
    goto LABEL_20;
  }
  v11 = cjComputeGLYPHSET_MSFT_UNICODE(a2, 0LL, 0LL);
  v12 = EngAllocMem(0, v11, 0x64667454u);
  *a5 = v12;
  if ( v12 && !(unsigned int)cjComputeGLYPHSET_MSFT_UNICODE(a2, a3, v12) )
  {
    EngFreeMem(*a5);
    goto LABEL_15;
  }
LABEL_20:
  LOBYTE(v6) = *a5 != 0LL;
  return v6;
}
