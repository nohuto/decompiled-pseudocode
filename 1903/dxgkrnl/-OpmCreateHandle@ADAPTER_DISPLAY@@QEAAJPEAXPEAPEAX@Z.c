/*
 * XREFs of ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0151EC8
 * Callers:
 *     DxgkOpmCreateHandle @ 0x1C0151E20 (DxgkOpmCreateHandle.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmCreateHandle(DXGADAPTER **this, void *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rax
  _QWORD *v10; // rcx
  DXGADAPTER *v11; // rdx
  __int64 v13; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v13 + 24) = 6294LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( this[40] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 6295LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = operator new[](0x20uLL, 0x4B677844u, PagedPool);
  if ( !v9 )
    return 3221225495LL;
  v10 = this + 36;
  v9[24] = 0;
  *((_QWORD *)v9 + 2) = a2;
  v11 = this[36];
  if ( *((DXGADAPTER ***)v11 + 1) != this + 36 )
    __fastfail(3u);
  *(_QWORD *)v9 = v11;
  *((_QWORD *)v9 + 1) = v10;
  *((_QWORD *)v11 + 1) = v9;
  *v10 = v9;
  *a3 = v9;
  return 0LL;
}
