/*
 * XREFs of ??1?$list@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@2@@std@@QEAA@XZ @ 0x180008560
 * Callers:
 *     _InputStateManager::InputStateManager_::_1_::dtor$8 @ 0x18012DF12 (_InputStateManager--InputStateManager_--_1_--dtor$8.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$8 @ 0x18012F143 (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$8.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$20 @ 0x180131D59 (_Win32kInterop--Win32kInterop_--_1_--dtor$20.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$32 @ 0x18013224C (_DWMInputRouter--DWMInputRouter_--_1_--dtor$32.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$5 @ 0x180134028 (_TouchProcessor--Initialize_--_1_--dtor$5.c)
 *     _InputInfoValidator::ValidatePointerInput_::_1_::dtor$2 @ 0x180135727 (_InputInfoValidator--ValidatePointerInput_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,LegacyDeviceInfo *>>::~list<std::pair<unsigned long const,LegacyDeviceInfo *>>(
        __int64 a1)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      operator delete(v2, (const struct std::nothrow_t *)0x20);
      v3 = *(_QWORD **)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  operator delete(v3, (const struct std::nothrow_t *)0x20);
}
