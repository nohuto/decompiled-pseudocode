/*
 * XREFs of ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0291280
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02386DC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0002010 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00073A4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000A8BC (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018920 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018950 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001ADD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0036E4C (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010F350 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0113C24 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C01398E0 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0139CE4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0139F28 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z @ 0x1C0243A6C (-FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C025EAE8 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0263550 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C0263828 (-DxgkSendCreateBundleObject@@YAJKPEAI0@Z.c)
 *     ?DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z @ 0x1C02639DC (-DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z.c)
 *     ?DxgkSendDestroyBundleObject@@YAJI@Z @ 0x1C0263B90 (-DxgkSendDestroyBundleObject@@YAJI@Z.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C0265670 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
 */

__int64 __fastcall VailDRTTest(struct DXGADAPTER *const a1, struct _D3DKMT_DRT_ESCAPE_HEAD *const a2)
{
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD **v12; // rax
  struct _KTHREAD **VirtualMachine; // rax
  struct _KTHREAD *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rax
  PVOID *p_Object; // rcx
  struct _KPROCESS *CurrentProcess; // r14
  struct _KPROCESS *v26; // rdx
  struct DXGPROCESS *v27; // rax
  struct DXGPROCESS *v28; // r14
  __int64 v29; // r15
  int v30; // r13d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r14
  unsigned int v35; // edi
  int v36; // eax
  int EntryType; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rax
  struct _EX_RUNDOWN_REF *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  int v53; // ebx
  _QWORD *v54; // rax
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  __int64 v58; // rcx
  struct _OBJECT_HANDLE_INFORMATION v59; // rbx
  __int64 v60; // r8
  __int64 v61; // rdx
  struct DXGPROCESS *Current; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  DxgkCompositionObject **v66; // rbx
  struct DXGVAILOBJECT *v67; // rax
  void *v68; // r15
  unsigned int v69; // ebx
  char *v70; // rax
  char *v71; // r12
  __int128 v72; // xmm0
  __int64 v73; // rax
  unsigned int v74; // edi
  __int64 v75; // r14
  unsigned int v76; // ebx
  NTSTATUS v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rax
  int BundleObjectByPointer; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rax
  unsigned int i; // ebx
  PVOID v89; // rcx
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  char v93; // [rsp+70h] [rbp-98h]
  char v94[8]; // [rsp+78h] [rbp-90h] BYREF
  char v95; // [rsp+80h] [rbp-88h]
  char v96[8]; // [rsp+90h] [rbp-78h] BYREF
  char v97; // [rsp+98h] [rbp-70h]
  __int64 v98[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v99; // [rsp+C8h] [rbp-40h]
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-30h] BYREF
  char v101; // [rsp+108h] [rbp+0h]
  _BYTE v102[1040]; // [rsp+118h] [rbp+10h] BYREF
  PVOID v103[16]; // [rsp+528h] [rbp+420h] BYREF

  if ( !g_OSTestSigningEnabled || !(_BYTE)KdDebuggerEnabled )
    return 3221225506LL;
  if ( *((_DWORD *)a2 + 1) != 160 )
    return 3221225485LL;
  v3 = *((_DWORD *)a2 + 3);
  if ( v3 > 6 )
  {
    v55 = v3 - 7;
    if ( !v55 )
      return DxgkSendDestroyBundleObject(*((unsigned int *)a2 + 4), (__int64)a2);
    v56 = v55 - 1;
    if ( !v56 )
      return DxgkExtractRemoteBundleObject(*((unsigned int *)a2 + 4), *((unsigned int *)a2 + 5), (void **)a2 + 3, 0LL);
    v57 = v56 - 1;
    if ( !v57 )
    {
      v74 = *((_DWORD *)a2 + 4);
      LODWORD(v75) = -1073741823;
      if ( v74 > 0x10 )
        return 3221225485LL;
      memset(v103, 0, sizeof(v103));
      v76 = 0;
      if ( v74 )
      {
        while ( 1 )
        {
          HandleInformation = 0LL;
          LODWORD(v75) = ObReferenceObjectByHandle(
                           *((HANDLE *)a2 + v76 + 3),
                           0x20000u,
                           g_pDxgkSharedAllocationObjectType,
                           1,
                           &Handle,
                           &HandleInformation);
          v103[v76] = Handle;
          if ( (int)v75 < 0 )
          {
            v77 = ObReferenceObjectByHandle(
                    *((HANDLE *)a2 + v76 + 3),
                    0x20000u,
                    g_pDxgkSharedSyncObjectType,
                    1,
                    &Object,
                    &HandleInformation);
            v75 = v77;
            v103[v76] = Object;
            if ( v77 < 0 )
              break;
          }
          v81 = *((unsigned int *)a2 + 4);
          if ( ++v76 >= (unsigned int)v81 )
            goto LABEL_113;
        }
        v82 = WdLogNewEntry5_WdWarning(v79, v78, v80);
        *(_QWORD *)(v82 + 24) = v75;
        WdLogEvent5_WdWarning(v82);
        v81 = *((unsigned int *)a2 + 4);
LABEL_113:
        if ( (int)v75 >= 0 )
        {
          BundleObjectByPointer = DxgkSendCreateBundleObjectByPointer(v81, v103, (unsigned int *)a2 + 38);
          v75 = BundleObjectByPointer;
          if ( BundleObjectByPointer < 0 )
          {
            v87 = WdLogNewEntry5_WdWarning(v85, v84, v86);
            *(_QWORD *)(v87 + 24) = v75;
            WdLogEvent5_WdWarning(v87);
          }
        }
      }
      for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
      {
        v89 = v103[i];
        if ( v89 )
          ObfDereferenceObject(v89);
      }
      return (unsigned int)v75;
    }
    v58 = (unsigned int)(v57 - 1);
    if ( !(_DWORD)v58 )
    {
      Current = DXGPROCESS::GetCurrent(v58, (__int64)a2);
      v66 = (DxgkCompositionObject **)Current;
      if ( !Current || !*((_QWORD *)Current + 52) )
      {
        v73 = WdLogNewEntry5_WdError(v64, v63, v65);
        *(_QWORD *)(v73 + 24) = -1073741811LL;
        WdLogEvent5_WdError(v73);
        return 3221225485LL;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v94, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v94);
      v67 = DXGPROCESS::ReferenceVailObject(v66);
      v68 = (void *)*((_QWORD *)v67 + 12);
      DxgkCompositionObject::Release(v67);
      ObfReferenceObject(v68);
      if ( v95 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v94);
      v69 = -1073741801;
      v70 = (char *)operator new(0xE8uLL, 0x4B677844u, 1, (POOL_TYPE)512);
      v71 = v70;
      if ( v70 )
      {
        *(_QWORD *)v70 = 0LL;
        *((_QWORD *)v70 + 2) = VailDRTProcessExtractWorker;
        *((_QWORD *)v70 + 3) = v70;
        *((_OWORD *)v70 + 2) = *(_OWORD *)a2;
        *((_OWORD *)v70 + 3) = *((_OWORD *)a2 + 1);
        *((_OWORD *)v70 + 4) = *((_OWORD *)a2 + 2);
        *((_OWORD *)v70 + 5) = *((_OWORD *)a2 + 3);
        *((_OWORD *)v70 + 6) = *((_OWORD *)a2 + 4);
        *((_OWORD *)v70 + 7) = *((_OWORD *)a2 + 5);
        *((_OWORD *)v70 + 8) = *((_OWORD *)a2 + 6);
        *((_OWORD *)v70 + 9) = *((_OWORD *)a2 + 7);
        *((_OWORD *)v70 + 10) = *((_OWORD *)a2 + 8);
        v72 = *((_OWORD *)a2 + 9);
        *((_QWORD *)v70 + 24) = v68;
        *((_OWORD *)v70 + 11) = v72;
        KeInitializeEvent((PRKEVENT)(v70 + 200), NotificationEvent, 0);
        *((_DWORD *)v71 + 56) = -1073741823;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v71, NormalWorkQueue);
        KeWaitForSingleObject(v71 + 200, Executive, 0, 0, 0LL);
        *(_OWORD *)a2 = *((_OWORD *)v71 + 2);
        *((_OWORD *)a2 + 1) = *((_OWORD *)v71 + 3);
        *((_OWORD *)a2 + 2) = *((_OWORD *)v71 + 4);
        *((_OWORD *)a2 + 3) = *((_OWORD *)v71 + 5);
        *((_OWORD *)a2 + 4) = *((_OWORD *)v71 + 6);
        *((_OWORD *)a2 + 5) = *((_OWORD *)v71 + 7);
        *((_OWORD *)a2 + 6) = *((_OWORD *)v71 + 8);
        *((_OWORD *)a2 + 7) = *((_OWORD *)v71 + 9);
        *((_OWORD *)a2 + 8) = *((_OWORD *)v71 + 10);
        *((_OWORD *)a2 + 9) = *((_OWORD *)v71 + 11);
        v69 = *((_DWORD *)v71 + 56);
        operator delete(v71);
      }
      ObfDereferenceObject(v68);
      return v69;
    }
    if ( (_DWORD)v58 == 1 )
    {
      HandleInformation = 0LL;
      Handle = 0LL;
      if ( (int)DxgkCreateRemoteCompositionSurfaceObjectForPairing(
                  (struct IPairedSurfaceObject **)&HandleInformation,
                  &Handle) >= 0 )
      {
        memset(v102, 0, sizeof(v102));
        v59 = HandleInformation;
        LOBYTE(v60) = 1;
        if ( (*(int (__fastcall **)(struct _OBJECT_HANDLE_INFORMATION, _BYTE *, __int64, struct _OBJECT_HANDLE_INFORMATION *))(**(_QWORD **)&HandleInformation + 16LL))(
               HandleInformation,
               v102,
               v60,
               &HandleInformation) >= 0 )
        {
          memset(v102, 0, 0x1C4uLL);
          (*(void (__fastcall **)(struct _OBJECT_HANDLE_INFORMATION, _QWORD, _QWORD, _BYTE *))(**(_QWORD **)&v59 + 32LL))(
            v59,
            0LL,
            0LL,
            v102);
          LOBYTE(v61) = 1;
          (*(void (__fastcall **)(struct _OBJECT_HANDLE_INFORMATION, __int64))(**(_QWORD **)&v59 + 24LL))(v59, v61);
        }
        (*(void (__fastcall **)(struct _OBJECT_HANDLE_INFORMATION))(**(_QWORD **)&v59 + 8LL))(v59);
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
    v5 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( (unsigned int)(v6 - 1) >= 2 )
          return 3221225485LL;
        return 0LL;
      }
      Handle = 0LL;
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v94, (__int64)a2);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v94);
      Global = DXGGLOBAL::GetGlobal(v8, v7);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v96,
        (struct _KTHREAD **)Global + 33);
      v12 = (struct _KTHREAD **)DXGGLOBAL::GetGlobal(v11, v10);
      VirtualMachine = DXGGLOBAL::FindVirtualMachine(v12, (struct _GUID *)a2 + 1);
      if ( VirtualMachine && (*((_OWORD *)a2 + 1) = *(_OWORD *)(VirtualMachine + 25), (v14 = VirtualMachine[7]) != 0LL) )
      {
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v96);
        v17 = 0LL;
        if ( *((_DWORD *)a2 + 8) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, *((struct DXGFASTMUTEX *const *)v14 + 13), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
          if ( *((_DWORD *)v14 + 10) != 1 )
          {
LABEL_23:
            if ( !v93 )
              goto LABEL_48;
            p_Object = &Object;
            goto LABEL_25;
          }
          DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v96, (struct _KTHREAD **)v14);
          v18 = (*((_DWORD *)a2 + 8) >> 6) & 0xFFFFFF;
          if ( (unsigned int)v18 >= *((_DWORD *)v14 + 56)
            || (v19 = *((_QWORD *)v14 + 26),
                v20 = (*((_DWORD *)a2 + 8) >> 25) & 0x60,
                v21 = *(_DWORD *)(v19 + 16 * v18 + 8),
                ((*((_DWORD *)a2 + 8) >> 25) & 0x60) != (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60))
            || (v21 & 0x2000) != 0
            || (v21 & 0x1F) == 0 )
          {
LABEL_22:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v96);
            goto LABEL_23;
          }
          v22 = v21 & 0x1F;
          if ( (_BYTE)v22 != 12 )
          {
            v23 = WdLogNewEntry5_WdError(v22, v20, v19);
            *(_QWORD *)(v23 + 24) = 267LL;
            WdLogEvent5_WdError(v23);
            goto LABEL_22;
          }
          v17 = *(_QWORD *)(v19 + 16LL * (unsigned int)v18);
          if ( !v17 )
            goto LABEL_22;
          DXGPROCESS::AcquireReference((DXGPROCESS *)v17, v20);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v96);
          if ( v93 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object);
        }
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v16, v15);
        if ( !v17 )
          goto LABEL_40;
        if ( !*((_DWORD *)a2 + 9) )
        {
LABEL_39:
          DXGPROCESS::ReleaseReference((DXGPROCESS *)v17);
LABEL_40:
          if ( v95 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v94);
          return 0LL;
        }
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v96, *(struct DXGFASTMUTEX *const *)(v17 + 104), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v96);
        if ( *(_DWORD *)(v17 + 40) == 1 && (*(_BYTE *)(v17 + 299) & 8) != 0 )
        {
          v26 = *(struct _KPROCESS **)(v17 + 56);
          v101 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v26);
          HandleInformation = 0LL;
          CEnsureCurrentDxgProcess::AttachToProcess(
            (CEnsureCurrentDxgProcess *)&HandleInformation,
            (struct DXGPROCESS *)v17);
          if ( HandleInformation )
          {
            v98[0] = 48LL;
            memset(&v98[1], 0, 24);
            v99 = 0LL;
            if ( (int)DxgkShareObjectsInternal(
                        0LL,
                        1,
                        CurrentProcess,
                        1u,
                        (char *)a2 + 36,
                        (__int64)v98,
                        0x10000000u,
                        &Handle,
                        0LL) >= 0 )
            {
              *((_QWORD *)a2 + 5) = Handle;
              CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&HandleInformation);
              if ( v101 )
                KeUnstackDetachProcess(&ApcState);
              if ( v97 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v96);
              goto LABEL_39;
            }
          }
          DXGPROCESS::ReleaseReference((DXGPROCESS *)v17);
          CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&HandleInformation);
          if ( v101 )
          {
            KeUnstackDetachProcess(&ApcState);
            v101 = 0;
          }
        }
        else
        {
          DXGPROCESS::ReleaseReference((DXGPROCESS *)v17);
        }
        if ( v97 )
        {
          p_Object = (PVOID *)v96;
LABEL_25:
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)p_Object);
        }
      }
      else
      {
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v96);
      }
