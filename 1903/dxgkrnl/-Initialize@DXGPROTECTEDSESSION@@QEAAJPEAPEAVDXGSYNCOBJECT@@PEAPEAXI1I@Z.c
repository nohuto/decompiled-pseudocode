/*
 * XREFs of ?Initialize@DXGPROTECTEDSESSION@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1I@Z @ 0x1C0261388
 * Callers:
 *     ?CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C0260F7C (-CreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAPEAVDXGSYNCOBJECT@@PEAPEAXI1IPEAPEAVDXGPROTECTE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiCreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPROTECTEDSESSION@@@Z @ 0x1C01F8BE4 (-DdiCreateProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CREATEPROTECTEDSESSION@@@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::Initialize(
        DXGPROTECTEDSESSION *this,
        struct DXGSYNCOBJECT **a2,
        void **a3,
        UINT a4,
        void **a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rax
  void *v16; // rax
  ADAPTER_DISPLAY *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rax
  _DXGKARG_CREATEPROTECTEDSESSION v25; // [rsp+20h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v13 + 24) = 981LL;
    WdLogEvent5_WdAssertion(v13);
  }
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 6) = 1;
  v14 = *a2;
  if ( *((_DWORD *)*a2 + 48) != 5 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v15 + 24) = 319LL;
    WdLogEvent5_WdAssertion(v15);
  }
  *((_QWORD *)this + 15) = *((_QWORD *)v14 + 25);
  *((_QWORD *)this + 14) = *a2;
  *((_QWORD *)this + 10) = *a3;
  *((_DWORD *)this + 22) = a4;
  *((_QWORD *)this + 12) = *a5;
  *((_DWORD *)this + 26) = a6;
  *a2 = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)this + 18);
  v16 = (void *)*((_QWORD *)this + 10);
  *(&v25.PrivateDriverDataSize + 1) = 0;
  v17 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 2);
  v25.hProtectedSession = this;
  v25.pPrivateDriverData = v16;
  v25.PrivateDriverDataSize = a4;
  v18 = *((_QWORD *)v17 + 2);
  if ( *(_QWORD *)(v18 + 1136) && *(_QWORD *)(v18 + 1144) )
  {
    v21 = ADAPTER_DISPLAY::DdiCreateProtectedSession(v17, &v25, v12);
  }
  else
  {
    v22 = WdLogNewEntry5_WdWarning(v17, v10, v12);
    v21 = -1073741637;
    *(_QWORD *)(v22 + 24) = -1073741637LL;
    WdLogEvent5_WdWarning(v22);
  }
  if ( v21 < 0 )
  {
    *((_DWORD *)this + 6) = 3;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 18, 0xFFFFFFFF) != 1 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v23 + 24) = 1048LL;
      WdLogEvent5_WdAssertion(v23);
    }
  }
  else
  {
    *((_QWORD *)this + 18) = v25.hProtectedSession;
  }
  return (unsigned int)v21;
}
