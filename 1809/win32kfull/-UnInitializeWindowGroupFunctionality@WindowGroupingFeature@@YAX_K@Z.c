/*
 * XREFs of ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C0009C90
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00097E0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C0135CD0 (-_EnableShellWindowManagementBehavior@@YAH_K0@Z.c)
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C0009D4C (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?Uninitialize@CWindowGroupManager@@SAXXZ @ 0x1C0225DE8 (-Uninitialize@CWindowGroupManager@@SAXXZ.c)
 */

void __fastcall WindowGroupingFeature::UnInitializeWindowGroupFunctionality(WindowGroupingFeature *this)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v2);
  if ( (unsigned __int8)anonymous_namespace_::GroupManagementEnabledForDesktop(this) )
    CWindowGroupManager::Uninitialize();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v2);
}
