/*
 * XREFs of ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003678C
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C0038778 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C0038814 (VidSchiProcessSuspendContextCompletedDpc.c)
 * Callees:
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003384C (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiConvertGpuTimeStampToSchedulerUnits@@YA_KPEAU_VIDSCH_NODE@@_K_J@Z @ 0x1C0034244 (-VidSchiConvertGpuTimeStampToSchedulerUnits@@YA_KPEAU_VIDSCH_NODE@@_K_J@Z.c)
 */

void __fastcall VidSchiUpdateHwSchRunningTime(struct _VIDSCH_NODE *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned int v4; // r13d
  __int64 v5; // r12
  _QWORD *v6; // r14
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  int v13; // ebp
  __int64 v14; // r15
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD **v21; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+68h] [rbp+10h]

  if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
  {
    if ( *((_QWORD *)a1 + 1386) )
    {
      VidSchiCalibrateHwClock(a1);
      if ( *((_QWORD *)a1 + 1392) )
      {
        v2 = **((_QWORD **)a1 + 1388);
        v3 = *((_QWORD *)a1 + 1390);
        if ( v3 != v2 )
        {
          if ( HIDWORD(v3) <= HIDWORD(v2) )
          {
            v4 = *((_DWORD *)a1 + 2774);
            if ( HIDWORD(v3) != HIDWORD(v2) )
            {
              if ( HIDWORD(v3) + 1 != HIDWORD(v2) )
                LODWORD(v3) = ((unsigned int)v3 + (v4 >> 1)) % v4;
              goto LABEL_11;
            }
            if ( (unsigned int)v3 <= (unsigned int)v2 )
            {
LABEL_11:
              v5 = 0LL;
              v6 = 0LL;
              v23 = 0LL;
              KeQueryPerformanceCounter(&PerformanceFrequency);
              do
              {
                v8 = *((_QWORD *)a1 + 1388) + 32 * ((unsigned int)v3 + 1LL);
                if ( !*(_DWORD *)(v8 + 8) )
                {
                  v9 = *(_QWORD *)(v8 + 16);
                  if ( v9 != v5 )
                  {
                    v10 = (_QWORD *)*((_QWORD *)a1 + 215);
                    while ( v10 )
                    {
                      v7 = *(v10 - 8);
                      if ( v9 == v7 )
                      {
                        v6 = v10 - 12;
                        goto LABEL_29;
                      }
                      if ( v9 >= v7 )
                        v10 = (_QWORD *)v10[1];
                      else
                        v10 = (_QWORD *)*v10;
                    }
                    v11 = (_QWORD *)*((_QWORD *)a1 + 216);
                    while ( 1 )
                    {
                      if ( !v11 )
                      {
                        v12 = WdLogNewEntry5_WdAssertion(v8, v7);
                        *(_QWORD *)(v12 + 24) = v9;
                        WdLogEvent5_WdAssertion(v12);
                        goto LABEL_38;
                      }
                      v7 = *(v11 - 9);
                      if ( v9 == v7 )
                        break;
                      if ( v9 >= v7 )
                        v11 = (_QWORD *)v11[1];
                      else
                        v11 = (_QWORD *)*v11;
                    }
                    v6 = v11 - 15;
LABEL_29:
                    v23 = *(_QWORD *)(v8 + 16);
LABEL_31:
                    v13 = *(_DWORD *)(v8 + 24);
                    v14 = *(_QWORD *)v8;
                    if ( *((_DWORD *)v6 + 36) == 1 && v13 != 1 )
                    {
                      v15 = VidSchiConvertGpuTimeStampToSchedulerUnits(a1, v6[19], PerformanceFrequency.QuadPart);
                      v16 = VidSchiConvertGpuTimeStampToSchedulerUnits(a1, v14, PerformanceFrequency.QuadPart);
                      if ( v16 > v15 )
                      {
                        v17 = v6[2];
                        v18 = v16 - v15;
                        v19 = *(unsigned __int16 *)(v17 + 4);
                        v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6[1] + 40LL) + 24LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v17 + 24) + 4LL));
                        v21 = *(_QWORD ***)(v20 + 8);
                        if ( (unsigned int)v19 < *(_DWORD *)(v20 + 80) )
                          v21 += v19;
                        **v21 += v18;
                      }
                    }
                    v5 = v23;
                    *((_DWORD *)v6 + 36) = v13;
                    v6[19] = v14;
                    goto LABEL_38;
                  }
                  if ( v6 )
                    goto LABEL_31;
                }
LABEL_38:
                v7 = ((int)v3 + 1) % v4;
                LODWORD(v3) = v7;
              }
              while ( (_DWORD)v7 != (_DWORD)v2 );
            }
          }
          *((_QWORD *)a1 + 1390) = v2;
        }
      }
    }
  }
}
