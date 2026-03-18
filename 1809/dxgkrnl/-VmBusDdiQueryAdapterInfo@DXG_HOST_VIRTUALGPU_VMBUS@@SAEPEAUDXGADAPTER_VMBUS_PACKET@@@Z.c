/*
 * XREFs of ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EE390
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003656C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E5B90 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C014EA24 (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  char v4; // r15
  __int64 v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // r8d
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // r14d
  const GUID *v20; // r8
  DXGK_QUERYADAPTERINFOTYPE v21; // ecx
  SIZE_T v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  struct _DXGKARG_QUERYADAPTERINFO v27; // [rsp+28h] [rbp-59h] BYREF
  _BYTE v28[32]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v29[8]; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v30[32]; // [rsp+80h] [rbp-1h] BYREF
  _BYTE v31[40]; // [rsp+A0h] [rbp+1Fh] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v28,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v3 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v3 + 24) = 3443LL;
LABEL_70:
    WdLogEvent5_WdError(v3);
    goto LABEL_71;
  }
  v4 = 0;
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v6 = (_DWORD *)v5;
  if ( !v5 )
  {
LABEL_71:
    v4 = 0;
    goto LABEL_72;
  }
  v7 = *((_QWORD *)a1 + 5);
  v8 = *(_QWORD *)(v7 + 16);
  if ( *(int *)(v8 + 2160) < 0x2000 )
    v9 = 1;
  else
    v9 = *(_DWORD *)(v8 + 256);
  v10 = *(unsigned int *)(v5 + 28);
  if ( (unsigned __int64)*((unsigned int *)a1 + 22) - 39 < v10 )
  {
    v3 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v3 + 24) = *((unsigned int *)a1 + 22);
    *(_QWORD *)(v3 + 32) = 3453LL;
    goto LABEL_70;
  }
  v11 = (unsigned int)(*(_DWORD *)(v5 + 24) - 1);
  if ( *(_DWORD *)(v5 + 24) == 1 )
  {
    if ( (_DWORD)v10
      || *(_DWORD *)(v5 + 32) != (unsigned int)GetDriverCapsSizeFromDdiVersion(*(unsigned int *)(v8 + 1712)) )
    {
      v3 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v3 + 24) = 3462LL;
      goto LABEL_70;
    }
  }
  else
  {
    v12 = (unsigned int)(*(_DWORD *)(v5 + 24) - 10);
    if ( *(_DWORD *)(v5 + 24) == 10 )
    {
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != 4 )
        {
          v3 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v3 + 24) = 3521LL;
          goto LABEL_70;
        }
        v18 = *(unsigned int *)(v5 + 36);
      }
      else
      {
        v18 = 0LL;
      }
      if ( (unsigned int)v18 >= v9 )
      {
        v3 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v3 + 24) = 3528LL;
        goto LABEL_70;
      }
      if ( v6[8] != 4LL * *(unsigned __int16 *)(352 * v18 + *(_QWORD *)(v8 + 2416)) )
      {
        v3 = WdLogNewEntry5_WdError(352 * v18);
        *(_QWORD *)(v3 + 24) = 3534LL;
        goto LABEL_70;
      }
    }
    else
    {
      v13 = (unsigned int)(*(_DWORD *)(v5 + 24) - 13);
      if ( *(_DWORD *)(v5 + 24) == 13 )
      {
        if ( (_DWORD)v10 != 4 || *(_DWORD *)(v5 + 32) != 24 )
        {
          v3 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v3 + 24) = 3483LL;
          goto LABEL_70;
        }
        if ( *(_DWORD *)(v5 + 36) >= v9 )
        {
          v3 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v3 + 24) = 3488LL;
          goto LABEL_70;
        }
      }
      else if ( *(_DWORD *)(v5 + 24) == 14 )
      {
        if ( (_DWORD)v10 != 4 || *(_DWORD *)(v5 + 32) != 20 )
        {
          v3 = WdLogNewEntry5_WdError((unsigned int)(*(_DWORD *)(v5 + 24) - 14));
          *(_QWORD *)(v3 + 24) = 3496LL;
          goto LABEL_70;
        }
        v16 = *(unsigned __int16 *)(v5 + 38);
        if ( (unsigned int)v16 >= v9
          || (*(_DWORD *)(v8 + 1892) & 0x40) == 0
          || ((v17 = *(_QWORD *)(*(_QWORD *)(v8 + 2528) + 1008LL)) != 0 ? (v16 = v17 + 144 * v16) : (v16 = 0LL),
              (unsigned int)*(unsigned __int16 *)(v5 + 36) >= *(_DWORD *)(v16 + 16)) )
        {
          v3 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v3 + 24) = 3505LL;
          goto LABEL_70;
        }
      }
      else
      {
        v14 = (unsigned int)(*(_DWORD *)(v5 + 24) - 15);
        if ( *(_DWORD *)(v5 + 24) == 15 )
        {
          if ( (_DWORD)v10 != 4 || *(_DWORD *)(v5 + 32) != 24 )
          {
            v3 = WdLogNewEntry5_WdError(v14);
            *(_QWORD *)(v3 + 24) = 3470LL;
            goto LABEL_70;
          }
          if ( *(_DWORD *)(v5 + 36) >= v9 )
          {
            v3 = WdLogNewEntry5_WdError(v14);
            *(_QWORD *)(v3 + 24) = 3475LL;
            goto LABEL_70;
          }
        }
        else
        {
          v15 = (unsigned int)(*(_DWORD *)(v5 + 24) - 26);
          if ( *(_DWORD *)(v5 + 24) == 26 )
          {
            if ( *(_DWORD *)(v5 + 32) != 28 || (_DWORD)v10 != 4 )
            {
              v3 = WdLogNewEntry5_WdError(v15);
              *(_QWORD *)(v3 + 24) = 3544LL;
              goto LABEL_70;
            }
            if ( *(_DWORD *)(v5 + 36) >= v9 )
            {
              v3 = WdLogNewEntry5_WdError(v15);
              *(_QWORD *)(v3 + 24) = 3550LL;
              goto LABEL_70;
            }
          }
          else
          {
            if ( *(_DWORD *)(v5 + 24) != 27 )
            {
              v3 = WdLogNewEntry5_WdError(v15);
              *(_QWORD *)(v3 + 24) = (int)v6[6];
              goto LABEL_70;
            }
            if ( *(_DWORD *)(v5 + 32) != 128 )
            {
              v3 = WdLogNewEntry5_WdError(v15);
              *(_QWORD *)(v3 + 24) = 3559LL;
              goto LABEL_70;
            }
          }
        }
      }
    }
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, (struct DXGADAPTER *const)v8, 0LL);
  v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29);
  if ( v19 >= 0 )
  {
    memset(&v27, 0, sizeof(v27));
    v21 = v6[6];
    v27.Flags.Value |= 1u;
    v22 = (unsigned int)v6[8];
    v27.Type = v21;
    v27.InputDataSize = v6[7];
    v27.pInputData = v6 + 9;
    if ( (_DWORD)v22 )
    {
      if ( (unsigned int)v22 > 0x20000 )
      {
        v23 = WdLogNewEntry5_WdError(v6 + 9);
        *(_QWORD *)(v23 + 24) = (unsigned int)v6[8];
        WdLogEvent5_WdError(v23);
        goto LABEL_68;
      }
      v27.OutputDataSize = v22;
      v27.pOutputData = operator new(v22, 0x4B677844u, 1, (POOL_TYPE)512);
      if ( !v27.pOutputData )
      {
        v25 = WdLogNewEntry5_WdLowResource(v24);
        *(_QWORD *)(v25 + 24) = 3591LL;
        WdLogEvent5_WdLowResource(v25);
        v19 = -1073741801;
      }
    }
    if ( v19 >= 0 )
    {
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v8, &v27, v20) >= 0 )
      {
        if ( v6[6] == 15 )
          *((_QWORD *)v27.pOutputData + 1) = 0LL;
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v27.pOutputData, v27.OutputDataSize);
        v4 = 1;
      }
      if ( v27.pOutputData )
        operator delete[](v27.pOutputData);
    }
  }
LABEL_68:
  COREACCESS::~COREACCESS((COREACCESS *)v31);
  COREACCESS::~COREACCESS((COREACCESS *)v30);
LABEL_72:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  return v4;
}
