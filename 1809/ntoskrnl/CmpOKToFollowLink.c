/*
 * XREFs of CmpOKToFollowLink @ 0x1406421F0
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteAgg @ 0x140012A30 (_TlgWriteAgg.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall CmpOKToFollowLink(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  if ( !a1 || a1 == (_QWORD *)a2 )
    return 1;
  if ( (*(_DWORD *)(a2 + 4152) & 1) != 0 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v4 = *(_QWORD **)(a2 + 4160);
    if ( v4 != (_QWORD *)(a2 + 4160) )
    {
      while ( v4 - 520 != a1 )
      {
        v4 = (_QWORD *)*v4;
        if ( v4 == (_QWORD *)(a2 + 4160) )
          goto LABEL_7;
      }
      ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
      return 1;
    }
LABEL_7:
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  }
  if ( PsIsCurrentThreadInServerSilo() && stru_140400AA0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140400AA0, 0x200000010000uLL) )
    {
      v8 = 0x1000000LL;
      v10 = &v8;
      v11 = 8LL;
      TlgWriteAgg((__int64)&stru_140400AA0, (unsigned __int8 *)dword_14036CB99, v5, v6, 3u, &pData);
      LODWORD(v6) = stru_140400AA0.LevelPlus1;
    }
    if ( (unsigned int)v6 > 5 )
    {
      if ( TlgKeywordOn(&stru_140400AA0, 0LL) )
        TlgWrite(&stru_140400AA0, &unk_14036CB62, 0LL, 0LL, 2u, &pData);
    }
  }
  return 0;
}
