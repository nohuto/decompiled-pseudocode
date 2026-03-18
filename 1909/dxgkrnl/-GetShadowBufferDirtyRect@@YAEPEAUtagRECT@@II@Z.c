/*
 * XREFs of ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x1C001FE58
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C0172A20 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall GetShadowBufferDirtyRect(struct tagRECT *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // r15d
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // di
  __int64 v9; // rbp
  KIRQL v10; // al
  LONG v11; // edx
  LONG v12; // edx
  unsigned int right; // ecx
  unsigned int bottom; // eax
  __int64 v16; // rax

  v4 = a2;
  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal((__int64)a1, a2) + 157) != KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v16 + 24) = 4610LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v8 = 0;
  v9 = *((_QWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 154);
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
    if ( a1->top < bottom && right <= v4 )
      return bottom <= a3;
  }
  return v8;
}
