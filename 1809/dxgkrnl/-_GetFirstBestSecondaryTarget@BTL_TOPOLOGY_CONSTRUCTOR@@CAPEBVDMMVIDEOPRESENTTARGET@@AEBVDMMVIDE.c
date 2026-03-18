/*
 * XREFs of ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C028CDFC
 * Callers:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C028B2E8 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C028D09C (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

const struct DMMVIDEOPRESENTTARGET *__fastcall BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(
        const struct DMMVIDEOPRESENTTARGETSET *this)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  const struct DXGADAPTER *v5; // rbp
  const struct DMMVIDEOPRESENTTARGET *v6; // rdi
  const struct DMMVIDEOPRESENTTARGETSET *v7; // rbx
  const struct DMMVIDEOPRESENTTARGET *i; // rbx

  v1 = *((_QWORD *)this + 11);
  v3 = *(_QWORD *)(v1 + 8);
  if ( !v3 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
    v3 = *(_QWORD *)(v1 + 8);
  }
  v5 = *(const struct DXGADAPTER **)(v3 + 16);
  v6 = 0LL;
  v7 = (const struct DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
  if ( v7 != (const struct DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGETSET *)((char *)v7 - 8);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i) )
    {
      if ( !*((_DWORD *)i + 22) && BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v5, i, v6) )
        v6 = i;
    }
  }
  return v6;
}
