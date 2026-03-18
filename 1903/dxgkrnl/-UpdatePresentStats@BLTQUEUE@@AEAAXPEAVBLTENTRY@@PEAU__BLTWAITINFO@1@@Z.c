/*
 * XREFs of ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C027E4BC
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01421C4 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C580 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0dddi @ 0x1C0047310 (McTemplateK0dddi.c)
 *     McTemplateK0qiii @ 0x1C00475C0 (McTemplateK0qiii.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C02880E4 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

void __fastcall BLTQUEUE::UpdatePresentStats(BLTQUEUE *this, struct BLTENTRY *a2, struct BLTQUEUE::__BLTWAITINFO *a3)
{
  DXGPUSHLOCK *v6; // rbx
  LARGE_INTEGER v7; // rax
  __int64 v8; // r8
  LARGE_INTEGER v9; // rdi
  __int64 v10; // rcx
  LONGLONG v11; // r9
  int v12; // r15d
  LONGLONG v13; // rax
  LONGLONG v14; // rdx
  bool v15; // zf
  __int64 v16; // r14
  const GUID *v17; // r8
  struct DXGSWAPCHAIN **v18; // rcx
  struct DXGSWAPCHAIN *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-39h] BYREF
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v26; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v27[8]; // [rsp+70h] [rbp-9h] BYREF
  DXGPUSHLOCK *v28; // [rsp+78h] [rbp-1h]
  int v29; // [rsp+80h] [rbp+7h]
  _QWORD v30[2]; // [rsp+88h] [rbp+Fh] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27, (struct _KTHREAD **)this + 31, 0);
  v6 = v28;
  DXGPUSHLOCK::AcquireExclusive(v28);
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = *((unsigned int *)this + 52);
  v9 = v7;
  v10 = *((unsigned int *)this + 53);
  v11 = v7.QuadPart * v8 / v10 / PerformanceFrequency.QuadPart;
  *((_QWORD *)this + 35) = v11;
  v12 = v11;
  v13 = PerformanceFrequency.QuadPart * v10 * (unsigned int)v11 / v8;
  v14 = PerformanceFrequency.QuadPart * v10 * (unsigned int)v11 % v8;
  v15 = bTracingEnabled == 0;
  *((_QWORD *)this + 36) = v13;
  if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qiii(v10, v14, (const GUID *)v8, 1, v11, *((_QWORD *)this + 34), v13);
    v12 = *((_DWORD *)this + 70);
  }
  v16 = *((unsigned int *)a2 + 15);
  *((_QWORD *)v6 + 1) = 0LL;
  v29 = 0;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
  v18 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( v18 )
  {
    if ( (*((_DWORD *)a2 + 16) & 8) == 0 )
    {
      v26.hNtSwapChain = 0LL;
      v30[0] = 0LL;
      v30[1] = 0LL;
      v19 = *v18;
      v26.bGlobalMetaData = 1;
      v26.bProducer = 1;
      *(_QWORD *)&v26.DataCopied = 0LL;
      v26.bSetMetaData = 0;
      v26.pBuffer = v30;
      v26.BufferSize = 16;
      if ( (int)SwapChainGetSetMetaDataInternal(v19, &v26, 0, 0) >= 0 && v26.DataCopied == 16 )
      {
        v20 = HIDWORD(v30[0]);
        if ( HIDWORD(v30[0]) )
        {
          *((_BYTE *)this + 192) = 1;
          if ( v9.QuadPart - *((_QWORD *)a2 + 67) > PerformanceFrequency.QuadPart / 10 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v20, PerformanceFrequency.QuadPart / 10);
            *(_QWORD *)(v22 + 24) = v16;
            *(_QWORD *)(v22 + 32) = HIDWORD(v30[0]);
            WdLogEvent5_WdAssertion(v22);
          }
          else if ( (unsigned int)v20 < (unsigned int)v16
                 || (v21 = *((unsigned int *)a2 + 17), (_DWORD)v21) && v21 > *((_QWORD *)this + 35) )
          {
            LODWORD(v16) = *((_DWORD *)this + 40);
            v12 = *((_DWORD *)this + 41);
            *(_DWORD *)a3 |= 2u;
          }
        }
      }
    }
  }
  v15 = bTracingEnabled == 0;
  v23 = *((unsigned int *)this + 70);
  v24 = *((_QWORD *)this + 36);
  *((_QWORD *)this + 22) = v24;
  *((_DWORD *)this + 40) = v16;
  *((_DWORD *)this + 41) = v12;
  *((_DWORD *)this + 42) = v23;
  *((_DWORD *)this + 676) = v23;
  if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0dddi(v23, v24, v17, v16, v12, v23, v24);
  KeReleaseMutex((PRKMUTEX)((char *)this + 2568), 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
}
