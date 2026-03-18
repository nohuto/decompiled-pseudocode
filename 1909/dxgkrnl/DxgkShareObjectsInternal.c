/*
 * XREFs of DxgkShareObjectsInternal @ 0x1C013D1F0
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C005ACA0 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     DxgkShareObjects @ 0x1C013D170 (DxgkShareObjects.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021D1E0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0291690 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00073D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0007424 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BDF8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043328 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043364 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9E80 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C013D5F4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C013D630 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C013D874 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C02510D8 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkShareObjectsInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        struct _KPROCESS *a3,
        unsigned int a4,
        char *Src,
        __int64 a6,
        ACCESS_MASK DesiredAccess,
        HANDLE *a8,
        PVOID *a9)
{
  __int64 v9; // r15
  KPROCESSOR_MODE v10; // r14
  char v11; // si
  _QWORD *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGPROCESS *Current; // r12
  char *v19; // rcx
  __int64 inserted; // rbx
  char *v21; // r12
  unsigned int v22; // edx
  unsigned int EntryType; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  DXGKEYEDMUTEX *v27; // r14
  __int64 v28; // rsi
  PERESOURCE *Global; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  char v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _KPROCESS *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  const GUID *v40; // r8
  unsigned int v42; // r8d
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  PERESOURCE *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  char v62; // [rsp+41h] [rbp-117h]
  char v63; // [rsp+42h] [rbp-116h]
  PVOID Object; // [rsp+50h] [rbp-108h] BYREF
  char v65[8]; // [rsp+58h] [rbp-100h] BYREF
  char v66; // [rsp+60h] [rbp-F8h]
  HANDLE Handle; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v68; // [rsp+70h] [rbp-E8h]
  struct DXGPROCESS *v69; // [rsp+78h] [rbp-E0h]
  int v70; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v71; // [rsp+88h] [rbp-D0h]
  char v72; // [rsp+90h] [rbp-C8h]
  PRKPROCESS PROCESS; // [rsp+98h] [rbp-C0h]
  PVOID *v74; // [rsp+A0h] [rbp-B8h]
  _BYTE v75[24]; // [rsp+A8h] [rbp-B0h] BYREF
  _BYTE v76[24]; // [rsp+C0h] [rbp-98h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-80h] BYREF
  __int64 v78; // [rsp+108h] [rbp-50h] BYREF
  unsigned int v79; // [rsp+110h] [rbp-48h]

  v9 = a4;
  PROCESS = a3;
  v10 = a2;
  v11 = a1;
  v62 = a1;
  v68 = a6;
  v12 = a8;
  v74 = a9;
  v70 = -1;
  v71 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v72 = 1;
    v70 = 2074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, (const GUID *)a3, 2074);
  }
  else
  {
    v72 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v70, 2074LL);
  Object = 0LL;
  Handle = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v63 = 0;
  Current = DXGPROCESS::GetCurrent(v14, v13);
  v69 = Current;
  if ( !Current )
    goto LABEL_44;
  if ( (unsigned int)(v9 - 1) > 2 )
  {
    v60 = WdLogNewEntry5_WdError(v16, v15, v17);
    LODWORD(inserted) = -1073741811;
    *(_QWORD *)(v60 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v60);
    goto LABEL_29;
  }
  v78 = 0LL;
  v79 = 0;
  if ( v11 == 1 )
  {
    v19 = &Src[4 * v9];
    if ( v19 < Src || (unsigned __int64)v19 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(&v78, Src, 4 * v9);
  if ( !v68 || (inserted = (unsigned int)v78, !(_DWORD)v78) )
  {
LABEL_44:
    v43 = WdLogNewEntry5_WdError(v16, v15, v17);
    LODWORD(inserted) = -1073741811;
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v43);
    goto LABEL_45;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v76, (struct _KTHREAD **)Current);
  v21 = (char *)Current + 208;
  v22 = ((unsigned int)inserted >> 6) & 0xFFFFFF;
  if ( v22 < *((_DWORD *)v21 + 4)
    && (v42 = *(_DWORD *)(*(_QWORD *)v21 + 16LL * v22 + 8), (unsigned int)inserted >> 30 == ((v42 >> 5) & 3))
    && (v42 & 0x2000) == 0
    && (v42 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType(v21);
  }
  else
  {
    EntryType = 0;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v76);
  if ( EntryType == 4 )
  {
    v27 = 0LL;
    v28 = 0LL;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v25, v24);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v65, Global);
    if ( (unsigned int)v9 <= 1 )
    {
LABEL_15:
      v33 = v62;
      LOBYTE(v31) = v62;
      LODWORD(inserted) = CreateSharedResourceNtObject(v31, v30, (unsigned int)inserted, 0LL, v68, a2, &Object);
      if ( (int)inserted >= 0 )
      {
        if ( v27 || v28 )
        {
          v58 = Object;
          *((_QWORD *)Object + 3) = v27;
          v58[4] = v28;
        }
        if ( v66 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
        v10 = a2;
        goto LABEL_21;
      }
      if ( Object )
      {
        v56 = WdLogNewEntry5_WdAssertion(v35, v34);
        *(_QWORD *)(v56 + 24) = 767LL;
        WdLogEvent5_WdAssertion(v56);
      }
      if ( v27 )
        DXGKEYEDMUTEX::ReleaseReference(v27, v34);
      if ( v28 )
      {
        v57 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v35, v34);
        DXGGLOBAL::DestroySyncObject(v57, (struct DXGSYNCOBJECT *)v28, 0);
      }
LABEL_63:
      if ( v66 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
      v10 = a2;
LABEL_29:
      if ( (int)inserted >= 0 )
        goto LABEL_30;
      goto LABEL_45;
    }
    if ( (_DWORD)v9 != 3 )
    {
      v46 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      *(_QWORD *)(v46 + 24) = inserted;
      LODWORD(inserted) = -1073741811;
      *(_QWORD *)(v46 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v46);
      goto LABEL_63;
    }
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v65);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v75, (struct _KTHREAD **)v69);
    inserted = HIDWORD(v78);
    v50 = (HIDWORD(v78) >> 6) & 0xFFFFFF;
    v51 = HIDWORD(v78) >> 30;
    if ( (unsigned int)v50 < *((_DWORD *)v21 + 4) )
    {
      v49 = *(_QWORD *)v21;
      v48 = *(unsigned int *)(*(_QWORD *)v21 + 16 * v50 + 8);
      if ( (_DWORD)v51 == ((*(_DWORD *)(*(_QWORD *)v21 + 16 * v50 + 8) >> 5) & 3)
        && (v48 & 0x2000) == 0
        && (v48 & 0x1F) != 0 )
      {
        v48 &= 0x1Fu;
        if ( (_BYTE)v48 == 9 )
        {
          v27 = *(DXGKEYEDMUTEX **)(v49 + 16LL * (unsigned int)v50);
LABEL_73:
          if ( !v27 )
            goto LABEL_61;
          if ( (*((_DWORD *)v27 + 37) & 1) == 0 )
          {
            _InterlockedIncrement(&dword_1C00A2E3C);
            v53 = WdLogNewEntry5_WdError(v48, v51, v49);
            *(_QWORD *)(v53 + 24) = v27;
LABEL_78:
            LODWORD(inserted) = -1073741811;
            *(_QWORD *)(v53 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v53);
            goto LABEL_62;
          }
          inserted = v79;
          v54 = (v79 >> 6) & 0xFFFFFF;
          v51 = v79 >> 30;
          if ( (unsigned int)v54 < *((_DWORD *)v21 + 4) )
          {
            v49 = *(_QWORD *)v21;
            v48 = *(unsigned int *)(*(_QWORD *)v21 + 16 * v54 + 8);
            if ( (_DWORD)v51 == ((*(_DWORD *)(*(_QWORD *)v21 + 16 * v54 + 8) >> 5) & 3)
              && (v48 & 0x2000) == 0
              && (v48 & 0x1F) != 0 )
            {
              v48 &= 0x1Fu;
              if ( (_BYTE)v48 == 8 )
              {
                v28 = *(_QWORD *)(v49 + 16LL * (unsigned int)v54);
LABEL_86:
                if ( v28 )
                {
                  if ( (*(_DWORD *)(v28 + 196) & 2) != 0 )
                  {
                    DXGKEYEDMUTEX::AcquireReference(v27, v51);
                    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v75);
                    _InterlockedIncrement((volatile signed __int32 *)(v28 + 24));
                    LODWORD(inserted) = v78;
                    goto LABEL_15;
                  }
                  _InterlockedIncrement(&dword_1C00A2E3C);
                  v53 = WdLogNewEntry5_WdError(v48, v51, v49);
                  *(_QWORD *)(v53 + 24) = v28;
                  goto LABEL_78;
                }
LABEL_61:
                v47 = WdLogNewEntry5_WdWarning(v48, v51, v49);
                *(_QWORD *)(v47 + 24) = inserted;
                LODWORD(inserted) = -1073741811;
                *(_QWORD *)(v47 + 32) = -1073741811LL;
                WdLogEvent5_WdWarning(v47);
LABEL_62:
                DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v75);
                goto LABEL_63;
              }
              v55 = WdLogNewEntry5_WdError(v48, v51, v49);
              *(_QWORD *)(v55 + 24) = 267LL;
              WdLogEvent5_WdError(v55);
            }
          }
          v28 = 0LL;
          goto LABEL_86;
        }
        v52 = WdLogNewEntry5_WdError(v48, v51, v49);
        *(_QWORD *)(v52 + 24) = 267LL;
        WdLogEvent5_WdError(v52);
      }
    }
    v27 = 0LL;
    goto LABEL_73;
  }
  if ( EntryType == 11 || EntryType == 8 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v33 = v62;
      LOBYTE(v25) = v62;
      LODWORD(inserted) = CreateSharedSyncNtObject(v25, EntryType, (unsigned int)inserted, 0LL, v68, v10, &Object);
      if ( (int)inserted < 0 )
      {
        if ( !Object )
          goto LABEL_29;
        v45 = WdLogNewEntry5_WdAssertion(v35, v34);
        *(_QWORD *)(v45 + 24) = 807LL;
        goto LABEL_58;
      }
LABEL_21:
      v36 = PROCESS;
      if ( PROCESS && v36 != (struct _KPROCESS *)PsGetCurrentProcess(v35, v34) )
      {
        KeStackAttachProcess(v36, &ApcState);
        v63 = 1;
      }
      inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &Handle);
      if ( v63 )
        KeUnstackDetachProcess(&ApcState);
      if ( (int)inserted < 0 )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v34, v38);
        v59[3] = Object;
        v59[4] = v69;
        v59[5] = inserted;
        WdLogEvent5_WdWarning(v59);
      }
      else if ( v33 == 1 )
      {
        if ( (unsigned __int64)a8 >= MmUserProbeAddress )
          v12 = (_QWORD *)MmUserProbeAddress;
        *v12 = Handle;
      }
      else
      {
        *a8 = Handle;
        if ( v74 )
          *v74 = Object;
      }
      goto LABEL_29;
    }
LABEL_50:
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
    v44[3] = inserted;
    LODWORD(inserted) = -1073741811;
    v44[4] = -1073741811LL;
    goto LABEL_51;
  }
  v24 = 14LL;
  if ( EntryType == 14 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      v33 = v62;
      LOBYTE(v25) = v62;
      LODWORD(inserted) = CreateSharedProtectedSessionNtObject(v25, 14LL, (unsigned int)inserted);
      if ( (int)inserted < 0 )
      {
        if ( !Object )
          goto LABEL_29;
        v45 = WdLogNewEntry5_WdAssertion(v35, v34);
        *(_QWORD *)(v45 + 24) = 830LL;
LABEL_58:
        WdLogEvent5_WdAssertion(v45);
        goto LABEL_29;
      }
      goto LABEL_21;
    }
    goto LABEL_50;
  }
  v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, 14LL, v26);
  v44[3] = inserted;
  v44[4] = (int)EntryType;
  LODWORD(inserted) = -1073741811;
  v44[5] = -1073741811LL;
LABEL_51:
  WdLogEvent5_WdWarning(v44);
LABEL_45:
  if ( Handle )
    ObCloseHandle(Handle, v10);
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v34);
  if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v40, v70);
  return (unsigned int)inserted;
}
