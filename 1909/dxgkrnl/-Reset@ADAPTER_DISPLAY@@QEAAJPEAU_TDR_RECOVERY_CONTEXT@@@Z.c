/*
 * XREFs of ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01F4168
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01EEED0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0044A54 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C01250B4 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?OpmReset@ADAPTER_DISPLAY@@AEAAXXZ @ 0x1C01F322C (-OpmReset@ADAPTER_DISPLAY@@AEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01F4334 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C027DBB8 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?DmmReset@@YAXPEAX@Z @ 0x1C02B53F0 (-DmmReset@@YAXPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Reset(void **this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  unsigned int i; // edi
  struct _TDR_RECOVERY_CONTEXT *v4; // rdx
  void **j; // rax
  __int64 v6; // rbp
  void **k; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  unsigned int m; // esi
  _QWORD *v13; // rbx
  _BYTE v15[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF

  DmmReset(this[2]);
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(this + 63), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    DISPLAY_SOURCE::Reset((DISPLAY_SOURCE *)((char *)this[14] + 3968 * i), v4);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
    if ( v15[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  }
  ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
    (ADAPTER_DISPLAY *)this,
    (int (*)(struct OUTPUTDUPL_MGR *, void *))lambda_8c4f9d5363fac7cd16350590c99b22c5_::_lambda_invoker_cdecl_,
    0LL);
  ADAPTER_DISPLAY::OpmReset((DXGADAPTER **)this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  for ( j = (void **)this[8]; j != this + 8 && j; j = (void **)*j )
    *((_DWORD *)j + 14) = 0;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 68));
  v6 = 2LL;
  for ( k = (void **)this[73]; k != this + 73 && k; k = (void **)*k )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)k[2] + 2)) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v10 + 24) = 1159LL;
      WdLogEvent5_WdAssertion(v10);
    }
    *((_DWORD *)k + 6) = 2;
    DXGPROTECTEDSESSION::SetSessionStatus((DXGPROTECTEDSESSION *)k, DXGK_PROTECTED_SESSION_STATUS_INVALID);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 68);
  v11 = this[46];
  if ( v11 )
  {
    for ( m = 0; m < *(_DWORD *)v11; ++m )
      BLTQUEUE::Reset((BLTQUEUE *)(v11[1] + 2760LL * m), 0);
  }
  v13 = this + 99;
  do
  {
    *(v13 - 1) = 0LL;
    *v13 = 0LL;
    v13 += 10;
    --v6;
  }
  while ( v6 );
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  return 0LL;
}
