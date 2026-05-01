/*
 * XREFs of ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z @ 0x180065810
 * Callers:
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18003FC90 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(
        ExecutionModel::ResourceManager *this,
        unsigned __int64 a2,
        struct ExecutionModel::BaseResourceSet *a3)
{
  __int64 v3; // r9
  unsigned __int64 *v4; // r9
  unsigned __int64 v5; // rax
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  __int64 *v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  __int64 *v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  __int64 v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  __int64 v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  *((_QWORD *)this + 6) += a2;
  v3 = *((_QWORD *)this + 4);
  v10 = a2;
  if ( (*(_BYTE *)(v3 + 1272) & 4) == 0 )
  {
    v4 = (unsigned __int64 *)(v3 + 128);
    v5 = *v4;
    if ( a2 < *v4 )
      v5 = a2;
    v11 = v5;
    v9 = a2 - v5;
    *v4 -= v5;
    *((_QWORD *)this + 7) += v9;
    if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v14 = 8LL;
        v13 = (__int64 *)&v10;
        v15 = (__int64 *)&v11;
        v17 = (__int64 *)&v9;
        v16 = 8LL;
        v18 = 8LL;
        v19 = v7;
        v20 = 8LL;
        v21 = v8;
        v22 = 8LL;
        TlgWrite(v6, &unk_180092E8E, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
