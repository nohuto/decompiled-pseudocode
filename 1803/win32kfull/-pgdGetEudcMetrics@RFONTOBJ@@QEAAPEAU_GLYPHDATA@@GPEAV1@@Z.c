/*
 * XREFs of ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0277400
 * Callers:
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C000426C (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C0076F24 (GreGetGlyphOutlineInternal.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0086740 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00855A0 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0085928 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00859E4 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0085C44 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::pgdGetEudcMetrics(RFONTOBJ *this, struct RFONTOBJ *a2, struct RFONTOBJ *a3)
{
  unsigned __int16 v3; // bp
  struct _GLYPHDATA *result; // rax
  _DWORD *v6; // rcx
  unsigned int v7; // eax
  struct GPRUN *Run; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rsi
  __int64 v11; // rdi
  struct _GLYPHDATA **v12; // rdx

  v3 = (unsigned __int16)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 472LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v6 = *(_DWORD **)(*(_QWORD *)this + 472LL);
  if ( !*v6 )
    return RFONTOBJ::pgdDefault(this, a2);
  v7 = v3 - v6[4];
  if ( v7 < v6[5] )
  {
    v9 = v7;
    v10 = v6 + 6;
  }
  else
  {
    Run = RFONTOBJ::gprunFindRun(this, v3);
    v9 = (unsigned int)v3 - *(_DWORD *)Run;
    if ( (unsigned int)v9 >= *((_DWORD *)Run + 1) )
      return 0LL;
    v10 = (_QWORD *)((char *)Run + 8);
  }
  v11 = 8 * v9;
  v12 = (struct _GLYPHDATA **)(v11 + *v10);
  result = *v12;
  if ( *v12 )
    return result;
  if ( !(unsigned int)RFONTOBJ::bInsertMetrics(this, v12, v3) )
    return 0LL;
  return *(struct _GLYPHDATA **)(v11 + *v10);
}
