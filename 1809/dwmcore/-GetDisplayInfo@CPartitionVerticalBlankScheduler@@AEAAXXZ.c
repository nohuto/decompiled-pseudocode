/*
 * XREFs of ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008123C
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180080EDC (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180081530 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x18008154C (-IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z.c)
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
      *((_BYTE *)this + 30584) = (_BYTE)v7;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v3 + 18); i = (unsigned int)(v5 + 1) )
    {
      if ( (unsigned int)i >= 0x10 )
        break;
      if ( CDisplay::IsPrimary(*(CDisplay **)(*((_QWORD *)v3 + 6) + 8 * i)) )
        *((_BYTE *)this + 30585) = *(_BYTE *)(v6 + 320);
    }
    CDisplaySet::Release(v3);
  }
}
