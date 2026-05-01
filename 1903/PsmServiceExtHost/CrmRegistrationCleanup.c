/*
 * XREFs of CrmRegistrationCleanup @ 0x18003CCEC
 * Callers:
 *     CrmSrvRegister @ 0x1800080F8 (CrmSrvRegister.c)
 *     CrmSrvUnregister @ 0x18003CBF4 (CrmSrvUnregister.c)
 *     CrmGlobalsCleanup @ 0x18007DFAC (CrmGlobalsCleanup.c)
 *     CrmGlobalsRegistrationsDeleteRoutine @ 0x18007E1BC (CrmGlobalsRegistrationsDeleteRoutine.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CrmGlobalsRegistrationRemove @ 0x18003CD74 (CrmGlobalsRegistrationRemove.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     CrmRegistrationRemoveActivity @ 0x18007E1F4 (CrmRegistrationRemoveActivity.c)
 */

void __fastcall CrmRegistrationCleanup(_QWORD *a1, int a2)
{
  _QWORD *i; // rdi
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  UUID *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  if ( a2 && a1[6] != -1LL )
    CrmGlobalsRegistrationRemove();
  for ( i = a1 + 7; (_QWORD *)*i != i; CrmRegistrationRemoveActivity(a1, *i, 0LL) )
    ;
  if ( dword_1800AB2F8 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 2uLL) )
    {
      v5 = a1[2];
      v10 = 0;
      v13 = 0;
      v6 = v5;
      v8 = &Uuid;
      v11 = &v6;
      v9 = 16;
      v12 = 8;
      TlgWrite(v4, &unk_18009AE3F, 0LL, 0LL, 4u, &pData);
    }
  }
}
