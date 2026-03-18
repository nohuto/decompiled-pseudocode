/*
 * XREFs of ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01C4BF4
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01BF32C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C003DF9C (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00F029C (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?OpmReset@ADAPTER_DISPLAY@@AEAAXXZ @ 0x1C01C3A2C (-OpmReset@ADAPTER_DISPLAY@@AEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01C4DC0 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C0247BB4 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?DmmReset@@YAXPEAX@Z @ 0x1C027CBD4 (-DmmReset@@YAXPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Reset(void **this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  unsigned int i; // edi
  struct _TDR_RECOVERY_CONTEXT *v4; // rdx
  void **j; // rax
  __int64 v6; // rbp
  void **k; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  unsigned int m; // esi
  _QWORD *v12; // rbx
  _BYTE v14[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v15[24]; // [rsp+30h] [rbp-18h] BYREF

  DmmReset(this[2]);
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)(this + 50), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    DISPLAY_SOURCE::Reset((DISPLAY_SOURCE *)((char *)this[14] + 3760 * i), v4);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
    if ( v14[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  }
  ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
    (ADAPTER_DISPLAY *)this,
    (__int64 (__fastcall *)(__int64, __int64))lambda_8c4f9d5363fac7cd16350590c99b22c5_::_lambda_invoker_cdecl_,
    0LL);
  ADAPTER_DISPLAY::OpmReset((DXGADAPTER **)this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  for ( j = (void **)this[8]; j != this + 8 && j; j = (void **)*j )
    *((_DWORD *)j + 14) = 0;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 55));
  v6 = 2LL;
  for ( k = (void **)this[60]; k != this + 60 && k; k = (void **)*k )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)k[2] + 2)) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v9 + 24) = 1159LL;
      WdLogEvent5_WdAssertion(v9);
    }
    *((_DWORD *)k + 6) = 2;
    DXGPROTECTEDSESSION::SetSessionStatus((DXGPROTECTEDSESSION *)k, DXGK_PROTECTED_SESSION_STATUS_INVALID);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 55);
  v10 = this[33];
  if ( v10 )
  {
    for ( m = 0; m < *(_DWORD *)v10; ++m )
      BLTQUEUE::Reset((BLTQUEUE *)(v10[1] + 2704LL * m), 0);
  }
  v12 = this + 86;
  do
  {
    *(v12 - 1) = 0LL;
    *v12 = 0LL;
    v12 += 10;
    --v6;
  }
  while ( v6 );
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return 0LL;
}
