/*
 * XREFs of ?InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z @ 0x1C023DDAC
 * Callers:
 *     ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C0140990 (-_EnableShellWindowManagementBehavior@@YAH_K0@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?Initialize@CWindowGroupManager@@SAJ_K@Z @ 0x1C023DD4C (-Initialize@CWindowGroupManager@@SAJ_K@Z.c)
 */

__int64 __fastcall WindowGroupingFeature::InitializeWindowGroupFunctionality(WindowGroupingFeature *this)
{
  unsigned int v2; // ebx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v4);
  if ( `anonymous namespace'::g_windowGroupManager )
    v2 = *(_QWORD *)`anonymous namespace'::g_windowGroupManager != (_QWORD)this ? 0xC0000001 : 0;
  else
    v2 = CWindowGroupManager::Initialize((__int64)this);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v4);
  return v2;
}
