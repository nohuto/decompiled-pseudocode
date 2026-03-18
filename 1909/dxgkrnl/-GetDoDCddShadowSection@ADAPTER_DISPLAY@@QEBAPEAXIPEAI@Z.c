/*
 * XREFs of ?GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C01F2A28
 * Callers:
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00CAC70 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void *__fastcall ADAPTER_DISPLAY::GetDoDCddShadowSection(DXGADAPTER **this, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  DXGADAPTER *v11; // rdx
  __int64 v12; // rdi
  void *v13; // rcx

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 1380LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 1381LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((_QWORD *)this[2] + 320) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v10 + 24) = 1382LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = this[14];
  v12 = 3968 * v4;
  v13 = *(void **)((char *)v11 + v12 + 616);
  if ( v13 )
  {
    ObfReferenceObject(v13);
    v11 = this[14];
  }
  *a3 = *(_DWORD *)((char *)v11 + v12 + 612);
  return *(void **)((char *)v11 + v12 + 616);
}
