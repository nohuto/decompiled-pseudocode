/*
 * XREFs of CrmRegistrationReadyQueueAdd @ 0x180031220
 * Callers:
 *     CrmActivityListenerCallback @ 0x180032CA0 (CrmActivityListenerCallback.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CrmRegistrationNotify @ 0x180031310 (CrmRegistrationNotify.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CrmRegistrationReadyQueueAdd(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  DWORD CurrentThreadId; // eax
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  BOOLEAN result; // al
  const struct _TlgProvider_t *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  UUID *v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  v2 = *(_QWORD *)(a1 + 16);
  RtlAcquireSRWLockExclusive(&qword_1800ABF48);
  CurrentThreadId = GetCurrentThreadId();
  v6 = (_QWORD *)qword_1800ABF60;
  LODWORD(qword_1800ABF50) = CurrentThreadId;
  v7 = (_QWORD *)(a2 + 24);
  if ( *(__int64 **)qword_1800ABF60 != &qword_1800ABF58 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 32) = qword_1800ABF60;
  *v7 = &qword_1800ABF58;
  *v6 = v7;
  LODWORD(qword_1800ABF50) = 0;
  qword_1800ABF60 = a2 + 24;
  RtlConvertSRWLockExclusiveToShared(&qword_1800ABF48);
  CrmRegistrationNotify(a1, a2, 0LL);
  result = RtlReleaseSRWLockShared(&qword_1800ABF48);
  if ( dword_1800AB2F8 > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL);
    if ( result )
    {
      v14 = 0;
      v17 = 0;
      v12 = &Uuid;
      v15 = &v10;
      v10 = v2;
      v13 = 16;
      v16 = 8;
      return TlgWrite(v9, &unk_18009A7D4, 0LL, 0LL, 4u, &pData);
    }
  }
  return result;
}
