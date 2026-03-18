/*
 * XREFs of ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C008ACA4
 * Callers:
 *     GreSetWindowOrg @ 0x1C00F2B74 (GreSetWindowOrg.c)
 *     GreScaleWindowExtEx @ 0x1C0135920 (GreScaleWindowExtEx.c)
 *     NtGdiMirrorWindowOrg @ 0x1C027FE70 (NtGdiMirrorWindowOrg.c)
 *     NtGdiScaleViewportExtEx @ 0x1C0287390 (NtGdiScaleViewportExtEx.c)
 * Callees:
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C00FD534 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 */

void __fastcall DC::MirrorWindowOrg(DC *this)
{
  _DWORD *v1; // r10
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r10
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  if ( (v1[78] & 1) != 0 )
  {
    v2 = (unsigned int)v1[86];
    if ( (_DWORD)v2 )
    {
      v3 = (unsigned int)(v1[82] * (*((_DWORD *)this + 360) - *((_DWORD *)this + 362) + 1));
      v5 = v3;
      if ( (int)SafeDivide<long,long,long>(v3, v2, &v5) >= 0 )
        *(_DWORD *)(v4 + 320) = v5 + *(_DWORD *)(v4 + 316);
    }
  }
  else
  {
    v1[80] = v1[79];
  }
}
