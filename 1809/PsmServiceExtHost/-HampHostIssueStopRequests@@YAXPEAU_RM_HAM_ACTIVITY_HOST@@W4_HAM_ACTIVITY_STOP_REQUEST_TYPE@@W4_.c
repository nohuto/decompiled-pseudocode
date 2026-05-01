/*
 * XREFs of ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x180069D38
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800058B4 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002BBCC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x18002CDB0 (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 */

struct _HAM_ACTIVITY *__fastcall HampHostIssueStopRequests(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edi
  struct _HAM_ACTIVITY *result; // rax
  __int64 v4; // rcx
  struct _HAM_ACTIVITY *v5; // rbx

  v1 = *(_QWORD *)(a1 + 632);
  v2 = (unsigned __int16)v1;
  if ( (v1 & 0x30000) == 0 )
    v2 = 6656;
  for ( result = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1); ; result = HampHostGetNextActivity(v5) )
  {
    v5 = result;
    if ( !result )
      break;
    if ( HampActCanBeInvalidated(result) && *((_BYTE *)v5 + 548) == 3 )
      HampActRequestStop(v4, 2u, 4, v2, 0, 0LL);
  }
  return result;
}
