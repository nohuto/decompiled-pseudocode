/*
 * XREFs of ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C00D45D0
 * Callers:
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00D08B0 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkSetDisplayMode @ 0x1C011E5E0 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0013B08 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001A0FC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinPrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // r8
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 434) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 3689LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v13 + 24) = 3690LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 216)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v14 + 24) = 3691LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v15 + 24) = 3692LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (*((_DWORD *)this + v3 + 272) & 0x100) != 0 )
    return 0LL;
  if ( *((_QWORD *)this + 216) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
LABEL_16:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 32);
    *((_DWORD *)this + v3 + 272) |= 0x100u;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    return 0LL;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 32);
  v7 = 0LL;
  if ( !*((_DWORD *)this + v3 + 208) )
  {
LABEL_15:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    goto LABEL_16;
  }
  while ( 1 )
  {
    v8 = *((_QWORD *)this + v3 + 88);
    v9 = *(_QWORD *)(v8 + 8 * v7);
    if ( v9 )
    {
      v10 = *(unsigned int *)(*(_QWORD *)(v9 + 48) + 4LL);
      if ( (v10 & 1) == 0 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v16 + 24) = 3705LL;
        WdLogEvent5_WdAssertion(v16);
        v8 = *((_QWORD *)this + v3 + 88);
      }
      v11 = VIDMM_EXPORT::VidMmPinAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
              *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(v8 + 8 * v7) + 24LL),
              0LL,
              0LL);
      if ( v11 < 0 )
        break;
    }
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= *((_DWORD *)this + v3 + 208) )
      goto LABEL_15;
  }
  if ( (_DWORD)v7 )
  {
    v17 = 0LL;
    do
    {
      v18 = *(_QWORD *)(v17 + *((_QWORD *)this + v3 + 88));
      if ( v18 )
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
          *(struct _VIDMM_MULTI_ALLOC **)(v18 + 24));
      v17 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return (unsigned int)v11;
}
