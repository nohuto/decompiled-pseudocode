/*
 * XREFs of ?RemoveFromDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x1801239D4
 * Callers:
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x1801248BC (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1A30 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Sarm::CEndpointResourcePool::RemoveFromDynamicPool(
        Sarm::CEndpointResourcePool *this,
        unsigned int Data1)
{
  __int64 v3; // rax
  const GUID *v4; // r8
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v8; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-45h] BYREF
  Sarm::CEndpointResourcePool *v10; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  GUID *p_pRelatedActivityId; // [rsp+60h] [rbp-19h]
  __int64 v13; // [rsp+68h] [rbp-11h]
  __int64 v14; // [rsp+70h] [rbp-9h]
  __int64 v15; // [rsp+78h] [rbp-1h]
  const GUID *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  unsigned int *v18; // [rsp+90h] [rbp+17h]
  __int64 v19; // [rsp+98h] [rbp+1Fh]
  unsigned int *v20; // [rsp+A0h] [rbp+27h]
  __int64 v21; // [rsp+A8h] [rbp+2Fh]
  Sarm::CEndpointResourcePool **v22; // [rsp+B0h] [rbp+37h]
  __int64 v23; // [rsp+B8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  GUID pRelatedActivityId; // [rsp+E8h] [rbp+6Fh] BYREF

  pRelatedActivityId.Data1 = Data1;
  v3 = *((_QWORD *)this + 2);
  if ( !v3 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      119LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0100LL);
    __debugbreak();
  }
  v4 = (const GUID *)(v3 + 20);
  v5 = v3 + 24;
  v6 = *(_DWORD *)(v3 + 20) - *(_DWORD *)(v3 + 24);
  v8 = v6;
  if ( (unsigned int)dword_1801B5350 > 4 )
  {
    v14 = v5;
    v9 = v6 - Data1;
    v18 = &v8;
    v20 = &v9;
    p_pRelatedActivityId = &pRelatedActivityId;
    v22 = &v10;
    v13 = 4LL;
    v15 = 4LL;
    v16 = v4;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 4LL;
    v10 = this;
    v23 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B5350, &unk_18017979E, v4, &pRelatedActivityId, 8u, &pData);
    Data1 = pRelatedActivityId.Data1;
    v6 = v8;
  }
  if ( Data1 <= v6 )
  {
    *(_DWORD *)(*((_QWORD *)this + 2) + 24LL) += Data1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0102LL);
    return 2289828098LL;
  }
}
