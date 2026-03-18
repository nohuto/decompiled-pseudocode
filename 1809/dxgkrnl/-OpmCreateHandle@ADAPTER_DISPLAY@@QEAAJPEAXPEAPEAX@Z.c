/*
 * XREFs of ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C01C3948
 * Callers:
 *     DxgkOpmCreateHandle @ 0x1C01C7E40 (DxgkOpmCreateHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmCreateHandle(DXGADAPTER **this, void *a2, void **a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE *v9; // rax
  _QWORD *v11; // rcx
  DXGADAPTER *v12; // rdx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 6048LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( this[26] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 6049LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = operator new(0x20uLL, 0x4B677844u, PagedPool);
  if ( !v9 )
    return 3221225495LL;
  v11 = this + 23;
  v9[24] = 0;
  *((_QWORD *)v9 + 2) = a2;
  v12 = this[23];
  if ( *((DXGADAPTER ***)v12 + 1) != this + 23 )
    __fastfail(3u);
  *(_QWORD *)v9 = v12;
  *((_QWORD *)v9 + 1) = v11;
  *((_QWORD *)v12 + 1) = v9;
  *v11 = v9;
  *a3 = v9;
  return 0LL;
}
