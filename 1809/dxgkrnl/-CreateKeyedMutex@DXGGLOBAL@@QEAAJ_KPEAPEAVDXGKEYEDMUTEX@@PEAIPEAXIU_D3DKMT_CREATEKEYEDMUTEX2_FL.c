/*
 * XREFs of ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C0234368
 * Callers:
 *     DxgkCreateKeyedMutex @ 0x1C02369B0 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1C0236CF0 (DxgkCreateKeyedMutex2.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C970 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C9AC (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C003E120 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C00AD3A0 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?Initialize@DXGKEYEDMUTEX@@QEAAJXZ @ 0x1C0234D00 (-Initialize@DXGKEYEDMUTEX@@QEAAJXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateKeyedMutex(
        DXGGLOBAL *this,
        __int64 a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6,
        struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS a7)
{
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  DXGKEYEDMUTEX *v15; // rbx
  __int64 v16; // rax
  __int64 result; // rax
  int v18; // edi
  DXGKEYEDMUTEX **v19; // rax
  __int64 v20; // rcx

  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 4150LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a4 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 4151LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *a3 = 0LL;
  *a4 = 0;
  v13 = operator new(0x98uLL, 0x4B677844u, (POOL_TYPE)512);
  v15 = (DXGKEYEDMUTEX *)v13;
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
    *((_DWORD *)v13 + 30) = 0;
    *((_DWORD *)v13 + 31) = 34;
    *((_DWORD *)v13 + 32) = 32;
    v13[14] = 0LL;
    *((struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS *)v13 + 37) = a7;
    v13[17] = 0LL;
    *((_DWORD *)v13 + 36) = 0;
    v13[11] = v13 + 10;
    v13[10] = v13 + 10;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v16 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v16);
    return 3221225495LL;
  }
  v18 = DXGKEYEDMUTEX::Initialize(v15);
  if ( v18 < 0 )
  {
    DXGKEYEDMUTEX::`scalar deleting destructor'(v15);
    return (unsigned int)v18;
  }
  DXGKEYEDMUTEX::AcquireReference(v15);
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 352));
  v19 = (DXGKEYEDMUTEX **)((char *)this + 392);
  v20 = *((_QWORD *)this + 49);
  if ( *(DXGGLOBAL **)(v20 + 8) != (DXGGLOBAL *)((char *)this + 392) )
    __fastfail(3u);
  *(_QWORD *)v15 = v20;
  *((_QWORD *)v15 + 1) = v19;
  *(_QWORD *)(v20 + 8) = v15;
  *v19 = v15;
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 44);
  result = DXGKEYEDMUTEX::Open(v15, a4, a5, a6, 1);
  v18 = result;
  if ( (int)result < 0 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v15);
    return (unsigned int)v18;
  }
  *a3 = v15;
  return result;
}
