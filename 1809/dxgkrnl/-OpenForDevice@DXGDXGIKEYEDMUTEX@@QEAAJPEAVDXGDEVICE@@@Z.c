/*
 * XREFs of ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C023E10C
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C02447F0 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00DF410 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C00F9F00 (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C023C39C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C023E404 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C023E4EC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  PERESOURCE *Global; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rbx
  struct DXGPROCESS *Current; // rsi
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  bool v34; // zf
  _BYTE v35[8]; // [rsp+60h] [rbp-18h] BYREF
  char v36; // [rsp+68h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 1) )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = this;
    *(_QWORD *)(v6 + 32) = *((_QWORD *)this + 1);
    WdLogEvent5_WdError(v6);
    return 3221227288LL;
  }
  *((_QWORD *)this + 1) = a2;
  v9 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(this, 0LL);
  if ( v9 < 0
    || (v9 = DXGDEVICE::ConfigureSharedResourceHelper(
               (PERESOURCE *)a2,
               0LL,
               (void *)0xFFFFFFFFFFFFFFFFLL,
               *(struct DXGSHAREDRESOURCE **)(*(_QWORD *)this + 16LL),
               1u,
               0),
        v9 < 0)
    || (v9 = DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(this, a2), v9 < 0) )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v12, v11);
    WdLogEvent5_WdError(v10);
LABEL_12:
    v20 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v20 + 24) = a2;
    *(_QWORD *)(v20 + 32) = PsGetCurrentProcess(v22, v21);
    WdLogEvent5_WdError(v20);
    DXGDXGIKEYEDMUTEX::CloseFromDevice(this, v23, v24, v25);
    return (unsigned int)v9;
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v35, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v35);
  v9 = DXGSYNCOBJECT::Open(
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
         (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  if ( v9 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v17 = *(_QWORD *)this;
    v18 = v16;
    v19 = *(_QWORD *)(*(_QWORD *)this + 32LL);
    v16[3] = v19;
    v16[4] = a2;
    v16[5] = PsGetCurrentProcess(v17, v19);
    WdLogEvent5_WdError(v18);
    if ( v36 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v35);
    goto LABEL_12;
  }
  v26 = *((unsigned int *)this + 24);
  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
  v28 = ((unsigned int)v26 >> 6) & 0xFFFFFF;
  if ( v28 < *((_DWORD *)Current + 62) )
  {
    v29 = *((_QWORD *)Current + 29);
    v30 = v28;
    v31 = ((unsigned int)v26 >> 25) & 0x60;
    if ( (((unsigned int)v26 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v30 + 8) & 0x60)
      && (*(_DWORD *)(v29 + 16 * v30 + 8) & 0x1F) != 0 )
    {
      v32 = 2 * ((v26 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v29 + 8 * v32 + 8) & 0x2000) == 0 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v31);
        *(_QWORD *)(v33 + 24) = 222LL;
        WdLogEvent5_WdAssertion(v33);
        v29 = *((_QWORD *)Current + 29);
      }
      *(_DWORD *)(v29 + 8 * v32 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 27) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  v34 = v36 == 0;
  *((_QWORD *)this + 13) = *(_QWORD *)(*(_QWORD *)this + 32LL);
  if ( !v34 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v35);
  return 0LL;
}
