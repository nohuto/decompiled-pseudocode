/*
 * XREFs of ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C01FDC5C
 * Callers:
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C01FDAA0 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0226194 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C025F12C (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyStagingSurface(DXGDEVICE *this, unsigned int a2, unsigned int a3, PERESOURCE **a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v11; // rax
  struct DXGRESOURCE *v12; // rbp
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // edx
  unsigned __int64 v21; // rax
  unsigned int v22; // edi
  __int64 v23; // r9
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // edx
  struct DXGALLOCATION **v28; // r8
  struct DXGRESOURCE *v29; // r9
  unsigned int v30; // edx
  _BYTE v31[32]; // [rsp+30h] [rbp-48h] BYREF
  struct DXGALLOCATION *v33; // [rsp+98h] [rbp+20h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 8311LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a4 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a4[3]);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 8319LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = 0LL;
  v33 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v31,
    (struct _KTHREAD **)Current);
  if ( !a3 )
  {
    v22 = (a2 >> 6) & 0xFFFFFF;
    if ( v22 < *((_DWORD *)Current + 62) )
    {
      v23 = *((_QWORD *)Current + 29);
      v13 = (a2 >> 25) & 0x60;
      v24 = *(_DWORD *)(v23 + 16LL * v22 + 8);
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16LL * v22 + 8) & 0x60) && (v24 & 0x2000) == 0 && (v24 & 0x1F) != 0 )
      {
        if ( (v24 & 0x1F) == 5 )
        {
          v33 = *(struct DXGALLOCATION **)(v23 + 16LL * v22);
          if ( v33 )
          {
LABEL_31:
            if ( v22 >= *((_DWORD *)Current + 62) )
              goto LABEL_37;
            v19 = *((_QWORD *)Current + 29);
            v27 = *(_DWORD *)(v19 + 16LL * v22 + 8);
            if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v19 + 16LL * v22 + 8) & 0x60)
              || (v27 & 0x2000) != 0
              || (v27 & 0x1F) == 0 )
            {
              goto LABEL_37;
            }
            v21 = a2;
            goto LABEL_36;
          }
LABEL_30:
          v26 = WdLogNewEntry5_WdAssertion(v13);
          *(_QWORD *)(v26 + 24) = 8336LL;
          WdLogEvent5_WdAssertion(v26);
          goto LABEL_31;
        }
        v25 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v25 + 24) = 316LL;
        WdLogEvent5_WdError(v25);
      }
    }
    v33 = 0LL;
    goto LABEL_30;
  }
  v14 = (a3 >> 6) & 0xFFFFFF;
  if ( v14 >= *((_DWORD *)Current + 62) )
    goto LABEL_14;
  v15 = *((_QWORD *)Current + 29);
  v13 = (a3 >> 25) & 0x60;
  v16 = *(_DWORD *)(v15 + 16LL * v14 + 8);
  if ( ((a3 >> 25) & 0x60) != (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60) || (v16 & 0x2000) != 0 || (v16 & 0x1F) == 0 )
    goto LABEL_14;
  if ( (v16 & 0x1F) != 4 )
  {
    v17 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v17 + 24) = 316LL;
    WdLogEvent5_WdError(v17);
LABEL_14:
    v12 = 0LL;
LABEL_15:
    v18 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v18 + 24) = 8330LL;
    WdLogEvent5_WdAssertion(v18);
    goto LABEL_16;
  }
  v12 = *(struct DXGRESOURCE **)(v15 + 16LL * v14);
  if ( !v12 )
    goto LABEL_15;
LABEL_16:
  if ( v14 >= *((_DWORD *)Current + 62) )
    goto LABEL_37;
  v19 = *((_QWORD *)Current + 29);
  v20 = *(_DWORD *)(v19 + 16LL * v14 + 8);
  if ( ((a3 >> 25) & 0x60) != (*(_BYTE *)(v19 + 16LL * v14 + 8) & 0x60) || (v20 & 0x2000) != 0 || (v20 & 0x1F) == 0 )
    goto LABEL_37;
  v21 = a3;
LABEL_36:
  *(_DWORD *)(v19 + 16 * ((v21 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
LABEL_37:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  if ( a3 )
  {
    v28 = 0LL;
    v29 = v12;
    v30 = 0;
  }
  else
  {
    v29 = 0LL;
    v28 = &v33;
    v30 = 1;
  }
  DXGDEVICE::DestroyAllocationInternal(
    this,
    v30,
    v28,
    v29,
    (struct COREDEVICEACCESS *)a4,
    DXGDEVICE::DestroyFlagsDefault);
}
