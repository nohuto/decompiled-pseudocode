/*
 * XREFs of ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D730
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     McTemplateU0pqx @ 0x1400535AC (McTemplateU0pqx.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D6E0 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D710 (-IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ @ 0x14005D814 (-ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessControl::Reset(CSpatialCrossProcessControl *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rax
  CSpatialCrossProcessBaseEndpoint *v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 1) + 32LL);
  v9 = 0;
  lpCriticalSection = v2;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (CSpatialCrossProcessBaseEndpoint *)*((_QWORD *)this + 1);
  if ( !*((_BYTE *)v3 + 96) )
  {
    v4 = -2005139437;
LABEL_10:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessControl::Reset", 74, v4);
    goto LABEL_11;
  }
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidFlags(v3) )
  {
    v4 = -2005139387;
    goto LABEL_10;
  }
  if ( CSpatialCrossProcessBaseEndpoint::IsRunning(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
  {
    v4 = -2005139434;
    goto LABEL_10;
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 152LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 1) + 160LL) = 0LL;
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 144LL), 1);
  v4 = CSpatialCrossProcessBaseEndpoint::ResetStream(*((CSpatialCrossProcessBaseEndpoint **)this + 1));
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqx(v6, v5, (__int64)this, 8);
  if ( v4 < 0 )
    goto LABEL_10;
LABEL_11:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
