/*
 * XREFs of StorpTelemetrySendUnitSmartAttributes @ 0x1C00025F0
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00023B0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001008 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     McTemplateK0quuujjzsssxqtqbr13 @ 0x1C00015D4 (McTemplateK0quuujjzsssxqtqbr13.c)
 *     StorpTelemetrySmartCommand @ 0x1C0002C9C (StorpTelemetrySmartCommand.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memmove @ 0x1C0024A80 (memmove.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C004F8A0 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 */

void __fastcall StorpTelemetrySendUnitSmartAttributes(__int64 a1)
{
  unsigned int *PoolWithTag; // rax
  __int64 v3; // rdx
  unsigned int *v4; // rsi
  size_t v5; // r14
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  __int64 v23; // r9
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  int v31; // [rsp+70h] [rbp-A8h]
  int v32; // [rsp+88h] [rbp-90h]
  _BYTE v33[416]; // [rsp+98h] [rbp-80h] BYREF

  memset(v33, 0, sizeof(v33));
  if ( (*(_DWORD *)(a1 + 1992) & 2) == 0 && !KeGetCurrentIrql() )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x22CuLL, 0x65546152u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)&v33[308] = -1;
      *(_WORD *)&v33[304] = -1;
      v5 = 255LL;
      *(_WORD *)&v33[312] = -1;
      v33[314] = -1;
      LOBYTE(v3) = -38;
      memset(&v33[320], 255, 96);
      v6 = StorpTelemetrySmartCommand(a1, v3, PoolWithTag);
      if ( v6 < 0 )
        goto LABEL_5;
      v9 = (char *)v4 + *v4;
      if ( *(_DWORD *)v9 < 8u )
        goto LABEL_6;
      if ( v9[19] == -12 && v9[20] == 44 )
        *(_DWORD *)(a1 + 1992) |= 0x20u;
      else
        *(_DWORD *)(a1 + 1992) &= ~0x20u;
      LOBYTE(v7) = -48;
      v6 = StorpTelemetrySmartCommand(a1, v7, v4);
      if ( v6 < 0 )
      {
LABEL_5:
        if ( v6 == -1073741670 )
        {
LABEL_8:
          ExFreePoolWithTag(v4, 0x65546152u);
          return;
        }
      }
      else
      {
        v10 = *v4;
        v11 = (__int64)v4 + v10 + 16;
        *(_QWORD *)&v33[288] = (char *)v4 + v10;
        *(_QWORD *)&v33[296] = v11;
        if ( *(_DWORD *)v9 >= 0x200u )
        {
          if ( (unsigned int *)((char *)v4 + v10) == (unsigned int *)-16LL )
          {
LABEL_29:
            v21 = *(_QWORD *)(a1 + 104);
            if ( v21 )
            {
              *(_QWORD *)v33 = *(_QWORD *)(v21 + 8);
              *(_OWORD *)&v33[9] = *(_OWORD *)(v21 + 16);
            }
            if ( *(_WORD *)(a1 + 114) )
            {
              v22 = *(_WORD *)(a1 + 112);
              if ( v22 < 0xFFu )
                v5 = v22;
              memmove(&v33[26], *(const void **)(a1 + 120), v5);
            }
            if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
              || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
            {
              goto LABEL_44;
            }
            if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( *(_BYTE *)(a1 + 1996) )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( g_StorpTraceLoggingCriticalEventEnabled )
              StorpTelemetryLogUnitSmartAttributesCriticalData(a1, v33);
            else
LABEL_44:
              StorpTelemetryLogUnitSmartAttributesMeasures((const struct _TlgProvider_t *)a1);
            if ( (byte_1C0062744 & 8) != 0 )
            {
              v23 = *(_QWORD *)(a1 + 24);
              McTemplateK0quuujjzsssxqtqbr13(
                (unsigned __int16)**(_WORD **)&v33[296],
                (*(_DWORD *)(a1 + 1992) >> 5) & 1,
                v23 + 5128,
                *(_DWORD *)(v23 + 56),
                *(_BYTE *)(a1 + 96),
                *(_BYTE *)(a1 + 97),
                *(_BYTE *)(a1 + 98),
                a1 + 1976,
                v23 + 5128,
                *(char **)(v23 + 4800),
                (const struct _MCGEN_TRACE_CONTEXT *)v33,
                (const struct _MCGEN_TRACE_CONTEXT *)&v33[9],
                (struct _MCGEN_TRACE_CONTEXT *)&v33[26],
                v31,
                **(_WORD **)&v33[296],
                (*(_DWORD *)(a1 + 1992) & 0x20) != 0,
                v32,
                *(__int64 *)&v33[296]);
            }
            goto LABEL_8;
          }
          v12 = 0LL;
          while ( 1 )
          {
            v13 = *(unsigned __int8 *)(v12 + v11 + 2);
            if ( v13 > 0xC1 )
            {
              v24 = v13 - 194;
              if ( !v24 )
              {
                v33[314] = *(_BYTE *)(v12 + v11 + 7);
                goto LABEL_28;
              }
              v25 = v24 - 2;
              if ( !v25 )
              {
                *(_QWORD *)&v33[368] = *(unsigned __int8 *)(v12 + v11 + 7) | ((*(unsigned __int8 *)(v12 + v11 + 8) | ((*(unsigned __int8 *)(v12 + v11 + 9) | ((*(unsigned __int8 *)(v12 + v11 + 10) | ((unsigned __int64)*(unsigned __int16 *)(v12 + v11 + 11) << 8)) << 8)) << 8)) << 8);
                goto LABEL_28;
              }
              v26 = v25 - 1;
              if ( !v26 )
              {
                *(_QWORD *)&v33[376] = *(unsigned __int8 *)(v12 + v11 + 7) | ((*(unsigned __int8 *)(v12 + v11 + 8) | ((*(unsigned __int8 *)(v12 + v11 + 9) | ((*(unsigned __int8 *)(v12 + v11 + 10) | ((unsigned __int64)*(unsigned __int16 *)(v12 + v11 + 11) << 8)) << 8)) << 8)) << 8);
                goto LABEL_28;
              }
              v27 = v26 - 1;
              if ( !v27 )
              {
                *(_QWORD *)&v33[384] = *(unsigned __int8 *)(v12 + v11 + 7) | ((*(unsigned __int8 *)(v12 + v11 + 8) | ((*(unsigned __int8 *)(v12 + v11 + 9) | ((*(unsigned __int8 *)(v12 + v11 + 10) | ((unsigned __int64)*(unsigned __int16 *)(v12 + v11 + 11) << 8)) << 8)) << 8)) << 8);
                goto LABEL_28;
              }
              v28 = v27 - 3;
              if ( !v28 )
              {
                *(_QWORD *)&v33[392] = *(unsigned __int8 *)(v12 + v11 + 7) | ((*(unsigned __int8 *)(v12 + v11 + 8) | ((*(unsigned __int8 *)(v12 + v11 + 9) | ((*(unsigned __int8 *)(v12 + v11 + 10) | ((unsigned __int64)*(unsigned __int16 *)(v12 + v11 + 11) << 8)) << 8)) << 8)) << 8);
                goto LABEL_28;
              }
              v29 = v28 - 24;
              if ( v29 )
              {
                v30 = v29 - 5;
                if ( v30 )
                {
                  if ( v30 == 3 )
                    *(_QWORD *)&v33[408] = *(unsigned __int8 *)(v12 + v11 + 7) | ((*(unsigned __int8 *)(v12 + v11 + 8) | ((*(unsigned __int8 *)(v12 + v11 + 9) | ((*(unsigned __int8 *)(v12 + v11 + 10) | ((unsigned __int64)*(unsigned __int16 *)(v12 + v11 + 11) << 8)) << 8)) << 8)) << 8);
                }
                else
                {
                  *(_QWORD *)&v33[400] = *(unsigned __int8 *)(v12 + v11 + 7) | ((*(unsigned __int8 *)(v12 + v11 + 8) | ((*(unsigned __int8 *)(v12 + v11 + 9) | ((*(unsigned __int8 *)(v12 + v11 + 10) | ((unsigned __int64)*(unsigned __int16 *)(v12 + v11 + 11) << 8)) << 8)) << 8)) << 8);
                }
                goto LABEL_28;
              }
            }
            else if ( v13 != 193 )
            {
              v14 = v13 - 4;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  v16 = v15 - 4;
                  if ( v16 )
                  {
                    v17 = v16 - 1;
                    if ( v17 )
                    {
                      v18 = v17 - 173;
                      if ( v18 )
                      {
                        v19 = v18 - 1;
                        if ( v19 )
                        {
                          v20 = v19 - 3;
                          if ( v20 )
                          {
                            if ( v20 == 1 )
                              *(_QWORD *)&v33[360] = *(unsigned __int8 *)(v12 + v11 + 7) | ((*(unsigned __int8 *)(v12 + v11 + 8) | ((*(unsigned __int8 *)(v12 + v11 + 9) | ((*(unsigned __int8 *)(v12 + v11 + 10) | ((unsigned __int64)*(unsigned __int16 *)(v12 + v11 + 11) << 8)) << 8)) << 8)) << 8);
                          }
                          else
                          {
                            *(_QWORD *)&v33[352] = *(unsigned __int8 *)(v12 + v11 + 7) | ((*(unsigned __int8 *)(v12 + v11 + 8) | ((*(unsigned __int8 *)(v12 + v11 + 9) | ((*(unsigned __int8 *)(v12 + v11 + 10) | ((unsigned __int64)*(unsigned __int16 *)(v12 + v11 + 11) << 8)) << 8)) << 8)) << 8);
                          }
                        }
                        else
                        {
                          *(_QWORD *)&v33[344] = *(unsigned __int8 *)(v12 + v11 + 7) | ((*(unsigned __int8 *)(v12 + v11 + 8) | ((*(unsigned __int8 *)(v12 + v11 + 9) | ((*(unsigned __int8 *)(v12 + v11 + 10) | ((unsigned __int64)*(unsigned __int16 *)(v12 + v11 + 11) << 8)) << 8)) << 8)) << 8);
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v33[336] = *(unsigned __int8 *)(v12 + v11 + 7) | ((*(unsigned __int8 *)(v12 + v11 + 8) | ((*(unsigned __int8 *)(v12 + v11 + 9) | ((*(unsigned __int8 *)(v12 + v11 + 10) | ((unsigned __int64)*(unsigned __int16 *)(v12 + v11 + 11) << 8)) << 8)) << 8)) << 8);
                      }
                    }
                    else
                    {
                      *(_QWORD *)&v33[328] = *(unsigned __int8 *)(v12 + v11 + 7) | ((*(unsigned __int8 *)(v12 + v11 + 8) | ((*(unsigned __int8 *)(v12 + v11 + 9) | ((*(unsigned __int8 *)(v12 + v11 + 10) | ((unsigned __int64)*(unsigned __int16 *)(v12 + v11 + 11) << 8)) << 8)) << 8)) << 8);
                    }
                  }
                  else
                  {
                    *(_DWORD *)&v33[308] = *(_DWORD *)(v12 + v11 + 7);
                  }
                }
                else
                {
                  *(_QWORD *)&v33[320] = *(unsigned __int8 *)(v12 + v11 + 7) | ((*(unsigned __int8 *)(v12 + v11 + 8) | ((*(unsigned __int8 *)(v12 + v11 + 9) | ((*(unsigned __int8 *)(v12 + v11 + 10) | ((unsigned __int64)*(unsigned __int16 *)(v12 + v11 + 11) << 8)) << 8)) << 8)) << 8);
                }
              }
              else
              {
                *(_WORD *)&v33[304] = *(_WORD *)(v12 + v11 + 7);
              }
              goto LABEL_28;
            }
            *(_WORD *)&v33[312] = *(_WORD *)(v12 + v11 + 7);
LABEL_28:
            v12 += 12LL;
            if ( v12 >= 360 )
              goto LABEL_29;
          }
        }
      }
LABEL_6:
      v8 = *(_DWORD *)(a1 + 1992);
      if ( (v8 & 1) == 0 )
        *(_DWORD *)(a1 + 1992) = v8 | 2;
      goto LABEL_8;
    }
  }
}
