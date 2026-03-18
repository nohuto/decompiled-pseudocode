/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1C0249388
 * Callers:
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C024DCA0 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs2(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a1,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY2 **a3,
        struct tagRECT **a4)
{
  _OWORD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // rax
  SIZE_T v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // rdx
  _OWORD *v24; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _BYTE v29[284]; // [rsp+40h] [rbp-148h] BYREF
  unsigned int v30; // [rsp+15Ch] [rbp-2Ch]
  void *Src; // [rsp+160h] [rbp-28h]

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)MmUserProbeAddress;
  v7 = v29;
  v8 = 2LL;
  v9 = 2LL;
  do
  {
    *v7 = *(_OWORD *)&a1->hAdapter;
    v7[1] = *(_OWORD *)&a1->BroadcastContext[1];
    v7[2] = *(_OWORD *)&a1->BroadcastContext[5];
    v7[3] = *(_OWORD *)&a1->BroadcastContext[9];
    v7[4] = *(_OWORD *)&a1->BroadcastContext[13];
    v7[5] = *(_OWORD *)&a1->BroadcastContext[17];
    v7[6] = *(_OWORD *)&a1->BroadcastContext[21];
    v7 += 8;
    *(v7 - 1) = *(_OWORD *)&a1->BroadcastContext[25];
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)((char *)a1 + 128);
    --v9;
  }
  while ( v9 );
  *v7 = *(_OWORD *)&a1->hAdapter;
  v7[1] = *(_OWORD *)&a1->BroadcastContext[1];
  v7[2] = *(_OWORD *)&a1->BroadcastContext[5];
  v10 = v30;
  if ( v30 - 1 > 6 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v26[3] = v10;
    v13 = -1073741811;
    v26[4] = -1073741811LL;
    v26[5] = PsGetCurrentProcess(v28, v27);
    WdLogEvent5_WdError(v26);
    return v13;
  }
  v11 = 120LL * v30;
  v12 = 0xFFFFFFFFLL;
  if ( v11 <= 0xFFFFFFFF )
    v12 = (unsigned int)v11;
  v13 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v11 > 0xFFFFFFFF )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v30, 128LL);
    *(_QWORD *)(v14 + 24) = 186LL;
    WdLogEvent5_WdWarning(v14);
    return v13;
  }
  v15 = 120LL * v30;
  if ( !is_mul_ok(v30, 0x78uLL) )
    v15 = -1LL;
  v18 = (struct _D3DKMT_MULTIPLANE_OVERLAY2 *)operator new(v15, 0x4B677844u, PagedPool);
  if ( !v18 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v19);
    v13 = -1073741801;
    *(_QWORD *)(v20 + 24) = -1073741801LL;
    *(_QWORD *)(v20 + 32) = PsGetCurrentProcess(v22, v21);
    WdLogEvent5_WdWarning(v20);
    operator delete[](0LL);
    operator delete[](0LL);
    return v13;
  }
  v23 = Src;
  if ( (char *)Src + v12 < Src || (unsigned __int64)Src + v12 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v18, v23, (unsigned int)v12);
  Src = v18;
  v24 = v29;
  do
  {
    *(_OWORD *)&a2->hAdapter = *v24;
    *(_OWORD *)&a2->BroadcastContext[1] = v24[1];
    *(_OWORD *)&a2->BroadcastContext[5] = v24[2];
    *(_OWORD *)&a2->BroadcastContext[9] = v24[3];
    *(_OWORD *)&a2->BroadcastContext[13] = v24[4];
    *(_OWORD *)&a2->BroadcastContext[17] = v24[5];
    *(_OWORD *)&a2->BroadcastContext[21] = v24[6];
    a2 = (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)((char *)a2 + 128);
    *(_OWORD *)&a2[-1].pPresentPlanes = v24[7];
    v24 += 8;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)&a2->hAdapter = *v24;
  *(_OWORD *)&a2->BroadcastContext[1] = v24[1];
  *(_OWORD *)&a2->BroadcastContext[5] = v24[2];
  *a3 = v18;
  *a4 = 0LL;
  operator delete[](0LL);
  operator delete[](0LL);
  return 0LL;
}
