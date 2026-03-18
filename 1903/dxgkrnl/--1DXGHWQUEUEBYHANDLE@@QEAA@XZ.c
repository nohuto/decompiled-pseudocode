/*
 * XREFs of ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0017688
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C013A2C8 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C016EA20 (-DxgkPresentVirtualFrameBuffer@@YAJIIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022A7B0 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C024844C (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C02492C8 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C024A9F0 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C024C038 (DxgkSubmitCommandToHwQueueInternal.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C024C470 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01209A8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247404 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE(DXGHWQUEUEBYHANDLE *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  struct DXGDEVICE *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r9
  _BYTE v12[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h]
  char v14; // [rsp+48h] [rbp-B8h]
  _BYTE v15[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h]
  char v17; // [rsp+60h] [rbp-A0h]
  _QWORD v18[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v19[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v20[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v21[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v22[88]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v23[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v24[64]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v25[88]; // [rsp+178h] [rbp+78h] BYREF

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this && !*((_BYTE *)this + 8) )
  {
    v3 = _InterlockedDecrement64((volatile signed __int64 *)(v2 + 72));
    if ( v3 < 0 )
    {
      v4 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v4 + 24) = 101LL;
      WdLogEvent5_WdAssertion(v4);
    }
    if ( !v3 )
    {
      v5 = *(_QWORD *)(v2 + 16);
      v6 = *(struct DXGDEVICE **)(v5 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18, v6);
      v7 = *((_QWORD *)v6 + 2);
      v14 = 0;
      v13 = *(_QWORD *)(v7 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v20, (__int64)v6, 2, v8, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v20);
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 176LL) != 4 )
        DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v5, (struct DXGHWQUEUE *)v2, (struct COREDEVICEACCESS *)v20);
      COREACCESS::~COREACCESS((COREACCESS *)v22);
      COREACCESS::~COREACCESS((COREACCESS *)v21);
      if ( v14 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
      if ( v18[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(v5 + 32)) )
      {
        v9 = *(_QWORD *)(v5 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v19,
          (struct DXGDEVICE *)v9);
        v10 = *(_QWORD *)(v5 + 16);
        v17 = 0;
        v16 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, v9, 2, v11, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((__int64)v23);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL) + 176LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v9, (struct DXGCONTEXT *)v5, (struct COREDEVICEACCESS *)v23);
        COREACCESS::~COREACCESS((COREACCESS *)v25);
        COREACCESS::~COREACCESS((COREACCESS *)v24);
        if ( v17 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
        if ( v19[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(v9 + 64)) )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v9 + 16), (struct DXGDEVICE *)v9);
      }
    }
  }
}
