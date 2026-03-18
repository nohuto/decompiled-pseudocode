/*
 * XREFs of ?AppendDirtyRegionLists@CDirtyRegion@@AEAAXII@Z @ 0x180033E34
 * Callers:
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180033D30 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDirtyRegion::AppendDirtyRegionLists(CDirtyRegion *this, unsigned int a2, unsigned int a3)
{
  _QWORD *v3; // r10
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v3 = (_QWORD *)((char *)this + 16 * a3 + 280);
  v4 = a2;
  if ( (_QWORD *)*v3 != v3 )
  {
    v5 = 2 * (a3 + 18LL);
    v6 = 16LL * (unsigned int)v4;
    v7 = 2 * (v4 + 18);
    **((_QWORD **)this + v7) = *v3;
    *(_QWORD *)(*v3 + 8LL) = *((_QWORD *)this + v7);
    **((_QWORD **)this + v5) = (char *)this + v6 + 280;
    *((_QWORD *)this + v7) = *((_QWORD *)this + v5);
    v3[1] = v3;
    *v3 = v3;
  }
}
