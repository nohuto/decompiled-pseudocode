/*
 * XREFs of ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180005CF0
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18000C7C0 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x18000CC40 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 *     ??1?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800662CC (--1-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Micros.c)
 *     ??1InternalHitTestResult@HitTestHelper@@QEAA@XZ @ 0x18006A9B8 (--1InternalHitTestResult@HitTestHelper@@QEAA@XZ.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@@Z @ 0x18006BA30 (-GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManager.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x18006BC50 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragS.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800C4030 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1800C4520 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     ?HitTestForPoint@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@@Z @ 0x1800C46B0 (-HitTestForPoint@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@@Z.c)
 *     ?HitTestForPointAndType@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x1800C47B0 (-HitTestForPointAndType@DWMInputRouter@@UEAA-AUHitTestResult@@UtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1800C5124 (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1800C5404 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 *     ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x1800F9220 (-RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800FF1F4 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18005287C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rcx
  const struct std::nothrow_t *v5; // rdx
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        v4 = *v1;
        if ( *v1 )
        {
          *v1 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v1;
      }
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    v5 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    v7 = v1;
    v6 = (unsigned __int64)v5;
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v6);
      v5 = (const struct std::nothrow_t *)v6;
      v1 = (__int64 *)v7;
    }
    operator delete(v1, v5);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
