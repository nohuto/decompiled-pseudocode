/*
 * XREFs of ?CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C026E1CC
 * Callers:
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00D4A60 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOG.c)
 * Callees:
 *     <none>
 */

char __fastcall QDC_CACHE::CompareEntry(
        QDC_CACHE *this,
        struct QDC_CACHE::QDC_CACHE_ENTRY *a2,
        __int64 a3,
        unsigned int a4,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *Source2)
{
  __int64 v5; // rax
  SIZE_T v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  SIZE_T v10; // rdi
  __int64 v11; // r8

  if ( *((_DWORD *)a2 + 2) != a4 )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v5 + 24) = 621LL;
LABEL_3:
    WdLogEvent5_WdWarning(v5);
    return 0;
  }
  v7 = 200LL * a4;
  v10 = RtlCompareMemory(*((const void **)a2 + 2), Source2, v7);
  if ( v10 != v7 )
  {
    v5 = WdLogNewEntry5_WdWarning(v9, v8, v11);
    *(_QWORD *)(v5 + 24) = v10;
    goto LABEL_3;
  }
  return 1;
}
