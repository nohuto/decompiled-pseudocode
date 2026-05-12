/*
 * XREFs of StorpTelemetrySendUnitSmartAttributes @ 0x1C0010E10
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00108E0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C00017EC (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySmartCommand @ 0x1C0001C10 (StorpTelemetrySmartCommand.c)
 *     McTemplateK0quuujjzsssxqtqbr13 @ 0x1C002A038 (McTemplateK0quuujjzsssxqtqbr13.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C00503F8 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 */

void __fastcall StorpTelemetrySendUnitSmartAttributes(__int64 a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rsi
  NTSTATUS v4; // eax
  int v5; // eax
  char *v6; // rbx
  char *v7; // rdx
  bool v8; // cf
  unsigned __int16 *v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  _QWORD v26[16]; // [rsp+90h] [rbp-80h] BYREF

  memset(v26, 0, sizeof(v26));
  if ( (*(_DWORD *)(a1 + 1992) & 2) == 0 && !KeGetCurrentIrql() )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x22CuLL, 0x65546152u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      HIDWORD(v26[2]) = -1;
      LOWORD(v26[2]) = -1;
      LOWORD(v26[3]) = -1;
      BYTE2(v26[3]) = -1;
      memset(&v26[4], 255, 96);
      v4 = StorpTelemetrySmartCommand(a1, 218, PoolWithTag);
      if ( v4 < 0 )
        goto LABEL_5;
      v6 = (char *)v3 + (unsigned int)*v3;
      if ( *(_DWORD *)v6 < 8u )
        goto LABEL_6;
      if ( v6[19] == -12 && v6[20] == 44 )
        *(_DWORD *)(a1 + 1992) |= 0x20u;
      else
        *(_DWORD *)(a1 + 1992) &= ~0x20u;
      v4 = StorpTelemetrySmartCommand(a1, 208, v3);
      if ( v4 < 0 )
      {
LABEL_5:
        if ( v4 == -1073741670 )
        {
LABEL_8:
          ExFreePoolWithTag(v3, 0x65546152u);
          return;
        }
      }
      else
      {
        v7 = (char *)v3 + (unsigned int)*v3;
        v8 = *(_DWORD *)v6 < 0x200u;
        v26[0] = v7;
        v26[1] = v7 + 16;
        if ( !v8 )
        {
          if ( v7 == (char *)-16LL )
          {
LABEL_54:
            if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
              || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
            {
              goto LABEL_65;
            }
            if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( *(_BYTE *)(a1 + 1996) )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( g_StorpTraceLoggingCriticalEventEnabled )
              StorpTelemetryLogUnitSmartAttributesCriticalData(a1, v26);
            else
LABEL_65:
              StorpTelemetryLogUnitSmartAttributesMeasures((const struct _TlgProvider_t *)a1);
            if ( (byte_1C00617E4 & 8) != 0 )
              McTemplateK0quuujjzsssxqtqbr13(
                a1 + 186,
                a1 + 169,
                a1 + 160,
                *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
                *(_BYTE *)(a1 + 96),
                *(_BYTE *)(a1 + 97),
                *(_BYTE *)(a1 + 98),
                a1 + 1976,
                *(_QWORD *)(a1 + 24) + 5256LL,
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4864LL),
                a1 + 160,
                a1 + 169,
                a1 + 186);
            goto LABEL_8;
          }
          v9 = (unsigned __int16 *)(v7 + 27);
          v10 = 30LL;
          while ( 1 )
          {
            v11 = *((unsigned __int8 *)v9 - 9);
            if ( v11 > 0xC1 )
            {
              v19 = v11 - 194;
              if ( !v19 )
              {
                BYTE2(v26[3]) = *((_BYTE *)v9 - 4);
                goto LABEL_53;
              }
              v20 = v19 - 2;
              if ( !v20 )
              {
                v26[10] = *((unsigned __int8 *)v9 - 4) | ((*((unsigned __int8 *)v9 - 3) | ((*((unsigned __int8 *)v9 - 2) | ((*((unsigned __int8 *)v9 - 1) | ((unsigned __int64)*v9 << 8)) << 8)) << 8)) << 8);
                goto LABEL_53;
              }
              v21 = v20 - 1;
              if ( !v21 )
              {
                v26[11] = *((unsigned __int8 *)v9 - 4) | ((*((unsigned __int8 *)v9 - 3) | ((*((unsigned __int8 *)v9 - 2) | ((*((unsigned __int8 *)v9 - 1) | ((unsigned __int64)*v9 << 8)) << 8)) << 8)) << 8);
                goto LABEL_53;
              }
              v22 = v21 - 1;
              if ( !v22 )
              {
                v26[12] = *((unsigned __int8 *)v9 - 4) | ((*((unsigned __int8 *)v9 - 3) | ((*((unsigned __int8 *)v9 - 2) | ((*((unsigned __int8 *)v9 - 1) | ((unsigned __int64)*v9 << 8)) << 8)) << 8)) << 8);
                goto LABEL_53;
              }
              v23 = v22 - 3;
              if ( !v23 )
              {
                v26[13] = *((unsigned __int8 *)v9 - 4) | ((*((unsigned __int8 *)v9 - 3) | ((*((unsigned __int8 *)v9 - 2) | ((*((unsigned __int8 *)v9 - 1) | ((unsigned __int64)*v9 << 8)) << 8)) << 8)) << 8);
                goto LABEL_53;
              }
              v24 = v23 - 24;
              if ( v24 )
              {
                v25 = v24 - 5;
                if ( v25 )
                {
                  if ( v25 == 3 )
                    v26[15] = *((unsigned __int8 *)v9 - 4) | ((*((unsigned __int8 *)v9 - 3) | ((*((unsigned __int8 *)v9
                                                                                                - 2) | ((*((unsigned __int8 *)v9 - 1) | ((unsigned __int64)*v9 << 8)) << 8)) << 8)) << 8);
                }
                else
                {
                  v26[14] = *((unsigned __int8 *)v9 - 4) | ((*((unsigned __int8 *)v9 - 3) | ((*((unsigned __int8 *)v9 - 2) | ((*((unsigned __int8 *)v9 - 1) | ((unsigned __int64)*v9 << 8)) << 8)) << 8)) << 8);
                }
                goto LABEL_53;
              }
            }
            else if ( v11 != 193 )
            {
              v12 = v11 - 4;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  v14 = v13 - 4;
                  if ( v14 )
                  {
                    v15 = v14 - 1;
                    if ( v15 )
                    {
                      v16 = v15 - 173;
                      if ( v16 )
                      {
                        v17 = v16 - 1;
                        if ( v17 )
                        {
                          v18 = v17 - 3;
                          if ( v18 )
                          {
                            if ( v18 == 1 )
                              v26[9] = *((unsigned __int8 *)v9 - 4) | ((*((unsigned __int8 *)v9 - 3) | ((*((unsigned __int8 *)v9 - 2) | ((*((unsigned __int8 *)v9 - 1) | ((unsigned __int64)*v9 << 8)) << 8)) << 8)) << 8);
                          }
                          else
                          {
                            v26[8] = *((unsigned __int8 *)v9 - 4) | ((*((unsigned __int8 *)v9 - 3) | ((*((unsigned __int8 *)v9 - 2) | ((*((unsigned __int8 *)v9 - 1) | ((unsigned __int64)*v9 << 8)) << 8)) << 8)) << 8);
                          }
                        }
                        else
                        {
                          v26[7] = *((unsigned __int8 *)v9 - 4) | ((*((unsigned __int8 *)v9 - 3) | ((*((unsigned __int8 *)v9 - 2) | ((*((unsigned __int8 *)v9 - 1) | ((unsigned __int64)*v9 << 8)) << 8)) << 8)) << 8);
                        }
                      }
                      else
                      {
                        v26[6] = *((unsigned __int8 *)v9 - 4) | ((*((unsigned __int8 *)v9 - 3) | ((*((unsigned __int8 *)v9 - 2) | ((*((unsigned __int8 *)v9 - 1) | ((unsigned __int64)*v9 << 8)) << 8)) << 8)) << 8);
                      }
                    }
                    else
                    {
                      v26[5] = *((unsigned __int8 *)v9 - 4) | ((*((unsigned __int8 *)v9 - 3) | ((*((unsigned __int8 *)v9
                                                                                                 - 2) | ((*((unsigned __int8 *)v9 - 1) | ((unsigned __int64)*v9 << 8)) << 8)) << 8)) << 8);
                    }
                  }
                  else
                  {
                    HIDWORD(v26[2]) = *((_DWORD *)v9 - 1);
                  }
                }
                else
                {
                  v26[4] = *((unsigned __int8 *)v9 - 4) | ((*((unsigned __int8 *)v9 - 3) | ((*((unsigned __int8 *)v9 - 2) | ((*((unsigned __int8 *)v9 - 1) | ((unsigned __int64)*v9 << 8)) << 8)) << 8)) << 8);
                }
              }
              else
              {
                LOWORD(v26[2]) = *(v9 - 2);
              }
              goto LABEL_53;
            }
            LOWORD(v26[3]) = *(v9 - 2);
LABEL_53:
            v9 += 6;
            if ( !--v10 )
              goto LABEL_54;
          }
        }
      }
LABEL_6:
      v5 = *(_DWORD *)(a1 + 1992);
      if ( (v5 & 1) == 0 )
        *(_DWORD *)(a1 + 1992) = v5 | 2;
      goto LABEL_8;
    }
  }
}
