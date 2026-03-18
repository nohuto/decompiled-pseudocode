/*
 * XREFs of ?GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C01C30DC
 * Callers:
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C0121160 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void *__fastcall ADAPTER_DISPLAY::GetDoDCddShadowSession(DXGADAPTER **this, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  DXGADAPTER *v10; // rdx
  __int64 v11; // rdi
  void *v12; // rcx

  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 1304LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 1305LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_QWORD *)this[2] + 316) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v9 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = this[14];
  v11 = 3760 * v4;
  v12 = *(void **)((char *)v10 + v11 + 616);
  if ( v12 )
  {
    ObfReferenceObject(v12);
    v10 = this[14];
  }
  *a3 = *(_DWORD *)((char *)v10 + v11 + 612);
  return *(void **)((char *)v10 + v11 + 616);
}
