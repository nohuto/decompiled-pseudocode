/*
 * XREFs of ?LogTimedOutRevocationRequests@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180031A50
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x1800407A0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::LogTimedOutRevocationRequests(ExecutionModel::ResourceManager *this)
{
  _QWORD *v1; // rsi
  DWORD TickCount; // eax
  _QWORD *v3; // rbx
  DWORD v4; // ebp
  __int64 v5; // rdi
  int v6; // r9d
  int v7; // [rsp+30h] [rbp-98h] BYREF
  int v8; // [rsp+34h] [rbp-94h] BYREF
  int v9; // [rsp+38h] [rbp-90h] BYREF
  __int64 v10; // [rsp+40h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v12; // [rsp+70h] [rbp-58h]
  __int64 v13; // [rsp+78h] [rbp-50h]
  int *v14; // [rsp+80h] [rbp-48h]
  __int64 v15; // [rsp+88h] [rbp-40h]
  int *v16; // [rsp+90h] [rbp-38h]
  __int64 v17; // [rsp+98h] [rbp-30h]
  int *v18; // [rsp+A0h] [rbp-28h]
  __int64 v19; // [rsp+A8h] [rbp-20h]

  v1 = (_QWORD *)(*((_QWORD *)this + 6) + 160LL);
  TickCount = GetTickCount();
  v3 = (_QWORD *)*v1;
  v4 = TickCount;
  while ( v3 != v1 )
  {
    v5 = v3[2];
    if ( (*(_BYTE *)(v5 + 1404) & 1) != 0 )
    {
      if ( *(_DWORD *)(v5 + 1400) )
      {
        v6 = *(_DWORD *)(v5 + 1452);
        if ( (v6 & 2) == 0 && v4 - *(_DWORD *)(v5 + 1892) >= 0x2710 )
        {
          if ( dword_18009B0B0 > 4u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
            {
              v10 = *(_QWORD *)(v5 + 1872);
              v12 = &v10;
              v7 = *(_DWORD *)(v5 + 1456);
              v14 = &v7;
              v8 = *(_DWORD *)(v5 + 1472);
              v16 = &v8;
              v9 = *(_DWORD *)(v5 + 136);
              v18 = &v9;
              v13 = 8LL;
              v15 = 4LL;
              v17 = 4LL;
              v19 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180084EC9, 0LL, 0LL, 6u, &pData);
              v6 = *(_DWORD *)(v5 + 1452);
            }
          }
          *(_DWORD *)(v5 + 1452) = v6 | 2;
        }
      }
    }
    v3 = (_QWORD *)*v3;
  }
}
