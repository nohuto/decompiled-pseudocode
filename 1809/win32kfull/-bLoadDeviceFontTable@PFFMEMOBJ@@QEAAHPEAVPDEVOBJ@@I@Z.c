/*
 * XREFs of ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C0162480
 * Callers:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C015F1C4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0080984 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00CA2B8 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C00CABD8 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C00CAD38 (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C012D8A0 (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C029D42C (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C02A4188 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bLoadDeviceFontTable(PFFMEMOBJ *this, struct PDEVOBJ *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v7; // edi
  __int64 result; // rax
  unsigned int v9; // r12d
  struct _IFIMETRICS *v10; // r14
  struct _FD_GLYPHSET *v11; // rdi
  unsigned __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  struct _FD_GLYPHSET *v13[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+A8h] [rbp+48h] BYREF
  int v15; // [rsp+B0h] [rbp+50h]
  struct _FD_GLYPHSET *v16; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0;
  v7 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x8000;
  v12 = 0LL;
  v15 = v7;
  v14 = 0LL;
  if ( a3 )
  {
    result = PFFMEMOBJ::bAllocPFEData(this, a3);
    if ( !(_DWORD)result )
      return result;
  }
  v9 = 1;
  if ( !a3 )
  {
LABEL_16:
    if ( a3 )
    {
      FHMEMOBJ::FHMEMOBJ((__int64)v13, (_QWORD *)(*(_QWORD *)this + 104LL), 0, a3);
      FHMEMOBJ::FHMEMOBJ((__int64)v13, (_QWORD *)(*(_QWORD *)this + 112LL), 1, a3);
      FHMEMOBJ::FHMEMOBJ((__int64)v13, (_QWORD *)(*(_QWORD *)this + 120LL), 2, a3);
    }
    return 1;
  }
  while ( 1 )
  {
    v10 = PDEVOBJ::QueryFont(a2, *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL), 0LL, v9, &v12);
    if ( !v10 )
    {
      EngSetLastError(0x3EBu);
      return v3;
    }
    if ( v7 )
    {
      v11 = 0LL;
      v14 = 0LL;
      goto LABEL_14;
    }
    v16 = (struct _FD_GLYPHSET *)PFFOBJ::QueryFontTree(
                                   this,
                                   *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL),
                                   0LL,
                                   v9,
                                   3u,
                                   &v14);
    v11 = v16;
    if ( !v16 )
      break;
    if ( v10->jWinCharSet == 2 )
    {
      v13[0] = 0LL;
      if ( bExtendGlyphSet(&v16, v13) )
      {
        if ( *(_QWORD *)(*(_QWORD *)a2 + 3024LL) )
          PDEVOBJ::Free(a2, v16, v14);
        v11 = v13[0];
      }
      else
      {
        v11 = v16;
      }
    }
LABEL_14:
    if ( !(unsigned int)PFFMEMOBJ::bAddEntry(this, v9, v11, v14, v10, v12, 0LL, 0LL) )
      goto LABEL_22;
    v7 = v15;
    if ( ++v9 > a3 )
      goto LABEL_16;
  }
  EngSetLastError(0x3EBu);
LABEL_22:
  if ( !v10 || v10->jWinCharSet != 2 )
    goto LABEL_36;
  if ( !v11 )
    goto LABEL_30;
  if ( (v11->flAccel & 0x10) != 0 )
  {
    Win32FreePool(v11);
  }
  else
  {
LABEL_36:
    if ( v11 && *(_QWORD *)(*(_QWORD *)a2 + 3024LL) )
      PDEVOBJ::Free(a2, v11, v14);
  }
LABEL_30:
  if ( v10 && *(_QWORD *)(*(_QWORD *)a2 + 3024LL) )
    PDEVOBJ::Free(a2, v10, v12);
  return v3;
}
