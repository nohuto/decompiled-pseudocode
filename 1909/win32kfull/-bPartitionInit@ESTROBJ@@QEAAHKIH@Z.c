/*
 * XREFs of ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C0115244
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C0090FA8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C00FA5E4 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall ESTROBJ::bPartitionInit(ESTROBJ *this, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rdi
  size_t v7; // r8
  char *v8; // rcx
  int v9; // eax
  __int64 result; // rax

  *((_DWORD *)this + 1) &= 0xFFFFFFCF;
  v6 = a3;
  if ( (*((_DWORD *)this + 58) & 0x1000) == 0 )
  {
    v7 = 4LL * a2;
    v8 = (char *)(*((_QWORD *)this + 8) + 24LL * a2);
    *((_QWORD *)this + 26) = v8;
    *((_QWORD *)this + 25) = &v8[v7];
    memset(v8, 0, v7);
    *((_QWORD *)this + 33) = 0LL;
    *((_DWORD *)this + 63) = 0;
    *((_DWORD *)this + 64) = 0;
    *((_DWORD *)this + 62) = 0;
    *((_DWORD *)this + 58) |= 0x1000u;
  }
  if ( !a4 )
    return 1LL;
  if ( (unsigned int)v6 < 0xA )
  {
    *((_QWORD *)this + 33) = (char *)this + 272;
    memset((char *)this + 272, 0, 4 * v6);
    v9 = *((_DWORD *)this + 58);
LABEL_6:
    *((_DWORD *)this + 58) = v9 | 0x400;
    return 1LL;
  }
  result = (__int64)PALLOCMEM2((unsigned int)(4 * v6), 1718382187LL, 1);
  *((_QWORD *)this + 33) = result;
  if ( result )
  {
    v9 = *((_DWORD *)this + 58) | 0x800;
    goto LABEL_6;
  }
  return result;
}
