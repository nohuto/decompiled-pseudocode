/*
 * XREFs of xxxMsgWaitForMultipleObjectsEx @ 0x1C0139E0C
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C003B2C0 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     xxxRemoveQueueCompletion @ 0x1C000DE4C (xxxRemoveQueueCompletion.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall xxxMsgWaitForMultipleObjectsEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 *v5; // rsi
  bool v6; // di
  int v7; // r15d
  unsigned int v8; // ebp
  int v9; // r14d
  int v10; // r12d
  __int64 v11; // r8
  int v12; // eax
  NTSTATUS v13; // ebx
  ULONG v15; // eax
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-88h]
  int v18; // [rsp+28h] [rbp-80h]
  unsigned int v19; // [rsp+44h] [rbp-64h]
  __int64 v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+B0h] [rbp+8h]
  unsigned int v24; // [rsp+C0h] [rbp+18h]
  char v25; // [rsp+C8h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v22 = a1;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = a3;
  v9 = 1;
  v10 = a5 & 1;
  v21 = gptiCurrent;
  v19 = a1 + 1;
  do
  {
    UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
    if ( v9 )
    {
      if ( v8 == -1 )
      {
        v5 = 0LL;
      }
      else
      {
        v5 = &v20;
        v20 = -10000LL * v8;
      }
      v9 = 0;
      v7 = v10;
      v6 = (a5 & 2) != 0;
    }
    do
    {
      LOBYTE(v18) = v6;
      LOBYTE(v11) = 1;
      LOBYTE(v17) = 1;
      v12 = ObWaitForMultipleObjects(v19, a2, v11, !(a5 & 1), v17, v18, v5);
      v13 = v12;
    }
    while ( v12 >= 0 && v6 && v12 == 257 );
    EnterCrit(0LL, 1LL);
    v8 = v24;
    v10 = a5 & 1;
    if ( v7 )
      break;
    if ( v13 != v22 )
      break;
    if ( !(unsigned int)xxxRemoveQueueCompletion() )
      break;
    a1 = 3LL;
    LOBYTE(a1) = (*(_WORD *)(*(_QWORD *)(v21 + 440) + 6LL) & 8) != 0;
  }
  while ( ((unsigned __int8)a1 & ((v25 & 8) != 0)) == 0 );
  if ( v13 >= 0 )
    return (unsigned int)v13;
  v15 = RtlNtStatusToDosError(v13);
  UserSetLastError(v15, v16);
  return 0xFFFFFFFFLL;
}
