/*
 * XREFs of VidSchTerminateContext @ 0x1C007AB50
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C0011938 (VidSchiCreateContextInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00C9A80 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0010CD0 (VidSchiDecrementContextReference.c)
 *     ?VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0010E44 (-VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0024A7C (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0031A08 (McTemplateK0pqqqqqqqqppp.c)
 *     VidSchFlushContext @ 0x1C007AEE0 (VidSchFlushContext.c)
 */

__int64 __fastcall VidSchTerminateContext(struct _VIDSCH_CONTEXT *a1, __int64 a2)
{
  __int64 v3; // rsi
  int v4; // r8d
  __int64 v6; // rax
  void *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // r11d
  __int128 v11; // xmm1
  __int64 v12; // rax
  int v13; // r8d
  int v14; // ecx
  __int128 v15; // xmm1
  int v16; // [rsp+60h] [rbp+Fh]
  struct _VIDSCH_CONTEXT *v17; // [rsp+68h] [rbp+17h]
  __int128 v18; // [rsp+88h] [rbp+37h] BYREF
  __int128 v19; // [rsp+98h] [rbp+47h]

  if ( a1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 2272), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)a1 + 222, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v3 + 2272));
    v18 = 0xDuLL;
    VidSchFlushContext(a1, &v18);
    v4 = *((_DWORD *)a1 + 28);
    if ( (v4 & 1) != 0 && (v7 = (void *)*((_QWORD *)a1 + 8)) != 0LL )
    {
      ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(v3 + 8), v7);
      *((_QWORD *)a1 + 8) = 0LL;
      if ( !bTracingEnabled )
        goto LABEL_4;
      v8 = *((_QWORD *)a1 + 13);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 8);
        if ( !v9 )
          v9 = *((_QWORD *)a1 + 13);
      }
      else
      {
        v9 = 0LL;
      }
      v10 = *(_DWORD *)(v8 + 48) >> 4;
      v11 = *(_OWORD *)((char *)a1 + 948);
      v18 = *(_OWORD *)((char *)a1 + 932);
      v19 = v11;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_4;
      v17 = a1;
      LOBYTE(v16) = (2 * (v10 & 1)) | 1;
    }
    else
    {
      if ( (v4 & 4) == 0 || !bTracingEnabled )
        goto LABEL_4;
      v12 = *((_QWORD *)a1 + 13);
      v13 = *((_DWORD *)a1 + 28) & 0x40;
      if ( v12 )
      {
        v9 = *(_QWORD *)(v12 + 8);
        if ( !v9 )
          v9 = *((_QWORD *)a1 + 13);
      }
      else
      {
        v9 = 0LL;
      }
      v14 = *(_DWORD *)(v12 + 48) >> 4;
      v15 = *(_OWORD *)((char *)a1 + 948);
      v18 = *(_OWORD *)((char *)a1 + 932);
      v19 = v15;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_4;
      v17 = a1;
      v16 = (2 * (v14 & 1 | (v13 != 0 ? 2 : 0))) | 1;
    }
    McTemplateK0pqqqqqqqqppp(
      DWORD1(v18),
      &EventDestroyContext,
      (const GUID *)v18,
      v9,
      *((_DWORD *)a1 + 226),
      *((_DWORD *)a1 + 227),
      v18,
      SBYTE4(v18),
      SBYTE8(v18),
      SBYTE12(v18),
      v19,
      v16,
      v17);
LABEL_4:
    VidSchiRemoveContextFromSyncPoints(a1);
    *((_QWORD *)a1 + 7) = 0LL;
    VidSchiDecrementContextReference(a1, 0);
    return 0LL;
  }
  v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
  *(_QWORD *)(v6 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v6);
  return 3221225485LL;
}
