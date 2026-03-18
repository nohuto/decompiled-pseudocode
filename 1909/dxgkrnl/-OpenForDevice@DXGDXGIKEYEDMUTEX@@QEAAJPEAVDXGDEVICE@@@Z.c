/*
 * XREFs of ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0273B4C
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C027A3A8 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C00EF870 (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00FAF80 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C027171C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0273E44 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0273F2C (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  PERESOURCE *Global; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  struct DXGPROCESS *Current; // rsi
  unsigned int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rax
  bool v40; // zf
  _BYTE v41[8]; // [rsp+60h] [rbp-18h] BYREF
  char v42; // [rsp+68h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_QWORD *)this + 1) )
  {
    v8 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = *((_QWORD *)this + 1);
    WdLogEvent5_WdError(v8);
    return 3221227288LL;
  }
  *((_QWORD *)this + 1) = a2;
  v12 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(this, 0LL);
  if ( v12 < 0
    || (v12 = DXGDEVICE::ConfigureSharedResourceHelper(
                (PERESOURCE *)a2,
                0LL,
                (void *)0xFFFFFFFFFFFFFFFFLL,
                *(struct DXGSHAREDRESOURCE **)(*(_QWORD *)this + 16LL),
                1u,
                0),
        v12 < 0)
    || (v12 = DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(this, a2), v12 < 0) )
  {
    v14 = WdLogNewEntry5_WdError(v11, v10, v13);
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = PsGetCurrentProcess(v16, v15);
    WdLogEvent5_WdError(v14);
LABEL_12:
    v28 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v28 + 24) = a2;
    *(_QWORD *)(v28 + 32) = PsGetCurrentProcess(v30, v29);
    WdLogEvent5_WdError(v28);
    DXGDXGIKEYEDMUTEX::CloseFromDevice(this, v31);
    return (unsigned int)v12;
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11, v10);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v41, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v41);
  v12 = DXGSYNCOBJECT::Open(
          *(DXGSYNCOBJECT **)(*(_QWORD *)this + 32LL),
          0LL,
          0LL,
          0LL,
          (unsigned int *)this + 24,
          0LL,
          0LL,
          0,
          0LL,
          0,
          DXGSYNCOBJECT::FlagsDefault);
  if ( v12 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
    v25 = *(_QWORD *)this;
    v26 = v24;
    v27 = *(_QWORD *)(*(_QWORD *)this + 32LL);
    v24[3] = v27;
    v24[4] = a2;
    v24[5] = PsGetCurrentProcess(v25, v27);
    WdLogEvent5_WdError(v26);
    if ( v42 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v41);
    goto LABEL_12;
  }
  v32 = *((unsigned int *)this + 24);
  Current = DXGPROCESS::GetCurrent(v22, v21);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
  v34 = ((unsigned int)v32 >> 6) & 0xFFFFFF;
  if ( v34 < *((_DWORD *)Current + 56) )
  {
    v35 = *((_QWORD *)Current + 26);
    v36 = v34;
    v37 = ((unsigned int)v32 >> 25) & 0x60;
    if ( (((unsigned int)v32 >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v36 + 8) & 0x60)
      && (*(_DWORD *)(v35 + 16 * v36 + 8) & 0x1F) != 0 )
    {
      v38 = 2 * ((v32 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v35 + 8 * v38 + 8) & 0x2000) == 0 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v37, v35);
        *(_QWORD *)(v39 + 24) = 217LL;
        WdLogEvent5_WdAssertion(v39);
        v35 = *((_QWORD *)Current + 26);
      }
      *(_DWORD *)(v35 + 8 * v38 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 24) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 184, 0LL);
  KeLeaveCriticalRegion();
  v40 = v42 == 0;
  *((_QWORD *)this + 13) = *(_QWORD *)(*(_QWORD *)this + 32LL);
  if ( !v40 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v41);
  return 0LL;
}
