/*
 * XREFs of NtUserCallMsgFilter @ 0x1C0129490
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxCallMsgFilter @ 0x1C0129564 (xxxCallMsgFilter.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall NtUserCallMsgFilter(_OWORD *a1, int a2)
{
  __int64 v4; // rdx
  _OWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  _OWORD v12[5]; // [rsp+38h] [rbp-50h] BYREF

  memset(v12, 0, 0x30uLL);
  EnterCrit(0LL, 1LL);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *v5 = *v5;
  v5[1] = v5[1];
  v5[2] = v5[2];
  v12[0] = *a1;
  v12[1] = a1[1];
  v12[2] = a1[2];
  if ( (DWORD2(v12[0]) & 0xFFFE0000) != 0 )
  {
    v8 = 0;
    UserSetLastError(87LL, v4);
  }
  else
  {
    v8 = xxxCallMsgFilter((__int64)v12, a2);
    *a1 = v12[0];
    a1[1] = v12[1];
    a1[2] = v12[2];
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return v8;
}
