/*
 * XREFs of NtUserDispatchMessage @ 0x1C002DCB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDispatchMessage @ 0x1C002DDC0 (xxxDispatchMessage.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserDispatchMessage(_OWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  _OWORD v11[4]; // [rsp+38h] [rbp-40h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v11[0] = *a1;
  v11[1] = a1[1];
  v11[2] = a1[2];
  v2 = 0LL;
  if ( (DWORD2(v11[0]) & 0xFFFE0000) != 0 )
  {
    v3 = 87LL;
  }
  else
  {
    if ( (!*(_QWORD *)&v11[0]
       || (v8 = ValidateHwnd(*(_QWORD *)&v11[0])) == 0
       || (*(_BYTE *)(*(_QWORD *)(v8 + 40) + 18LL) & 4) == 0
       || *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) == *(_QWORD *)(gptiCurrent + 424LL))
      && (DWORD2(v11[0]) >= 0x400 || !(((unsigned __int16)MessageTable[DWORD2(v11[0])] >> 13) & 1)) )
    {
      v2 = xxxDispatchMessage(v11);
      goto LABEL_16;
    }
    v3 = 5LL;
  }
  UserSetLastError(v3);
LABEL_16:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v2;
}