LABEL_48:
      if ( v95 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v94);
      return 3221225485LL;
    }
    v27 = DXGPROCESS::GetCurrent(v5, (__int64)a2);
    v28 = v27;
    if ( !v27 )
      return 3221225485LL;
    HandleInformation.HandleAttributes = *((_DWORD *)v27 + 92);
    if ( !HandleInformation.HandleAttributes )
      return 3221225485LL;
    v29 = *((unsigned int *)a2 + 4);
    if ( !(_DWORD)v29 )
      return 3221225485LL;
    v30 = 0;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v94, (struct _KTHREAD **)v27);
    v34 = (__int64)v28 + 208;
    v35 = ((unsigned int)v29 >> 6) & 0xFFFFFF;
    if ( v35 >= *(_DWORD *)(v34 + 16)
      || (v31 = *(unsigned int *)(*(_QWORD *)v34 + 16LL * v35 + 8),
          v32 = (unsigned int)v29 >> 30,
          v36 = (*(_DWORD *)(*(_QWORD *)v34 + 16LL * v35 + 8) >> 5) & 3,
          LODWORD(Object) = v32,
          (_DWORD)v32 != v36)
      || (v31 & 0x2000) != 0
      || (v31 & 0x1F) == 0 )
    {
      v53 = 0;
LABEL_83:
      v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v54[4] = v53;
      v54[3] = v29;
      v54[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v54);
LABEL_84:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v94);
      if ( !v30 )
        return 3221225485LL;
      *((_DWORD *)a2 + 5) = HandleInformation.HandleAttributes;
      *((_DWORD *)a2 + 6) = v30;
      return 0LL;
    }
    EntryType = HMGRTABLE::GetEntryType(v34, v35);
    if ( EntryType != 4 )
    {
      if ( EntryType == 11 )
      {
        if ( v35 >= *(_DWORD *)(v34 + 16) )
          goto LABEL_65;
        v31 = *(_QWORD *)v34;
        v32 = *(unsigned int *)(*(_QWORD *)v34 + 16LL * v35 + 8);
        if ( (_DWORD)Object != ((*(_DWORD *)(*(_QWORD *)v34 + 16LL * v35 + 8) >> 5) & 3)
          || (v32 & 0x2000) != 0
          || (v32 & 0x1F) == 0 )
        {
          goto LABEL_65;
        }
        v32 &= 0x1Fu;
        if ( (_BYTE)v32 != 11 )
        {
          v38 = WdLogNewEntry5_WdError(v32, v31, v33);
          *(_QWORD *)(v38 + 24) = 267LL;
          WdLogEvent5_WdError(v38);
LABEL_65:
          v39 = WdLogNewEntry5_WdWarning(v32, v31, v33);
          *(_QWORD *)(v39 + 24) = v29;
          *(_QWORD *)(v39 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v39);
LABEL_77:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v94);
          return 3221225485LL;
        }
        v40 = *(_QWORD *)(v31 + 16LL * v35);
        if ( !v40 )
          goto LABEL_65;
        v30 = *(_DWORD *)(v40 + 44);
        goto LABEL_84;
      }
      v53 = EntryType;
      goto LABEL_83;
    }
    Handle = 0LL;
    if ( v35 < *(_DWORD *)(v34 + 16) )
    {
      v41 = *(_QWORD *)v34;
      v42 = *(_DWORD *)(*(_QWORD *)v34 + 16LL * v35 + 8);
      if ( (_DWORD)Object == ((v42 >> 5) & 3) && (v42 & 0x2000) == 0 && (v42 & 0x1F) != 0 )
      {
        v43 = v42 & 0x1F;
        if ( (_BYTE)v43 == 4 )
        {
          v45 = *(struct _EX_RUNDOWN_REF **)(v41 + 16LL * v35);
          goto LABEL_75;
        }
        v44 = WdLogNewEntry5_WdError(v43, v41, v33);
        *(_QWORD *)(v44 + 24) = 267LL;
        WdLogEvent5_WdError(v44);
      }
    }
    v45 = 0LL;
LABEL_75:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Object, v45);
    DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&Handle, (struct _EX_RUNDOWN_REF **)&Object);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&Object, v46);
    if ( !Handle )
    {
      v50 = WdLogNewEntry5_WdWarning(v48, v47, v49);
      *(_QWORD *)(v50 + 24) = v29;
      *(_QWORD *)(v50 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v50);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&Handle, v51);
      goto LABEL_77;
    }
    v30 = *((_DWORD *)Handle + 5);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&Handle, v47);
    goto LABEL_84;
  }
  return DxgkSendCreateBundleObject(*((unsigned int *)a2 + 4), (unsigned int *)a2 + 5, (unsigned int *)a2 + 21);
}
