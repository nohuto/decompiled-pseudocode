/*
 * XREFs of ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CAB4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2C84 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C016BB24 (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  char v6; // r15
  __int64 v7; // rax
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // r14d
  __int64 v23; // rdx
  const GUID *v24; // r8
  DXGK_QUERYADAPTERINFOTYPE v25; // ecx
  SIZE_T v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rax
  struct _DXGKARG_QUERYADAPTERINFO v33; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v34[32]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v35[8]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v36[64]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v37[72]; // [rsp+C0h] [rbp-48h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v34,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v5 + 24) = 3403LL;
LABEL_70:
    WdLogEvent5_WdError(v5);
    goto LABEL_71;
  }
  v6 = 0;
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v8 = (_DWORD *)v7;
  if ( !v7 )
  {
LABEL_71:
    v6 = 0;
    goto LABEL_72;
  }
  v9 = *((_QWORD *)a1 + 5);
  v10 = *(_QWORD *)(v9 + 16);
  if ( *(int *)(v10 + 2184) < 0x2000 )
    v11 = 1LL;
  else
    v11 = *(unsigned int *)(v10 + 256);
  v12 = *(unsigned int *)(v7 + 28);
  if ( (unsigned __int64)*((unsigned int *)a1 + 22) - 39 < v12 )
  {
    v5 = WdLogNewEntry5_WdError(v9, v12, v11);
    *(_QWORD *)(v5 + 24) = *((unsigned int *)a1 + 22);
    *(_QWORD *)(v5 + 32) = 3413LL;
    goto LABEL_70;
  }
  v13 = (unsigned int)(*(_DWORD *)(v7 + 24) - 1);
  if ( *(_DWORD *)(v7 + 24) == 1 )
  {
    if ( (_DWORD)v12
      || *(_DWORD *)(v7 + 32) != (unsigned int)GetDriverCapsSizeFromDdiVersion(*(unsigned int *)(v10 + 1728), v12, v11) )
    {
      v5 = WdLogNewEntry5_WdError(v13, v12, v11);
      *(_QWORD *)(v5 + 24) = 3422LL;
      goto LABEL_70;
    }
  }
  else
  {
    v14 = (unsigned int)(*(_DWORD *)(v7 + 24) - 10);
    if ( *(_DWORD *)(v7 + 24) == 10 )
    {
      if ( (_DWORD)v12 )
      {
        if ( (_DWORD)v12 != 4 )
        {
          v5 = WdLogNewEntry5_WdError(v14, v12, v11);
          *(_QWORD *)(v5 + 24) = 3481LL;
          goto LABEL_70;
        }
        v19 = *(unsigned int *)(v7 + 36);
      }
      else
      {
        v19 = 0LL;
      }
      if ( (unsigned int)v19 >= (unsigned int)v11 )
      {
        v5 = WdLogNewEntry5_WdError(v14, v12, v11);
        *(_QWORD *)(v5 + 24) = 3488LL;
        goto LABEL_70;
      }
      v20 = 4LL * *(unsigned __int16 *)(352 * v19 + *(_QWORD *)(v10 + 2440));
      if ( v8[8] != v20 )
      {
        v5 = WdLogNewEntry5_WdError(352 * v19, v20, v11);
        *(_QWORD *)(v5 + 24) = 3494LL;
        goto LABEL_70;
      }
    }
    else
    {
      v15 = (unsigned int)(*(_DWORD *)(v7 + 24) - 13);
      if ( *(_DWORD *)(v7 + 24) == 13 )
      {
        if ( (_DWORD)v12 != 4 || *(_DWORD *)(v7 + 32) != 24 )
        {
          v5 = WdLogNewEntry5_WdError(v15, v12, v11);
          *(_QWORD *)(v5 + 24) = 3443LL;
          goto LABEL_70;
        }
        if ( *(_DWORD *)(v7 + 36) >= (unsigned int)v11 )
        {
          v5 = WdLogNewEntry5_WdError(v15, v12, v11);
          *(_QWORD *)(v5 + 24) = 3448LL;
          goto LABEL_70;
        }
      }
      else if ( *(_DWORD *)(v7 + 24) == 14 )
      {
        if ( (_DWORD)v12 != 4 || *(_DWORD *)(v7 + 32) != 20 )
        {
          v5 = WdLogNewEntry5_WdError((unsigned int)(*(_DWORD *)(v7 + 24) - 14), v12, v11);
          *(_QWORD *)(v5 + 24) = 3456LL;
          goto LABEL_70;
        }
        v18 = *(unsigned __int16 *)(v7 + 38);
        if ( (unsigned int)v18 >= (unsigned int)v11
          || (*(_DWORD *)(v10 + 1916) & 0x40) == 0
          || ((v12 = *(_QWORD *)(*(_QWORD *)(v10 + 2560) + 1008LL)) != 0 ? (v18 = v12 + 144 * v18) : (v18 = 0LL),
              (unsigned int)*(unsigned __int16 *)(v7 + 36) >= *(_DWORD *)(v18 + 16)) )
        {
          v5 = WdLogNewEntry5_WdError(v18, v12, v11);
          *(_QWORD *)(v5 + 24) = 3465LL;
          goto LABEL_70;
        }
      }
      else
      {
        v16 = (unsigned int)(*(_DWORD *)(v7 + 24) - 15);
        if ( *(_DWORD *)(v7 + 24) == 15 )
        {
          if ( (_DWORD)v12 != 4 || *(_DWORD *)(v7 + 32) != 24 )
          {
            v5 = WdLogNewEntry5_WdError(v16, v12, v11);
            *(_QWORD *)(v5 + 24) = 3430LL;
            goto LABEL_70;
          }
          if ( *(_DWORD *)(v7 + 36) >= (unsigned int)v11 )
          {
            v5 = WdLogNewEntry5_WdError(v16, v12, v11);
            *(_QWORD *)(v5 + 24) = 3435LL;
            goto LABEL_70;
          }
        }
        else
        {
          v17 = (unsigned int)(*(_DWORD *)(v7 + 24) - 26);
          if ( *(_DWORD *)(v7 + 24) == 26 )
          {
            if ( *(_DWORD *)(v7 + 32) != 28 || (_DWORD)v12 != 4 )
            {
              v5 = WdLogNewEntry5_WdError(v17, v12, v11);
              *(_QWORD *)(v5 + 24) = 3504LL;
              goto LABEL_70;
            }
            if ( *(_DWORD *)(v7 + 36) >= (unsigned int)v11 )
            {
              v5 = WdLogNewEntry5_WdError(v17, v12, v11);
              *(_QWORD *)(v5 + 24) = 3510LL;
              goto LABEL_70;
            }
          }
          else
          {
            if ( *(_DWORD *)(v7 + 24) != 27 )
            {
              v5 = WdLogNewEntry5_WdError(v17, v12, v11);
              *(_QWORD *)(v5 + 24) = (int)v8[6];
              goto LABEL_70;
            }
            if ( *(_DWORD *)(v7 + 32) != 128 )
            {
              v5 = WdLogNewEntry5_WdError(v17, v12, v11);
              *(_QWORD *)(v5 + 24) = 3519LL;
              goto LABEL_70;
            }
          }
        }
      }
    }
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, (struct DXGADAPTER *const)v10, 0LL);
  v22 = COREADAPTERACCESS::AcquireShared((__int64)v35, 0xFFFFFFFFLL, v21);
  if ( v22 >= 0 )
  {
    memset(&v33, 0, sizeof(v33));
    v25 = v8[6];
    v33.Flags.Value |= 1u;
    v26 = (unsigned int)v8[8];
    v33.Type = v25;
    v33.InputDataSize = v8[7];
    v33.pInputData = v8 + 9;
    if ( (_DWORD)v26 )
    {
      if ( (unsigned int)v26 > 0x20000 )
      {
        v27 = WdLogNewEntry5_WdError(v8 + 9, v23, v24);
        *(_QWORD *)(v27 + 24) = (unsigned int)v8[8];
        WdLogEvent5_WdError(v27);
        goto LABEL_68;
      }
      v33.OutputDataSize = v26;
      v33.pOutputData = operator new(v26, 0x4B677844u, 1, (POOL_TYPE)512);
      if ( !v33.pOutputData )
      {
        v31 = WdLogNewEntry5_WdLowResource(v29, v28, v24, v30);
        *(_QWORD *)(v31 + 24) = 3551LL;
        WdLogEvent5_WdLowResource(v31);
        v22 = -1073741801;
      }
    }
    if ( v22 >= 0 )
    {
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v10, &v33, v24) >= 0 )
      {
        if ( v8[6] == 15 )
          *((_QWORD *)v33.pOutputData + 1) = 0LL;
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v33.pOutputData, v33.OutputDataSize);
        v6 = 1;
      }
      if ( v33.pOutputData )
        operator delete[](v33.pOutputData);
    }
  }
LABEL_68:
  COREACCESS::~COREACCESS((COREACCESS *)v37);
  COREACCESS::~COREACCESS((COREACCESS *)v36);
LABEL_72:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  return v6;
}
