/*
 * XREFs of ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C001F6AC
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01576BC (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall GetShadowBufferDirtyRect(struct tagRECT *a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  char v8; // di
  __int64 v9; // rbp
  KIRQL v10; // al
  LONG v11; // edx
  LONG v12; // edx
  unsigned int right; // ecx
  unsigned int bottom; // eax

  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal((__int64)a1) + 160) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 4594LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = 0;
  v9 = *((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 158);
  if ( !v9 )
    return 0;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 24));
  v11 = *(_DWORD *)(v9 + 12);
  a1->left = *(_DWORD *)(v9 + 4);
  a1->right = *(_DWORD *)(v9 + 8);
  a1->top = v11;
  v12 = *(_DWORD *)(v9 + 16);
  *(_DWORD *)(v9 + 4) = -1;
  *(_DWORD *)(v9 + 12) = -1;
  a1->bottom = v12;
  *(_DWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 16) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 24), v10);
  right = a1->right;
  if ( a1->left < right )
  {
    bottom = a1->bottom;
    if ( a1->top < bottom && right <= a2 )
      return bottom <= a3;
  }
  return v8;
}
