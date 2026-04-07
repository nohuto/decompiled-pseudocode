/*
 * XREFs of ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x18004DF80
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__ @ 0x180050470 (_dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILResourceCacheIndexManager::~CMILResourceCacheIndexManager(CMILResourceCacheIndexManager *this)
{
  if ( byte_1800DBE78 )
  {
    DeleteCriticalSection(&g_ResourceCacheIndexManager);
    byte_1800DBE78 = 0;
  }
}
