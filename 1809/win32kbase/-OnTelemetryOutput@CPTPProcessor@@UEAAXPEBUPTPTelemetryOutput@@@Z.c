/*
 * XREFs of ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C014B4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0098594 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     EtwTracePTPElasticDragModeStart @ 0x1C00E7970 (EtwTracePTPElasticDragModeStart.c)
 *     EtwTracePTPElasticDragModeStop @ 0x1C00E79A0 (EtwTracePTPElasticDragModeStop.c)
 *     EtwTraceTouchPadAAP @ 0x1C00E8120 (EtwTraceTouchPadAAP.c)
 *     EtwTraceTouchPadCurtainState @ 0x1C00E81F0 (EtwTraceTouchPadCurtainState.c)
 *     ?OnEndSession@Telemetry@CPTPProcessor@@SAX_J@Z @ 0x1C014AFD8 (-OnEndSession@Telemetry@CPTPProcessor@@SAX_J@Z.c)
 *     ?OnNewSession@Telemetry@CPTPProcessor@@SAX_J@Z @ 0x1C014B4A4 (-OnNewSession@Telemetry@CPTPProcessor@@SAX_J@Z.c)
 *     ?SetLastAction@Telemetry@CPTPProcessor@@SAXW4tagPTP_ACTION@@@Z @ 0x1C014BE00 (-SetLastAction@Telemetry@CPTPProcessor@@SAXW4tagPTP_ACTION@@@Z.c)
 *     ApiSetHandlePTPTelemetry @ 0x1C01641B0 (ApiSetHandlePTPTelemetry.c)
 *     ApiSetTraceLoggingPTPWarpBack @ 0x1C0165300 (ApiSetTraceLoggingPTPWarpBack.c)
 */

void __fastcall CPTPProcessor::OnTelemetryOutput(CPTPProcessor *this, const struct PTPTelemetryOutput *a2)
{
  int v3; // edx
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15; // edx
  unsigned __int64 v16; // rcx
  int v17; // ecx
  int v18; // ecx
  struct _MCGEN_TRACE_CONTEXT *v19; // rcx

  v3 = *(_DWORD *)a2;
  if ( v3 )
  {
    v5 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v6 = *((_DWORD *)a2 + 1);
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = (unsigned int)(v7 - 1);
            if ( (_DWORD)v8 )
            {
              v9 = v8 - 1;
              if ( v9 )
              {
                v10 = v9 - 1;
                if ( v10 )
                {
                  v11 = v10 - 1;
                  if ( v11 )
                  {
                    v12 = v11 - 1;
                    if ( v12 )
                    {
                      v13 = v12 - 1;
                      if ( v13 )
                      {
                        if ( v13 == 4 && !*((_BYTE *)this + 2232) )
                        {
                          *((_BYTE *)this + 2232) = 1;
                          DbgkWerCaptureLiveKernelDump(
                            L"win32kbase.sys",
                            400LL,
                            17LL,
                            (char *)this - 168,
                            *((_QWORD *)this + 54),
                            *((int *)a2 + 2),
                            0LL,
                            0LL,
                            0);
                        }
                      }
                      else
                      {
                        ApiSetTraceLoggingPTPWarpBack(
                          *((unsigned int *)a2 + 2),
                          *(_QWORD *)((char *)a2 + 12),
                          *(_QWORD *)((char *)a2 + 20),
                          *((unsigned int *)a2 + 7));
                      }
                    }
                    else
                    {
                      v14 = *((_DWORD *)a2 + 2);
                      if ( v14 )
                      {
                        if ( v14 == 1 )
                          qword_1C01D15C8 = *(_QWORD *)((char *)a2 + 12);
                      }
                      else
                      {
                        qword_1C01D15C0 = *(_QWORD *)((char *)a2 + 12);
                      }
                    }
                  }
                  else
                  {
                    v15 = *((_DWORD *)a2 + 2);
                    v16 = *(_QWORD *)((char *)a2 + 12);
                    if ( v15 )
                    {
                      if ( v15 == 1 )
                        qword_1C01D15B8 += v16;
                    }
                    else
                    {
                      qword_1C01D15A0 += v16;
                      if ( v16 > qword_1C01D15A8 )
                        qword_1C01D15A8 = v16;
                      if ( !qword_1C01D15B0 || v16 < qword_1C01D15B0 )
                        qword_1C01D15B0 = v16;
                    }
                  }
                }
                else
                {
                  CPTPProcessor::Telemetry::SetLastAction(*((unsigned int *)a2 + 2), v5, this);
                }
              }
              else if ( qword_1C01CBCC8 < qword_1C01D1468 )
              {
                qword_1C01CBCC8 = *((_QWORD *)a2 + 1);
              }
            }
            else
            {
              ApiSetHandlePTPTelemetry(v8, v5);
            }
          }
          else
          {
            CPTPProcessor::Telemetry::OnEndSession(*((_QWORD *)a2 + 1));
          }
        }
        else
        {
          CPTPProcessor::Telemetry::OnNewSession(*((_QWORD *)a2 + 1));
        }
      }
    }
    else
    {
      v17 = *((_DWORD *)a2 + 1);
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = (struct _MCGEN_TRACE_CONTEXT *)(unsigned int)(v18 - 1);
          if ( (_DWORD)v19 )
          {
            if ( (_DWORD)v19 == 1 )
              EtwTracePTPElasticDragModeStop(v19);
          }
          else
          {
            EtwTracePTPElasticDragModeStart(v19);
          }
        }
        else
        {
          EtwTraceTouchPadCurtainState(*((unsigned int *)a2 + 2), v5, (__int64)this);
        }
      }
      else
      {
        EtwTraceTouchPadAAP(
          *((_DWORD *)a2 + 2),
          *((_DWORD *)a2 + 3),
          *((_DWORD *)a2 + 4),
          *((_DWORD *)a2 + 5),
          *((_DWORD *)a2 + 6));
      }
    }
  }
  else
  {
    _WinSqmDWORDEvent(&SQM_INCREMENT_DWORD, 0LL, *((_DWORD *)a2 + 1), 1);
  }
}
