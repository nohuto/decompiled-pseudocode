/*
 * XREFs of ?ProcessActiveInstances@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02974EC
 * Callers:
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAI@Z @ 0x1C0297310 (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAI@Z.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0298810 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     McTemplateK0xxqxxx @ 0x1C0049E34 (McTemplateK0xxqxxx.c)
 *     ?Add@RollingStats@@QEAAXN@Z @ 0x1C0064560 (-Add@RollingStats@@QEAAXN@Z.c)
 *     ?GetCurrentPowerLevel@TrackedWorkloadMonitor@@QEAAIXZ @ 0x1C006462C (-GetCurrentPowerLevel@TrackedWorkloadMonitor@@QEAAIXZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E0E20 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0131250 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::ProcessActiveInstances(
        DXGTRACKEDWORKLOAD *this,
        PERESOURCE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int64 a4,
        unsigned __int64 *pData)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  DXGDEVICE *v7; // rdi
  unsigned __int64 v11; // r15
  unsigned int v12; // r13d
  unsigned int *v13; // rdi
  unsigned __int64 v14; // rax
  D3DKMT_HANDLE v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  signed __int64 v20; // rcx
  double v21; // xmm6_8
  __int64 v22; // rax
  double v23; // xmm0_8
  double v24; // xmm6_8
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  double v27; // xmm2_8
  signed __int64 v28; // rdx
  double v29; // xmm0_8
  __int64 v30; // rax
  double v31; // xmm1_8
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // rcx
  double v34; // xmm7_8
  __int64 v35; // rdx
  const GUID *v36; // r8
  double v37; // xmm1_8
  _QWORD *v38; // rax
  __int64 v39; // [rsp+30h] [rbp-D8h]
  struct _D3DKMT_UNLOCK v40; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v41[24]; // [rsp+68h] [rbp-A0h] BYREF
  struct _D3DKMT_LOCK v42; // [rsp+80h] [rbp-88h] BYREF

  LODWORD(v5) = 0;
  v6 = a4;
  v7 = (DXGDEVICE *)a2;
  if ( !*((_QWORD *)this + 41) )
    return 0LL;
  memset(&v42, 0, sizeof(v42));
  *(_QWORD *)&v40.hDevice = 0LL;
  v40.phAllocations = 0LL;
  if ( v6 < *((_QWORD *)this + 10) )
    return (unsigned int)v5;
  v11 = -1LL;
  v12 = 0;
  if ( *((_DWORD *)this + 22) )
  {
    while ( 1 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v41, (struct _KTHREAD **)this + 4);
      v13 = (unsigned int *)(*((_QWORD *)this + 3) + 112LL * v12);
      if ( *((_BYTE *)v13 + 24) && !*((_BYTE *)v13 + 96) )
      {
        v14 = *((_QWORD *)v13 + 1);
        if ( v14 <= v6 )
        {
          if ( !pData )
          {
            v15 = *((_DWORD *)this + 17);
            v42.Flags.Value |= 0xDu;
            v42.hAllocation = v15;
            v16 = DXGDEVICE::Lock(a2, &v42, a3);
            v5 = v16;
            if ( v16 < 0 )
            {
              v38 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
              v38[3] = this;
              v38[4] = v5;
              v38[5] = 1025LL;
              WdLogEvent5_WdError(v38);
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
              return (unsigned int)v5;
            }
            pData = (unsigned __int64 *)v42.pData;
          }
          v20 = pData[v13[1]] - pData[*v13];
          v21 = (double)(int)v20;
          if ( v20 < 0 )
            v21 = v21 + 1.844674407370955e19;
          v22 = *((_QWORD *)this + 41);
          v23 = (double)(int)v22;
          if ( v22 < 0 )
            v23 = v23 + 1.844674407370955e19;
          v24 = v21 / v23 * 1000.0;
          RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 104), v24);
          v25 = *((_QWORD *)this + 42);
          v26 = *((_QWORD *)v13 + 4);
          v27 = (double)(int)v25;
          if ( v25 < 0 )
            v27 = v27 + 1.844674407370955e19;
          v28 = pData[v13[1]] - *((_QWORD *)v13 + 5);
          v29 = (double)(int)v28;
          if ( v28 < 0 )
            v29 = v29 + 1.844674407370955e19;
          v30 = *((_QWORD *)this + 41);
          v31 = (double)(int)v30;
          if ( v30 < 0 )
            v31 = v31 + 1.844674407370955e19;
          v32 = v26 + (unsigned int)(int)(v29 / v31 * v27);
          if ( v32 > v26 )
          {
            v33 = *((_QWORD *)v13 + 2) - v32;
            *((_QWORD *)this + 40) += v33 >> 63;
            v34 = (double)(int)v33 / v27 * 1000.0;
            RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 176), v34);
            if ( bTracingEnabled )
            {
              KeQueryPerformanceCounter(0LL);
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
              {
                LODWORD(v39) = TrackedWorkloadMonitor::GetCurrentPowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 344));
                McTemplateK0xxqxxx(
                  *((_QWORD *)v13 + 13),
                  v35,
                  v36,
                  this,
                  v36,
                  v39,
                  *((_QWORD *)v13 + 13),
                  *((_QWORD *)v13 + 2),
                  v32);
              }
            }
            v37 = v24 * 100.0 / (v34 + v24);
            if ( v34 < 0.0 || v37 > 300.0 )
              v37 = DOUBLE_300_0;
            RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 248), v37);
          }
          v6 = a4;
          *(_BYTE *)(*v13 + *((_QWORD *)this + 9)) = 0;
          *(_BYTE *)(v13[1] + *((_QWORD *)this + 9)) = 0;
          *((_BYTE *)v13 + 24) = 0;
        }
        else
        {
          v11 = *((_QWORD *)this + 10);
          if ( v11 >= v14 )
            v11 = *((_QWORD *)v13 + 1);
        }
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
      if ( ++v12 >= *((_DWORD *)this + 22) )
      {
        v7 = (DXGDEVICE *)a2;
        break;
      }
    }
  }
  if ( !pData
    || !*((_DWORD *)this + 17)
    || (v40.NumAllocations = 1,
        v40.phAllocations = &v42.hAllocation,
        LODWORD(v5) = DXGDEVICE::Unlock(v7, &v40, 0),
        (int)v5 >= 0) )
  {
    if ( v11 != -1LL )
      *((_QWORD *)this + 10) = v11;
  }
  return (unsigned int)v5;
}
