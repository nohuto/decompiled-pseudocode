/*
 * XREFs of NtUserDispatchMessage @ 0x1C0023C90
 * Callers:
 *     <none>
 * Callees:
 *     IsPointerInputMessage @ 0x1C0023E34 (IsPointerInputMessage.c)
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserDispatchMessage(__int128 *a1)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rcx
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h]
  __int128 v14; // [rsp+58h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v12 = *a1;
  v13 = a1[1];
  v14 = a1[2];
  v2 = DWORD2(v12);
  v3 = 0LL;
  if ( (DWORD2(v12) & 0xFFFE0000) != 0 )
  {
    v11 = 87LL;
    goto LABEL_16;
  }
  if ( (_QWORD)v12
    && ((v4 = ValidateHwnd(v12)) != 0
     && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 18LL) & 4) != 0
     && *(_QWORD *)(*(_QWORD *)(v4 + 16) + 416LL) != *(_QWORD *)(gptiCurrent + 416LL)
     || ((unsigned int)IsPointerInputMessage(DWORD2(v12)) && v2 != 595 || v2 == 528 && (_WORD)v13 == 582)
     && *((_QWORD *)&v13 + 1) >= (unsigned __int64)MmSystemRangeStart)
    || (v2 >= 0x400 ? (v5 = 0) : (v5 = ((unsigned __int16)MessageTable[v2] >> 13) & 1), v5) )
  {
    v11 = 5LL;
LABEL_16:
    UserSetLastError(v11);
    goto LABEL_13;
  }
  v3 = xxxDispatchMessage(&v12);
LABEL_13:
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v3;
}
