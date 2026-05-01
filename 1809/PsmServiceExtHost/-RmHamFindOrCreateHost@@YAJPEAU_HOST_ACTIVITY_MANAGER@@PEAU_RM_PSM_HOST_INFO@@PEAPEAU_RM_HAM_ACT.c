/*
 * XREFs of ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012DE8
 * Callers:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012C34 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTI.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800083F0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012F4C (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM.c)
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800146C0 (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x180014770 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPL.c)
 *     ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180015598 (-HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x18003A15C (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18006B870 (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 */

__int64 __fastcall RmHamFindOrCreateHost(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_HAM_ACTIVITY_HOST **a3)
{
  struct _HAM_APPLICATION *v3; // rdi
  int HostWithFullInfo; // ebx
  ULONG v9; // eax
  __int64 v10; // rdx
  struct _RM_OBJECT_HEADER *v11; // rsi
  struct _RM_PARTITION *v12; // [rsp+30h] [rbp-D0h] BYREF
  struct _HAM_APPLICATION *v13; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_OBJECT_HEADER *v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[544]; // [rsp+50h] [rbp-B0h] BYREF

  v14 = 0LL;
  v3 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  HostWithFullInfo = RmHamFindHostWithFullInfo(a1, a2, a3);
  if ( HostWithFullInfo == -1073741275 )
  {
    HostWithFullInfo = RmpHamQueryActivityHostPartition((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 - 1608), a2, &v12);
    if ( HostWithFullInfo >= 0 )
    {
      v9 = RtlLengthSid((char *)a2 + 464);
      HampAppInfoInitialize(
        (const unsigned __int16 *)a2,
        (unsigned __int8 *)a2 + 464,
        v9,
        *((_DWORD *)a2 + 133),
        (struct _HAM_APPLICATION_INFO *)v15);
      HostWithFullInfo = HampAppFindOrCreate(a1, (struct _HAM_APPLICATION_INFO *)v15, &v13);
      if ( HostWithFullInfo < 0 )
      {
        v3 = v13;
      }
      else
      {
        RmpAcquireGlobalLock();
        v3 = v13;
        HostWithFullInfo = RmHamFindOrCreateActivityHost(
                             (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 - 1608),
                             a2,
                             v13,
                             v12,
                             &v14);
        RmpReleaseGlobalLock();
        v11 = v14;
        if ( HostWithFullInfo < 0 )
        {
          if ( HostWithFullInfo == -1058275322 )
            HampAppQueueTerminate(v3, v10, 4864LL);
        }
        else
        {
          HostWithFullInfo = 0;
          *a3 = (struct _RM_OBJECT_HEADER *)((char *)v14 + 64);
        }
        if ( v11 )
          RmpObjectRelease(v11);
      }
    }
    if ( v12 )
      RmpPartitionRelease((HANDLE *)v12);
    if ( v3 )
      CemRcObjectDereference(v3);
  }
  return (unsigned int)HostWithFullInfo;
}
