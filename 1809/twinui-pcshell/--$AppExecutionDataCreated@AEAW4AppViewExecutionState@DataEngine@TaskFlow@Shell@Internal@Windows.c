/*
 * XREFs of ??$AppExecutionDataCreated@AEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_KPEBG@TaskFlowDataEngineTelemetry@@SAXAEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_K$$QEAPEBG@Z @ 0x18008DBB4
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x18008E870 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Provider@TaskFlowDataEngineTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18006E8C4 (-Provider@TaskFlowDataEngineTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

int __fastcall TaskFlowDataEngineTelemetry::AppExecutionDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::AppViewExecutionState &,__int64 &,unsigned __int64 &,unsigned short const *>(
        int *a1,
        __int64 *a2,
        __int64 a3,
        const WCHAR **a4)
{
  const struct _TlgProvider_t *v8; // rax
  const WCHAR *v9; // rdx
  __int64 v10; // rcx
  TraceLoggingHProvider v11; // r10
  int v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  __int64 *v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  __int64 v20; // [rsp+80h] [rbp+17h]
  __int64 v21; // [rsp+88h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+27h] BYREF

  v8 = TaskFlowDataEngineTelemetry::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = *a4;
    v13 = *a1;
    v10 = *a2;
    v16 = &v13;
    v14 = v10;
    v17 = 4LL;
    v18 = &v14;
    v19 = 8LL;
    v20 = a3;
    v21 = 8LL;
    TlgCreateWsz(&pDesc, v9);
    LODWORD(v8) = TlgWrite(v11, &unk_1804553FD, 0LL, 0LL, 6u, &pData);
  }
  return (int)v8;
}
