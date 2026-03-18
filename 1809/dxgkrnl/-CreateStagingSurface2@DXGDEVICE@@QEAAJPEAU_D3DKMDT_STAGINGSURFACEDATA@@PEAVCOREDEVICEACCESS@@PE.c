/*
 * XREFs of ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C01FDAA0
 * Callers:
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0226194 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C025F12C (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F8394 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C01FDC5C (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C01FEF28 (-MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateStagingSurface2(
        DXGDEVICE *this,
        struct _D3DKMDT_STAGINGSURFACEDATA *a2,
        PERESOURCE **a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // al
  __int64 result; // rax
  int AllocationResident; // esi
  _QWORD v14[54]; // [rsp+20h] [rbp-E0h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 8249LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]);
  memset(v14, 0, 0x1A8uLL);
  *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v11 = v14[51];
  HIDWORD(v14[0]) = 0;
  LODWORD(v14[2]) = 3;
  v14[3] = a2;
  if ( !a5 )
    v11 = 1;
  LOBYTE(v14[51]) = v11;
  result = DXGDEVICE::CreateStandardAllocation(this, (struct _D3DKM_CREATESTANDARDALLOCATION *)v14, a3);
  if ( (int)result >= 0 )
  {
    AllocationResident = DXGDEVICE::MakeAllocationResident(this, HIDWORD(v14[6]), (struct COREDEVICEACCESS *)a3);
    if ( AllocationResident >= 0 )
    {
      *a4 = HIDWORD(v14[6]);
      if ( a5 )
        *a5 = v14[1];
    }
    else
    {
      DXGDEVICE::DestroyStagingSurface(this, HIDWORD(v14[6]), v14[1], (struct COREDEVICEACCESS *)a3);
    }
    return (unsigned int)AllocationResident;
  }
  return result;
}
