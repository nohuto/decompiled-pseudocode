/*
 * XREFs of ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005DA50
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     McTemplateU0pqx @ 0x14005369C (McTemplateU0pqx.c)
 *     ?LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z @ 0x14005A47C (-LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AC88 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D7A0 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D7D0 (-IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessControl::Stop(CSpatialCrossProcessControl *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rax
  CSpatialCrossProcessBaseEndpoint *v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 1) + 32LL);
  v10 = 0;
  lpCriticalSection = v2;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (CSpatialCrossProcessBaseEndpoint *)*((_QWORD *)this + 1);
  if ( !*((_BYTE *)v3 + 96) )
  {
    v4 = -2005139437;
LABEL_7:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessControl::Stop", 171, v4);
    goto LABEL_10;
  }
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidFlags(v3) )
  {
    v4 = -2005139387;
    goto LABEL_7;
  }
  if ( !CSpatialCrossProcessBaseEndpoint::IsRunning(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
  {
    v4 = -2005139433;
    goto LABEL_7;
  }
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 144LL), 1);
  v5 = *((_QWORD *)this + 1);
  CSpatialCrossProcessEndpointTraceLogger::LogStreamControl(
    (CSpatialCrossProcessEndpointTraceLogger *)(v5 + 400),
    "Stop");
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v5 + 896) + 72LL), 0xFFFFFFF5);
  v4 = 0;
  if ( (byte_140087281 & 4) != 0 )
    McTemplateU0pqx(v7, v6, (__int64)this, 7);
LABEL_10:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
