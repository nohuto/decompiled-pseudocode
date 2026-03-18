/*
 * XREFs of NtUserSetDisplayMapping @ 0x1C02348C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _SetDisplayMapping @ 0x1C01F0450 (_SetDisplayMapping.c)
 */

__int64 __fastcall NtUserSetDisplayMapping(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // [rsp+40h] [rbp+18h] BYREF
  int v18; // [rsp+44h] [rbp+1Ch]
  char v19; // [rsp+48h] [rbp+20h] BYREF

  v18 = -1;
  v17 = 0x2000;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
  v7 = 0;
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 872LL, &v17) )
  {
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 416LL), 0LL, 10LL);
LABEL_3:
    v11 = 5LL;
LABEL_4:
    UserSetLastError(v11, v8, v9, v10);
    goto LABEL_5;
  }
  LOBYTE(v4) = 19;
  v14 = HMValidateHandle(a1, v4, v5, v6);
  v15 = v14;
  if ( !v14 || (*(_DWORD *)(v14 + 200) & 0x80u) == 0 )
  {
    UserSetLastError(6LL, v8, v9, v10);
    v11 = 6LL;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v14 + 184) & 0x2000) != 0 )
  {
    UserSetLastError(5LL, v8, v9, v10);
    goto LABEL_3;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v14 + 480) + 24LL) - 6) <= 1 )
    goto LABEL_3;
  v16 = ValidateHmonitor(a2);
  if ( v16 )
  {
    v7 = 1;
    if ( ValidateHmonitorNoRip(*(_QWORD *)(v15 + 1328)) != v16 )
      v7 = SetDisplayMapping(*(_QWORD *)(v15 + 480), v16);
    *(_DWORD *)(v15 + 1336) = 1;
  }
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
  UserSessionSwitchLeaveCrit(v12);
  return v7;
}
