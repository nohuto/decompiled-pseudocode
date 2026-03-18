/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle @ 0x1C0253320
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     McTemplateK0ppp @ 0x1C0042E68 (McTemplateK0ppp.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00F426C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00FAF80 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  const GUID *v19; // r8
  PERESOURCE *Global; // rax
  PVOID v21; // r12
  __int64 v22; // rcx
  const GUID *v23; // r8
  int v24; // r14d
  __int64 v25; // r9
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v26; // rdx
  struct DXGPROCESS *Current; // r15
  D3DKMT_HANDLE v28; // ecx
  __int64 v29; // rdx
  int v30; // r9d
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  const GUID *v35; // r8
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-68h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-60h] BYREF
  int v38; // [rsp+78h] [rbp-50h] BYREF
  __int64 v39; // [rsp+80h] [rbp-48h]
  char v40; // [rsp+88h] [rbp-40h]
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v41; // [rsp+D8h] [rbp+10h] BYREF
  struct DXGADAPTERSYNCOBJECT *v42; // [rsp+E0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+20h] BYREF

  v38 = -1;
  v39 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v40 = 1;
    v38 = 2086;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2086);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 2086LL);
  HandleInformation = 0LL;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v12);
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v38);
    }
    return 3221225508LL;
  }
  if ( v6 < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v16 + 24) = v5;
    *(_QWORD *)(v16 + 32) = v10;
    WdLogEvent5_WdWarning(v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v17);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v18, &EventProfilerExit, v19, v38);
    return (unsigned int)v10;
  }
  v41.hSyncObject = 0;
  v42 = 0LL;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8, v7);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)Handle, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)Handle);
  v21 = Object;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)Object + 192LL) - 5) <= 1 )
  {
    v24 = -1073741811;
LABEL_37:
    if ( LOBYTE(Handle[1]) )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
    goto LABEL_39;
  }
  v24 = DXGSYNCOBJECT::Open(
          *(DXGSYNCOBJECT **)Object,
          0LL,
          0LL,
          0LL,
          &v41.hSyncObject,
          0LL,
          0LL,
          0,
          &v42,
          0,
          DXGSYNCOBJECT::FlagsDefault);
  if ( v24 < 0 )
    goto LABEL_37;
  if ( bTracingEnabled )
  {
    v25 = v42 ? *((_QWORD *)v42 + 4) : 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppp(v22, &EventOpenSyncObject, v23, v25, v41.hSyncObject, 0LL);
  }
  if ( LOBYTE(Handle[1]) )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)Handle);
  v26 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v26 = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
  v26->hSyncObject = v41.hSyncObject;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, (__int64)v26);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
  v28 = (v41.hSyncObject >> 6) & 0xFFFFFF;
  if ( v28 < *((_DWORD *)Current + 56) )
  {
    v29 = *((_QWORD *)Current + 26);
    v30 = *(_DWORD *)(v29 + 16LL * v28 + 8);
    if ( ((v41.hSyncObject >> 25) & 0x60) == (v30 & 0x60) && (v30 & 0x1F) != 0 )
    {
      v31 = 2 * (((unsigned __int64)v41.hSyncObject >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v29 + 16 * (((unsigned __int64)v41.hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v32 = WdLogNewEntry5_WdAssertion((v41.hSyncObject >> 25) & 0x60, v29);
        *(_QWORD *)(v32 + 24) = 217LL;
        WdLogEvent5_WdAssertion(v32);
        v29 = *((_QWORD *)Current + 26);
      }
      *(_DWORD *)(v29 + 8 * v31 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 24) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 184, 0LL);
  KeLeaveCriticalRegion();
LABEL_39:
  ObfDereferenceObject(v21);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v33);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v34, &EventProfilerExit, v35, v38);
  return (unsigned int)v24;
}
