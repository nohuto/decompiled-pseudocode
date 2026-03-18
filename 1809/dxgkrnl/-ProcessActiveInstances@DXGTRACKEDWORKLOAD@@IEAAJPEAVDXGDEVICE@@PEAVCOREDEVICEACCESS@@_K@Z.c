/*
 * XREFs of ?ProcessActiveInstances@DXGTRACKEDWORKLOAD@@IEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_K@Z @ 0x1C0260664
 * Callers:
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEAI@Z @ 0x1C02604B4 (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEAI@Z.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAU_D3DKMT_UPDATETRACKEDWORKLOAD@@@Z @ 0x1C026097C (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAU_D3DKMT.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?Add@RollingStats@@QEAAXN@Z @ 0x1C005D320 (-Add@RollingStats@@QEAAXN@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100E00 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0124C00 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::ProcessActiveInstances(
        DXGTRACKEDWORKLOAD *this,
        PERESOURCE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int64 a4)
{
  __int64 v4; // rsi
  char v9; // r10
  _QWORD *pData; // r9
  __int64 v11; // r14
  unsigned int v12; // r15d
  unsigned int *v13; // rdi
  unsigned __int64 v14; // rax
  D3DKMT_HANDLE v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  double v19; // xmm2_8
  __int64 v20; // rax
  double v21; // xmm0_8
  double v22; // xmm2_8
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  double v25; // xmm3_8
  __int64 v26; // rdx
  double v27; // xmm0_8
  __int64 v28; // rax
  double v29; // xmm1_8
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  double v32; // xmm1_8
  double v33; // xmm3_8
  __int64 v34; // rax
  struct _D3DKMT_UNLOCK v35; // [rsp+20h] [rbp-60h] BYREF
  struct _D3DKMT_LOCK v36; // [rsp+30h] [rbp-50h] BYREF

  LODWORD(v4) = 0;
  if ( !*((_QWORD *)this + 38) )
    return 0LL;
  memset(&v36, 0, sizeof(v36));
  v9 = 0;
  pData = 0LL;
  *(_QWORD *)&v35.hDevice = 0LL;
  v35.phAllocations = 0LL;
  if ( a4 >= *((_QWORD *)this + 7) )
  {
    v11 = -1LL;
    v12 = 0;
    if ( *((_DWORD *)this + 16) )
    {
      do
      {
        v13 = (unsigned int *)(*((_QWORD *)this + 3) + 48LL * v12);
        if ( *((_BYTE *)v13 + 24) != v9 )
        {
          v14 = *((_QWORD *)v13 + 1);
          if ( v14 <= a4 )
          {
            if ( !pData )
            {
              v15 = *((_DWORD *)this + 11);
              v36.Flags.Value |= 0xDu;
              v36.hAllocation = v15;
              v16 = DXGDEVICE::Lock(a2, &v36, a3);
              v4 = v16;
              if ( v16 < 0 )
              {
                v34 = WdLogNewEntry5_WdError(v17);
                *(_QWORD *)(v34 + 24) = this;
                *(_QWORD *)(v34 + 32) = v4;
                WdLogEvent5_WdError(v34);
                return (unsigned int)v4;
              }
              pData = v36.pData;
            }
            v18 = pData[v13[1]] - pData[*v13];
            v19 = (double)(int)v18;
            if ( v18 < 0 )
              v19 = v19 + 1.844674407370955e19;
            v20 = *((_QWORD *)this + 38);
            v21 = (double)(int)v20;
            if ( v20 < 0 )
              v21 = v21 + 1.844674407370955e19;
            v22 = v19 / v21 * 1000.0;
            RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 80), v22);
            v23 = *((_QWORD *)this + 39);
            v24 = *((_QWORD *)v13 + 4);
            v25 = (double)(int)v23;
            if ( v23 < 0 )
              v25 = v25 + 1.844674407370955e19;
            v26 = pData[v13[1]] - *((_QWORD *)v13 + 5);
            v27 = (double)(int)v26;
            if ( v26 < 0 )
              v27 = v27 + 1.844674407370955e19;
            v28 = *((_QWORD *)this + 38);
            v29 = (double)(int)v28;
            if ( v28 < 0 )
              v29 = v29 + 1.844674407370955e19;
            v30 = v24 + (unsigned int)(int)(v27 / v29 * v25);
            if ( v30 > v24 )
            {
              v31 = *((_QWORD *)v13 + 2) - v30;
              *((_QWORD *)this + 37) += v31 >> 63;
              v32 = (double)(int)v31 / v25 * 1000.0;
              RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 152), v32);
              v33 = v22 * 100.0 / (v32 + v22);
              if ( v32 < 0.0 || v33 > 300.0 )
                v33 = DOUBLE_300_0;
              RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 224), v33);
            }
            *(_BYTE *)(*v13 + *((_QWORD *)this + 6)) = v9;
            *(_BYTE *)(v13[1] + *((_QWORD *)this + 6)) = v9;
            *((_BYTE *)v13 + 24) = v9;
          }
          else
          {
            if ( *((_QWORD *)this + 7) < v14 )
              v14 = v11;
            v11 = v14;
          }
        }
        ++v12;
      }
      while ( v12 < *((_DWORD *)this + 16) );
      if ( !pData
        || (v35.NumAllocations = 1,
            v35.phAllocations = &v36.hAllocation,
            LODWORD(v4) = DXGDEVICE::Unlock((DXGDEVICE *)a2, &v35, 0LL),
            (int)v4 >= 0) )
      {
        if ( v11 != -1 )
          *((_QWORD *)this + 7) = v11;
      }
    }
  }
  return (unsigned int)v4;
}
