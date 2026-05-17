/*
 * XREFs of RtlCloneUserProcess @ 0x1800D6770
 * Callers:
 *     sub_1800D6400 @ 0x1800D6400 (sub_1800D6400.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x18006D270 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007D130 (RtlAcquireReleaseSRWLockExclusive.c)
 *     sub_180089DB0 @ 0x180089DB0 (sub_180089DB0.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800D4F38 @ 0x1800D4F38 (sub_1800D4F38.c)
 *     sub_1800D5668 @ 0x1800D5668 (sub_1800D5668.c)
 *     sub_1800D5D4C @ 0x1800D5D4C (sub_1800D5D4C.c)
 *     sub_1800DE328 @ 0x1800DE328 (sub_1800DE328.c)
 *     sub_1800DE3D0 @ 0x1800DE3D0 (sub_1800DE3D0.c)
 *     sub_1800EF084 @ 0x1800EF084 (sub_1800EF084.c)
 *     sub_1800EF8F8 @ 0x1800EF8F8 (sub_1800EF8F8.c)
 */

__int64 __fastcall RtlCloneUserProcess(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  int v8; // esi
  int v9; // ebp
  int v10; // r15d
  int v11; // edi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  volatile signed __int64 *v16; // rbx
  __int64 v17; // r14
  int v18; // ebx
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // ebp
  unsigned int v22; // ebx
  __int64 v23; // rcx
  _QWORD v24[8]; // [rsp+30h] [rbp-68h] BYREF

  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225711LL;
  v8 = 2;
  v9 = 2 * (a1 & 2);
  v10 = a1 & 1;
  v11 = a1 & 4;
  if ( (a1 & 4) != 0 )
    goto LABEL_11;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return (unsigned int)-1073741420;
  sub_18002E73C(0);
  sub_18002D7BC(v12);
  RtlEnterCriticalSection((__int64)&unk_1801652C0);
  sub_1800DE3D0();
  RtlEnterCriticalSection((__int64)&unk_180164FE0);
  RtlAcquireSRWLockShared(&qword_1801661B8, v13, v14, v15);
  v16 = (volatile signed __int64 *)&unk_1801661C8;
  v17 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v16);
    v16 += 2;
    --v17;
  }
  while ( v17 );
  RtlAcquireSRWLockExclusive(&qword_180166380);
  sub_1800D5D4C(0);
  v18 = sub_1800EF084();
  if ( v18 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&qword_1801662F8);
    RtlAcquireSRWLockExclusive(&qword_1801662E8);
    v18 = 0;
    byte_180164EF9 = 1;
  }
  else
  {
    sub_1800D5D4C(2);
    RtlReleaseSRWLockExclusive(&qword_180166380);
    sub_1800D5668(0);
    RtlLeaveCriticalSection((__int64)&unk_180164FE0);
    sub_1800DE328(v19, 0LL);
    sub_1800D4F38(0);
  }
  if ( v18 < 0 )
    return (unsigned int)v18;
LABEL_11:
  memset(v24, 0, 0x38uLL);
  v24[1] = a2;
  LOWORD(v24[0]) = 1;
  v24[2] = a3;
  v24[4] = a4;
  v20 = sub_180089DB0(0LL, 0LL, v9, v10, (__int64)v24, a5);
  v21 = v20;
  if ( !v11 )
  {
    if ( v20 == 297 )
    {
      qword_1801662F8 = 1LL;
      v22 = 1;
      v8 = 1;
      qword_180164FF0 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
      dword_180164FE8 = -2;
      dword_180164FEC = 1;
      qword_180164FF8 = 0LL;
    }
    else
    {
      byte_180164EF9 = 0;
      v22 = 0;
      RtlReleaseSRWLockExclusive(&qword_1801662E8);
    }
    RtlReleaseSRWLockExclusive(&qword_1801662F8);
    sub_1800D5D4C(v8);
    if ( v8 == 1 )
      qword_180166380 = 1LL;
    else
      RtlReleaseSRWLockExclusive(&qword_180166380);
    sub_1800EF8F8(v22);
    sub_1800D5668(v22);
    RtlLeaveCriticalSection((__int64)&unk_180164FE0);
    sub_1800DE328(v23, v22);
    sub_1800D4F38(v22);
    if ( v22 )
    {
      byte_180164EF9 = 0;
      RtlAcquireReleaseSRWLockExclusive(&qword_1801662E8);
      RtlWakeAllConditionVariable(&qword_1801662F0);
    }
  }
  return v21;
}
