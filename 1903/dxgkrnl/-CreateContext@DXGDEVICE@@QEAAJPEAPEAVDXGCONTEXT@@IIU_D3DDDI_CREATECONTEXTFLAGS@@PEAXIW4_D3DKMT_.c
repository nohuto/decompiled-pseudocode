/*
 * XREFs of ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C011F6CC
 * Callers:
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C0120394 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     DxgkCreateContext @ 0x1C0123590 (DxgkCreateContext.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014A0E0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C0201D6C (DxgkCreateLightweightDeviceAndContext.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000C860 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C000C95C (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C011D428 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C011F824 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0120EC8 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateContext(
        DXGDEVICE *this,
        struct DXGCONTEXT **a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        _QWORD *a6,
        unsigned int a7,
        enum _D3DKMT_CLIENTHINT a8,
        char a9)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGCONTEXT *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r9d
  DXGCONTEXT *v25; // rbx
  int v26; // esi
  DXGCONTEXT **v27; // rax
  __int64 v28; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _BYTE v35[32]; // [rsp+40h] [rbp-28h] BYREF

  if ( !a2 )
  {
    v30 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v30 + 24) = 1733LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v31 + 24) = 1734LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v32 + 24) = 1735LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !DXGPROCESS::GetCurrent(v16, v15) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v33 + 24) = 1741LL;
    WdLogEvent5_WdAssertion(v33);
  }
  *a2 = 0LL;
  v19 = (DXGCONTEXT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x1E8uLL);
  if ( v19 )
  {
    v24 = 1;
    if ( a4 )
      v24 = a4;
    v25 = DXGCONTEXT::DXGCONTEXT(v19, this, a3, v24, a5, a8, a9);
  }
  else
  {
    v25 = 0LL;
  }
  if ( v25 )
  {
    v26 = DXGCONTEXT::Initialize(v25, a6, a7);
    if ( v26 < 0 )
    {
      DXGCONTEXT::DestroyContext(v25, 0LL);
      DXGCONTEXT::`scalar deleting destructor'(v25);
    }
    else
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v35, (struct _KTHREAD **)this + 38);
      v27 = (DXGCONTEXT **)((char *)this + 360);
      v28 = *((_QWORD *)this + 45);
      if ( *(DXGDEVICE **)(v28 + 8) != (DXGDEVICE *)((char *)this + 360) )
        __fastfail(3u);
      *(_QWORD *)v25 = v28;
      *((_QWORD *)v25 + 1) = v27;
      *(_QWORD *)(v28 + 8) = v25;
      *v27 = v25;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
      *a2 = v25;
      _InterlockedIncrement64((volatile signed __int64 *)this + 8);
    }
  }
  else
  {
    v34 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
    v26 = -1073741801;
    *(_QWORD *)(v34 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v34);
  }
  return (unsigned int)v26;
}
