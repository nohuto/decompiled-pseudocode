/*
 * XREFs of ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180058D48
 * Callers:
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180018D90 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x180040580 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180017FCC (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::ReplenishIoCounterPool(
        ExecutionModel::ResourceManager *this,
        unsigned __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rdx
  const struct _TlgProvider_t *v8; // rcx
  unsigned __int64 v9; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v12; // [rsp+68h] [rbp-9h]
  int v13; // [rsp+70h] [rbp-1h]
  int v14; // [rsp+74h] [rbp+3h]
  __int64 *v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  __int64 *v18; // [rsp+88h] [rbp+17h]
  int v19; // [rsp+90h] [rbp+1Fh]
  int v20; // [rsp+94h] [rbp+23h]
  _QWORD *v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]
  _QWORD *v24; // [rsp+A8h] [rbp+37h]
  int v25; // [rsp+B0h] [rbp+3Fh]
  int v26; // [rsp+B4h] [rbp+43h]
  unsigned __int64 v27; // [rsp+E0h] [rbp+6Fh] BYREF

  v27 = a2;
  v2 = *((_QWORD *)this + 6);
  if ( (*(_BYTE *)(v2 + 1392) & 4) == 0 )
  {
    v3 = (_QWORD *)((char *)this + 72);
    v4 = a2;
    v5 = *((_QWORD *)this + 9);
    v6 = (_QWORD *)(v2 + 248);
    if ( v5 < a2 )
      v4 = *((_QWORD *)this + 9);
    v7 = a2 - v4;
    v10 = v4;
    v9 = v7;
    *v3 = v5 - v4;
    *v6 += v7;
    if ( v9 )
      ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(this);
    if ( dword_18009B0B0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v12 = (__int64 *)&v27;
        v15 = (__int64 *)&v9;
        v18 = (__int64 *)&v10;
        v13 = 8;
        v16 = 8;
        v19 = 8;
        v21 = v6;
        v22 = 8;
        v24 = v3;
        v25 = 8;
        TlgWrite(v8, &unk_180084DBD, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
