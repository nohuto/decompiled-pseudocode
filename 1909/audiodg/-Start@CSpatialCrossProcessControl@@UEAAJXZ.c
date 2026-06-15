/*
 * XREFs of ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D890
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqx @ 0x1400535AC (McTemplateU0pqx.c)
 *     ?LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z @ 0x14005A3BC (-LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D6E0 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D710 (-IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessControl::Start(CSpatialCrossProcessControl *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rax
  _BYTE *v3; // rcx
  int v4; // ebx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 1) + 32LL);
  v10 = 0;
  lpCriticalSection = v2;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (_BYTE *)*((_QWORD *)this + 1);
  if ( !v3[96] )
  {
    v4 = -2005139437;
LABEL_3:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessControl::Start", 126, v4);
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 72LL))(v3);
  if ( v4 < 0 )
    goto LABEL_3;
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidFlags(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
  {
    v4 = -2005139387;
    goto LABEL_3;
  }
  if ( CSpatialCrossProcessBaseEndpoint::IsRunning(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
  {
    v4 = -2005139434;
    goto LABEL_3;
  }
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 144LL), 1);
  v6 = *((_QWORD *)this + 1);
  CSpatialCrossProcessEndpointTraceLogger::LogStreamControl(
    (CSpatialCrossProcessEndpointTraceLogger *)(v6 + 400),
    "Start");
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v6 + 896) + 72LL), 2u);
  v4 = 0;
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqx(v8, v7, (__int64)this, 6);
LABEL_4:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
