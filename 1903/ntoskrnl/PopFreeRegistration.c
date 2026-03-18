/*
 * XREFs of PopFreeRegistration @ 0x14072871C
 * Callers:
 *     PopDispatchNotificationsToList @ 0x1406A3148 (PopDispatchNotificationsToList.c)
 *     PopFreeSessionState @ 0x140728668 (PopFreeSessionState.c)
 * Callees:
 *     ZwDeleteWnfStateName @ 0x1401C1B50 (ZwDeleteWnfStateName.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeRegistration(_DWORD *P, __int64 a2, __int64 a3)
{
  _DWORD **v4; // rbx
  __int64 v5; // rsi
  _DWORD *v6; // rcx

  v4 = (_DWORD **)(P + 16);
  v5 = 3LL;
  do
  {
    v6 = *v4;
    if ( *v4 )
    {
      if ( (*v6)-- == 1 )
        ExFreePoolWithTag(v6, 0x74655350u);
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  if ( P[14] || P[15] )
    ZwDeleteWnfStateName((__int64)(P + 14), a2, a3);
  ExFreePoolWithTag(P, 0x74655350u);
}
