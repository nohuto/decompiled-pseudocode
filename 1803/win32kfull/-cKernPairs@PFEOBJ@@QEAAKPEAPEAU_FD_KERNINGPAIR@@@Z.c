/*
 * XREFs of ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C0119BD8
 * Callers:
 *     GreGetKerningPairs @ 0x1C011936C (GreGetKerningPairs.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C008094C (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 */

__int64 __fastcall PFEOBJ::cKernPairs(PFEOBJ *this, struct _FD_KERNINGPAIR **a2)
{
  struct _FD_KERNINGPAIR *v4; // r8
  __int64 v5; // rcx
  __int64 FontTree; // rax
  __int64 v8; // rdx
  _WORD *i; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  _QWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(struct _FD_KERNINGPAIR **)(*(_QWORD *)this + 48LL);
  *a2 = v4;
  v5 = *(_QWORD *)this;
  if ( v4 )
    return *(unsigned int *)(v5 + 64);
  v12[0] = *(_QWORD *)v5;
  FontTree = PFFOBJ::QueryFontTree(
               (PFFOBJ *)v12,
               *(struct DHPDEV__ **)(v12[0] + 96LL),
               *(_QWORD *)(v12[0] + 80LL),
               *(_DWORD *)(v5 + 8),
               2u,
               (unsigned __int64 *)(v5 + 56));
  *(_QWORD *)(*(_QWORD *)this + 48LL) = FontTree;
  v8 = *(_QWORD *)this;
  if ( FontTree )
  {
    for ( i = *(_WORD **)(v8 + 48); *i || i[1] || i[2]; i += 3 )
      ;
    *a2 = *(struct _FD_KERNINGPAIR **)(*(_QWORD *)this + 48LL);
    v10 = (unsigned __int128)(((__int64)i - *(_QWORD *)(*(_QWORD *)this + 48LL)) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v11 = (v10 >> 63) + v10;
    *(_DWORD *)(*(_QWORD *)this + 64LL) = v11;
    return (unsigned int)v11;
  }
  else
  {
    *(_QWORD *)(v8 + 48) = &gkpNothing;
    *(_DWORD *)(*(_QWORD *)this + 64LL) = 0;
    return 0LL;
  }
}
