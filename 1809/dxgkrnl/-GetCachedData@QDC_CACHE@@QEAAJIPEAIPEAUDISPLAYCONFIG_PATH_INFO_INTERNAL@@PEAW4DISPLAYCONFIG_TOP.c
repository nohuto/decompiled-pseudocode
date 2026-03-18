/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C00C6E70
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00C6D90 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C00C71E8 (-FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedData(
        struct DXGFASTMUTEX **this,
        __int64 a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5,
        unsigned int *a6)
{
  __int64 v8; // rbp
  struct DXGPROCESS *Current; // rax
  struct QDC_CACHE::QDC_CACHE_ENTRY *CacheEntry; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct QDC_CACHE::QDC_CACHE_ENTRY *v16; // rbx
  __int64 v17; // rax
  int v18; // edi
  struct DXGPROCESS *v19; // rax
  int v20; // ecx
  unsigned int v21; // ebx
  _QWORD *v23; // rax
  _BYTE v24[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 263LL;
    return 3221225659LL;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent();
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL, 0LL, 0LL) )
    {
      return 3221225473LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, this[1], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
      *a6 = *((_DWORD *)this + 148);
      CacheEntry = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 1, v8);
      v16 = CacheEntry;
      if ( CacheEntry )
      {
        v17 = *((unsigned int *)CacheEntry + 2);
        if ( (unsigned int)v17 > *a3 )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
          v23[3] = v8;
          v23[4] = *((unsigned int *)v16 + 2);
          v23[5] = *a3;
          WdLogEvent5_WdWarning(v23);
          v21 = -1073741823;
        }
        else
        {
          memmove(a4, *((const void **)v16 + 2), 200 * v17);
          *a3 = *((_DWORD *)v16 + 2);
          if ( a5 )
            *(_DWORD *)a5 = *((_DWORD *)v16 + 6);
          v18 = *((_DWORD *)this + 148);
          v19 = DXGPROCESS::GetCurrent();
          if ( v18 == *((_DWORD *)v19 + 107) )
          {
            v20 = *((_DWORD *)v19 + 106);
          }
          else
          {
            *((_DWORD *)v19 + 106) = 0;
            v20 = 0;
            *((_DWORD *)v19 + 107) = v18;
          }
          *((_DWORD *)v19 + 106) = v20 + 1;
          if ( (v20 & (v20 + 1)) == 0 && v20 != 1 )
            DxgkLogCodePointPacket(0x4Du, v20 + 1, *((_DWORD *)v16 + 1), *((_DWORD *)v16 + 7), 0LL);
          v21 = 0;
        }
      }
      else
      {
        v21 = -1073741801;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = v8;
      }
      if ( v24[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
      return v21;
    }
  }
}
