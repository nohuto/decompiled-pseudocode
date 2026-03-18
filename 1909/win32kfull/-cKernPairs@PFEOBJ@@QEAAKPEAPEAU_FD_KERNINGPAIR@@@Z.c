/*
 * XREFs of ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C014535C
 * Callers:
 *     GreGetKerningPairs @ 0x1C0144EE4 (GreGetKerningPairs.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0095BEC (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 */

__int64 __fastcall PFEOBJ::cKernPairs(PFEOBJ *this, struct _FD_KERNINGPAIR **a2)
{
  struct _FD_KERNINGPAIR *v4; // r8
  __int64 v6; // rcx
  __int64 FontTree; // rax
  bool v8; // zf
  __int64 v9; // rax
  _WORD *i; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(struct _FD_KERNINGPAIR **)(*(_QWORD *)this + 48LL);
  *a2 = v4;
  if ( v4 )
    return *(unsigned int *)(*(_QWORD *)this + 64LL);
  v6 = *(_QWORD *)this;
  v13[0] = *(_QWORD *)v6;
  FontTree = PFFOBJ::QueryFontTree(
               (PFFOBJ *)v13,
               *(struct DHPDEV__ **)(v13[0] + 96LL),
               *(_QWORD *)(v13[0] + 80LL),
               *(_DWORD *)(v6 + 8),
               2u,
               (unsigned __int64 *)(v6 + 56));
  *(_QWORD *)(*(_QWORD *)this + 48LL) = FontTree;
  v8 = FontTree == 0;
  v9 = *(_QWORD *)this;
  if ( v8 )
  {
    *(_QWORD *)(v9 + 48) = &gkpNothing;
    *(_DWORD *)(*(_QWORD *)this + 64LL) = 0;
    return 0LL;
  }
  else
  {
    for ( i = *(_WORD **)(v9 + 48); *i || i[1] || i[2]; i += 3 )
      ;
    *a2 = *(struct _FD_KERNINGPAIR **)(*(_QWORD *)this + 48LL);
    v11 = (unsigned __int128)(((__int64)i - *(_QWORD *)(*(_QWORD *)this + 48LL)) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v12 = (v11 >> 63) + v11;
    *(_DWORD *)(*(_QWORD *)this + 64LL) = v12;
    return (unsigned int)v12;
  }
}
