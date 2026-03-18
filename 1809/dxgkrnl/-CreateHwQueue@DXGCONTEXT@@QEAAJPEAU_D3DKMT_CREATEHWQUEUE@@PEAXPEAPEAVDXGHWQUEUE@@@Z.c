/*
 * XREFs of ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C0213168
 * Callers:
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01399A0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateHwQueueInternal @ 0x1C02172D8 (DxgkCreateHwQueueInternal.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C003C220 (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C021371C (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C02141B0 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CreateHwQueue(
        DXGCONTEXT *this,
        struct _D3DKMT_CREATEHWQUEUE *a2,
        void *a3,
        struct DXGHWQUEUE **a4)
{
  __int64 v5; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *PoolWithQuotaTag; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // esi
  DXGHWQUEUE *v21; // rax
  DXGHWQUEUE **v22; // rcx
  __int64 v23; // rdx

  v5 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v5 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 104)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 366LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 367LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v13 + 24) = 368LL;
    WdLogEvent5_WdAssertion(v13);
  }
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x70uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
  {
    v16 = 0LL;
    PoolWithQuotaTag[2] = this;
    *PoolWithQuotaTag = 0LL;
    PoolWithQuotaTag[1] = 0LL;
    PoolWithQuotaTag[3] = 0LL;
    PoolWithQuotaTag[4] = 0LL;
    PoolWithQuotaTag[5] = 0LL;
    PoolWithQuotaTag[6] = 0LL;
    PoolWithQuotaTag[7] = 0LL;
    PoolWithQuotaTag[8] = 0LL;
    PoolWithQuotaTag[9] = 1LL;
    *((_BYTE *)PoolWithQuotaTag + 80) = 0;
    PoolWithQuotaTag[11] = 0LL;
    PoolWithQuotaTag[12] = 0LL;
    *((_DWORD *)PoolWithQuotaTag + 26) = 0;
  }
  else
  {
    PoolWithQuotaTag = 0LL;
  }
  *a4 = (struct DXGHWQUEUE *)PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    v19 = -1073741801;
    *(_QWORD *)(v18 + 24) = this;
    *(_QWORD *)(v18 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v18);
LABEL_14:
    if ( *a4 )
    {
      DXGHWQUEUE::DestroyCoreState(*a4, 0LL);
      if ( *a4 )
        DXGHWQUEUE::`scalar deleting destructor'(*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v19;
  }
  v19 = DXGHWQUEUE::Initialize((DXGHWQUEUE *)PoolWithQuotaTag, a2, a3);
  if ( v19 < 0 )
    goto LABEL_14;
  v21 = *a4;
  v22 = (DXGHWQUEUE **)((char *)this + 400);
  v23 = *((_QWORD *)this + 50);
  if ( *(DXGCONTEXT **)(v23 + 8) != (DXGCONTEXT *)((char *)this + 400) )
    __fastfail(3u);
  *(_QWORD *)v21 = v23;
  *((_QWORD *)v21 + 1) = v22;
  *(_QWORD *)(v23 + 8) = v21;
  *v22 = v21;
  _InterlockedIncrement64((volatile signed __int64 *)this + 4);
  return 0LL;
}
