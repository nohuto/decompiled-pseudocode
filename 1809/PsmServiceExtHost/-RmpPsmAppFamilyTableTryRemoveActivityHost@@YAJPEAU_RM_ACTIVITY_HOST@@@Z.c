/*
 * XREFs of ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180038D94
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015E54 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DABC (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800157B0 (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180017350 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     ?RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180038E50 (-RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180038F84 (-RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableTryRemoveActivityHost(struct _RM_ACTIVITY_HOST *a1)
{
  struct _RM_SERVICE_GLOBALS *v1; // rsi
  __int64 result; // rax
  struct _RM_PSM_APP_FAMILY *v4; // rbx
  _BYTE v5[544]; // [rsp+20h] [rbp-238h] BYREF

  v1 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)a1 + 6);
  result = RmpPsmAppFamilyIdFromPsmAppInstanceId(
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 88),
             (struct _RM_PSM_APP_FAMILY_ID *)v5);
  if ( (int)result >= 0 )
  {
    v4 = RmpPsmAppFamilyTableFind(v1, (struct _RM_PSM_APP_FAMILY_ID *)v5);
    if ( v4 )
    {
      result = RmpPsmAppFamilyTryRemoveActivityHost(v4, a1);
      if ( (int)result >= 0 )
      {
        if ( *((struct _RM_ACTIVITY_HOST **)v4 + 72) == (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64) )
          *((_QWORD *)v4 + 72) = 0LL;
        RmpPsmAppFamilyTableCheckDelete(*((struct _RM_SERVICE_GLOBALS **)a1 + 6), v4);
        return 0LL;
      }
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
