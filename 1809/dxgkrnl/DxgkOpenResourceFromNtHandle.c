/*
 * XREFs of DxgkOpenResourceFromNtHandle @ 0x1C00F17E0
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F1140 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C00AD3A0 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00DF410 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F0408 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C0234904 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandle(ULONG64 a1, __int64 a2, const GUID *a3)
{
  KPROCESSOR_MODE v4; // r12
  ULONG64 v5; // rax
  HANDLE v6; // r14
  NTSTATUS v7; // eax
  _DWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v16; // rax
  BOOL v17; // r15d
  DXGSYNCOBJECT **v18; // r14
  DXGKEYEDMUTEX *v19; // rcx
  PERESOURCE *Global; // rax
  _DWORD *v21; // rdx
  struct DXGPROCESS *Current; // r15
  unsigned int v23; // ecx
  __int64 v24; // rdx
  int v25; // r8d
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  struct DXGPROCESS *v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rax
  unsigned int v36; // edi
  PERESOURCE *v37; // rax
  __int64 v38; // rcx
  const GUID *v39; // r8
  int v40; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-D0h]
  char v42; // [rsp+70h] [rbp-C8h]
  _BYTE v43[8]; // [rsp+78h] [rbp-C0h] BYREF
  char v44; // [rsp+80h] [rbp-B8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-B0h] BYREF
  HANDLE Handle[2]; // [rsp+90h] [rbp-A8h]
  __int128 v47; // [rsp+A0h] [rbp-98h]
  __int128 v48; // [rsp+B0h] [rbp-88h]
  __int128 v49; // [rsp+C0h] [rbp-78h]
  __int128 v50; // [rsp+D0h] [rbp-68h]
  void *v51[2]; // [rsp+E0h] [rbp-58h]
  unsigned int v52[18]; // [rsp+F0h] [rbp-48h]
  unsigned int v53; // [rsp+148h] [rbp+10h] BYREF
  unsigned int v54; // [rsp+150h] [rbp+18h] BYREF
  PVOID Object; // [rsp+158h] [rbp+20h] BYREF

  v40 = -1;
  v41 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v42 = 1;
    v40 = 2076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2076);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2076);
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    v4 = 1;
    v5 = a1;
    if ( a1 >= MmUserProbeAddress )
      v5 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v5;
    v47 = *(_OWORD *)(v5 + 16);
    v48 = *(_OWORD *)(v5 + 32);
    v49 = *(_OWORD *)(v5 + 48);
    v50 = *(_OWORD *)(v5 + 64);
    *(_OWORD *)v51 = *(_OWORD *)(v5 + 80);
    *(_QWORD *)v52 = *(_QWORD *)(v5 + 96);
  }
  else
  {
    v4 = 0;
    *(_OWORD *)Handle = *(_OWORD *)a1;
    *(_OWORD *)v51 = *(_OWORD *)(a1 + 80);
    *(_QWORD *)v52 = *(_QWORD *)(a1 + 96);
  }
  v6 = Handle[1];
  v7 = ObReferenceObjectByHandle(
         Handle[1],
         0x20000u,
         g_pDxgkSharedAllocationObjectType,
         v4,
         &Object,
         &HandleInformation);
  v11 = v7;
  if ( v7 == -1073741788 )
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v6;
    *(_QWORD *)(v12 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
    if ( v42 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v13, &EventProfilerExit, v14, v40);
    }
    return 3221225508LL;
  }
  if ( v7 >= 0 )
  {
    v17 = (HandleInformation.GrantedAccess & 1) == 0;
    v53 = 0;
    v54 = 0;
    v18 = (DXGSYNCOBJECT **)Object;
    v19 = (DXGKEYEDMUTEX *)*((_QWORD *)Object + 3);
    if ( !v19 || (LODWORD(v11) = DXGKEYEDMUTEX::Open(v19, &v53, (char *)v51[1], v52[0], 1), (int)v11 >= 0) )
    {
      if ( v18[4] )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v19);
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v43, Global);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v43);
        LODWORD(v11) = DXGSYNCOBJECT::Open(
                         v18[4],
                         0LL,
                         0LL,
                         0LL,
                         &v54,
                         0LL,
                         0LL,
                         0,
                         0LL,
                         0,
                         (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
        if ( (int)v11 < 0 )
        {
          if ( v44 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v43);
          goto LABEL_47;
        }
        if ( v44 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v43);
      }
      if ( v4 )
      {
        v21 = (_DWORD *)(a1 + 84);
        if ( a1 + 84 >= MmUserProbeAddress )
          v21 = (_DWORD *)MmUserProbeAddress;
        *v21 = v53;
        v8 = (_DWORD *)(a1 + 100);
        if ( a1 + 100 >= MmUserProbeAddress )
          v8 = (_DWORD *)MmUserProbeAddress;
        *v8 = v54;
      }
      else
      {
        *(_DWORD *)(a1 + 84) = v53;
        *(_DWORD *)(a1 + 100) = v54;
      }
      LODWORD(v11) = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                       a1,
                       (__int64)v8,
                       (__int64)v18,
                       v17);
      if ( (int)v11 >= 0 )
      {
        Current = DXGPROCESS::GetCurrent();
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
        v23 = (v54 >> 6) & 0xFFFFFF;
        if ( v23 < *((_DWORD *)Current + 62) )
        {
          v24 = *((_QWORD *)Current + 29);
          v25 = *(_DWORD *)(v24 + 16LL * v23 + 8);
          if ( ((v54 >> 25) & 0x60) == (v25 & 0x60) && (v25 & 0x1F) != 0 )
          {
            v26 = 2 * (((unsigned __int64)v54 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v24 + 16 * (((unsigned __int64)v54 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
            {
              v27 = WdLogNewEntry5_WdAssertion((v54 >> 25) & 0x60);
              *(_QWORD *)(v27 + 24) = 222LL;
              WdLogEvent5_WdAssertion(v27);
              v24 = *((_QWORD *)Current + 29);
            }
            *(_DWORD *)(v24 + 8 * v26 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 27) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
        KeLeaveCriticalRegion();
        v28 = v53;
        if ( v53 )
        {
          v29 = DXGPROCESS::GetCurrent();
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v29 + 208));
          v30 = ((unsigned int)v28 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v30 < *((_DWORD *)v29 + 62) )
          {
            v31 = *((_QWORD *)v29 + 29);
            v32 = *(_DWORD *)(v31 + 16 * v30 + 8);
            v33 = ((unsigned int)v28 >> 25) & 0x60;
            if ( (((unsigned int)v28 >> 25) & 0x60) == (v32 & 0x60) && (v32 & 0x1F) != 0 )
            {
              v34 = 2 * ((v28 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v31 + 8 * v34 + 8) & 0x2000) == 0 )
              {
                v35 = WdLogNewEntry5_WdAssertion(v33);
                *(_QWORD *)(v35 + 24) = 222LL;
                WdLogEvent5_WdAssertion(v35);
                v31 = *((_QWORD *)v29 + 29);
              }
              *(_DWORD *)(v31 + 8 * v34 + 8) &= ~0x2000u;
            }
          }
          *((_QWORD *)v29 + 27) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v29 + 208, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
LABEL_47:
    if ( (int)v11 < 0 )
    {
      if ( v53 )
        DXGKEYEDMUTEX::DestroyLocal(v53);
      v36 = v54;
      if ( v54 )
      {
        v37 = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v19);
        DXGGLOBAL::DestroySyncObject(v37, v18[4], v36);
      }
    }
    ObfDereferenceObject(v18);
    goto LABEL_53;
  }
  v16 = WdLogNewEntry5_WdWarning(v9, v8, v10);
  *(_QWORD *)(v16 + 24) = v6;
  *(_QWORD *)(v16 + 32) = v11;
  WdLogEvent5_WdWarning(v16);
LABEL_53:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v38, &EventProfilerExit, v39, v40);
  return (unsigned int)v11;
}
