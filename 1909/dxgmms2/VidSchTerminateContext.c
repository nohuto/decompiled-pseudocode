/*
 * XREFs of VidSchTerminateContext @ 0x1C007CCB0
 * Callers:
 *     VidSchiCreateContextInternal @ 0x1C000FB7C (VidSchiCreateContextInternal.c)
 *     VidSchTerminateAdapter @ 0x1C00CC510 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0011410 (VidSchiDecrementContextReference.c)
 *     ?VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0011594 (-VidSchiRemoveContextFromSyncPoints@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C002418C (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0032258 (McTemplateK0pqqqqqqqqppp.c)
 *     VidSchFlushContext @ 0x1C007C780 (VidSchFlushContext.c)
 */

__int64 __fastcall VidSchTerminateContext(struct _VIDSCH_CONTEXT *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  __int64 v8; // rax
  void *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // edx
  __int128 v13; // xmm1
  const GUID *v14; // r8
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r9
  const GUID *v20; // r8
  __int128 v21; // xmm1
  int v22; // r10d
  int v23; // edx
  int v24; // edx
  __int128 v25; // [rsp+88h] [rbp+37h] BYREF
  __int128 v26; // [rsp+98h] [rbp+47h]

  if ( a1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 2272), 1u);
    _InterlockedCompareExchange((volatile signed __int32 *)a1 + 222, 1, 0);
    ExReleaseResourceLite((PERESOURCE)(v3 + 2272));
    v25 = 0xDuLL;
    VidSchFlushContext((__int64)a1, (int *)&v25, v4, v5);
    v6 = *((_DWORD *)a1 + 28);
    if ( (v6 & 1) != 0 && (v9 = (void *)*((_QWORD *)a1 + 8)) != 0LL )
    {
      ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(v3 + 8), v9);
      *((_QWORD *)a1 + 8) = 0LL;
      if ( bTracingEnabled )
      {
        v10 = *((_QWORD *)a1 + 13);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 8);
          if ( !v11 )
            v11 = *((_QWORD *)a1 + 13);
        }
        else
        {
          v11 = 0LL;
        }
        v12 = *((_DWORD *)a1 + 227);
        v13 = *(_OWORD *)((char *)a1 + 948);
        v14 = (const GUID *)*((unsigned int *)a1 + 226);
        v15 = (*(_DWORD *)(v10 + 48) >> 4) & 1;
        v25 = *(_OWORD *)((char *)a1 + 932);
        v26 = v13;
        v16 = (2 * v15) | 1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pqqqqqqqqppp(
            v16,
            &EventDestroyContext,
            v14,
            v11,
            (char)v14,
            v12,
            v25,
            SBYTE4(v25),
            SBYTE8(v25),
            SBYTE12(v25),
            v26,
            v16,
            a1);
      }
    }
    else if ( (v6 & 4) != 0 && bTracingEnabled )
    {
      v17 = *((_QWORD *)a1 + 13);
      v18 = *((_DWORD *)a1 + 28) & 0x40;
      if ( v17 )
      {
        v19 = *(_QWORD *)(v17 + 8);
        if ( !v19 )
          v19 = *((_QWORD *)a1 + 13);
      }
      else
      {
        v19 = 0LL;
      }
      v20 = (const GUID *)*((unsigned int *)a1 + 227);
      v21 = *(_OWORD *)((char *)a1 + 948);
      v22 = *((_DWORD *)a1 + 226);
      v23 = (*(_DWORD *)(v17 + 48) >> 4) & 1;
      v25 = *(_OWORD *)((char *)a1 + 932);
      v26 = v21;
      v24 = (2 * ((v18 != 0 ? 2 : 0) | v23)) | 1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pqqqqqqqqppp(
          v17,
          &EventDestroyContext,
          v20,
          v19,
          v22,
          (char)v20,
          v25,
          SBYTE4(v25),
          SBYTE8(v25),
          SBYTE12(v25),
          v26,
          v24,
          a1);
    }
    VidSchiRemoveContextFromSyncPoints(a1);
    *((_QWORD *)a1 + 7) = 0LL;
    VidSchiDecrementContextReference(a1, 0);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
}
