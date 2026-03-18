/*
 * XREFs of DxgkShareObjectsInternal @ 0x1C012B970
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C0054090 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     DxgkShareObjects @ 0x1C012B8F0 (DxgkShareObjects.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ED1B0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025AFA0 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x1C0021980 (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C970 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C9AC (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012BD74 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C012BDB0 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C012BFA4 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C021C55C (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkShareObjectsInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        struct _KPROCESS *a3,
        unsigned int a4,
        char *Src,
        __int64 a6,
        ACCESS_MASK DesiredAccess,
        _QWORD *a8,
        PVOID *a9)
{
  __int64 v9; // r13
  KPROCESSOR_MODE v10; // si
  char v11; // r15
  _QWORD *v12; // r14
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // r12
  char *v15; // rcx
  __int64 v16; // r15
  char *v17; // r12
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int EntryType; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  DXGKEYEDMUTEX *v24; // r14
  struct DXGSYNCOBJECT *v25; // rsi
  PERESOURCE *Global; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGPROCESS *v30; // r13
  __int64 v31; // r8
  char v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 inserted; // rbx
  struct _KPROCESS *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int64 v43; // r8
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  PERESOURCE *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  char v64; // [rsp+41h] [rbp-127h]
  char v65; // [rsp+42h] [rbp-126h]
  PVOID Object; // [rsp+50h] [rbp-118h] BYREF
  char v67[8]; // [rsp+58h] [rbp-110h] BYREF
  char v68; // [rsp+60h] [rbp-108h]
  HANDLE Handle; // [rsp+68h] [rbp-100h] BYREF
  __int64 v70; // [rsp+70h] [rbp-F8h]
  struct DXGPROCESS *v71; // [rsp+78h] [rbp-F0h]
  __int64 v72; // [rsp+80h] [rbp-E8h]
  int v73; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v74; // [rsp+90h] [rbp-D8h]
  char v75; // [rsp+98h] [rbp-D0h]
  PRKPROCESS PROCESS; // [rsp+A0h] [rbp-C8h]
  PVOID *v77; // [rsp+A8h] [rbp-C0h]
  _BYTE v78[24]; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE v79[24]; // [rsp+C8h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v81; // [rsp+110h] [rbp-58h] BYREF
  unsigned int v82; // [rsp+118h] [rbp-50h]

  v9 = a4;
  PROCESS = a3;
  v10 = a2;
  v11 = a1;
  v64 = a1;
  v70 = a6;
  v12 = a8;
  v72 = (__int64)a8;
  v77 = a9;
  v73 = -1;
  v74 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v75 = 1;
    v73 = 2074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, (const GUID *)a3, 2074);
  }
  else
  {
    v75 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v73, 2074);
  Object = 0LL;
  Handle = 0LL;
  v65 = 0;
  Current = DXGPROCESS::GetCurrent();
  v71 = Current;
  if ( !Current )
    goto LABEL_44;
  if ( (unsigned int)(v9 - 1) > 2 )
  {
    v62 = WdLogNewEntry5_WdError(v13);
    LODWORD(inserted) = -1073741811;
    *(_QWORD *)(v62 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v62);
    goto LABEL_33;
  }
  v81 = 0LL;
  v82 = 0;
  if ( v11 == 1 )
  {
    v15 = &Src[4 * v9];
    if ( v15 < Src || (unsigned __int64)v15 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(&v81, Src, 4 * v9);
  if ( !v70 || (v16 = (unsigned int)v81, !(_DWORD)v81) )
  {
LABEL_44:
    v44 = WdLogNewEntry5_WdError(v13);
    LODWORD(inserted) = -1073741811;
    *(_QWORD *)(v44 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v44);
    goto LABEL_45;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v79, (struct _KTHREAD **)Current);
  v17 = (char *)Current + 232;
  v18 = ((unsigned int)v16 >> 6) & 0xFFFFFF;
  if ( v18 < *((_DWORD *)v17 + 4)
    && (v19 = *(_DWORD *)(*(_QWORD *)v17 + 16LL * v18 + 8), (unsigned int)v16 >> 30 == ((v19 >> 5) & 3))
    && (v19 & 0x2000) == 0
    && (v19 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType(v17);
  }
  else
  {
    EntryType = 0;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v79);
  if ( EntryType == 4 )
  {
    v24 = 0LL;
    v25 = 0LL;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v22);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v67, Global);
    if ( (unsigned int)v9 <= 1 )
    {
      v30 = v71;
LABEL_19:
      v31 = (unsigned int)v16;
      v32 = v64;
      LOBYTE(v28) = v64;
      LODWORD(inserted) = CreateSharedResourceNtObject(v28, v27, v31, 0LL, v70, a2, &Object);
      if ( (int)inserted >= 0 )
      {
        if ( v24 || v25 )
        {
          v60 = Object;
          *((_QWORD *)Object + 3) = v24;
          v60[4] = v25;
        }
        if ( v68 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v67);
        v12 = (_QWORD *)v72;
        v10 = a2;
        goto LABEL_25;
      }
      if ( Object )
      {
        v58 = WdLogNewEntry5_WdAssertion(v34);
        *(_QWORD *)(v58 + 24) = 767LL;
        WdLogEvent5_WdAssertion(v58);
      }
      if ( v24 )
        DXGKEYEDMUTEX::ReleaseReference(v24);
      if ( v25 )
      {
        v59 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v34);
        DXGGLOBAL::DestroySyncObject(v59, v25, 0);
      }
LABEL_64:
      if ( v68 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v67);
      v10 = a2;
LABEL_33:
      if ( (int)inserted >= 0 )
        goto LABEL_34;
      goto LABEL_45;
    }
    if ( (_DWORD)v9 != 3 )
    {
      v48 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v48 + 24) = v16;
      LODWORD(inserted) = -1073741811;
      *(_QWORD *)(v48 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v48);
      goto LABEL_64;
    }
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v67);
    v30 = v71;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v78, (struct _KTHREAD **)v71);
    inserted = HIDWORD(v81);
    v52 = (HIDWORD(v81) >> 6) & 0xFFFFFF;
    v53 = HIDWORD(v81) >> 30;
    if ( (unsigned int)v52 < *((_DWORD *)v17 + 4) )
    {
      v51 = *(_QWORD *)v17;
      v50 = *(unsigned int *)(*(_QWORD *)v17 + 16 * v52 + 8);
      if ( (_DWORD)v53 == ((*(_DWORD *)(*(_QWORD *)v17 + 16 * v52 + 8) >> 5) & 3)
        && (v50 & 0x2000) == 0
        && (v50 & 0x1F) != 0 )
      {
        v50 &= 0x1Fu;
        if ( (_BYTE)v50 == 9 )
        {
          v24 = *(DXGKEYEDMUTEX **)(v51 + 16LL * (unsigned int)v52);
LABEL_74:
          if ( !v24 )
            goto LABEL_62;
          if ( (*((_DWORD *)v24 + 37) & 1) == 0 )
          {
            _InterlockedIncrement(&dword_1C008EE14);
            v55 = WdLogNewEntry5_WdError(v50);
            *(_QWORD *)(v55 + 24) = v24;
LABEL_79:
            LODWORD(inserted) = -1073741811;
            *(_QWORD *)(v55 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v55);
            goto LABEL_63;
          }
          inserted = v82;
          v56 = (v82 >> 6) & 0xFFFFFF;
          v53 = v82 >> 30;
          if ( (unsigned int)v56 < *((_DWORD *)v17 + 4) )
          {
            v51 = *(_QWORD *)v17;
            v50 = *(unsigned int *)(*(_QWORD *)v17 + 16 * v56 + 8);
            if ( (_DWORD)v53 == ((*(_DWORD *)(*(_QWORD *)v17 + 16 * v56 + 8) >> 5) & 3)
              && (v50 & 0x2000) == 0
              && (v50 & 0x1F) != 0 )
            {
              v50 &= 0x1Fu;
              if ( (_BYTE)v50 == 8 )
              {
                v25 = *(struct DXGSYNCOBJECT **)(v51 + 16LL * (unsigned int)v56);
LABEL_87:
                if ( v25 )
                {
                  if ( (*((_DWORD *)v25 + 43) & 2) != 0 )
                  {
                    DXGKEYEDMUTEX::AcquireReference(v24);
                    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v78);
                    DXGSYNCOBJECT::AddReference(v25);
                    goto LABEL_19;
                  }
                  _InterlockedIncrement(&dword_1C008EE14);
                  v55 = WdLogNewEntry5_WdError(v50);
                  *(_QWORD *)(v55 + 24) = v25;
                  goto LABEL_79;
                }
LABEL_62:
                v49 = WdLogNewEntry5_WdWarning(v50, v53, v51);
                *(_QWORD *)(v49 + 24) = inserted;
                LODWORD(inserted) = -1073741811;
                *(_QWORD *)(v49 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v49);
LABEL_63:
                DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v78);
                goto LABEL_64;
              }
              v57 = WdLogNewEntry5_WdError(v50);
              *(_QWORD *)(v57 + 24) = 316LL;
              WdLogEvent5_WdError(v57);
            }
          }
          v25 = 0LL;
          goto LABEL_87;
        }
        v54 = WdLogNewEntry5_WdError(v50);
        *(_QWORD *)(v54 + 24) = 316LL;
        WdLogEvent5_WdError(v54);
      }
    }
    v24 = 0LL;
    goto LABEL_74;
  }
  if ( EntryType == 11 || EntryType == 8 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v43 = (unsigned int)v16;
      v32 = v64;
      LOBYTE(v22) = v64;
      LODWORD(inserted) = CreateSharedSyncNtObject(v22, EntryType, v43, 0LL, v70, v10, &Object);
      if ( (int)inserted < 0 )
      {
        if ( !Object )
          goto LABEL_33;
        v47 = WdLogNewEntry5_WdAssertion(v34);
        *(_QWORD *)(v47 + 24) = 807LL;
        goto LABEL_59;
      }
LABEL_39:
      v30 = v71;
LABEL_25:
      v36 = PROCESS;
      if ( PROCESS && v36 != (struct _KPROCESS *)PsGetCurrentProcess(v34, v33) )
      {
        KeStackAttachProcess(v36, &ApcState);
        v65 = 1;
      }
      inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &Handle);
      if ( v65 )
        KeUnstackDetachProcess(&ApcState);
      if ( (int)inserted < 0 )
      {
        v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
        v61[3] = Object;
        v61[4] = v30;
        v61[5] = inserted;
        WdLogEvent5_WdWarning(v61);
      }
      else if ( v32 == 1 )
      {
        if ( (unsigned __int64)v12 >= MmUserProbeAddress )
          v12 = (_QWORD *)MmUserProbeAddress;
        *v12 = Handle;
      }
      else
      {
        *v12 = Handle;
        if ( v77 )
          *v77 = Object;
      }
      goto LABEL_33;
    }
LABEL_51:
    v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v45[3] = v16;
    LODWORD(inserted) = -1073741811;
    v45[4] = -1073741811LL;
    goto LABEL_52;
  }
  v21 = 14LL;
  if ( EntryType == 14 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v46 = (unsigned int)v16;
      v32 = v64;
      LOBYTE(v22) = v64;
      LODWORD(inserted) = CreateSharedProtectedSessionNtObject(v22, 14LL, v46);
      if ( (int)inserted < 0 )
      {
        if ( !Object )
          goto LABEL_33;
        v47 = WdLogNewEntry5_WdAssertion(v34);
        *(_QWORD *)(v47 + 24) = 830LL;
LABEL_59:
        WdLogEvent5_WdAssertion(v47);
        goto LABEL_33;
      }
      goto LABEL_39;
    }
    goto LABEL_51;
  }
  v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, 14LL, v23);
  v45[3] = v16;
  v45[4] = (int)EntryType;
  LODWORD(inserted) = -1073741811;
  v45[5] = -1073741811LL;
LABEL_52:
  WdLogEvent5_WdWarning(v45);
LABEL_45:
  if ( Handle )
    ObCloseHandle(Handle, v10);
LABEL_34:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73);
  if ( v75 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v40, &EventProfilerExit, v41, v73);
  return (unsigned int)inserted;
}
