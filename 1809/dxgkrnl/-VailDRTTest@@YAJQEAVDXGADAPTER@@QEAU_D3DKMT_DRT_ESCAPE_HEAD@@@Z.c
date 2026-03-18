/*
 * XREFs of ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025AFA0
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0010340 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00104E0 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C00118CC (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0019470 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0031600 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     DxgkShareObjectsInternal @ 0x1C012B970 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012BD74 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z @ 0x1C020FA44 (-FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C022A27C (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C022EF40 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C022F218 (-DxgkSendCreateBundleObject@@YAJKPEAI0@Z.c)
 *     ?DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z @ 0x1C022F3CC (-DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z.c)
 *     ?DxgkSendDestroyBundleObject@@YAJI@Z @ 0x1C022F580 (-DxgkSendDestroyBundleObject@@YAJI@Z.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C0231160 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 */

__int64 __fastcall VailDRTTest(struct DXGADAPTER *const a1, struct _D3DKMT_DRT_ESCAPE_HEAD *const a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rax
  struct _KTHREAD **VirtualMachine; // rax
  struct _KTHREAD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  DXGAUTOMUTEX *v21; // rcx
  struct _KPROCESS *CurrentProcess; // r14
  struct _KPROCESS *v23; // rdx
  struct DXGPROCESS *v24; // rax
  struct DXGPROCESS *v25; // r14
  __int64 v26; // r15
  int v27; // r13d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r14
  unsigned int v32; // edi
  int v33; // eax
  int EntryType; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct _EX_RUNDOWN_REF *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  int v47; // ebx
  _QWORD *v48; // rax
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  PVOID v53; // rbx
  __int64 v54; // r8
  __int64 v55; // rdx
  struct DXGPROCESS *Current; // rax
  __int64 v57; // rcx
  DxgkCompositionObject **v58; // rbx
  struct DXGVAILOBJECT *v59; // rax
  void *v60; // r15
  unsigned int v61; // ebx
  char *v62; // rax
  char *v63; // r12
  __int128 v64; // xmm0
  __int64 v65; // rax
  unsigned int v66; // ebx
  __int64 v67; // r14
  unsigned int v68; // edi
  NTSTATUS v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned int v73; // ecx
  __int64 v74; // rax
  int BundleObjectByPointer; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rax
  unsigned int i; // ebx
  PVOID v81; // rcx
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v84; // [rsp+68h] [rbp-A0h] BYREF
  char v85; // [rsp+70h] [rbp-98h]
  char v86[8]; // [rsp+78h] [rbp-90h] BYREF
  char v87; // [rsp+80h] [rbp-88h]
  char v88[8]; // [rsp+90h] [rbp-78h] BYREF
  char v89; // [rsp+98h] [rbp-70h]
  __int64 v90[3]; // [rsp+A8h] [rbp-60h] BYREF
  int v91; // [rsp+C0h] [rbp-48h]
  __int128 v92; // [rsp+C8h] [rbp-40h]
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-30h] BYREF
  char v94; // [rsp+108h] [rbp+0h]
  _BYTE v95[464]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v96[1040]; // [rsp+2E8h] [rbp+1E0h] BYREF
  PVOID v97[16]; // [rsp+6F8h] [rbp+5F0h] BYREF

  if ( !g_OSTestSigningEnabled || !(_BYTE)KdDebuggerEnabled )
    return 3221225506LL;
  if ( *((_DWORD *)a2 + 1) != 160 )
    return 3221225485LL;
  v3 = *((_DWORD *)a2 + 3);
  if ( v3 > 6 )
  {
    v49 = v3 - 7;
    if ( !v49 )
      return DxgkSendDestroyBundleObject(*((_DWORD *)a2 + 4));
    v50 = v49 - 1;
    if ( !v50 )
      return DxgkExtractRemoteBundleObject(*((_DWORD *)a2 + 4), *((_DWORD *)a2 + 5), (void **)a2 + 3, 0LL);
    v51 = v50 - 1;
    if ( !v51 )
    {
      v66 = *((_DWORD *)a2 + 4);
      LODWORD(v67) = -1073741823;
      if ( v66 > 0x10 )
        return 3221225485LL;
      memset(v97, 0, sizeof(v97));
      v68 = 0;
      if ( v66 )
      {
        while ( 1 )
        {
          v69 = ObReferenceObjectByHandle(
                  *((HANDLE *)a2 + v68 + 3),
                  0x20000u,
                  0LL,
                  1,
                  &Object,
                  (POBJECT_HANDLE_INFORMATION)&Handle);
          v67 = v69;
          v97[v68] = Object;
          if ( v69 < 0 )
            break;
          v73 = *((_DWORD *)a2 + 4);
          if ( ++v68 >= v73 )
            goto LABEL_112;
        }
        v74 = WdLogNewEntry5_WdWarning(v71, v70, v72);
        *(_QWORD *)(v74 + 24) = v67;
        WdLogEvent5_WdWarning(v74);
        v73 = *((_DWORD *)a2 + 4);
LABEL_112:
        if ( (int)v67 >= 0 )
        {
          BundleObjectByPointer = DxgkSendCreateBundleObjectByPointer(v73, v97, (unsigned int *)a2 + 38);
          v67 = BundleObjectByPointer;
          if ( BundleObjectByPointer < 0 )
          {
            v79 = WdLogNewEntry5_WdWarning(v77, v76, v78);
            *(_QWORD *)(v79 + 24) = v67;
            WdLogEvent5_WdWarning(v79);
          }
        }
      }
      for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
      {
        v81 = v97[i];
        if ( v81 )
          ObfDereferenceObject(v81);
      }
      return (unsigned int)v67;
    }
    v52 = v51 - 1;
    if ( !v52 )
    {
      Current = DXGPROCESS::GetCurrent();
      v58 = (DxgkCompositionObject **)Current;
      if ( !Current || !*((_QWORD *)Current + 55) )
      {
        v65 = WdLogNewEntry5_WdError(v57);
        *(_QWORD *)(v65 + 24) = -1073741811LL;
        WdLogEvent5_WdError(v65);
        return 3221225485LL;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v86, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v86);
      v59 = DXGPROCESS::ReferenceVailObject(v58);
      v60 = (void *)*((_QWORD *)v59 + 12);
      DxgkCompositionObject::Release(v59);
      ObfReferenceObject(v60);
      if ( v87 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
      v61 = -1073741801;
      v62 = (char *)operator new(0xE8uLL, 0x4B677844u, 1, (POOL_TYPE)512);
      v63 = v62;
      if ( v62 )
      {
        *(_QWORD *)v62 = 0LL;
        *((_QWORD *)v62 + 2) = VailDRTProcessExtractWorker;
        *((_QWORD *)v62 + 3) = v62;
        *((_OWORD *)v62 + 2) = *(_OWORD *)a2;
        *((_OWORD *)v62 + 3) = *((_OWORD *)a2 + 1);
        *((_OWORD *)v62 + 4) = *((_OWORD *)a2 + 2);
        *((_OWORD *)v62 + 5) = *((_OWORD *)a2 + 3);
        *((_OWORD *)v62 + 6) = *((_OWORD *)a2 + 4);
        *((_OWORD *)v62 + 7) = *((_OWORD *)a2 + 5);
        *((_OWORD *)v62 + 8) = *((_OWORD *)a2 + 6);
        *((_OWORD *)v62 + 9) = *((_OWORD *)a2 + 7);
        *((_OWORD *)v62 + 10) = *((_OWORD *)a2 + 8);
        v64 = *((_OWORD *)a2 + 9);
        *((_QWORD *)v62 + 24) = v60;
        *((_OWORD *)v62 + 11) = v64;
        KeInitializeEvent((PRKEVENT)(v62 + 200), NotificationEvent, 0);
        *((_DWORD *)v63 + 56) = -1073741823;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v63, NormalWorkQueue);
        KeWaitForSingleObject(v63 + 200, Executive, 0, 0, 0LL);
        *(_OWORD *)a2 = *((_OWORD *)v63 + 2);
        *((_OWORD *)a2 + 1) = *((_OWORD *)v63 + 3);
        *((_OWORD *)a2 + 2) = *((_OWORD *)v63 + 4);
        *((_OWORD *)a2 + 3) = *((_OWORD *)v63 + 5);
        *((_OWORD *)a2 + 4) = *((_OWORD *)v63 + 6);
        *((_OWORD *)a2 + 5) = *((_OWORD *)v63 + 7);
        *((_OWORD *)a2 + 6) = *((_OWORD *)v63 + 8);
        *((_OWORD *)a2 + 7) = *((_OWORD *)v63 + 9);
        *((_OWORD *)a2 + 8) = *((_OWORD *)v63 + 10);
        *((_OWORD *)a2 + 9) = *((_OWORD *)v63 + 11);
        v61 = *((_DWORD *)v63 + 56);
        operator delete(v63);
      }
      ObfDereferenceObject(v60);
      return v61;
    }
    if ( v52 == 1 )
    {
      Object = 0LL;
      Handle = 0LL;
      if ( (int)DxgkCreateRemoteCompositionSurfaceObjectForPairing((struct IPairedSurfaceObject **)&Object, &Handle) >= 0 )
      {
        memset(v96, 0, sizeof(v96));
        v53 = Object;
        LOBYTE(v54) = 1;
        if ( (*(int (__fastcall **)(PVOID, _BYTE *, __int64, PVOID *))(*(_QWORD *)Object + 16LL))(
               Object,
               v96,
               v54,
               &Object) >= 0 )
        {
          memset(v95, 0, 0x1C4uLL);
          (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)v53 + 32LL))(v53, 0LL, 0LL, v95);
          LOBYTE(v55) = 1;
          (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)v53 + 24LL))(v53, v55);
        }
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v53 + 8LL))(v53);
        if ( Handle )
          ObCloseHandle(Handle, 1);
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( v3 != 6 )
  {
    if ( !v3 )
      return 0LL;
    v4 = v3 - 1;
    if ( !v4 )
      return 0LL;
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( (unsigned int)(v6 - 1) >= 2 )
          return 3221225485LL;
        return 0LL;
      }
      Handle = 0LL;
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v86);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v86);
      Global = DXGGLOBAL::GetGlobal(v7);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v88,
        (struct _KTHREAD **)Global + 33);
      v10 = (struct _KTHREAD **)DXGGLOBAL::GetGlobal(v9);
      VirtualMachine = DXGGLOBAL::FindVirtualMachine(v10, (struct _GUID *)a2 + 1);
      if ( VirtualMachine && (*((_OWORD *)a2 + 1) = *(_OWORD *)(VirtualMachine + 25), (v12 = VirtualMachine[7]) != 0LL) )
      {
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v88);
        v15 = 0LL;
        if ( *((_DWORD *)a2 + 8) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v84, *((struct DXGFASTMUTEX *const *)v12 + 14), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v84);
          if ( *((_DWORD *)v12 + 10) != 1 )
          {
LABEL_23:
            if ( !v85 )
              goto LABEL_48;
            v21 = (DXGAUTOMUTEX *)&v84;
            goto LABEL_25;
          }
          DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v88, (struct _KTHREAD **)v12);
          v16 = (*((_DWORD *)a2 + 8) >> 6) & 0xFFFFFF;
          if ( (unsigned int)v16 >= *((_DWORD *)v12 + 62)
            || (v17 = *((_QWORD *)v12 + 29),
                v18 = *(_DWORD *)(v17 + 16 * v16 + 8),
                ((*((_DWORD *)a2 + 8) >> 25) & 0x60) != (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60))
            || (v18 & 0x2000) != 0
            || (v18 & 0x1F) == 0 )
          {
LABEL_22:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v88);
            goto LABEL_23;
          }
          v19 = v18 & 0x1F;
          if ( (_BYTE)v19 != 12 )
          {
            v20 = WdLogNewEntry5_WdError(v19);
            *(_QWORD *)(v20 + 24) = 316LL;
            WdLogEvent5_WdError(v20);
            goto LABEL_22;
          }
          v15 = *(_QWORD *)(v17 + 16LL * (unsigned int)v16);
          if ( !v15 )
            goto LABEL_22;
          DXGPROCESS::AcquireReference((DXGPROCESS *)v15);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v88);
          if ( v85 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v84);
        }
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v14, v13);
        if ( !v15 )
          goto LABEL_40;
        if ( !*((_DWORD *)a2 + 9) )
        {
LABEL_39:
          DXGPROCESS::ReleaseReference((DXGPROCESS *)v15);
LABEL_40:
          if ( v87 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
          return 0LL;
        }
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v88, *(struct DXGFASTMUTEX *const *)(v15 + 112), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v88);
        if ( *(_DWORD *)(v15 + 40) == 1 && (*(_BYTE *)(v15 + 323) & 8) != 0 )
        {
          v23 = *(struct _KPROCESS **)(v15 + 56);
          v94 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v23);
          Object = 0LL;
          CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&Object, (struct DXGPROCESS *)v15);
          if ( Object )
          {
            LODWORD(v90[0]) = 48;
            v90[1] = 0LL;
            v91 = 0;
            v90[2] = 0LL;
            v92 = 0LL;
            if ( (int)DxgkShareObjectsInternal(
                        0LL,
                        1,
                        CurrentProcess,
                        1u,
                        (char *)a2 + 36,
                        (__int64)v90,
                        0x10000000u,
                        &Handle,
                        0LL) >= 0 )
            {
              *((_QWORD *)a2 + 5) = Handle;
              CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&Object);
              if ( v94 )
                KeUnstackDetachProcess(&ApcState);
              if ( v89 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v88);
              goto LABEL_39;
            }
          }
          DXGPROCESS::ReleaseReference((DXGPROCESS *)v15);
          CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&Object);
          if ( v94 )
          {
            KeUnstackDetachProcess(&ApcState);
            v94 = 0;
          }
        }
        else
        {
          DXGPROCESS::ReleaseReference((DXGPROCESS *)v15);
        }
        if ( v89 )
        {
          v21 = (DXGAUTOMUTEX *)v88;
LABEL_25:
          DXGAUTOMUTEX::Release(v21);
        }
      }
      else
      {
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v88);
      }
