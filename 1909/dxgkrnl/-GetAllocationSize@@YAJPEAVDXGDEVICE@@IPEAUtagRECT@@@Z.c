/*
 * XREFs of ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C02727F4
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C027AA7C (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0104D30 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall GetAllocationSize(struct DXGDEVICE *a1, __int64 a2, struct tagRECT *a3)
{
  __int64 v4; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *v10; // rbx
  __int64 v11; // rax
  char *v13; // rsi
  __int64 v14; // rcx
  const GUID *v15; // r8
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  _QWORD *v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // rdx
  const GUID *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  UINT Width; // eax
  struct _DXGKARG_DESCRIBEALLOCATION v36; // [rsp+20h] [rbp-48h] BYREF
  struct _EX_RUNDOWN_REF *v37; // [rsp+88h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v10 = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = 2603LL;
    WdLogEvent5_WdError(v11);
    return -1073741811LL;
  }
  v13 = (char *)Current + 184;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v16 = *((_DWORD *)v13 + 4);
      if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v14, &EventBlockThread, v15, v16);
    }
    ExAcquirePushLockSharedEx(v13, 0LL);
  }
  v17 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 >= *((_DWORD *)v10 + 56) )
    goto LABEL_15;
  v18 = *((_QWORD *)v10 + 26);
  v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
  if ( (((unsigned int)v4 >> 25) & 0x60) != (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
    || (v19 & 0x2000) != 0
    || (v19 & 0x1F) == 0 )
  {
    goto LABEL_15;
  }
  v20 = v19 & 0x1F;
  if ( (_BYTE)v20 != 5 )
  {
    v21 = WdLogNewEntry5_WdError(((unsigned int)v4 >> 25) & 0x60, v20, 2LL * (unsigned int)v17);
    *(_QWORD *)(v21 + 24) = 267LL;
    WdLogEvent5_WdError(v21);
LABEL_15:
    v22 = 0LL;
    goto LABEL_16;
  }
  v22 = *(struct _EX_RUNDOWN_REF **)(v18 + 16LL * (unsigned int)v17);
LABEL_16:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v37, v22);
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  if ( !v37 )
  {
    v26 = WdLogNewEntry5_WdError(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = v4;
LABEL_23:
    WdLogEvent5_WdError(v26);
    v30 = -1073741823;
    goto LABEL_25;
  }
  v27 = *((_QWORD *)a1 + 2);
  v28 = *(_QWORD *)(v37[1].Count + 16);
  if ( *(_QWORD *)(v28 + 16) == *(_QWORD *)(v27 + 16) )
  {
    memset(&v36, 0, sizeof(v36));
    v36.hAllocation = *(HANDLE *)(v37[6].Count + 16);
    if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v27 + 16) + 2560LL), &v36, v32) >= 0 )
    {
      Width = v36.Width;
      a3->left = 0;
      a3->top = 0;
      a3->right = Width;
      v30 = 0;
      a3->bottom = v36.Height;
      goto LABEL_25;
    }
    v26 = WdLogNewEntry5_WdError(v33, v31, v34);
    *(_QWORD *)(v26 + 24) = v36.hAllocation;
    *(_QWORD *)(v26 + 32) = a1;
    goto LABEL_23;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v28, v23, v25);
  v30 = -1073741811;
  v29[3] = a1;
  v29[4] = v37;
  v29[5] = -1073741811LL;
  WdLogEvent5_WdError(v29);
LABEL_25:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v37, v31);
  return v30;
}
