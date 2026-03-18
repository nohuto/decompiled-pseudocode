/*
 * XREFs of ?Initialize@CWindowGroupManager@@SAJ_K@Z @ 0x1C023DD4C
 * Callers:
 *     ?InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z @ 0x1C023DDAC (-InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowGroupManager::Initialize(__int64 a1)
{
  __int64 v2; // rax

  v2 = Win32AllocPool(32LL, 1836541781LL);
  if ( v2 )
  {
    *(_QWORD *)v2 = a1;
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_DWORD *)(v2 + 20) = 0;
  }
  `anonymous namespace'::g_windowGroupManager = (struct CWindowGroupManager *)v2;
  return v2 == 0 ? 0xC0000017 : 0;
}
