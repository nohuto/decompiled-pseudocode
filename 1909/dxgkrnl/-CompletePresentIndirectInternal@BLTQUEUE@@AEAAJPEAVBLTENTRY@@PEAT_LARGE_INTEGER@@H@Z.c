/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C027B738
 * Callers:
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C027C328 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C027C514 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C788 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C004716C (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     McTemplateK0did @ 0x1C0047520 (McTemplateK0did.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C02884F8 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall BLTQUEUE::CompletePresentIndirectInternal(
        BLTQUEUE *this,
        struct BLTENTRY *a2,
        union _LARGE_INTEGER *a3)
{
  struct DXGSWAPCHAIN **v3; // rax
  __int64 v7; // rbx
  struct DXGSWAPCHAIN *v8; // rcx
  int SetMetaDataInternal; // ebx
  __int64 v10; // rcx
  const GUID *v11; // r8
  __int64 v12; // rdx
  LONGLONG QuadPart; // rax
  struct DXGSWAPCHAIN **v14; // rcx
  struct DXGSWAPCHAIN *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGPROCESS *Current; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  LONGLONG v32; // [rsp+30h] [rbp-49h] BYREF
  _D3DKMT_GETSETSWAPCHAINMETADATA v33; // [rsp+38h] [rbp-41h] BYREF
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v34; // [rsp+60h] [rbp-19h] BYREF
  __int64 v35; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+90h] [rbp+17h]
  __int64 v37; // [rsp+98h] [rbp+1Fh]
  int v38; // [rsp+A0h] [rbp+27h]

  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  LODWORD(v7) = 0;
  if ( v3 )
  {
    v8 = *v3;
    if ( !*((_DWORD *)*v3 + 58) )
    {
      v33.hNtSwapChain = 0LL;
      v35 = 0LL;
      v36 = 0LL;
      v37 = 0LL;
      v38 = 0;
      v33.pBuffer = &v35;
      *(_QWORD *)&v33.DataCopied = 0LL;
      *(_QWORD *)&v33.bProducer = 1LL;
      v33.bSetMetaData = 0;
      v33.BufferSize = 28;
      SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v8, &v33, 0, 0);
      if ( SetMetaDataInternal == -2147483643 )
        SetMetaDataInternal = 0;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v33, (struct _KTHREAD **)this + 31, 0);
      DXGPUSHLOCK::AcquireShared(*(DXGPUSHLOCK **)&v33.bSetMetaData);
      v12 = HIDWORD(v35);
      if ( SetMetaDataInternal >= 0 && (v35 & 2) != 0 && (v10 = *((_QWORD *)this + 35), HIDWORD(v35) > v10) )
      {
        QuadPart = *((_QWORD *)this + 36) + *((_QWORD *)this + 37) * (HIDWORD(v35) - v10);
      }
      else if ( a3 )
      {
        QuadPart = a3->QuadPart;
      }
      else
      {
        QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
        v12 = HIDWORD(v35);
      }
      v32 = QuadPart;
      if ( SetMetaDataInternal < 0 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0did(v10, v12, v11, v36, QuadPart, 0);
      }
      else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0did(v10, v12, v11, v36, QuadPart, v12);
      }
      v33.bGlobalMetaData = 0;
      ExReleasePushLockSharedEx(*(_QWORD *)&v33.bSetMetaData, 0LL);
      KeLeaveCriticalRegion();
      *((_DWORD *)a2 + 17) = HIDWORD(v35);
      v14 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
      v34.hNtSwapChain = 0LL;
      *(_QWORD *)&v34.bProducer = 1LL;
      *(_QWORD *)&v34.DataCopied = 0LL;
      v15 = *v14;
      v34.bSetMetaData = 1;
      v34.pBuffer = &v32;
      v34.BufferSize = 8;
      v16 = SwapChainGetSetMetaDataInternal(v15, &v34, 0x14u, 0);
      v20 = v16;
      if ( v16 < 0 )
      {
        v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v21 + 24) = v20;
        WdLogEvent5_WdWarning(v21);
      }
      ObfReferenceObject(*((PVOID *)this + 320));
      Current = DXGPROCESS::GetCurrent(v23, v22);
      v25 = DXGWORKQUEUE::QueueWork(
              (PLIST_ENTRY)(*((_QWORD *)Current + 9) + 88LL),
              (struct _LIST_ENTRY *)lambda_16712371fc597dbb63c062fbcd9d104b_::_lambda_invoker_cdecl_,
              *((struct _LIST_ENTRY **)this + 320));
      v7 = v25;
      if ( v25 < 0 )
      {
        v29 = WdLogNewEntry5_WdError(v27, v26, v28);
        *(_QWORD *)(v29 + 24) = v7;
        WdLogEvent5_WdError(v29);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v33);
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v30 + 24) = 1470LL;
    WdLogEvent5_WdError(v30);
    LODWORD(v7) = -1073741823;
  }
  return (unsigned int)v7;
}
