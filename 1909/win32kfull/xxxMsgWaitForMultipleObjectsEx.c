/*
 * XREFs of xxxMsgWaitForMultipleObjectsEx @ 0x1C0164824
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C0131510 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     xxxRemoveQueueCompletion @ 0x1C000DEEC (xxxRemoveQueueCompletion.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall xxxMsgWaitForMultipleObjectsEx(__int64 a1, __int64 a2, unsigned int a3, char a4, char a5)
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
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+20h] [rbp-88h]
  int v20; // [rsp+28h] [rbp-80h]
  unsigned int v21; // [rsp+44h] [rbp-64h]
  __int64 v22; // [rsp+50h] [rbp-58h] BYREF
  __int64 v23; // [rsp+58h] [rbp-50h]
  int v24; // [rsp+B0h] [rbp+8h]

  v24 = a1;
  v22 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = a3;
  v9 = 1;
  v10 = a5 & 1;
  v23 = gptiCurrent;
  v21 = a1 + 1;
  do
  {
    UserSessionSwitchLeaveCrit(a1);
    if ( v9 )
    {
      if ( v8 == -1 )
      {
        v5 = 0LL;
      }
      else
      {
        v5 = &v22;
        v22 = -10000LL * v8;
      }
      v9 = 0;
      v7 = v10;
      v6 = (a5 & 2) != 0;
    }
    do
    {
      LOBYTE(v20) = v6;
      LOBYTE(v11) = 1;
      LOBYTE(v19) = 1;
      v12 = ObWaitForMultipleObjects(v21, a2, v11, !(a5 & 1), v19, v20, v5);
      v13 = v12;
    }
    while ( v12 >= 0 && v6 && v12 == 257 );
    EnterCrit(0LL, 1LL);
    v8 = a3;
    v10 = a5 & 1;
    if ( v7 )
      break;
    if ( v13 != v24 )
      break;
    if ( !(unsigned int)xxxRemoveQueueCompletion() )
      break;
    a1 = 3LL;
    LOBYTE(a1) = (*(_WORD *)(*(_QWORD *)(v23 + 440) + 6LL) & 8) != 0;
  }
  while ( ((unsigned __int8)a1 & ((a4 & 8) != 0)) == 0 );
  if ( v13 >= 0 )
    return (unsigned int)v13;
  v15 = RtlNtStatusToDosError(v13);
  UserSetLastError(v15, v16, v17, v18);
  return 0xFFFFFFFFLL;
}
