/*
 * XREFs of ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C01C0054
 * Callers:
 *     DxgkUnpinFrameBufferForSaveCB @ 0x1C0038C00 (DxgkUnpinFrameBufferForSaveCB.c)
 * Callees:
 *     DpiRemoveMemoryTracker @ 0x1C004966C (DpiRemoveMemoryTracker.c)
 */

__int64 __fastcall DXGADAPTER::UnpinFrameBufferForSave(DXGADAPTER *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rdi
  struct _MDL *v7; // rbp
  __int64 v8; // rax
  char *v9; // rbx

  v3 = a2;
  if ( a2 < *((_DWORD *)this + 64) )
  {
    v6 = *((_QWORD *)this + 302) + 352LL * a2;
    v7 = *(struct _MDL **)(v6 + 64);
    if ( !v7 )
    {
      v8 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v8 + 24) = 9632LL;
      WdLogEvent5_WdAssertion(v8);
    }
    DpiRemoveMemoryTracker(*((_QWORD *)this + 24), (_QWORD *)(v6 + 72));
    v9 = (char *)v7->StartVa + v7->ByteOffset;
    MmUnlockPages(v7);
    IoFreeMdl(v7);
    MmUnmapViewInSystemSpace(v9);
    *(_QWORD *)(v6 + 64) = 0LL;
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v4 + 24) = v3;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
