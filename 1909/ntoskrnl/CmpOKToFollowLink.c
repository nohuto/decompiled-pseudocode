/*
 * XREFs of CmpOKToFollowLink @ 0x1405BDD90
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     _TlgWriteAgg @ 0x14008BAEC (_TlgWriteAgg.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
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
  if ( PsIsCurrentThreadInServerSilo() && stru_140425BC0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140425BC0, 0x200000010000uLL) )
    {
      v8 = 0x1000000LL;
      v10 = &v8;
      v11 = 8LL;
      TlgWriteAgg((__int64)&stru_140425BC0, (unsigned __int8 *)dword_14038B8C0, v5, v6, 3u, &pData);
      LODWORD(v6) = stru_140425BC0.LevelPlus1;
    }
    if ( (unsigned int)v6 > 5 )
    {
      if ( TlgKeywordOn(&stru_140425BC0, 0LL) )
        TlgWrite(&stru_140425BC0, &unk_14038B889, 0LL, 0LL, 2u, &pData);
    }
  }
  return 0;
}
