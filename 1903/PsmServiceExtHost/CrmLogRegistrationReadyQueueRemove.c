/*
 * XREFs of CrmLogRegistrationReadyQueueRemove @ 0x18003D098
 * Callers:
 *     CrmRegistrationReadyQueueRemove @ 0x180031718 (CrmRegistrationReadyQueueRemove.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void CrmLogRegistrationReadyQueueRemove()
{
  const struct _TlgProvider_t *v0; // rcx
  __int64 v1; // r9
  __int64 v2; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  UUID *v4; // [rsp+60h] [rbp-38h]
  int v5; // [rsp+68h] [rbp-30h]
  int v6; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v7; // [rsp+70h] [rbp-28h]
  int v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+7Ch] [rbp-1Ch]

  if ( dword_1800AB2F8 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 1uLL) )
    {
      v6 = 0;
      v9 = 0;
      v4 = &Uuid;
      v7 = &v2;
      v2 = v1;
      v5 = 16;
      v8 = 8;
      TlgWrite(v0, &unk_18009A68F, 0LL, 0LL, 4u, &pData);
    }
  }
}
