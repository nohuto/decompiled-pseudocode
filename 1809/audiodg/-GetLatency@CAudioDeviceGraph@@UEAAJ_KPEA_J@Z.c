/*
 * XREFs of ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x140009640
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140009760 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140032A10 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetLatency(CAudioDeviceGraph *this, CPipeInstance *a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v7; // rsi
  _QWORD *v8; // rax
  CPipeInstance *v9; // rbx
  int Latency; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  v7 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( !*((_DWORD *)this + 64) )
  {
    Latency = -2005139437;
    goto LABEL_16;
  }
  if ( !a3 )
  {
    Latency = -2147467261;
    goto LABEL_16;
  }
  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = (_QWORD *)*((_QWORD *)this + 21);
  if ( !v8 )
  {
LABEL_12:
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
LABEL_14:
    Latency = -2005139430;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v9 = (CPipeInstance *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( v9 == a2 )
      break;
    if ( !v8 )
      goto LABEL_12;
  }
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( !v9 )
    goto LABEL_14;
  while ( 1 )
  {
    Latency = CPipeInstance::GetLatency(v9, &v14);
    if ( Latency < 0 )
      break;
    v7 += v14;
    v9 = *(CPipeInstance **)v9;
    if ( !v9 )
    {
      Latency = 0;
      *a3 = v7;
      goto LABEL_9;
    }
  }
LABEL_16:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      29LL,
      &WPP_c996c122903733bc288a845a1996e411_Traceguids,
      (unsigned int)Latency);
  }
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetLatency", 0x2A6u, Latency);
LABEL_9:
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)Latency;
}
