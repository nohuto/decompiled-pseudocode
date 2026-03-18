/*
 * XREFs of ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C0268884
 * Callers:
 *     DxgkCreateKeyedMutex @ 0x1C026B280 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1C026B5C0 (DxgkCreateKeyedMutex2.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00431C8 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043204 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C0044BE0 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGKEYEDMUTEX@@QEAAJXZ @ 0x1C02695EC (-Initialize@DXGKEYEDMUTEX@@QEAAJXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C02699C4 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateKeyedMutex(
        DXGGLOBAL *this,
        __int64 a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6,
        struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS a7)
{
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DXGKEYEDMUTEX *v18; // rbx
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rdx
  int v22; // edi
  DXGKEYEDMUTEX **v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx

  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v11 + 24) = 4136LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a4 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v12 + 24) = 4137LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *a3 = 0LL;
  *a4 = 0;
  v13 = operator new[](0x98uLL, 0x4B677844u, (POOL_TYPE)512);
  v18 = (DXGKEYEDMUTEX *)v13;
  if ( v13 )
  {
    v13[2] = this;
    *v13 = 0LL;
    v13[1] = 0LL;
    v13[3] = 0LL;
    *((_DWORD *)v13 + 8) = 0;
    *(_QWORD *)((char *)v13 + 36) = 1LL;
    v13[6] = 0LL;
    v13[7] = a2;
    v13[8] = a2;
    v13[9] = 0LL;
    v13[12] = 0LL;
    v13[13] = 0LL;
    v13[14] = 0LL;
    *((_DWORD *)v13 + 30) = 0;
    *((_DWORD *)v13 + 31) = 34;
    *((_DWORD *)v13 + 32) = 32;
    *((struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS *)v13 + 37) = a7;
    v13[17] = 0LL;
    *((_DWORD *)v13 + 36) = 0;
    v13[11] = v13 + 10;
    v13[10] = v13 + 10;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
    *(_QWORD *)(v19 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v19);
    return 3221225495LL;
  }
  v22 = DXGKEYEDMUTEX::Initialize(v18);
  if ( v22 < 0 )
  {
    DXGKEYEDMUTEX::`scalar deleting destructor'(v18);
    return (unsigned int)v22;
  }
  DXGKEYEDMUTEX::AcquireReference(v18, v21);
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 352));
  v23 = (DXGKEYEDMUTEX **)((char *)this + 392);
  v24 = *((_QWORD *)this + 49);
  if ( *(DXGGLOBAL **)(v24 + 8) != (DXGGLOBAL *)((char *)this + 392) )
    __fastfail(3u);
  *(_QWORD *)v18 = v24;
  *((_QWORD *)v18 + 1) = v23;
  *(_QWORD *)(v24 + 8) = v18;
  *v23 = v18;
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 44);
  result = DXGKEYEDMUTEX::Open(v18, a4, a5, a6, 1);
  v22 = result;
  if ( (int)result < 0 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v18, v25);
    return (unsigned int)v22;
  }
  *a3 = v18;
  return result;
}
