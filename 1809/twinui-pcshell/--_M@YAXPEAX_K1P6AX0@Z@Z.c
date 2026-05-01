/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800853C8
 * Callers:
 *     _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x1800012E0 (_dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperienceRepository.c)
 *     __dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds___::_1_::dtor$1 @ 0x180001370 (__dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperienceRepositor.c)
 *     _dynamic_initializer_for__error__ @ 0x180003C60 (_dynamic_initializer_for__error__.c)
 *     __dynamic_initializer_for__error___::_1_::dtor$19 @ 0x1800049B4 (__dynamic_initializer_for__error___--_1_--dtor$19.c)
 *     _dynamic_initializer_for__idle__ @ 0x1800049F0 (_dynamic_initializer_for__idle__.c)
 *     __dynamic_initializer_for__idle___::_1_::dtor$1 @ 0x180004AF3 (__dynamic_initializer_for__idle___--_1_--dtor$1.c)
 *     _dynamic_initializer_for__listening__ @ 0x180004B20 (_dynamic_initializer_for__listening__.c)
 *     __dynamic_initializer_for__listening___::_1_::dtor$28 @ 0x180005EB8 (__dynamic_initializer_for__listening___--_1_--dtor$28.c)
 *     _dynamic_initializer_for__responding__ @ 0x180005EF0 (_dynamic_initializer_for__responding__.c)
 *     __dynamic_initializer_for__responding___::_1_::dtor$25 @ 0x180007061 (__dynamic_initializer_for__responding___--_1_--dtor$25.c)
 *     _dynamic_initializer_for__thinking__ @ 0x180007090 (_dynamic_initializer_for__thinking__.c)
 *     __dynamic_initializer_for__thinking___::_1_::dtor$90 @ 0x18000B12C (__dynamic_initializer_for__thinking___--_1_--dtor$90.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18001BF40 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??0CustomShellManager@@QEAA@XZ @ 0x18008C294 (--0CustomShellManager@@QEAA@XZ.c)
 *     _CustomShellManager::CustomShellManager_::_1_::dtor$2 @ 0x18008C369 (_CustomShellManager--CustomShellManager_--_1_--dtor$2.c)
 *     _dynamic_atexit_destructor_for__CApplicationManager::s_rgTrustedComponentRegMap__ @ 0x1800AF890 (_dynamic_atexit_destructor_for__CApplicationManager--s_rgTrustedComponentRegMap__.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800E821C (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??1ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x180119884 (--1ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ??1ChainLinkNotifier@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1801BCE00 (--1ChainLinkNotifier@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ??_EPerMonitorShellPositionerManager@@UEAAPEAXI@Z @ 0x180337598 (--_EPerMonitorShellPositionerManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18008543C (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
