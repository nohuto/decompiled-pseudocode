/*
 * XREFs of CmpThreadInfoLogStack @ 0x1401B3194
 * Callers:
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     CmpRecordRegistryLockAcquire @ 0x1401B3134 (CmpRecordRegistryLockAcquire.c)
 *     CmpRecordRegistryLockRelease @ 0x1401B3164 (CmpRecordRegistryLockRelease.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteAgg @ 0x140012A30 (_TlgWriteAgg.c)
 *     RtlWalkFrameChain @ 0x1400CCC50 (RtlWalkFrameChain.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

char CmpThreadInfoLogStack()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  _BYTE *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-A0h]
  __int64 v10; // [rsp+68h] [rbp-98h]
  _QWORD *v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  __int64 *v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  PVOID Callers[10]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v16[10]; // [rsp+E0h] [rbp-20h] BYREF

  memset(Callers, 0, sizeof(Callers));
  memset(v16, 0, sizeof(v16));
  v0 = 10LL;
  RtlWalkFrameChain(Callers, 0xAu, 0);
  v1 = 0LL;
  do
  {
    v2 = Callers[v1];
    if ( v2 >= PsNtosImageBase && (unsigned __int64)v2 <= PsNtosImageEnd )
    {
      v2 -= (unsigned __int64)PsNtosImageBase;
      v16[v1] = v2;
    }
    ++v1;
    --v0;
  }
  while ( v0 );
  if ( stru_140400AA0.LevelPlus1 > 5 )
  {
    LOBYTE(v2) = TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      v6 = 1LL;
      v9 = &v6;
      v11 = v16;
      v13 = &v7;
      v7 = 0x1000000LL;
      v10 = 8LL;
      v12 = 80LL;
      v14 = 8LL;
      LOBYTE(v2) = TlgWriteAgg((__int64)&stru_140400AA0, (unsigned __int8 *)dword_14036CAF9, v3, v4, 5u, &v8);
    }
  }
  return (char)v2;
}
