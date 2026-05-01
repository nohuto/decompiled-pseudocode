/*
 * XREFs of ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A144
 * Callers:
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800043B0 (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180009E90 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180009FF4 (-HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     ?HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x18000A044 (-HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A0B0 (-HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010AC0 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012C94 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180029CD0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002CB80 (-HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002CBD4 (-HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DF20 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x18006BA6C (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 *     ?HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x18006C07C (-HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampPkgAcquireLockExclusive(struct _HAM_PACKAGE *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 304);
  *((_DWORD *)a1 + 78) = GetCurrentThreadId();
}
