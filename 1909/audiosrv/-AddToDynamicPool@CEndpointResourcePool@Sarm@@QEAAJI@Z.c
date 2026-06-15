/*
 * XREFs of ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x180123584
 * Callers:
 *     ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x180123CB8 (-CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x1801247FC (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1A30 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Sarm::CEndpointResourcePool::AddToDynamicPool(Sarm::CEndpointResourcePool *this, unsigned int Data1)
{
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // eax
  int v7; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-45h] BYREF
  Sarm::CEndpointResourcePool *v9; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  GUID *p_pActivityId; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  __int64 v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  __int64 v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  int *v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  unsigned int *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  Sarm::CEndpointResourcePool **v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  GUID pActivityId; // [rsp+E8h] [rbp+6Fh] BYREF

  pActivityId.Data1 = Data1;
  v3 = *((_QWORD *)this + 2);
  if ( !v3 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      95LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0100LL);
    __debugbreak();
  }
  v4 = *(_DWORD *)(v3 + 20) - *(_DWORD *)(v3 + 24);
  v7 = v4;
  if ( (unsigned int)dword_1801B5350 > 4 )
  {
    v13 = v3 + 24;
    v8 = Data1 + v4;
    v17 = &v7;
    v19 = &v8;
    p_pActivityId = &pActivityId;
    v21 = &v9;
    v12 = 4LL;
    v14 = 4LL;
    v15 = v3 + 20;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    v9 = this;
    v22 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B5350, &unk_180179745, &pActivityId, (LPCGUID)(v3 + 20), 8u, &pData);
    v3 = *((_QWORD *)this + 2);
    Data1 = pActivityId.Data1;
  }
  v5 = *(_DWORD *)(v3 + 24);
  if ( Data1 <= v5 )
  {
    *(_DWORD *)(v3 + 24) = v5 - Data1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0101LL);
    return 2289828097LL;
  }
}
