/*
 * XREFs of NtUserCallMsgFilter @ 0x1C0101AA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxCallMsgFilter @ 0x1C0101B80 (xxxCallMsgFilter.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserCallMsgFilter(_OWORD *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _OWORD *v7; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v11[10]; // [rsp+38h] [rbp-50h] BYREF

  memset(v11, 0, 0x30uLL);
  EnterCrit(0LL, 1LL);
  v7 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *v7 = *v7;
  v7[1] = v7[1];
  v7[2] = v7[2];
  *(_OWORD *)v11 = *a1;
  *(_OWORD *)&v11[2] = a1[1];
  *(_OWORD *)&v11[4] = a1[2];
  if ( (v11[1] & 0xFFFE0000) != 0 )
  {
    v9 = 0;
    UserSetLastError(87LL, v4, v5, v6);
  }
  else
  {
    v9 = xxxCallMsgFilter((__int64)v11, a2);
    *a1 = *(_OWORD *)v11;
    a1[1] = *(_OWORD *)&v11[2];
    a1[2] = *(_OWORD *)&v11[4];
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
