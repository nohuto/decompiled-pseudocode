/*
 * XREFs of NtUserSetDisplayMapping @ 0x1C02342A0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _SetDisplayMapping @ 0x1C01F02D0 (_SetDisplayMapping.c)
 */

__int64 __fastcall NtUserSetDisplayMapping(unsigned __int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // [rsp+40h] [rbp+18h] BYREF
  int v15; // [rsp+44h] [rbp+1Ch]
  char v16; // [rsp+48h] [rbp+20h] BYREF

  v15 = -1;
  v14 = 0x2000;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  v4 = 0;
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 872LL, &v14) )
  {
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 416LL), 0LL, 10LL);
LABEL_3:
    v8 = 5LL;
LABEL_4:
    UserSetLastError(v8, v5, v6, v7);
    goto LABEL_5;
  }
  v11 = HMValidateHandle(a1, 19);
  v12 = v11;
  if ( !v11 || (*(_DWORD *)(v11 + 200) & 0x80u) == 0 )
  {
    UserSetLastError(6LL, v5, v6, v7);
    v8 = 6LL;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v11 + 184) & 0x2000) != 0 )
  {
    UserSetLastError(5LL, v5, v6, v7);
    goto LABEL_3;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v11 + 480) + 24LL) - 6) <= 1 )
    goto LABEL_3;
  v13 = ValidateHmonitor(a2);
  if ( v13 )
  {
    v4 = 1;
    if ( ValidateHmonitorNoRip(*(_QWORD *)(v12 + 1344)) != v13 )
      v4 = SetDisplayMapping(*(_QWORD *)(v12 + 480), v13);
    *(_DWORD *)(v12 + 1352) = 1;
  }
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
  UserSessionSwitchLeaveCrit(v9);
  return v4;
}
