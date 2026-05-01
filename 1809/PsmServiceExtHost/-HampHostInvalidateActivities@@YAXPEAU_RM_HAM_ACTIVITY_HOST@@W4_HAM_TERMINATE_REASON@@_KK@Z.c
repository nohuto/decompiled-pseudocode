/*
 * XREFs of ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x18002E7D4
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000FDD0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18002E36C (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002BBCC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x18002CDB0 (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18002F714 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 */

struct _HAM_ACTIVITY *__fastcall HampHostInvalidateActivities(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  struct _HAM_ACTIVITY *result; // rax
  struct _HAM_ACTIVITY *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax

  for ( result = HampHostGetFirstActivity(a1); ; result = HampHostGetNextActivity(v8) )
  {
    v8 = result;
    if ( !result )
      break;
    if ( HampActCanBeInvalidated(result) && ((a4 & 1) == 0 || (*((_DWORD *)v8 + 28) & 0x10000) != 0) )
    {
      HampActInvalidateAndNotify(v9, a2);
      v10 = *((_QWORD *)v8 + 9);
      if ( v10 )
      {
        if ( *(_BYTE *)(v10 + 40) == 2 )
          *((_QWORD *)v8 + 64) = a3;
      }
    }
  }
  return result;
}
