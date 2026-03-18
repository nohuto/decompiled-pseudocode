/*
 * XREFs of ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0291690
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0238D4C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000224C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000AAAC (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018D50 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018D9C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018DCC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001ADD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0036FAC (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01169E4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C013D1F0 (DxgkShareObjectsInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C013D5F4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C013D838 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z @ 0x1C02440EC (-FindVirtualMachine@DXGGLOBAL@@QEAAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@E@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C025F178 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0263BE0 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?DxgkSendCreateBundleObject@@YAJKPEAI0@Z @ 0x1C0263EB8 (-DxgkSendCreateBundleObject@@YAJKPEAI0@Z.c)
 *     ?DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z @ 0x1C026406C (-DxgkSendCreateBundleObjectByPointer@@YAJKPEAPEAXPEAI@Z.c)
 *     ?DxgkSendDestroyBundleObject@@YAJI@Z @ 0x1C0264220 (-DxgkSendDestroyBundleObject@@YAJI@Z.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C0265D00 (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAPEAUIPairedSurfaceObject@@PEAPEAX@Z.c)
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
  __int64 v25; // rdx
  struct _KPROCESS *CurrentProcess; // r14
  __int64 v27; // rdx
  struct _KPROCESS *v28; // rdx
  __int64 v29; // rdx
  struct DXGPROCESS *v30; // rax
  struct DXGPROCESS *v31; // r14
  __int64 v32; // r15
  int v33; // r13d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r14
  unsigned int v38; // edi
  int v39; // eax
  int EntryType; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rax
  struct _EX_RUNDOWN_REF *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  int v56; // ebx
  _QWORD *v57; // rax
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  __int64 v61; // rcx
  struct _OBJECT_HANDLE_INFORMATION v62; // rbx
  __int64 v63; // r8
  __int64 v64; // rdx
  struct DXGPROCESS *Current; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  DxgkCompositionObject **v69; // rbx
  struct DXGVAILOBJECT *v70; // rax
  void *v71; // r15
  unsigned int v72; // ebx
  char *v73; // rax
  char *v74; // r12
  __int128 v75; // xmm0
  __int64 v76; // rax
  unsigned int v77; // edi
  __int64 v78; // r14
  unsigned int v79; // ebx
  NTSTATUS v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rcx
  __int64 v85; // rax
  int BundleObjectByPointer; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rax
  unsigned int i; // ebx
  PVOID v92; // rcx
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  char v96; // [rsp+70h] [rbp-98h]
  char v97[8]; // [rsp+78h] [rbp-90h] BYREF
  char v98; // [rsp+80h] [rbp-88h]
  char v99[8]; // [rsp+90h] [rbp-78h] BYREF
  char v100; // [rsp+98h] [rbp-70h]
  __int64 v101[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v102; // [rsp+C8h] [rbp-40h]
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-30h] BYREF
  char v104; // [rsp+108h] [rbp+0h]
  _BYTE v105[1040]; // [rsp+118h] [rbp+10h] BYREF
  PVOID v106[16]; // [rsp+528h] [rbp+420h] BYREF

  if ( !g_OSTestSigningEnabled || !(_BYTE)KdDebuggerEnabled )
    return 3221225506LL;
  if ( *((_DWORD *)a2 + 1) != 160 )
    return 3221225485LL;
  v3 = *((_DWORD *)a2 + 3);
  if ( v3 > 6 )
  {
    v58 = v3 - 7;
    if ( !v58 )
      return DxgkSendDestroyBundleObject(*((unsigned int *)a2 + 4), (__int64)a2);
    v59 = v58 - 1;
    if ( !v59 )
      return DxgkExtractRemoteBundleObject(*((unsigned int *)a2 + 4), *((unsigned int *)a2 + 5), (void **)a2 + 3, 0LL);
    v60 = v59 - 1;
    if ( !v60 )
    {
      v77 = *((_DWORD *)a2 + 4);
      LODWORD(v78) = -1073741823;
      if ( v77 > 0x10 )
        return 3221225485LL;
      memset(v106, 0, sizeof(v106));
      v79 = 0;
      if ( v77 )
      {
        while ( 1 )
        {
          HandleInformation = 0LL;
          LODWORD(v78) = ObReferenceObjectByHandle(
                           *((HANDLE *)a2 + v79 + 3),
                           0x20000u,
                           g_pDxgkSharedAllocationObjectType,
                           1,
                           &Handle,
                           &HandleInformation);
          v106[v79] = Handle;
          if ( (int)v78 < 0 )
          {
            v80 = ObReferenceObjectByHandle(
                    *((HANDLE *)a2 + v79 + 3),
                    0x20000u,
                    g_pDxgkSharedSyncObjectType,
                    1,
                    &Object,
                    &HandleInformation);
            v78 = v80;
            v106[v79] = Object;
            if ( v80 < 0 )
              break;
          }
          v84 = *((unsigned int *)a2 + 4);
          if ( ++v79 >= (unsigned int)v84 )
            goto LABEL_113;
        }
        v85 = WdLogNewEntry5_WdWarning(v82, v81, v83);
        *(_QWORD *)(v85 + 24) = v78;
        WdLogEvent5_WdWarning(v85);
        v84 = *((unsigned int *)a2 + 4);
LABEL_113:
        if ( (int)v78 >= 0 )
        {
          BundleObjectByPointer = DxgkSendCreateBundleObjectByPointer(v84, v106, (unsigned int *)a2 + 38);
          v78 = BundleObjectByPointer;
          if ( BundleObjectByPointer < 0 )
          {
            v90 = WdLogNewEntry5_WdWarning(v88, v87, v89);
            *(_QWORD *)(v90 + 24) = v78;
            WdLogEvent5_WdWarning(v90);
          }
        }
      }
      for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
      {
        v92 = v106[i];
        if ( v92 )
          ObfDereferenceObject(v92);
      }
      return (unsigned int)v78;
    }
    v61 = (unsigned int)(v60 - 1);
    if ( !(_DWORD)v61 )
    {
      Current = DXGPROCESS::GetCurrent(v61, (__int64)a2);
      v69 = (DxgkCompositionObject **)Current;
      if ( !Current || !*((_QWORD *)Current + 52) )
      {
        v76 = WdLogNewEntry5_WdError(v67, v66, v68);
        *(_QWORD *)(v76 + 24) = -1073741811LL;
        WdLogEvent5_WdError(v76);
        return 3221225485LL;
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v97, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v97);
      v70 = DXGPROCESS::ReferenceVailObject(v69);
      v71 = (void *)*((_QWORD *)v70 + 12);
      DxgkCompositionObject::Release(v70);
      ObfReferenceObject(v71);
      if ( v98 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v97);
      v72 = -1073741801;
      v73 = (char *)operator new(0xE8uLL, 0x4B677844u, 1, (POOL_TYPE)512);
      v74 = v73;
      if ( v73 )
      {
        *(_QWORD *)v73 = 0LL;
        *((_QWORD *)v73 + 2) = VailDRTProcessExtractWorker;
        *((_QWORD *)v73 + 3) = v73;
        *((_OWORD *)v73 + 2) = *(_OWORD *)a2;
        *((_OWORD *)v73 + 3) = *((_OWORD *)a2 + 1);
        *((_OWORD *)v73 + 4) = *((_OWORD *)a2 + 2);
        *((_OWORD *)v73 + 5) = *((_OWORD *)a2 + 3);
        *((_OWORD *)v73 + 6) = *((_OWORD *)a2 + 4);
        *((_OWORD *)v73 + 7) = *((_OWORD *)a2 + 5);
        *((_OWORD *)v73 + 8) = *((_OWORD *)a2 + 6);
        *((_OWORD *)v73 + 9) = *((_OWORD *)a2 + 7);
        *((_OWORD *)v73 + 10) = *((_OWORD *)a2 + 8);
        v75 = *((_OWORD *)a2 + 9);
        *((_QWORD *)v73 + 24) = v71;
        *((_OWORD *)v73 + 11) = v75;
        KeInitializeEvent((PRKEVENT)(v73 + 200), NotificationEvent, 0);
        *((_DWORD *)v74 + 56) = -1073741823;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)v74, NormalWorkQueue);
        KeWaitForSingleObject(v74 + 200, Executive, 0, 0, 0LL);
        *(_OWORD *)a2 = *((_OWORD *)v74 + 2);
        *((_OWORD *)a2 + 1) = *((_OWORD *)v74 + 3);
        *((_OWORD *)a2 + 2) = *((_OWORD *)v74 + 4);
        *((_OWORD *)a2 + 3) = *((_OWORD *)v74 + 5);
        *((_OWORD *)a2 + 4) = *((_OWORD *)v74 + 6);
        *((_OWORD *)a2 + 5) = *((_OWORD *)v74 + 7);
        *((_OWORD *)a2 + 6) = *((_OWORD *)v74 + 8);
        *((_OWORD *)a2 + 7) = *((_OWORD *)v74 + 9);
        *((_OWORD *)a2 + 8) = *((_OWORD *)v74 + 10);
        *((_OWORD *)a2 + 9) = *((_OWORD *)v74 + 11);
        v72 = *((_DWORD *)v74 + 56);
        operator delete(v74);
      }
      ObfDereferenceObject(v71);
      return v72;
    }
    if ( (_DWORD)v61 == 1 )
    {
      HandleInformation = 0LL;
      Handle = 0LL;
      if ( (int)DxgkCreateRemoteCompositionSurfaceObjectForPairing(
                  (struct IPairedSurfaceObject **)&HandleInformation,
                  &Handle) >= 0 )
      {
        memset(v105, 0, sizeof(v105));
        v62 = HandleInformation;
        LOBYTE(v63) = 1;
        if ( (*(int (__fastcall **)(struct _OBJECT_HANDLE_INFORMATION, _BYTE *, __int64, struct _OBJECT_HANDLE_INFORMATION *))(**(_QWORD **)&HandleInformation + 16LL))(
               HandleInformation,
               v105,
               v63,
               &HandleInformation) >= 0 )
        {
          memset(v105, 0, 0x1C4uLL);
          (*(void (__fastcall **)(struct _OBJECT_HANDLE_INFORMATION, _QWORD, _QWORD, _BYTE *))(**(_QWORD **)&v62 + 32LL))(
            v62,
            0LL,
            0LL,
            v105);
          LOBYTE(v64) = 1;
          (*(void (__fastcall **)(struct _OBJECT_HANDLE_INFORMATION, __int64))(**(_QWORD **)&v62 + 24LL))(v62, v64);
        }
        (*(void (__fastcall **)(struct _OBJECT_HANDLE_INFORMATION))(**(_QWORD **)&v62 + 8LL))(v62);
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
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v97, (__int64)a2);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v97);
      Global = DXGGLOBAL::GetGlobal(v8, v7);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v99,
        (struct _KTHREAD **)Global + 33);
      v12 = (struct _KTHREAD **)DXGGLOBAL::GetGlobal(v11, v10);
      VirtualMachine = DXGGLOBAL::FindVirtualMachine(v12, (struct _GUID *)a2 + 1);
      if ( VirtualMachine && (*((_OWORD *)a2 + 1) = *(_OWORD *)(VirtualMachine + 25), (v14 = VirtualMachine[7]) != 0LL) )
      {
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v99);
        v17 = 0LL;
        if ( *((_DWORD *)a2 + 8) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Object, *((struct DXGFASTMUTEX *const *)v14 + 13), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Object);
          if ( *((_DWORD *)v14 + 10) != 1 )
          {
LABEL_23:
            if ( !v96 )
              goto LABEL_48;
            p_Object = &Object;
            goto LABEL_25;
          }
          DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v99, (struct _KTHREAD **)v14);
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
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v99);
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
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v99);
          if ( v96 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&Object);
        }
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v16, v15);
        if ( !v17 )
          goto LABEL_40;
        if ( !*((_DWORD *)a2 + 9) )
        {
LABEL_39:
          DXGPROCESS::ReleaseReference((DXGPROCESS *)v17, v25);
LABEL_40:
          if ( v98 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v97);
          return 0LL;
        }
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v99, *(struct DXGFASTMUTEX *const *)(v17 + 104), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v99);
        if ( *(_DWORD *)(v17 + 40) == 1 && (*(_BYTE *)(v17 + 299) & 8) != 0 )
        {
          v28 = *(struct _KPROCESS **)(v17 + 56);
          v104 = 0;
          CPROCESSATTACHHELPER::Attach(&ApcState, v28);
          HandleInformation = 0LL;
          CEnsureCurrentDxgProcess::AttachToProcess(
            (CEnsureCurrentDxgProcess *)&HandleInformation,
            (struct DXGPROCESS *)v17);
          if ( HandleInformation )
          {
            v101[0] = 48LL;
            memset(&v101[1], 0, 24);
            v102 = 0LL;
            if ( (int)DxgkShareObjectsInternal(
                        0LL,
                        1,
                        CurrentProcess,
                        1u,
                        (char *)a2 + 36,
                        (__int64)v101,
                        0x10000000u,
                        &Handle,
                        0LL) >= 0 )
            {
              *((_QWORD *)a2 + 5) = Handle;
              CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&HandleInformation);
              if ( v104 )
                KeUnstackDetachProcess(&ApcState);
              if ( v100 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v99);
              goto LABEL_39;
            }
          }
          DXGPROCESS::ReleaseReference((DXGPROCESS *)v17, v29);
          CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&HandleInformation);
          if ( v104 )
          {
            KeUnstackDetachProcess(&ApcState);
            v104 = 0;
          }
        }
        else
        {
          DXGPROCESS::ReleaseReference((DXGPROCESS *)v17, v27);
        }
        if ( v100 )
        {
          p_Object = (PVOID *)v99;
LABEL_25:
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)p_Object);
        }
      }
      else
      {
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v99);
      }
LABEL_48:
      if ( v98 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v97);
      return 3221225485LL;
    }
    v30 = DXGPROCESS::GetCurrent(v5, (__int64)a2);
    v31 = v30;
    if ( !v30 )
      return 3221225485LL;
    HandleInformation.HandleAttributes = *((_DWORD *)v30 + 92);
    if ( !HandleInformation.HandleAttributes )
      return 3221225485LL;
    v32 = *((unsigned int *)a2 + 4);
    if ( !(_DWORD)v32 )
      return 3221225485LL;
    v33 = 0;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v97, (struct _KTHREAD **)v30);
    v37 = (__int64)v31 + 208;
    v38 = ((unsigned int)v32 >> 6) & 0xFFFFFF;
    if ( v38 >= *(_DWORD *)(v37 + 16)
      || (v34 = *(unsigned int *)(*(_QWORD *)v37 + 16LL * v38 + 8),
          v35 = (unsigned int)v32 >> 30,
          v39 = (*(_DWORD *)(*(_QWORD *)v37 + 16LL * v38 + 8) >> 5) & 3,
          LODWORD(Object) = v35,
          (_DWORD)v35 != v39)
      || (v34 & 0x2000) != 0
      || (v34 & 0x1F) == 0 )
    {
      v56 = 0;
LABEL_83:
      v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
      v57[4] = v56;
      v57[3] = v32;
      v57[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v57);
LABEL_84:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v97);
      if ( !v33 )
        return 3221225485LL;
      *((_DWORD *)a2 + 5) = HandleInformation.HandleAttributes;
      *((_DWORD *)a2 + 6) = v33;
      return 0LL;
    }
    EntryType = HMGRTABLE::GetEntryType(v37, v38);
    if ( EntryType != 4 )
    {
      if ( EntryType == 11 )
      {
        if ( v38 >= *(_DWORD *)(v37 + 16) )
          goto LABEL_65;
        v34 = *(_QWORD *)v37;
        v35 = *(unsigned int *)(*(_QWORD *)v37 + 16LL * v38 + 8);
        if ( (_DWORD)Object != ((*(_DWORD *)(*(_QWORD *)v37 + 16LL * v38 + 8) >> 5) & 3)
          || (v35 & 0x2000) != 0
          || (v35 & 0x1F) == 0 )
        {
          goto LABEL_65;
        }
        v35 &= 0x1Fu;
        if ( (_BYTE)v35 != 11 )
        {
          v41 = WdLogNewEntry5_WdError(v35, v34, v36);
          *(_QWORD *)(v41 + 24) = 267LL;
          WdLogEvent5_WdError(v41);
LABEL_65:
          v42 = WdLogNewEntry5_WdWarning(v35, v34, v36);
          *(_QWORD *)(v42 + 24) = v32;
          *(_QWORD *)(v42 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v42);
LABEL_77:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v97);
          return 3221225485LL;
        }
        v43 = *(_QWORD *)(v34 + 16LL * v38);
        if ( !v43 )
          goto LABEL_65;
        v33 = *(_DWORD *)(v43 + 44);
        goto LABEL_84;
      }
      v56 = EntryType;
      goto LABEL_83;
    }
    Handle = 0LL;
    if ( v38 < *(_DWORD *)(v37 + 16) )
    {
      v44 = *(_QWORD *)v37;
      v45 = *(_DWORD *)(*(_QWORD *)v37 + 16LL * v38 + 8);
      if ( (_DWORD)Object == ((v45 >> 5) & 3) && (v45 & 0x2000) == 0 && (v45 & 0x1F) != 0 )
      {
        v46 = v45 & 0x1F;
        if ( (_BYTE)v46 == 4 )
        {
          v48 = *(struct _EX_RUNDOWN_REF **)(v44 + 16LL * v38);
          goto LABEL_75;
        }
        v47 = WdLogNewEntry5_WdError(v46, v44, v36);
        *(_QWORD *)(v47 + 24) = 267LL;
        WdLogEvent5_WdError(v47);
      }
    }
    v48 = 0LL;
LABEL_75:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Object, v48);
    DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&Handle, (struct _EX_RUNDOWN_REF **)&Object);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&Object, v49);
    if ( !Handle )
    {
      v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
      *(_QWORD *)(v53 + 24) = v32;
      *(_QWORD *)(v53 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v53);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&Handle, v54);
      goto LABEL_77;
    }
    v33 = *((_DWORD *)Handle + 5);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&Handle, v50);
    goto LABEL_84;
  }
  return DxgkSendCreateBundleObject(*((unsigned int *)a2 + 4), (unsigned int *)a2 + 5, (unsigned int *)a2 + 21);
}
