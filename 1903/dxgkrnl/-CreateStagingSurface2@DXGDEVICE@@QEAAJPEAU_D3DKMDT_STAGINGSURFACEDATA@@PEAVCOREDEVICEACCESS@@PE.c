/*
 * XREFs of ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C022DD44
 * Callers:
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C025AAB4 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02951F4 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0408 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C022DF00 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C022F604 (-MakeAllocationResident@DXGDEVICE@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateStagingSurface2(
        DXGDEVICE *this,
        struct _D3DKMDT_STAGINGSURFACEDATA *a2,
        PERESOURCE **a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // al
  __int64 result; // rax
  int AllocationResident; // esi
  _QWORD v15[54]; // [rsp+20h] [rbp-E0h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 8331LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]);
  memset(v15, 0, 0x1A8uLL);
  *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v12 = v15[51];
  HIDWORD(v15[0]) = 0;
  LODWORD(v15[2]) = 3;
  v15[3] = a2;
  if ( !a5 )
    v12 = 1;
  LOBYTE(v15[51]) = v12;
  result = DXGDEVICE::CreateStandardAllocation(this, (struct _D3DKM_CREATESTANDARDALLOCATION *)v15, a3);
  if ( (int)result >= 0 )
  {
    AllocationResident = DXGDEVICE::MakeAllocationResident(this, HIDWORD(v15[6]), (struct COREDEVICEACCESS *)a3);
    if ( AllocationResident >= 0 )
    {
      *a4 = HIDWORD(v15[6]);
      if ( a5 )
        *a5 = v15[1];
    }
    else
    {
      DXGDEVICE::DestroyStagingSurface(this, HIDWORD(v15[6]), v15[1], (struct COREDEVICEACCESS *)a3);
    }
    return (unsigned int)AllocationResident;
  }
  return result;
}
