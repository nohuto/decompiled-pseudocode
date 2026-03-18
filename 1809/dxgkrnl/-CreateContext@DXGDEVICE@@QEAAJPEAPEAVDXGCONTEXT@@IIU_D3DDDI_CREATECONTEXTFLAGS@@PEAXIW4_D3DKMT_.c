/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E6218
 * Callers:
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00E9B5C (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     DxgkCreateContext @ 0x1C00F56C0 (DxgkCreateContext.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01399A0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C0038C24 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00E6380 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E6DA0 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA1E4 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateContext(
        DXGDEVICE *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        void *a6,
        unsigned int a7,
        enum _D3DKMT_CLIENTHINT a8,
        char a9)
{
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  DXGCONTEXT *PoolWithQuotaTag; // rax
  __int64 v17; // rcx
  unsigned int v18; // r9d
  DXGCONTEXT *v19; // rbx
  int v20; // esi
  DXGCONTEXT **v21; // rax
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v29[32]; // [rsp+40h] [rbp-28h] BYREF

  if ( !a2 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v24 + 24) = 1727LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v25 + 24) = 1728LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v26 + 24) = 1729LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    v27 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v27 + 24) = 1735LL;
    WdLogEvent5_WdAssertion(v27);
  }
  *a2 = 0LL;
  PoolWithQuotaTag = (DXGCONTEXT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x1D8uLL, 0x4B677844u);
  if ( PoolWithQuotaTag )
  {
    v18 = 1;
    if ( a4 )
      v18 = a4;
    v19 = DXGCONTEXT::DXGCONTEXT(PoolWithQuotaTag, this, a3, v18, a5, a8, a9);
  }
  else
  {
    v19 = 0LL;
  }
  if ( v19 )
  {
    v20 = DXGCONTEXT::Initialize(v19, a6, a7);
    if ( v20 < 0 )
    {
      DXGCONTEXT::DestroyContext(v19, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v19);
    }
    else
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v29, (struct _KTHREAD **)this + 38);
      v21 = (DXGCONTEXT **)((char *)this + 360);
      v22 = *((_QWORD *)this + 45);
      if ( *(DXGDEVICE **)(v22 + 8) != (DXGDEVICE *)((char *)this + 360) )
        __fastfail(3u);
      *(_QWORD *)v19 = v22;
      *((_QWORD *)v19 + 1) = v21;
      *(_QWORD *)(v22 + 8) = v19;
      *v21 = v19;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
      *a2 = v19;
      _InterlockedIncrement64((volatile signed __int64 *)this + 8);
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdLowResource(v17);
    v20 = -1073741801;
    *(_QWORD *)(v28 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v28);
  }
  return (unsigned int)v20;
}
