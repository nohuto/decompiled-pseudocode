/*
 * XREFs of NtUserDispatchMessage @ 0x1C0024800
 * Callers:
 *     <none>
 * Callees:
 *     IsPointerInputMessage @ 0x1C0024930 (IsPointerInputMessage.c)
 *     xxxDispatchMessage @ 0x1C0024958 (xxxDispatchMessage.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserDispatchMessage(_OWORD *a1)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v8; // rcx
  _OWORD v9[4]; // [rsp+38h] [rbp-40h] BYREF

  memset(v9, 0, 0x30uLL);
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v9[0] = *a1;
  v9[1] = a1[1];
  v9[2] = a1[2];
  v2 = DWORD2(v9[0]);
  v3 = 0LL;
  if ( (DWORD2(v9[0]) & 0xFFFE0000) != 0 )
  {
    v8 = 87LL;
    goto LABEL_16;
  }
  if ( *(_QWORD *)&v9[0]
    && ((v4 = ValidateHwnd(*(_QWORD *)&v9[0])) != 0
     && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 18LL) & 4) != 0
     && *(_QWORD *)(*(_QWORD *)(v4 + 16) + 416LL) != *(_QWORD *)(gptiCurrent + 416LL)
     || ((unsigned int)IsPointerInputMessage(DWORD2(v9[0])) && v2 != 595 || v2 == 528 && LOWORD(v9[1]) == 582)
     && *((_QWORD *)&v9[1] + 1) >= (unsigned __int64)MmSystemRangeStart)
    || (v2 >= 0x400 ? (v5 = 0) : (v5 = ((unsigned __int16)MessageTable[v2] >> 13) & 1), v5) )
  {
    v8 = 5LL;
LABEL_16:
    UserSetLastError(v8);
    goto LABEL_13;
  }
  v3 = xxxDispatchMessage(v9);
LABEL_13:
  UserSessionSwitchLeaveCrit(v6);
  return v3;
}
