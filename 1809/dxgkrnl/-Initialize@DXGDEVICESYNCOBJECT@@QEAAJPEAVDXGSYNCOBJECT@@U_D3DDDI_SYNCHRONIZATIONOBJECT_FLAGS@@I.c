/*
 * XREFs of ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00E06A0
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00DF410 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0021980 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00E00B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICESYNCOBJECT::Initialize(
        DXGDEVICESYNCOBJECT *this,
        struct DXGSYNCOBJECT *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a3,
        int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  DXGSYNCOBJECT *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v29; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rbx
  _QWORD *v31; // rax
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v33; // rsi
  char *v34; // rbx
  struct _KTHREAD *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  const GUID *v38; // r8
  int v39; // r9d
  _QWORD *v40; // rbx
  unsigned int v41; // eax
  __int64 v42; // rcx
  unsigned int v43; // edx
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // r8d
  __int64 v47; // [rsp+30h] [rbp-30h] BYREF
  char v48; // [rsp+38h] [rbp-28h]
  _BYTE v49[8]; // [rsp+40h] [rbp-20h] BYREF
  char *v50; // [rsp+48h] [rbp-18h]
  int v51; // [rsp+50h] [rbp-10h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 161LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *((struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)this + 18) = a3;
  *((_QWORD *)this + 4) = a2;
  LOBYTE(v10) = EvaluateCurrentState((int **)&g_Feature_2267854136_57775487_FeatureDescriptorDetails);
  v11 = (DXGSYNCOBJECT *)*((_QWORD *)this + 4);
  if ( v10 )
  {
    v12 = DXGSYNCOBJECT::AddReference(v11);
    v16 = v12;
    if ( v12 < 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = this;
      *(_QWORD *)(v17 + 32) = v16;
      WdLogEvent5_WdWarning(v17);
      return (unsigned int)v16;
    }
  }
  else
  {
    DXGSYNCOBJECT::AddReference(v11);
  }
  *((_BYTE *)this + 92) |= 1u;
  if ( !*((_BYTE *)a2 + 253) )
  {
    v16 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v16 + 168) - 5) > 1 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v19 + 24) = 374LL;
      WdLogEvent5_WdAssertion(v19);
    }
    LODWORD(v16) = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 928LL))(
                     *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                     v16 + 120,
                     (char *)this + 56);
    if ( (int)v16 < 0 )
      return (unsigned int)v16;
    if ( *(_BYTE *)&a3.0 >= 0 )
    {
      v21 = *((_QWORD *)this + 4);
      if ( (unsigned int)(*(_DWORD *)(v21 + 168) - 5) > 1 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v22 + 24) = 374LL;
        WdLogEvent5_WdAssertion(v22);
      }
      LODWORD(v16) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                                 + 8LL)
                                                                                     + 936LL))(
                       *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                       *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                       v21 + 120,
                       (char *)this + 48,
                       a4);
      if ( (int)v16 < 0 )
        return (unsigned int)v16;
    }
    v23 = *((_QWORD *)this + 4);
    if ( (unsigned int)(*(_DWORD *)(v23 + 168) - 5) > 1 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v24 + 24) = 374LL;
      WdLogEvent5_WdAssertion(v24);
    }
    *((_QWORD *)this + 8) = *(_QWORD *)(v23 + 128);
    v25 = *((_DWORD *)this + 18);
    if ( (v25 & 0x10) == 0 && (v25 & 0x40) == 0 )
    {
      v26 = *((_QWORD *)this + 4);
      v48 = 0;
      v47 = v26 + 32;
      if ( v26 == -32 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v27 + 24) = 511LL;
        WdLogEvent5_WdAssertion(v27);
      }
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v47 + 8) == CurrentThread )
      {
        v29 = WdLogNewEntry5_WdAssertion(CurrentThread);
        *(_QWORD *)(v29 + 24) = 518LL;
        WdLogEvent5_WdAssertion(v29);
      }
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v47);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *((DXGSYNCOBJECT **)this + 4),
                           *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
      if ( VidSchSyncObject )
      {
        v31 = operator new(0x18uLL, 0x4B677844u, (POOL_TYPE)512);
        *((_QWORD *)this + 3) = v31;
        if ( !v31 )
        {
          LODWORD(v16) = -1073741801;
          if ( v48 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v47);
          return (unsigned int)v16;
        }
        *v31 = 0LL;
        v31[1] = 0LL;
        v31[2] = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 3) + 16LL) = VidSchSyncObject;
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 520LL)
                                                           + 8LL)
                                               + 680LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
          *((_QWORD *)this + 3));
      }
      if ( v48 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v47);
    }
  }
  if ( (*((_BYTE *)this + 92) & 4) != 0 )
  {
    Current = DXGPROCESS::GetCurrent();
    v33 = Current;
    v34 = (char *)Current + 208;
    v50 = (char *)Current + 208;
    if ( Current != (struct DXGPROCESS *)-208LL )
    {
      v35 = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)Current + 27) == v35 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v35);
        *(_QWORD *)(v36 + 24) = 1309LL;
        WdLogEvent5_WdAssertion(v36);
      }
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v34, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v39 = *((_DWORD *)v34 + 4);
        if ( v39 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v37, &EventBlockThread, v38, v39);
      }
      ExAcquirePushLockExclusiveEx(v34, 0LL);
    }
    *((_QWORD *)v34 + 1) = KeGetCurrentThread();
    v40 = (_QWORD *)((char *)v33 + 232);
    v51 = 2;
    v41 = HMGRTABLE::AllocHandle((unsigned int *)v33 + 58, (__int64)this, 11, 0, 0);
    *((_DWORD *)this + 10) = v41;
    v43 = v41;
    if ( !v41 )
    {
      v44 = WdLogNewEntry5_WdLowResource(v42);
      LODWORD(v16) = -1073741801;
      *(_QWORD *)(v44 + 24) = this;
      *(_QWORD *)(v44 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v44);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v49);
      return (unsigned int)v16;
    }
    v45 = (v41 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v45 < *((_DWORD *)v33 + 62) )
    {
      v46 = *(_DWORD *)(*v40 + 16 * v45 + 8);
      if ( ((v43 >> 25) & 0x60) == (*(_BYTE *)(*v40 + 16 * v45 + 8) & 0x60) && (v46 & 0x2000) == 0 && (v46 & 0x1F) != 0 )
        *(_DWORD *)(*v40 + 16 * (((unsigned __int64)v43 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v49);
  }
  return 0LL;
}
