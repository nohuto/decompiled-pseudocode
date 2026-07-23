/*
 * XREFs of PpmPerfTelemetryWorker @ 0x1407075E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x14013BB40 (PopOkayToQueueNextWorkItem.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14016C924 (PpmPerfUpdateQosDisableReasons.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 PpmPerfTelemetryWorker()
{
  _QWORD *v0; // r10
  _DWORD *v1; // r11
  unsigned __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // kr00_8
  unsigned __int128 v6; // rax
  int v8; // [rsp+38h] [rbp-39h] BYREF
  int v9; // [rsp+3Ch] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  int *v11; // [rsp+68h] [rbp-9h]
  __int64 v12; // [rsp+70h] [rbp-1h]
  int *v13; // [rsp+78h] [rbp+7h]
  __int64 v14; // [rsp+80h] [rbp+Fh]
  _BYTE *v15; // [rsp+88h] [rbp+17h]
  __int64 v16; // [rsp+90h] [rbp+1Fh]
  _BYTE v17[40]; // [rsp+98h] [rbp+27h] BYREF

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfUpdateQosDisableReasons(0LL);
  v0 = &unk_140542B20;
  v1 = v17;
  v2 = qword_140542AB8 - qword_140542AC0;
  qword_140542AC0 = qword_140542AB8;
  v3 = 9LL;
  v4 = v2 / 0x989680;
  v5 = qword_140542AC8 - qword_140542AD0;
  qword_140542AD0 = qword_140542AC8;
  do
  {
    v6 = (unsigned __int64)(*(v0 - 9) - *v0) * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
    *v0 = *(v0 - 9);
    ++v0;
    *v1++ = *((_QWORD *)&v6 + 1) >> 23;
    --v3;
  }
  while ( v3 );
  PpmReleaseLock(&PpmPerfPolicyLock);
  if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
  {
    v8 = v4;
    v11 = &v8;
    v13 = &v9;
    v15 = v17;
    v9 = v5 / 0x989680;
    v12 = 4LL;
    v14 = 4LL;
    v16 = 36LL;
    TlgWrite(&pCallbackContext, &unk_14036F8F1, 0LL, 0LL, 5u, &pData);
  }
  return PopOkayToQueueNextWorkItem((__int64)&unk_140419988);
}
