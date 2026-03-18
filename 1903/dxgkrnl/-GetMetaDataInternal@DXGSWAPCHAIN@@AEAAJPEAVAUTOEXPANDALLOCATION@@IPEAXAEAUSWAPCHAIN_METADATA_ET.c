/*
 * XREFs of ?GetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@IPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@DPEAI@Z @ 0x1C02863A0
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C028654C (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 * Callees:
 *     memmove @ 0x1C0024FC0 (memmove.c)
 */

__int64 __fastcall DXGSWAPCHAIN::GetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        __int64 a3,
        char *a4,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a5,
        char a6,
        unsigned int *a7)
{
  __int64 v8; // rbx
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  const void *v16; // r15
  size_t v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx

  v8 = (unsigned int)a3;
  if ( this[2] != KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 3158LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_DWORD *)a2 + 2);
  if ( (_DWORD)v8 )
  {
    if ( (unsigned int)v8 > v11 )
      v8 = v11;
    v16 = *(const void **)a2;
    v17 = 16LL;
    if ( v11 <= 0x10 )
      v17 = *((unsigned int *)a2 + 2);
    memmove((char *)a5 + 12, *(const void **)a2, v17);
    if ( a6 == 1 )
    {
      v18 = (unsigned int)v8;
      if ( (unsigned __int64)&a4[v8] > MmUserProbeAddress || &a4[v8] <= a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a4, v16, (unsigned int)v8);
    }
    else
    {
      v18 = (unsigned int)v8;
      memmove(a4, v16, (unsigned int)v8);
    }
    *((_DWORD *)a5 + 2) = v8;
    *a7 = v8;
    if ( v11 <= (unsigned int)v8 )
      return 0LL;
    v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v22 + 24) = PsGetCurrentProcess(v24, v23);
    *(_QWORD *)(v22 + 32) = v18;
    WdLogEvent5_WdWarning(v22);
    return 2147483653LL;
  }
  else
  {
    if ( !a4 )
    {
      *a7 = v11;
      return 0LL;
    }
    v13 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v15, v14);
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
}
