/*
 * XREFs of ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C00C71E8
 * Callers:
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C6C08 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOG.c)
 *     ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C00C6E70 (-GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOP.c)
 *     ?GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z @ 0x1C00C7154 (-GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z.c)
 * Callees:
 *     <none>
 */

struct QDC_CACHE::QDC_CACHE_ENTRY *__fastcall QDC_CACHE::FindCacheEntry(QDC_CACHE *this, char a2, int a3)
{
  struct QDC_CACHE::QDC_CACHE_ENTRY *result; // rax
  unsigned int i; // ecx
  char v5; // r9
  bool v6; // zf

  result = (QDC_CACHE *)((char *)this + 16);
  for ( i = 0; i < 0x12; ++i )
  {
    v5 = *(_BYTE *)result;
    if ( a2 )
    {
      if ( !v5 )
        goto LABEL_6;
      v6 = *((_DWORD *)result + 1) == a3;
    }
    else
    {
      v6 = v5 == 0;
    }
    if ( v6 )
      return result;
LABEL_6:
    result = (struct QDC_CACHE::QDC_CACHE_ENTRY *)((char *)result + 32);
  }
  return 0LL;
}
