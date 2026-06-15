/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000D6A4
 * Callers:
 *     PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x1800012A0 (PickerHostContextManager--_dynamic_initializer_for__s_csPickerHostContextList__.c)
 *     _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x1800012D0 (_dynamic_initializer_for__s_HostedAppInteractivityManager__.c)
 *     ??0CDuckingManager@@AEAA@XZ @ 0x180008C2C (--0CDuckingManager@@AEAA@XZ.c)
 *     ??0CApplication@@IEAA@K@Z @ 0x18000DBE8 (--0CApplication@@IEAA@K@Z.c)
 *     ??0CProcess@@IEAA@XZ @ 0x18001147C (--0CProcess@@IEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
