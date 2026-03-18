/*
 * XREFs of NtUserDispatchMessage @ 0x1C002AC70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IsPointerInputMessage @ 0x1C002ADA0 (IsPointerInputMessage.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserDispatchMessage(_OWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v10; // rcx
  _OWORD v11[4]; // [rsp+38h] [rbp-40h] BYREF

  memset(v11, 0, 0x30uLL);
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v11[0] = *a1;
  v11[1] = a1[1];
  v11[2] = a1[2];
  v4 = DWORD2(v11[0]);
  v5 = 0LL;
  if ( (DWORD2(v11[0]) & 0xFFFE0000) != 0 )
  {
    v10 = 87LL;
    goto LABEL_16;
  }
  if ( *(_QWORD *)&v11[0]
    && ((v6 = ValidateHwnd(*(_QWORD *)&v11[0])) != 0
     && (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 18LL) & 4) != 0
     && (v4 = *(_QWORD *)(v6 + 16), *(_QWORD *)(v4 + 416) != *(_QWORD *)(gptiCurrent + 416LL))
     || ((unsigned int)IsPointerInputMessage(DWORD2(v11[0])) && (_DWORD)v4 != 595
      || (_DWORD)v4 == 528 && LOWORD(v11[1]) == 582)
     && *((_QWORD *)&v11[1] + 1) >= (unsigned __int64)MmSystemRangeStart)
    || ((unsigned int)v4 >= 0x400 ? (v7 = 0) : (v7 = ((unsigned __int16)MessageTable[(unsigned int)v4] >> 13) & 1), v7) )
  {
    v10 = 5LL;
LABEL_16:
    UserSetLastError(v10, v4, v2, v3);
    goto LABEL_13;
  }
  v5 = xxxDispatchMessage(v11);
LABEL_13:
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
