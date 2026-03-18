/*
 * XREFs of ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180026228
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180025EC8 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800263E0 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x1800263FC (-IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetDisplayInfo(CPartitionVerticalBlankScheduler *this)
{
  unsigned int v2; // edx
  CDisplaySet *v3; // rbx
  __int64 i; // rdx
  int v5; // edx
  __int64 v6; // rcx
  CDisplaySet *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  CDisplayManager::GetCurrentDisplaySet(this, &v7);
  v3 = v7;
  if ( v7 )
  {
    LOBYTE(v7) = 0;
    if ( (int)CDisplaySet::IsWARPAdapterAtIndex(v3, v2, (bool *)&v7) >= 0 )
      *((_BYTE *)this + 30912) = (_BYTE)v7;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v3 + 18); i = (unsigned int)(v5 + 1) )
    {
      if ( (unsigned int)i >= 0x10 )
        break;
      if ( CDisplay::IsPrimary(*(CDisplay **)(*((_QWORD *)v3 + 6) + 8 * i)) )
        *((_BYTE *)this + 30913) = *(_BYTE *)(v6 + 312);
    }
    CDisplaySet::Release(v3);
  }
}
