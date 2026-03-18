/*
 * XREFs of ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C012C940
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00B2690 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C01576BC (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0017134 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCddAllocationHandles(
        DXGADAPTER **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  DXGADAPTER *v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax

  v7 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 1343LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v9 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v14 + 24) = 1344LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( ADAPTER_DISPLAY::IsCddPrimaryStale((ADAPTER_DISPLAY *)this, v7)
    || (v10 = this[14], (v11 = *((_QWORD *)v10 + 470 * v7 + 11)) == 0)
    || (*(_DWORD *)(*(_QWORD *)(v11 + 48) + 4LL) & 0x10) != 0 )
  {
    v12 = 0;
  }
  else
  {
    v9 = *(_DWORD *)(*((_QWORD *)v10 + 470 * v7 + 75) + 16LL);
    v12 = *(_DWORD *)(v11 + 16);
  }
  *a3 = v12;
  *a4 = v9;
}
