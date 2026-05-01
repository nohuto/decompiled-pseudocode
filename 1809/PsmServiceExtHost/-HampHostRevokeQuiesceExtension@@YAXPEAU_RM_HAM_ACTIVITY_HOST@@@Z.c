/*
 * XREFs of ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069FAC
 * Callers:
 *     ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x18003C004 (-HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z.c)
 * Callees:
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800058B4 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002BBCC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 */

void __fastcall HampHostRevokeQuiesceExtension(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_ACTIVITY *i; // rax
  struct _HAM_ACTIVITY *v2; // rbx

  if ( (*((_QWORD *)a1 + 79) & 0x20000000000LL) != 0 )
  {
    for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v2) )
    {
      v2 = i;
      if ( !i )
        break;
      if ( (*((_DWORD *)i + 28) & 0x800) != 0 )
        HampActRequestStop((__int64)i, 3u, 5, 6656, 0, 0LL);
    }
  }
}
