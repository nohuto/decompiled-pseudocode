/*
 * XREFs of ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C00674D0
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C00672A4 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0064A4C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0064ED8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00670CC (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z @ 0x1C0067568 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJE@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C0067778 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Commit(
        VIDMM_RECYCLE_MULTIRANGE *this,
        unsigned __int8 a2,
        unsigned __int8 *a3)
{
  VIDMM_RECYCLE_RANGE *i; // rdi
  unsigned __int8 v5; // dl
  int v6; // esi
  struct VIDMM_RECYCLE_RANGE *j; // rax
  __int64 v9; // rdx
  __int64 v10; // r8

  for ( i = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v6 = VIDMM_RECYCLE_RANGE::Commit(i, a2);
    if ( v6 < 0 )
      break;
    if ( i == *((VIDMM_RECYCLE_RANGE **)this + 9) )
    {
      for ( j = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; j = VIDMM_RECYCLE_RANGE::GetNextRange(j) )
      {
        *((_QWORD *)j + 17) = 0LL;
        *((_QWORD *)j + 18) = 0LL;
        *((_QWORD *)j + 19) = 0LL;
        *((_QWORD *)j + 20) = this;
        if ( j == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
          break;
      }
      *((_DWORD *)this + 54) = 3;
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(this, v5);
      return 0LL;
    }
  }
  while ( i != *((VIDMM_RECYCLE_RANGE **)this + 8) )
  {
    i = VIDMM_RECYCLE_RANGE::GetPreviousRange(i);
    VIDMM_RECYCLE_RANGE::Decommit(i, v9, v10);
  }
  return (unsigned int)v6;
}
