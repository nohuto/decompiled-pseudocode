/*
 * XREFs of ?HampAppGetFirstLiveHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@PEAU_LIST_ENTRY@@@Z @ 0x18000822C
 * Callers:
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x1800081AC (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180010608 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012C14 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampAppGetFirstLiveHost(struct _HAM_APPLICATION *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // r8
  struct _LIST_ENTRY **v3; // rdx
  __int64 v4; // rcx

  v2 = (struct _LIST_ENTRY *)((char *)a1 + 592);
  while ( a2 != v2 )
  {
    if ( RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)&a2[-49]) )
      return (struct _RM_HAM_ACTIVITY_HOST *)v4;
    a2 = *v3;
  }
  return 0LL;
}
