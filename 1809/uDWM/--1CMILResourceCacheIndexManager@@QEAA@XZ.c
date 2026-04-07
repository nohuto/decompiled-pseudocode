/*
 * XREFs of ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x18004BE00
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__ @ 0x18004EC00 (_dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILResourceCacheIndexManager::~CMILResourceCacheIndexManager(CMILResourceCacheIndexManager *this)
{
  if ( byte_1800D4E68 )
  {
    DeleteCriticalSection(&g_ResourceCacheIndexManager);
    byte_1800D4E68 = 0;
  }
}
