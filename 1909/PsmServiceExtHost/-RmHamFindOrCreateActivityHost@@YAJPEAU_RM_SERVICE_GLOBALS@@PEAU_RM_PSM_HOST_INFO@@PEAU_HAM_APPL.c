/*
 * XREFs of ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012BCC
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A958 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_AC.c)
 * Callees:
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012A20 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015A28 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180018884 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmHamFindOrCreateActivityHost(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _HAM_APPLICATION *a3,
        struct _RM_PARTITION *a4,
        char a5,
        struct _RM_ACTIVITY_HOST **a6)
{
  __int64 result; // rax
  struct _RM_ACTIVITY_HOST *v11; // rdx
  struct _RM_ACTIVITY_HOST *v12; // rdx
  struct _RM_ACTIVITY_HOST *v13; // [rsp+48h] [rbp+10h] BYREF

  if ( (int)RmpActivityHostFindByHostId(a1, *((_QWORD *)a2 + 68), &v13) >= 0 )
  {
    v11 = v13;
  }
  else
  {
    result = RmpActivityHostCreateHostPsm(a1, a4, a2, 2 * (a5 & 1u) + 1, &v13);
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a3 + 3) <= 1 )
      __fastfail(0xEu);
    v11 = v13;
    *((_QWORD *)v13 + 105) = a3;
  }
  RmHamHostReferenceUnsafe((struct _RM_ACTIVITY_HOST *)((char *)v11 + 64));
  result = 0LL;
  *a6 = v12;
  return result;
}
