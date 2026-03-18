/*
 * XREFs of DxgkOpenResourceFromNtHandle @ 0x1C00ED610
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0220DE0 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C000721C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007260 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00ED9A4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F51B0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F62B0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C0269124 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C02699C4 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandle(ULONG64 a1, __int64 a2, const GUID *a3)
{
  char CurrentThreadPreviousMode; // al
  KPROCESSOR_MODE v5; // r12
  ULONG64 v6; // rax
  HANDLE v7; // r14
  NTSTATUS v8; // eax
  _DWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  BOOL v13; // r15d
  DXGSYNCOBJECT **v14; // r14
  DXGKEYEDMUTEX *v15; // rcx
  _DWORD *v16; // rdx
  struct DXGPROCESS *Current; // r15
  unsigned int v18; // ecx
  __int64 v19; // rdx
  int v20; // r8d
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  const GUID *v26; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v32; // rax
  PERESOURCE *Global; // rax
  struct DXGPROCESS *v34; // r13
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned int v41; // edi
  DXGGLOBAL *v42; // rax
  int v43; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-D0h]
  char v45; // [rsp+70h] [rbp-C8h]
  PVOID Object; // [rsp+78h] [rbp-C0h] BYREF
  _BYTE v47[8]; // [rsp+80h] [rbp-B8h] BYREF
  char v48; // [rsp+88h] [rbp-B0h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-A8h]
  __int128 v50; // [rsp+A0h] [rbp-98h]
  __int128 v51; // [rsp+B0h] [rbp-88h]
  __int128 v52; // [rsp+C0h] [rbp-78h]
  __int128 v53; // [rsp+D0h] [rbp-68h]
  void *v54[2]; // [rsp+E0h] [rbp-58h]
  unsigned int v55[18]; // [rsp+F0h] [rbp-48h]
  unsigned int v56; // [rsp+148h] [rbp+10h] BYREF
  unsigned int v57; // [rsp+150h] [rbp+18h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+158h] [rbp+20h] BYREF

  v43 = -1;
  v44 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v45 = 1;
    v43 = 2076;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2076);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2076LL);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v5 = CurrentThreadPreviousMode == 1;
  HandleInformation = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v6 = a1;
    if ( a1 >= MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v6;
    v50 = *(_OWORD *)(v6 + 16);
    v51 = *(_OWORD *)(v6 + 32);
    v52 = *(_OWORD *)(v6 + 48);
    v53 = *(_OWORD *)(v6 + 64);
    *(_OWORD *)v54 = *(_OWORD *)(v6 + 80);
    *(_QWORD *)v55 = *(_QWORD *)(v6 + 96);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)a1;
    *(_OWORD *)v54 = *(_OWORD *)(a1 + 80);
    *(_QWORD *)v55 = *(_QWORD *)(a1 + 96);
  }
  v7 = Handle[1];
  v8 = ObReferenceObjectByHandle(
         Handle[1],
         0x20000u,
         g_pDxgkSharedAllocationObjectType,
         v5,
         &Object,
         &HandleInformation);
  v12 = v8;
  if ( v8 != -1073741788 )
  {
    if ( v8 < 0 )
    {
      v32 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v32 + 24) = v7;
      *(_QWORD *)(v32 + 32) = v12;
      WdLogEvent5_WdWarning(v32);
LABEL_27:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v24);
      if ( v45 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v25, &EventProfilerExit, v26, v43);
      }
      return (unsigned int)v12;
    }
    v13 = (HandleInformation.GrantedAccess & 1) == 0;
    v56 = 0;
    v57 = 0;
    v14 = (DXGSYNCOBJECT **)Object;
    v15 = (DXGKEYEDMUTEX *)*((_QWORD *)Object + 3);
    if ( !v15 || (LODWORD(v12) = DXGKEYEDMUTEX::Open(v15, &v56, v54[1], v55[0], 1), (int)v12 >= 0) )
    {
      if ( v14[4] )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v15, (__int64)v9);
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47, Global);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v47);
        LODWORD(v12) = DXGSYNCOBJECT::Open(
                         v14[4],
                         0LL,
                         0LL,
                         0LL,
                         &v57,
                         0LL,
                         0LL,
                         0,
                         0LL,
                         0,
                         DXGSYNCOBJECT::FlagsDefault);
        if ( (int)v12 < 0 )
        {
          if ( v48 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v47);
          goto LABEL_25;
        }
        if ( v48 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v47);
      }
      if ( v5 )
      {
        v16 = (_DWORD *)(a1 + 84);
        if ( a1 + 84 >= MmUserProbeAddress )
          v16 = (_DWORD *)MmUserProbeAddress;
        *v16 = v56;
        v9 = (_DWORD *)(a1 + 100);
        if ( a1 + 100 >= MmUserProbeAddress )
          v9 = (_DWORD *)MmUserProbeAddress;
        *v9 = v57;
      }
      else
      {
        *(_DWORD *)(a1 + 84) = v56;
        *(_DWORD *)(a1 + 100) = v57;
      }
      LODWORD(v12) = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(a1, v9, v14, v13);
      if ( (int)v12 >= 0 )
      {
        Current = DXGPROCESS::GetCurrent();
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
        v18 = (v57 >> 6) & 0xFFFFFF;
        if ( v18 < *((_DWORD *)Current + 56) )
        {
          v19 = *((_QWORD *)Current + 26);
          v20 = *(_DWORD *)(v19 + 16LL * v18 + 8);
          if ( ((v57 >> 25) & 0x60) == (v20 & 0x60) && (v20 & 0x1F) != 0 )
          {
            v21 = 2 * (((unsigned __int64)v57 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v19 + 16 * (((unsigned __int64)v57 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
            {
              v22 = WdLogNewEntry5_WdAssertion((v57 >> 25) & 0x60, v19);
              *(_QWORD *)(v22 + 24) = 217LL;
              WdLogEvent5_WdAssertion(v22);
              v19 = *((_QWORD *)Current + 26);
            }
            *(_DWORD *)(v19 + 8 * v21 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 24) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 184, 0LL);
        KeLeaveCriticalRegion();
        v23 = v56;
        if ( v56 )
        {
          v34 = DXGPROCESS::GetCurrent();
          DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v34 + 184));
          v35 = ((unsigned int)v23 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v35 < *((_DWORD *)v34 + 56) )
          {
            v36 = *((_QWORD *)v34 + 26);
            v37 = *(_DWORD *)(v36 + 16 * v35 + 8);
            v38 = ((unsigned int)v23 >> 25) & 0x60;
            if ( (((unsigned int)v23 >> 25) & 0x60) == (v37 & 0x60) && (v37 & 0x1F) != 0 )
            {
              v39 = 2 * ((v23 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v36 + 8 * v39 + 8) & 0x2000) == 0 )
              {
                v40 = WdLogNewEntry5_WdAssertion(v38, v36);
                *(_QWORD *)(v40 + 24) = 217LL;
                WdLogEvent5_WdAssertion(v40);
                v36 = *((_QWORD *)v34 + 26);
              }
              *(_DWORD *)(v36 + 8 * v39 + 8) &= ~0x2000u;
            }
          }
          *((_QWORD *)v34 + 24) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v34 + 184, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
LABEL_25:
    if ( (int)v12 < 0 )
    {
      if ( v56 )
        DXGKEYEDMUTEX::DestroyLocal(v56);
      v41 = v57;
      if ( v57 )
      {
        v42 = DXGGLOBAL::GetGlobal((__int64)v15, (__int64)v9);
        DXGGLOBAL::DestroySyncObject(v42, v14[4], v41);
      }
    }
    ObfDereferenceObject(v14);
    goto LABEL_27;
  }
  v28 = WdLogNewEntry5_WdWarning(v10, v9, v11);
  *(_QWORD *)(v28 + 24) = v7;
  *(_QWORD *)(v28 + 32) = -1073741788LL;
  WdLogEvent5_WdWarning(v28);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v29);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v43);
  return 3221225508LL;
}
