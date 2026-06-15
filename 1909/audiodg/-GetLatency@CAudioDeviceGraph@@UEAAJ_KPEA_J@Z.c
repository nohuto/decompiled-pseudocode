/*
 * XREFs of ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000B9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x14000BA90 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14000BC38 (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetLatency(CAudioDeviceGraph *this, unsigned __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v7; // rsi
  CPipeInstance *PipeInstance; // rdi
  int Latency; // ebx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  v7 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    if ( a3 )
    {
      PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
      if ( PipeInstance )
      {
        while ( 1 )
        {
          Latency = CPipeInstance::GetLatency(PipeInstance, &v11);
          if ( Latency < 0 )
            break;
          v7 += v11;
          PipeInstance = *(CPipeInstance **)PipeInstance;
          if ( !PipeInstance )
          {
            Latency = 0;
            *a3 = v7;
            goto LABEL_7;
          }
        }
      }
      else
      {
        Latency = -2005139430;
      }
    }
    else
    {
      Latency = -2147467261;
    }
  }
  else
  {
    Latency = -2005139437;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      29LL,
      &WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids,
      (unsigned int)Latency);
  }
  AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetLatency", 0x2B2u, Latency);
LABEL_7:
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)Latency;
}
