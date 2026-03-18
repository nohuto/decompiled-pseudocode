/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C0251F4C
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C0250818 (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C0251A30 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     ?RtlUIntAdd@@YAJIIPEAI@Z @ 0x1C00109CC (-RtlUIntAdd@@YAJIIPEAI@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C013B158 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0250ECC (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::SetMetaDataInternal(
        struct _KTHREAD **this,
        struct AUTOEXPANDALLOCATION *a2,
        int *a3,
        unsigned int a4,
        size_t a5,
        char *Src,
        struct DXGSWAPCHAIN::SWAPCHAIN_METADATA_ETW_INFO *a7,
        char a8)
{
  __int64 v8; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  const GUID *v22; // r8
  unsigned int v23; // edi
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  const GUID *v28; // r8
  unsigned int v29; // ebx
  char *Buffer; // rax
  __int64 v31; // rcx
  char *v32; // rbx
  __int64 v33; // rax
  char *v34; // rbx
  size_t v35; // rdi
  size_t Size[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = a4;
  if ( this[1] != KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 3113LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !(_DWORD)a5 )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v15, v14);
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  if ( (int)RtlUIntAdd(v8, a5, (unsigned int *)Size) < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = PsGetCurrentProcess(v20, v19);
    WdLogEvent5_WdError(v18);
    DXGSWAPCHAIN::MarkAbandoned(this, v21, v22);
    return 3221225485LL;
  }
  v23 = *((_DWORD *)a2 + 2);
  if ( LODWORD(Size[0]) > v23 )
    v23 = Size[0];
  if ( v23 > 0x2000 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v24[3] = PsGetCurrentProcess(v26, v25);
    v24[4] = v23;
    v24[5] = 0x2000LL;
    WdLogEvent5_WdError(v24);
    v29 = -1073741811;
LABEL_14:
    DXGSWAPCHAIN::MarkAbandoned(this, v27, v28);
    return v29;
  }
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(a2, v23, *a3);
  v32 = Buffer;
  if ( !Buffer )
  {
    v33 = WdLogNewEntry5_WdLowResource(v31);
    *(_QWORD *)(v33 + 24) = v23;
    WdLogEvent5_WdLowResource(v33);
    v29 = -1073741801;
    goto LABEL_14;
  }
  if ( !*a3 && (_DWORD)v8 )
    memset(Buffer, 0, v23);
  v34 = &v32[v8];
  if ( a8 == 1 )
  {
    v35 = (unsigned int)a5;
    if ( &Src[(unsigned int)a5] < Src || (unsigned __int64)&Src[(unsigned int)a5] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v34, Src, (unsigned int)a5);
  }
  else
  {
    v35 = (unsigned int)a5;
    memmove(v34, Src, (unsigned int)a5);
  }
  *a3 = 1;
  *((_DWORD *)a7 + 2) = a5;
  if ( (unsigned int)a5 > 0x10 )
    v35 = 16LL;
  memmove((char *)a7 + 12, v34, v35);
  return 0LL;
}
