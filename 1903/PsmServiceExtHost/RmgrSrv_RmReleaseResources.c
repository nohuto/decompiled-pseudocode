/*
 * XREFs of RmgrSrv_RmReleaseResources @ 0x18003D530
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x18003D65C (-RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RmReleaseResources(ExecutionModel::ResourceManager *a1)
{
  struct ExecutionModel::ResourceHandle__ *v2; // rax
  unsigned int v3; // r9d
  unsigned int v5; // [rsp+30h] [rbp-50h] BYREF
  struct ExecutionModel::ResourceHandle__ *v6; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  unsigned int *v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v2 = *(struct ExecutionModel::ResourceHandle__ **)a1;
    v10 = 0;
    v6 = v2;
    v8 = (unsigned int *)&v6;
    v9 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800927DD, 0LL, 0LL, 3u, &pData);
  }
  if ( a1 )
    v3 = ExecutionModel::ResourceManager::RmReleaseResources(a1, *(struct ExecutionModel::ResourceHandle__ **)a1);
  else
    v3 = -2147024882;
  v5 = v3;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v10 = 0;
    v8 = &v5;
    v9 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009248D, 0LL, 0LL, 3u, &pData);
    v3 = v5;
  }
  if ( a1 )
    *(_QWORD *)a1 = 0LL;
  return v3;
}
