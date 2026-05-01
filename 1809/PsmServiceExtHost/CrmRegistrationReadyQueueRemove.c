/*
 * XREFs of CrmRegistrationReadyQueueRemove @ 0x180034D48
 * Callers:
 *     CrmActivityCleanup @ 0x1800067E4 (CrmActivityCleanup.c)
 *     CrmActivityListenerCallback @ 0x180033AE0 (CrmActivityListenerCallback.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     CrmRegistrationNotify @ 0x180034BE0 (CrmRegistrationNotify.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmRegistrationReadyQueueRemove(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  TLG_STATUS result; // eax
  __int64 v12; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  UUID *v14; // [rsp+60h] [rbp-48h]
  int v15; // [rsp+68h] [rbp-40h]
  int v16; // [rsp+6Ch] [rbp-3Ch]
  __int64 *v17; // [rsp+70h] [rbp-38h]
  int v18; // [rsp+78h] [rbp-30h]
  int v19; // [rsp+7Ch] [rbp-2Ch]

  v3 = *(_QWORD *)(a1 + 16);
  v7 = 0;
  RtlAcquireSRWLockExclusive(&qword_18009BC78);
  LODWORD(qword_18009BC80) = GetCurrentThreadId();
  v8 = (_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 != a2 + 16 )
  {
    v7 = 1;
    if ( *(_QWORD **)(v9 + 8) != v8 || (v10 = *(_QWORD **)(a2 + 24), (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
  }
  *(_QWORD *)(a2 + 24) = a2 + 16;
  *v8 = v8;
  LODWORD(qword_18009BC80) = 0;
  if ( a3 )
  {
    RtlConvertSRWLockExclusiveToShared(&qword_18009BC78);
    CrmRegistrationNotify(a1, a2, 1u);
    result = RtlReleaseSRWLockShared(&qword_18009BC78);
  }
  else
  {
    result = RtlReleaseSRWLockExclusive(&qword_18009BC78);
  }
  if ( v7 )
  {
    if ( dword_18009B128 > 5u )
    {
      v16 = 0;
      v19 = 0;
      v14 = &Uuid;
      v17 = &v12;
      v12 = v3;
      v15 = 16;
      v18 = 8;
      return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008C769, 0LL, 0LL, 4u, &pData);
    }
  }
  return result;
}
