/*
 * XREFs of LdrpNotifyLoadOfGraph @ 0x1800288B0
 * Callers:
 *     LdrpNotifyLoadOfGraph @ 0x1800288B0 (LdrpNotifyLoadOfGraph.c)
 *     LdrpPrepareModuleForExecution @ 0x1800294E4 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     LdrpSendPostSnapNotifications @ 0x1800277F8 (LdrpSendPostSnapNotifications.c)
 *     LdrpNotifyLoadOfGraph @ 0x1800288B0 (LdrpNotifyLoadOfGraph.c)
 */

__int64 __fastcall LdrpNotifyLoadOfGraph(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  if ( v1 )
  {
    v3 = *(_QWORD **)(a1 + 40);
    while ( 1 )
    {
      v3 = (_QWORD *)*v3;
      v4 = v3[1];
      if ( *(_DWORD *)(v4 + 56) == 6 )
      {
        result = LdrpNotifyLoadOfGraph();
      }
      else if ( *(int *)(v4 + 56) < 7 )
      {
        result = 3221225701LL;
        if ( *(_DWORD *)(v4 + 56) == -4 )
          result = 3221225794LL;
      }
      else
      {
        result = 0LL;
      }
      if ( (int)result < 0 )
        break;
      if ( v3 == v1 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    *(_DWORD *)(a1 + 56) = 7;
    result = LdrpSendPostSnapNotifications(a1);
    if ( (int)result < 0 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return result;
}
