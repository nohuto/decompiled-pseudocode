/*
 * XREFs of ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C028A970
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00C467C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00C5440 (GreGetGlyphOutlineInternal.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C00C5D64 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C007FC6C (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C0083968 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C00C51A0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C028A8D8 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::pgdGetEudcMetrics(RFONTOBJ *this, struct RFONTOBJ *a2, struct RFONTOBJ *a3)
{
  unsigned __int16 v3; // bp
  _DWORD *v5; // rcx
  struct _GLYPHDATA *result; // rax
  unsigned int v7; // eax
  struct GPRUN *Run; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rsi
  __int64 v11; // rdi
  struct _GLYPHDATA **v12; // rdx

  v3 = (unsigned __int16)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v5 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( !*v5 )
    return RFONTOBJ::pgdDefault(this, a2);
  v7 = v3 - v5[4];
  if ( v7 >= v5[5] )
  {
    Run = RFONTOBJ::gprunFindRun(this, v3);
    v9 = (unsigned int)v3 - *(_DWORD *)Run;
    if ( (unsigned int)v9 < *((_DWORD *)Run + 1) )
    {
      v10 = (_QWORD *)((char *)Run + 8);
      goto LABEL_9;
    }
    return 0LL;
  }
  v9 = v7;
  v10 = v5 + 6;
LABEL_9:
  v11 = 8 * v9;
  v12 = (struct _GLYPHDATA **)(v11 + *v10);
  result = *v12;
  if ( *v12 )
    return result;
  if ( !(unsigned int)RFONTOBJ::bInsertMetrics(this, v12, v3) )
    return 0LL;
  return *(struct _GLYPHDATA **)(v11 + *v10);
}
