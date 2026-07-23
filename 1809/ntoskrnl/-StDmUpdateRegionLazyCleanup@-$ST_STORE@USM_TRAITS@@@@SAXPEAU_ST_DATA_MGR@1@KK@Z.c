/*
 * XREFs of ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x140305D80
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140145554 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140145E0C (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 * Callees:
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401466F4 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(__int64 a1, unsigned int a2, int a3)
{
  signed __int64 *v3; // r10
  __int64 v5; // r11
  unsigned int v6; // ecx
  volatile signed __int32 *v7; // r8
  int v8; // ebx
  unsigned __int64 v9; // rax

  v3 = *(signed __int64 **)(a1 + 848);
  if ( a3 )
  {
    if ( _bittest64(v3, a2) )
    {
      v5 = a2 & 0x1F;
      LOBYTE(v6) = 1;
      v7 = (volatile signed __int32 *)v3 + ((unsigned __int64)a2 >> 5);
      if ( (unsigned __int64)(v5 + 1) > 0x20 )
      {
        v8 = a2 & 0x1F;
        if ( (a2 & 0x1F) == 0 )
          goto LABEL_10;
        _InterlockedAnd(v7++, ~(((1 << (32 - v8)) - 1) << v5));
        v6 = 1 - (32 - v8);
        if ( v6 >= 0x20 )
        {
          v9 = (unsigned __int64)v6 >> 5;
          do
          {
            *v7 = 0;
            v6 -= 32;
            ++v7;
            --v9;
          }
          while ( v9 );
        }
        if ( v6 )
LABEL_10:
          _InterlockedAnd(v7, -1 << v6);
      }
      else
      {
        _InterlockedAnd(v7, ~(1 << v5));
      }
      ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a1 + 864);
    }
  }
  else
  {
    _bittestandset((signed __int32 *)v3, a2);
  }
}
