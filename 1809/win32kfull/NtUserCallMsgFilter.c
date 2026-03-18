/*
 * XREFs of NtUserCallMsgFilter @ 0x1C00D27A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxCallMsgFilter @ 0x1C00D2880 (xxxCallMsgFilter.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall NtUserCallMsgFilter(_OWORD *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _OWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  _OWORD v14[5]; // [rsp+38h] [rbp-50h] BYREF

  memset(v14, 0, 0x30uLL);
  EnterCrit(0LL, 1LL);
  v7 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *v7 = *v7;
  v7[1] = v7[1];
  v7[2] = v7[2];
  v14[0] = *a1;
  v14[1] = a1[1];
  v14[2] = a1[2];
  if ( (DWORD2(v14[0]) & 0xFFFE0000) != 0 )
  {
    v10 = 0;
    UserSetLastError(87LL, v4, v5, v6);
  }
  else
  {
    v10 = xxxCallMsgFilter((__int64)v14, a2);
    *a1 = v14[0];
    a1[1] = v14[1];
    a1[2] = v14[2];
  }
  UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return v10;
}