LABEL_48:
      if ( v87 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v86);
      return 3221225485LL;
    }
    v24 = DXGPROCESS::GetCurrent();
    v25 = v24;
    if ( !v24 )
      return 3221225485LL;
    LODWORD(Object) = *((_DWORD *)v24 + 98);
    if ( !(_DWORD)Object )
      return 3221225485LL;
    v26 = *((unsigned int *)a2 + 4);
    if ( !(_DWORD)v26 )
      return 3221225485LL;
    v27 = 0;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v86, (struct _KTHREAD **)v24);
    v31 = (__int64)v25 + 232;
    v32 = ((unsigned int)v26 >> 6) & 0xFFFFFF;
    if ( v32 >= *(_DWORD *)(v31 + 16)
      || (v28 = *(unsigned int *)(*(_QWORD *)v31 + 16LL * v32 + 8),
          v29 = (unsigned int)v26 >> 30,
          v33 = (*(_DWORD *)(*(_QWORD *)v31 + 16LL * v32 + 8) >> 5) & 3,
          LODWORD(v84) = v29,
          (_DWORD)v29 != v33)
      || (v28 & 0x2000) != 0
      || (v28 & 0x1F) == 0 )
    {
      v47 = 0;
LABEL_83:
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      v48[4] = v47;
      v48[3] = v26;
      v48[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v48);
LABEL_84:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v86);
      if ( !v27 )
        return 3221225485LL;
      *((_DWORD *)a2 + 5) = (_DWORD)Object;
      *((_DWORD *)a2 + 6) = v27;
      return 0LL;
    }
    EntryType = HMGRTABLE::GetEntryType(v31, v32);
    if ( EntryType != 4 )
    {
      if ( EntryType == 11 )
      {
        if ( v32 >= *(_DWORD *)(v31 + 16) )
          goto LABEL_65;
        v28 = *(_QWORD *)v31;
        v29 = *(unsigned int *)(*(_QWORD *)v31 + 16LL * v32 + 8);
        if ( (_DWORD)v84 != ((*(_DWORD *)(*(_QWORD *)v31 + 16LL * v32 + 8) >> 5) & 3)
          || (v29 & 0x2000) != 0
          || (v29 & 0x1F) == 0 )
        {
          goto LABEL_65;
        }
        v29 &= 0x1Fu;
        if ( (_BYTE)v29 != 11 )
        {
          v35 = WdLogNewEntry5_WdError(v29);
          *(_QWORD *)(v35 + 24) = 316LL;
          WdLogEvent5_WdError(v35);
LABEL_65:
          v36 = WdLogNewEntry5_WdWarning(v29, v28, v30);
          *(_QWORD *)(v36 + 24) = v26;
          *(_QWORD *)(v36 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v36);
LABEL_77:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v86);
          return 3221225485LL;
        }
        v37 = *(_QWORD *)(v28 + 16LL * v32);
        if ( !v37 )
          goto LABEL_65;
        v27 = *(_DWORD *)(v37 + 44);
        goto LABEL_84;
      }
      v47 = EntryType;
      goto LABEL_83;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Handle, 0LL);
    if ( v32 < *(_DWORD *)(v31 + 16) )
    {
      v38 = *(_DWORD *)(*(_QWORD *)v31 + 16LL * v32 + 8);
      if ( (_DWORD)v84 == ((v38 >> 5) & 3) && (v38 & 0x2000) == 0 && (v38 & 0x1F) != 0 )
      {
        v39 = v38 & 0x1F;
        if ( (_BYTE)v39 == 4 )
        {
          v41 = *(struct _EX_RUNDOWN_REF **)(*(_QWORD *)v31 + 16LL * v32);
          goto LABEL_75;
        }
        v40 = WdLogNewEntry5_WdError(v39);
        *(_QWORD *)(v40 + 24) = 316LL;
        WdLogEvent5_WdError(v40);
      }
    }
    v41 = 0LL;
LABEL_75:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v84, v41);
    DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&Handle, (struct DXGRESOURCE **)&v84);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v84);
    if ( !Handle )
    {
      v45 = WdLogNewEntry5_WdWarning(v43, v42, v44);
      *(_QWORD *)(v45 + 24) = v26;
      *(_QWORD *)(v45 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v45);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&Handle);
      goto LABEL_77;
    }
    v27 = *((_DWORD *)Handle + 5);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&Handle);
    goto LABEL_84;
  }
  return DxgkSendCreateBundleObject(*((_DWORD *)a2 + 4), (unsigned int *)a2 + 5, (unsigned int *)a2 + 21);
}
