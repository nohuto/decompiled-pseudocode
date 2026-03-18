/*
 * XREFs of ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C0287404
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C0289110 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C0289BA0 (DxgkOpenSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C02862C4 (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSwapchainLocal(
        DXGSWAPCHAIN *this,
        __int64 a2,
        struct DXGDEVICE *a3,
        void *a4,
        int a5,
        int a6)
{
  int v8; // r12d
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  struct _KEVENT *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v37[24]; // [rsp+38h] [rbp-30h] BYREF

  v8 = a2;
  v10 = 0;
  if ( !DXGPROCESS::GetCurrent((__int64)this, a2) )
  {
    v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v14 + 24) = PsGetCurrentProcess(v16, v15);
    WdLogEvent5_WdWarning(v14);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  if ( *((_DWORD *)this + 10) )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdWarning(v21);
    v10 = -1073741738;
  }
  else
  {
    v22 = (char *)this + (a6 != 0 ? 136LL : 88LL);
    if ( *((_QWORD *)v22 + 2) )
    {
      v23 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v23 + 24) = this;
      *(_QWORD *)(v23 + 32) = a6;
      WdLogEvent5_WdWarning(v23);
      v10 = -1073740008;
    }
    else
    {
      *((_QWORD *)v22 + 2) = PsGetCurrentProcess(v19, v18);
      *(_DWORD *)v22 = v8;
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 276LL) == *((_QWORD *)this + 24) )
      {
        *((_DWORD *)v22 + 6) = a5;
        if ( a4 )
        {
          if ( a5 )
          {
            v27 = WdLogNewEntry5_WdError(v25, v24, v26);
            *(_QWORD *)(v27 + 24) = 2015LL;
            WdLogEvent5_WdError(v27);
            v10 = -1073741822;
          }
          else
          {
            v28 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            v31 = (struct _KEVENT *)Object;
            v10 = v28;
            *((_QWORD *)v22 + 4) = Object;
            if ( v28 >= 0 )
            {
              if ( !a6 )
                KeSetEvent(v31, 2, 0);
            }
            else
            {
              v32 = WdLogNewEntry5_WdError(v31, v29, v30);
              *(_QWORD *)(v32 + 24) = a4;
              *(_QWORD *)(v32 + 32) = PsGetCurrentProcess(v34, v33);
              WdLogEvent5_WdError(v32);
            }
            if ( v10 >= 0 )
              goto LABEL_18;
          }
          DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v22);
        }
      }
      else
      {
        v35 = WdLogNewEntry5_WdError(v25, v24, v26);
        *(_QWORD *)(v35 + 24) = this;
        WdLogEvent5_WdError(v35);
        v10 = -1073741811;
      }
    }
  }
LABEL_18:
  if ( v37[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
  return (unsigned int)v10;
}
