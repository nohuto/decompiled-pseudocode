/*
 * XREFs of ?UnmapFrameBufferPointer@DXGADAPTER@@QEAAJIPEAX@Z @ 0x1C01C0000
 * Callers:
 *     DxgkUnmapFrameBufferPointerCB @ 0x1C0038B70 (DxgkUnmapFrameBufferPointerCB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::UnmapFrameBufferPointer(DXGADAPTER *this, unsigned int a2, void *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = a2;
  if ( a2 < *((_DWORD *)this + 64) )
  {
    MmUnmapViewInSystemSpace(a3);
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
