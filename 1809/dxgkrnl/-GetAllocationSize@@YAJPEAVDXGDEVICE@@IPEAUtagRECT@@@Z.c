/*
 * XREFs of ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C023CEAC
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C0244EA0 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall GetAllocationSize(struct DXGDEVICE *a1, unsigned int a2, struct tagRECT *a3)
{
  __int64 v4; // rbp
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rbx
  __int64 v9; // rax
  char *v11; // r14
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // edx
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned int v22; // ebx
  const GUID *v23; // r8
  __int64 v24; // rcx
  UINT Width; // eax
  struct _DXGKARG_DESCRIBEALLOCATION v26; // [rsp+20h] [rbp-48h] BYREF
  struct _EX_RUNDOWN_REF *v27; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  Current = DXGPROCESS::GetCurrent();
  v8 = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 2580LL;
    WdLogEvent5_WdError(v9);
    return -1073741811LL;
  }
  v11 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v12 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 >= *((_DWORD *)v8 + 62) )
    goto LABEL_9;
  v13 = *((_QWORD *)v8 + 29);
  v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
  if ( (((unsigned int)v4 >> 25) & 0x60) != (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
    || (v14 & 0x2000) != 0
    || (v14 & 0x1F) == 0 )
  {
    goto LABEL_9;
  }
  if ( (v14 & 0x1F) != 5 )
  {
    v15 = WdLogNewEntry5_WdError(((unsigned int)v4 >> 25) & 0x60);
    *(_QWORD *)(v15 + 24) = 316LL;
    WdLogEvent5_WdError(v15);
LABEL_9:
    v16 = 0LL;
    goto LABEL_10;
  }
  v16 = *(struct _EX_RUNDOWN_REF **)(v13 + 16LL * (unsigned int)v12);
LABEL_10:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v27, v16);
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( !v27 )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = v4;
LABEL_17:
    WdLogEvent5_WdError(v18);
    v22 = -1073741823;
    goto LABEL_19;
  }
  v19 = *((_QWORD *)a1 + 2);
  v20 = *(_QWORD *)(v27[1].Count + 16);
  if ( *(_QWORD *)(v20 + 16) == *(_QWORD *)(v19 + 16) )
  {
    memset(&v26, 0, sizeof(v26));
    v26.hAllocation = *(HANDLE *)(v27[6].Count + 16);
    if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v19 + 16) + 2528LL), &v26, v23) >= 0 )
    {
      Width = v26.Width;
      a3->left = 0;
      a3->top = 0;
      a3->right = Width;
      v22 = 0;
      a3->bottom = v26.Height;
      goto LABEL_19;
    }
    v18 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v18 + 24) = v26.hAllocation;
    *(_QWORD *)(v18 + 32) = a1;
    goto LABEL_17;
  }
  v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
  v22 = -1073741811;
  v21[3] = a1;
  v21[4] = v27;
  v21[5] = -1073741811LL;
  WdLogEvent5_WdError(v21);
LABEL_19:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v27);
  return v22;
}
