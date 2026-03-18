/*
 * XREFs of ?SetMetaDataInternal@DXGSWAPCHAIN@@AEAAJPEAVAUTOEXPANDALLOCATION@@AEAHIIPEAXAEAUSWAPCHAIN_METADATA_ETW_INFO@1@D@Z @ 0x1C028822C
 * Callers:
 *     ?GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z @ 0x1C028690C (-GetSetMetaData@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@IPEAXD@Z.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z @ 0x1C0287B4C (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXD@Z.c)
 * Callees:
 *     ?RtlUIntAdd@@YAJIIPEAI@Z @ 0x1C0006CC0 (-RtlUIntAdd@@YAJIIPEAI@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C014F718 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C0286FBC (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  const GUID *v24; // r8
  unsigned int v25; // edi
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  const GUID *v30; // r8
  unsigned int v31; // ebx
  char *Buffer; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char *v37; // rbx
  __int64 v38; // rax
  char *v39; // rbx
  size_t v40; // rdi
  size_t Size[5]; // [rsp+20h] [rbp-28h] BYREF

  v8 = a4;
  if ( this[2] != KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v12 + 24) = 3247LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !(_DWORD)a5 )
  {
    v13 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v13 + 24) = PsGetCurrentProcess(v15, v14);
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  if ( (int)RtlUIntAdd(v8, a5, (unsigned int *)Size) < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v20 + 24) = PsGetCurrentProcess(v22, v21);
    WdLogEvent5_WdError(v20);
    DXGSWAPCHAIN::MarkAbandoned(this, v23, v24);
    return 3221225485LL;
  }
  v25 = *((_DWORD *)a2 + 2);
  if ( LODWORD(Size[0]) > v25 )
    v25 = Size[0];
  if ( v25 > 0x2000 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
    v26[3] = PsGetCurrentProcess(v28, v27);
    v26[4] = v25;
    v26[5] = 0x2000LL;
    WdLogEvent5_WdError(v26);
    v31 = -1073741811;
LABEL_14:
    DXGSWAPCHAIN::MarkAbandoned(this, v29, v30);
    return v31;
  }
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(a2, v25, *a3);
  v37 = Buffer;
  if ( !Buffer )
  {
    v38 = WdLogNewEntry5_WdLowResource(v34, v33, v35, v36);
    *(_QWORD *)(v38 + 24) = v25;
    WdLogEvent5_WdLowResource(v38);
    v31 = -1073741801;
    goto LABEL_14;
  }
  if ( !*a3 && (_DWORD)v8 )
    memset(Buffer, 0, v25);
  v39 = &v37[v8];
  if ( a8 == 1 )
  {
    v40 = (unsigned int)a5;
    if ( &Src[(unsigned int)a5] < Src || (unsigned __int64)&Src[(unsigned int)a5] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v39, Src, (unsigned int)a5);
  }
  else
  {
    v40 = (unsigned int)a5;
    memmove(v39, Src, (unsigned int)a5);
  }
  *a3 = 1;
  *((_DWORD *)a7 + 2) = a5;
  if ( (unsigned int)a5 > 0x10 )
    v40 = 16LL;
  memmove((char *)a7 + 12, v39, v40);
  return 0LL;
}
