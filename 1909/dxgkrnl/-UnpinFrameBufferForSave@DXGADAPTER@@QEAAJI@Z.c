/*
 * XREFs of ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C01EFC54
 * Callers:
 *     DxgkUnpinFrameBufferForSaveCB @ 0x1C003F1C0 (DxgkUnpinFrameBufferForSaveCB.c)
 * Callees:
 *     DpiRemoveMemoryTracker @ 0x1C0050A08 (DpiRemoveMemoryTracker.c)
 */

__int64 __fastcall DXGADAPTER::UnpinFrameBufferForSave(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v7; // rdi
  struct _MDL *v8; // rsi
  __int64 v9; // rax
  char *v10; // rbx

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 < *((_DWORD *)this + 64) )
  {
    v7 = *((_QWORD *)this + 305) + 352LL * (unsigned int)a2;
    v8 = *(struct _MDL **)(v7 + 64);
    if ( !v8 )
    {
      v9 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v9 + 24) = 9949LL;
      WdLogEvent5_WdAssertion(v9);
    }
    DpiRemoveMemoryTracker(*((_QWORD *)this + 24), (_QWORD *)(v7 + 72));
    v10 = (char *)v8->StartVa + v8->ByteOffset;
    MmUnlockPages(v8);
    IoFreeMdl(v8);
    MmUnmapViewInSystemSpace(v10);
    *(_QWORD *)(v7 + 64) = 0LL;
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
