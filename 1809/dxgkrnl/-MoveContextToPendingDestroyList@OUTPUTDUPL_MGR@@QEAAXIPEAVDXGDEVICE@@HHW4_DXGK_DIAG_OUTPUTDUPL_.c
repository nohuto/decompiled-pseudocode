/*
 * XREFs of ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C012B530
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00CFD48 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C011FB7C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01229C8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C012B420 (-ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C012B44C (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012B4A8 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0139ED8 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     _lambda_090d52b4b377212e5b096f8abab319d1_::_lambda_invoker_cdecl_ @ 0x1C023BBF0 (_lambda_090d52b4b377212e5b096f8abab319d1_--_lambda_invoker_cdecl_.c)
 *     ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C023F0D4 (-ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C023F160 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C023F1D0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C023F420 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C012B874 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C023DED8 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C02439C0 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0243E90 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
        OUTPUTDUPL_CONTEXT **a1,
        unsigned int a2,
        struct DXGDEVICE *a3,
        int a4,
        int a5,
        int a6)
{
  OUTPUTDUPL_CONTEXT *v7; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  struct _KTHREAD **v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  OUTPUTDUPL_CONTEXT *v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v18; // rax
  OUTPUTDUPL_MGR *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // r12d
  OUTPUTDUPL_CONTEXT **i; // rdi
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  unsigned int ProcessSessionId; // ebx
  OUTPUTDUPL_CONTEXT *v30; // rcx
  OUTPUTDUPL_CONTEXT **v31; // rax
  OUTPUTDUPL_CONTEXT *v32; // rdx
  __int64 v34; // [rsp+38h] [rbp-81h] BYREF
  char v35; // [rsp+40h] [rbp-79h]
  _BYTE v36[8]; // [rsp+48h] [rbp-71h] BYREF
  struct _KTHREAD **v37; // [rsp+50h] [rbp-69h]
  int v38; // [rsp+58h] [rbp-61h]
  _DWORD v39[8]; // [rsp+60h] [rbp-59h] BYREF
  _DWORD v40[16]; // [rsp+80h] [rbp-39h] BYREF

  v7 = *a1;
  v9 = a2;
  if ( v7 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v7 + 2)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v10 + 24) = 2356LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = (struct _KTHREAD **)a1[3];
  v37 = v11;
  if ( v11 && v11[1] == KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v12 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v11);
  v14 = a1[2];
  v15 = 32 * v9;
  v38 = 2;
  v34 = *((_QWORD *)v14 + 4 * v9);
  v35 = 0;
  if ( !v34 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v16 + 24) = 511LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v34 + 8) == CurrentThread )
  {
    v18 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v18 + 24) = 518LL;
    WdLogEvent5_WdAssertion(v18);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v34);
  memset(v40, 0, sizeof(v40));
  OUTPUTDUPL_MGR::InitializePacketHeader(v19, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v40);
  v40[1] = 64;
  v22 = 0;
  v40[12] = 1;
  v40[13] = v9;
  v40[15] = a6;
  for ( i = *(OUTPUTDUPL_CONTEXT ***)((char *)v14 + v15 + 8); v22 < *((_DWORD *)a1 + 2); ++i )
  {
    if ( *i )
    {
      if ( *((_DWORD *)*i + 72) )
      {
        v24 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v24 + 24) = 2385LL;
        WdLogEvent5_WdAssertion(v24);
      }
      if ( !a3 || OUTPUTDUPL_CONTEXT::GetProducerDevice(*i) == a3 )
      {
        if ( !a4 || (v25 = *((_QWORD *)*i + 3), PsGetCurrentProcess(v21, v20) == v25) )
        {
          if ( !a5 || !*((_DWORD *)*i + 82) )
          {
            if ( *((_DWORD *)*i + 79) )
            {
              v26 = *(_DWORD *)((char *)v14 + v15 + 24);
              if ( !v26 )
              {
                v27 = WdLogNewEntry5_WdAssertion(v21);
                *(_QWORD *)(v27 + 24) = 2408LL;
                WdLogEvent5_WdAssertion(v27);
                v26 = *(_DWORD *)((char *)v14 + v15 + 24);
              }
              v28 = v26 - 1;
              *(_DWORD *)((char *)v14 + v15 + 24) = v28;
              if ( !v28 )
              {
                ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)*i + 3));
                memset(v39, 0, sizeof(v39));
                v39[0] = 15;
                SMgrGdiCallout(v39, ProcessSessionId, 0LL, 0LL, 0LL, 0LL);
              }
            }
            OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(*i);
            v30 = *i;
            v31 = a1 + 4;
            v32 = a1[4];
            if ( *((OUTPUTDUPL_CONTEXT ***)v32 + 1) != a1 + 4 )
              __fastfail(3u);
            *(_QWORD *)v30 = v32;
            *((_QWORD *)v30 + 1) = v31;
            *((_QWORD *)v32 + 1) = v30;
            *v31 = v30;
            *i = 0LL;
            v40[14] = v22;
            OUTPUTDUPL_MGR::LogEtwAndDiagnostics((OUTPUTDUPL_MGR *)a1, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v40, 1);
          }
        }
      }
    }
    ++v22;
  }
  if ( v35 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v34);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
}
