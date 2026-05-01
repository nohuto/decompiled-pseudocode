/*
 * XREFs of ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180013024
 * Callers:
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BA74 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x18000EAC4 (-HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180012C84 (-HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180014CD0 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800185F8 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A7BC (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002BED0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BB30 (-HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BB80 (-HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x1800797E0 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 *     ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180079F3C (-HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18007A080 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x18007A114 (-HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007A18C (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampPkgReleaseLockExclusive(struct _HAM_PACKAGE *a1)
{
  _QWORD *Value; // rax

  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)Value & 0x40) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[7]-- == 1LL )
      *Value &= ~0x40uLL;
  }
  *((_DWORD *)a1 + 78) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 304);
}
