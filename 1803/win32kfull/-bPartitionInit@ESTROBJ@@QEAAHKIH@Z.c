/*
 * XREFs of ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C0002F00
 * Callers:
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C000426C (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0086740 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall ESTROBJ::bPartitionInit(ESTROBJ *this, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rdi
  size_t v7; // r8
  char *v8; // rcx
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
LABEL_6:
    *((_DWORD *)this + 58) |= 0x400u;
    return 1LL;
  }
  result = PALLOCMEM2((unsigned int)(4 * v6));
  *((_QWORD *)this + 33) = result;
  if ( result )
  {
    *((_DWORD *)this + 58) |= 0x800u;
    goto LABEL_6;
  }
  return result;
}
