/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180010974
 * Callers:
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x180001420 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001450 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     ??0CDuckingManager@@AEAA@XZ @ 0x18000BF5C (--0CDuckingManager@@AEAA@XZ.c)
 *     ??0CApplication@@IEAA@K@Z @ 0x180010E18 (--0CApplication@@IEAA@K@Z.c)
 *     ??0CProcess@@IEAA@XZ @ 0x180014604 (--0CProcess@@IEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001094C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
