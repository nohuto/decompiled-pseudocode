/*
 * XREFs of ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00371C8
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C00391B8 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C0039260 (VidSchiProcessSuspendContextCompletedDpc.c)
 * Callees:
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003426C (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiConvertGpuTimeStampToSchedulerUnits@@YA_KPEAU_VIDSCH_NODE@@_K_J@Z @ 0x1C0034C5C (-VidSchiConvertGpuTimeStampToSchedulerUnits@@YA_KPEAU_VIDSCH_NODE@@_K_J@Z.c)
 */

void __fastcall VidSchiUpdateHwSchRunningTime(struct _VIDSCH_NODE *a1)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned int v4; // r14d
  unsigned int v5; // r13d
  _QWORD *v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // r15
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD **v22; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF
  __int64 v24; // [rsp+68h] [rbp+10h]

  if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
  {
    if ( *((_QWORD *)a1 + 1386) )
    {
      VidSchiCalibrateHwClock(a1);
      if ( *((_QWORD *)a1 + 1392) )
      {
        v2 = **((_QWORD **)a1 + 1388);
        if ( *((_QWORD *)a1 + 1390) != v2 )
        {
          v3 = *((_DWORD *)a1 + 2781);
          if ( v3 <= HIDWORD(v2) )
          {
            v4 = *((_DWORD *)a1 + 2780);
            v5 = *((_DWORD *)a1 + 2774);
            if ( v3 != HIDWORD(v2) )
            {
              if ( v3 + 1 != HIDWORD(v2) )
                v4 = (v4 + (v5 >> 1)) % v5;
              goto LABEL_11;
            }
            if ( v4 <= (unsigned int)v2 )
            {
LABEL_11:
              v6 = 0LL;
              PerformanceFrequency.QuadPart = 0LL;
              v7 = 0LL;
              v24 = 0LL;
              KeQueryPerformanceCounter(&PerformanceFrequency);
              do
              {
                v9 = *((_QWORD *)a1 + 1388) + 32 * (v4 + 1LL);
                if ( !*(_DWORD *)(v9 + 8) )
                {
                  v10 = *(_QWORD *)(v9 + 16);
                  if ( v10 != v7 )
                  {
                    v11 = (_QWORD *)*((_QWORD *)a1 + 215);
                    while ( v11 )
                    {
                      if ( v10 == *(v11 - 8) )
                      {
                        v6 = v11 - 12;
                        goto LABEL_29;
                      }
                      if ( v10 >= *(v11 - 8) )
                        v11 = (_QWORD *)v11[1];
                      else
                        v11 = (_QWORD *)*v11;
                    }
                    v12 = (_QWORD *)*((_QWORD *)a1 + 216);
                    while ( 1 )
                    {
                      if ( !v12 )
                      {
                        v13 = WdLogNewEntry5_WdAssertion(v9, v8);
                        *(_QWORD *)(v13 + 24) = v10;
                        WdLogEvent5_WdAssertion(v13);
                        goto LABEL_38;
                      }
                      if ( v10 == *(v12 - 9) )
                        break;
                      if ( v10 >= *(v12 - 9) )
                        v12 = (_QWORD *)v12[1];
                      else
                        v12 = (_QWORD *)*v12;
                    }
                    v6 = v12 - 15;
LABEL_29:
                    v24 = *(_QWORD *)(v9 + 16);
LABEL_31:
                    v14 = *(_DWORD *)(v9 + 24);
                    v15 = *(_QWORD *)v9;
                    if ( *((_DWORD *)v6 + 36) == 1 && v14 != 1 )
                    {
                      v16 = VidSchiConvertGpuTimeStampToSchedulerUnits(a1, v6[19], PerformanceFrequency.QuadPart);
                      v17 = VidSchiConvertGpuTimeStampToSchedulerUnits(a1, v15, PerformanceFrequency.QuadPart);
                      if ( v17 > v16 )
                      {
                        v18 = v6[2];
                        v19 = v17 - v16;
                        v20 = *(unsigned __int16 *)(v18 + 4);
                        v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6[1] + 40LL) + 24LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v18 + 24) + 4LL));
                        v22 = *(_QWORD ***)(v21 + 8);
                        if ( (unsigned int)v20 < *(_DWORD *)(v21 + 80) )
                          v22 += v20;
                        **v22 += v19;
                      }
                    }
                    v7 = v24;
                    *((_DWORD *)v6 + 36) = v14;
                    v6[19] = v15;
                    goto LABEL_38;
                  }
                  if ( v6 )
                    goto LABEL_31;
                }
LABEL_38:
                v8 = (v4 + 1) % v5;
                v4 = v8;
              }
              while ( (_DWORD)v8 != (_DWORD)v2 );
            }
          }
          *((_QWORD *)a1 + 1390) = v2;
        }
      }
    }
  }
}
