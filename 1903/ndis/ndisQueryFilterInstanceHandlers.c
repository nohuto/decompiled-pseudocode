/*
 * XREFs of ndisQueryFilterInstanceHandlers @ 0x1C0029D44
 * Callers:
 *     ndisHandleFilterHandlersChange @ 0x1C0029CCC (ndisHandleFilterHandlersChange.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisFInvokeSetFilterModuleOptions @ 0x1C0105A68 (ndisFInvokeSetFilterModuleOptions.c)
 */

_UNKNOWN **__fastcall ndisQueryFilterInstanceHandlers(_QWORD *a1)
{
  _UNKNOWN **result; // rax
  _QWORD *i; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4,
                            1,
                            25,
                            (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
                            (char)a1);
  if ( a1 )
  {
    result = (_UNKNOWN **)a1[4];
    for ( i = result[256]; i; i = (_QWORD *)i[14] )
    {
      result = (_UNKNOWN **)ndisFInvokeSetFilterModuleOptions((char)i);
      if ( i == a1 )
        break;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          4,
                          1,
                          26,
                          (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
                          (char)a1);
  return result;
}
