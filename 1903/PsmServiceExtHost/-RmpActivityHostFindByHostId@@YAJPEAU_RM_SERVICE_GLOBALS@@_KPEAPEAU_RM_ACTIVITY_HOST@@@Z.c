/*
 * XREFs of ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012A20
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000A1B0 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012BCC (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180019680 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x18002F844 (-RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z.c)
 *     ?RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800687FC (-RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST_CALLBACK_TYPE@@@Z @ 0x180070424 (-RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostFindByHostId(
        struct _RM_SERVICE_GLOBALS *a1,
        __int64 a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  unsigned int v6; // r10d
  __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // rbp
  __int64 v10; // r11

  RtlAcquireSRWLockShared((char *)a1 + 32);
  v6 = *((_DWORD *)a1 + 5);
  v7 = 0LL;
  v8 = -1073741275;
  v9 = -1LL << (*((_BYTE *)a1 + 20) & 0x1F);
  v10 = v9 & (HIBYTE(a2)
            + 37
            * (BYTE6(a2)
             + 37
             * (BYTE5(a2)
              + 37
              * (BYTE4(a2)
               + 37 * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
LABEL_2:
  if ( v7 )
    goto LABEL_5;
  if ( v6 >= 0x20 )
  {
    v7 = *((_QWORD *)a1 + 3)
       + 8LL
       * ((37
         * (BYTE6(v10)
          + 37
          * (BYTE5(v10)
           + 37
           * (BYTE4(v10)
            + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
         + HIBYTE(v10)) & ((v6 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v10 == (v9 & *(_QWORD *)(v7 + 8)) )
      {
        if ( a2 != *(_QWORD *)(v7 + 32) )
          goto LABEL_2;
        v8 = 0;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 16)) <= 1 )
          __fastfail(0xEu);
        goto LABEL_9;
      }
    }
  }
  v7 = v10;
LABEL_9:
  RtlReleaseSRWLockShared((char *)a1 + 32);
  if ( v8 < 0 )
    return (unsigned int)v8;
  *a3 = (struct _RM_ACTIVITY_HOST *)v7;
  return 0LL;
}
