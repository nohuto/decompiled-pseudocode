/*
 * XREFs of ?HampSystemEnsureStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B0CC
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180026B20 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180018B4C (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x1800489A4 (IsPackageRundownNotificationForStoreLicense2Present.c)
 */

__int64 __fastcall HampSystemEnsureStoreLicenseAcquisition(
        struct _HAM_APPLICATION *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v3; // rax
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  __int64 v5; // r9
  int v6; // edi

  if ( (unsigned __int8)IsPackageRundownNotificationForStoreLicense2Present(a1, a2) )
  {
    v3 = HampAppTryReferenceMixedHost(a1);
    v4 = v3;
    v5 = 0LL;
    if ( v3 )
      v5 = *((_QWORD *)v3 + 72);
    v6 = EnsureStoreLicenseForPackageActivation2(
           (char *)a1 + 96,
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 88LL) + 160LL) + 88LL),
           *((_QWORD *)a1 + 11) + 228LL,
           v5);
    if ( v6 >= 0 )
      v6 = 0;
    if ( v4 )
    {
      RmpAcquireGlobalLock();
      if ( (*((_QWORD *)v4 + 74))-- == 1LL )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v4 - 64));
      RmpReleaseGlobalLock();
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v6;
}
