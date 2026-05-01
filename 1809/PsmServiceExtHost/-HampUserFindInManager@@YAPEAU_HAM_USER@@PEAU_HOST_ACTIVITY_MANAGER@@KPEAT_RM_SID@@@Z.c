/*
 * XREFs of ?HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z @ 0x18006CE9C
 * Callers:
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x1800673EC (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z @ 0x180014B78 (-HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z.c)
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180014B98 (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 */

struct _HAM_USER *__fastcall HampUserFindInManager(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned int a2,
        union _RM_SID *a3)
{
  struct _HAM_SESSION *v4; // rax
  struct _HAM_USER *v5; // rbx
  struct _HAM_SESSION *v6; // rdi

  v4 = HampSessionFindInManager(a1, a2);
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    v5 = HampUserFindInSession(v4, a3);
    CemRcObjectDereference(v6);
  }
  return v5;
}
