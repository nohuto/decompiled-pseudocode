/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle @ 0x1C021E760
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C003C574 (McTemplateK0ppp.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00DF410 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C01143A0 (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle(ULONG64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v4; // rax
  HANDLE v5; // r14
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  PERESOURCE *Global; // rax
  PVOID v19; // r12
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v22; // r14d
  __int64 v23; // r9
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v24; // rdx
  struct DXGPROCESS *Current; // r15
  D3DKMT_HANDLE v26; // ecx
  __int64 v27; // rdx
  int v28; // r9d
  unsigned __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  const GUID *v32; // r8
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-68h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-60h] BYREF
  int v35; // [rsp+78h] [rbp-50h] BYREF
  __int64 v36; // [rsp+80h] [rbp-48h]
  char v37; // [rsp+88h] [rbp-40h]
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v38; // [rsp+D8h] [rbp+10h] BYREF
  struct DXGADAPTERSYNCOBJECT *v39; // [rsp+E0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+20h] BYREF

  v35 = -1;
  v36 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v37 = 1;
    v35 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2086);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v4;
  v5 = Handle[0];
  v6 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v10 = v6;
  if ( v6 == -1073741788 )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v5;
    *(_QWORD *)(v11 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v35);
    }
    return 3221225508LL;
  }
  if ( v6 < 0 )
  {
    v15 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v15 + 24) = v5;
    *(_QWORD *)(v15 + 32) = v10;
    WdLogEvent5_WdWarning(v15);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v35);
    return (unsigned int)v10;
  }
  v38.hSyncObject = 0;
  v39 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)Handle, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)Handle);
  v19 = Object;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)Object + 168LL) - 5) <= 1 )
  {
    v22 = -1073741811;
LABEL_37:
    if ( LOBYTE(Handle[1]) )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
    goto LABEL_39;
  }
  v22 = DXGSYNCOBJECT::Open(
          *(DXGSYNCOBJECT **)Object,
          0LL,
          0LL,
          0LL,
          &v38.hSyncObject,
          0LL,
          0LL,
          0,
          &v39,
          0,
          (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  if ( v22 < 0 )
    goto LABEL_37;
  if ( bTracingEnabled )
  {
    v23 = v39 ? *((_QWORD *)v39 + 4) : 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppp(v20, &EventOpenSyncObject, v21, v23, v38.hSyncObject, 0LL);
  }
  if ( LOBYTE(Handle[1]) )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
  v24 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v24 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
  v24->hSyncObject = v38.hSyncObject;
  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
  v26 = (v38.hSyncObject >> 6) & 0xFFFFFF;
  if ( v26 < *((_DWORD *)Current + 62) )
  {
    v27 = *((_QWORD *)Current + 29);
    v28 = *(_DWORD *)(v27 + 16LL * v26 + 8);
    if ( ((v38.hSyncObject >> 25) & 0x60) == (v28 & 0x60) && (v28 & 0x1F) != 0 )
    {
      v29 = 2 * (((unsigned __int64)v38.hSyncObject >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v27 + 16 * (((unsigned __int64)v38.hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion((v38.hSyncObject >> 25) & 0x60);
        *(_QWORD *)(v30 + 24) = 222LL;
        WdLogEvent5_WdAssertion(v30);
        v27 = *((_QWORD *)Current + 29);
      }
      *(_DWORD *)(v27 + 8 * v29 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 27) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
LABEL_39:
  ObfDereferenceObject(v19);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v35);
  return (unsigned int)v22;
}
