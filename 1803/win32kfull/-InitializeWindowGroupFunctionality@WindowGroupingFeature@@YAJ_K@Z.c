/*
 * XREFs of ?InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z @ 0x1C01FCEA0
 * Callers:
 *     _EnableShellWindowManagementBehavior @ 0x1C01128C0 (_EnableShellWindowManagementBehavior.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?Initialize@CWindowGroupManager@@SAJ_K@Z @ 0x1C01FCE48 (-Initialize@CWindowGroupManager@@SAJ_K@Z.c)
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
