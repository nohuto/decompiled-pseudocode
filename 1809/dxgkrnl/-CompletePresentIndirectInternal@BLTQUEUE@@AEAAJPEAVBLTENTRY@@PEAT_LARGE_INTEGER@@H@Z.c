/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C0245B50
 * Callers:
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C0246404 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C02465E8 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C00403AC (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     McTemplateK0did @ 0x1C0040874 (McTemplateK0did.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C025223C (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall BLTQUEUE::CompletePresentIndirectInternal(
        BLTQUEUE *this,
        struct BLTENTRY *a2,
        union _LARGE_INTEGER *a3)
{
  struct DXGSWAPCHAIN **v3; // rsi
  struct DXGSWAPCHAIN *v7; // rcx
  int SetMetaDataInternal; // esi
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v11; // rdx
  LONGLONG QuadPart; // rax
  struct DXGSWAPCHAIN **v13; // rcx
  struct DXGSWAPCHAIN *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rax
  struct DXGPROCESS *Current; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  LONGLONG v28; // [rsp+30h] [rbp-49h] BYREF
  _D3DKMT_GETSETSWAPCHAINMETADATA v29; // [rsp+38h] [rbp-41h] BYREF
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v30; // [rsp+60h] [rbp-19h] BYREF
  __int64 v31; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v32; // [rsp+90h] [rbp+17h]
  __int64 v33; // [rsp+98h] [rbp+1Fh]
  int v34; // [rsp+A0h] [rbp+27h]

  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( v3 )
  {
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0;
    memset(&v29, 0, sizeof(v29));
    v7 = *v3;
    v29.pBuffer = &v31;
    *(_QWORD *)&v29.bProducer = 1LL;
    v29.bSetMetaData = 0;
    v29.BufferSize = 28;
    SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v7, &v29, 0, 0);
    if ( SetMetaDataInternal == -2147483643 )
      SetMetaDataInternal = 0;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v29, (struct _KTHREAD **)this + 31, 0);
    DXGPUSHLOCK::AcquireShared(*(DXGPUSHLOCK **)&v29.bSetMetaData);
    v11 = HIDWORD(v31);
    if ( SetMetaDataInternal >= 0 && (v31 & 2) != 0 && (v9 = *((_QWORD *)this + 35), HIDWORD(v31) > v9) )
    {
      QuadPart = *((_QWORD *)this + 36) + *((_QWORD *)this + 37) * (HIDWORD(v31) - v9);
    }
    else if ( a3 )
    {
      QuadPart = a3->QuadPart;
    }
    else
    {
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
      v11 = HIDWORD(v31);
    }
    v28 = QuadPart;
    if ( SetMetaDataInternal < 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0did(v9, v11, v10, v32, QuadPart, 0);
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0did(v9, v11, v10, v32, QuadPart, v11);
    }
    v29.bGlobalMetaData = 0;
    ExReleasePushLockSharedEx(*(_QWORD *)&v29.bSetMetaData, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)a2 + 17) = HIDWORD(v31);
    memset(&v30, 0, sizeof(v30));
    v13 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
    v30.bProducer = 1;
    v30.bSetMetaData = 1;
    v30.pBuffer = &v28;
    v14 = *v13;
    v30.BufferSize = 8;
    v15 = SwapChainGetSetMetaDataInternal(v14, &v30, 0x14u, 0);
    v19 = v15;
    if ( v15 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v20 + 24) = v19;
      WdLogEvent5_WdWarning(v20);
    }
    ObfReferenceObject(*((PVOID *)this + 320));
    Current = DXGPROCESS::GetCurrent();
    v22 = DXGWORKQUEUE::QueueWork(
            (PLIST_ENTRY)(*((_QWORD *)Current + 9) + 88LL),
            (struct _LIST_ENTRY *)lambda_16712371fc597dbb63c062fbcd9d104b_::_lambda_invoker_cdecl_,
            *((struct _LIST_ENTRY **)this + 320));
    v24 = v22;
    if ( v22 < 0 )
    {
      v25 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v25 + 24) = v24;
      WdLogEvent5_WdError(v25);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v29);
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v26 + 24) = 1423LL;
    WdLogEvent5_WdError(v26);
    LODWORD(v24) = -1073741823;
  }
  return (unsigned int)v24;
}
