/*
 * XREFs of ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C007B690
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001A16C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C01248D0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 */

void __fastcall DC::vUpdateScaledRegions(DC *this)
{
  __int64 v1; // rax
  REGION *v3; // rcx
  REGION *v4; // rcx
  int v5; // eax

  v1 = *((_QWORD *)this + 62);
  if ( v1 && (*(_DWORD *)(v1 + 116) & 0x800) != 0 )
  {
    v5 = *((_DWORD *)this + 130);
    if ( (v5 & 0x10) != 0 )
    {
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 141),
        (char *)this + 1144,
        _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
      v5 = *((_DWORD *)this + 130);
    }
    if ( (v5 & 8) != 0 )
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 142),
        (char *)this + 1152,
        _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
  }
  else
  {
    v3 = (REGION *)*((_QWORD *)this + 143);
    if ( v3 )
    {
      REGION::vDeleteREGION(v3);
      *((_QWORD *)this + 143) = 0LL;
    }
    v4 = (REGION *)*((_QWORD *)this + 144);
    if ( v4 )
    {
      REGION::vDeleteREGION(v4);
      *((_QWORD *)this + 144) = 0LL;
    }
  }
  *((_DWORD *)this + 130) &= 0xFFFFFFE7;
}
