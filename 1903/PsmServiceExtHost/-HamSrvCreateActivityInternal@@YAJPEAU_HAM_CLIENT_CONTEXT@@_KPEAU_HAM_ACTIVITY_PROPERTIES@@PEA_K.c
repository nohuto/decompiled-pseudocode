/*
 * XREFs of ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18003A3F4
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800248E0 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x18001A69C (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AB70 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001C890 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180025FA0 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 */

__int64 __fastcall HamSrvCreateActivityInternal(
        struct _HOST_ACTIVITY_MANAGER **a1,
        __int64 a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4)
{
  struct _HOST_ACTIVITY_MANAGER *v7; // rcx
  __int64 v8; // rsi
  const unsigned __int16 *v9; // r15
  unsigned int v10; // r12d
  union _RM_SID *v11; // r13
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v13; // rbx
  unsigned int v14; // edi
  int v15; // eax
  struct _HAM_ACTIVITY *v16; // rcx
  struct _HAM_ACTIVITY *v19; // [rsp+60h] [rbp-48h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v20; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+10h]
  unsigned __int64 *v22; // [rsp+C8h] [rbp+20h]

  v22 = a4;
  v21 = a2;
  HampSrvTraceActivityCreateStart();
  v7 = *a1;
  v19 = 0LL;
  v20 = 0LL;
  v8 = -1LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  Host = RmHamFindHost(v7, a2, &v20);
  v13 = v20;
  v14 = Host;
  if ( Host >= 0 )
  {
    v10 = *((_DWORD *)v20 + 140);
    v9 = (const unsigned __int16 *)((char *)v20 + 24);
    v11 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v20 + 488);
    v15 = HampActCreate((struct _HAM_CLIENT_CONTEXT *)a1, *a1, v20, a3, 0, &v19);
    v16 = v19;
    v14 = v15;
    if ( v15 >= 0 )
    {
      v14 = 0;
      v8 = *((_QWORD *)v19 + 5);
      *v22 = v8;
    }
    if ( v16 )
      CemRcObjectDereference(v16);
  }
  HampSrvTraceActivityCreateStop(v14, v8, 0LL, v9, v10, v11, v21, a3, 0, 0, 0);
  if ( v13 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v13 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v13 - 64));
    RmpReleaseGlobalLock();
  }
  return v14;
}
