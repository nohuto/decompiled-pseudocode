/*
 * XREFs of DxgkCreateBundleObjectInternal @ 0x1C021CA4C
 * Callers:
 *     DxgkCreateBundleObject @ 0x1C021C9F0 (DxgkCreateBundleObject.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C022EC70 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012BD74 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C012BDB0 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C012BFA4 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C021C2EC (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C021C55C (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkCreateBundleObjectInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        const GUID *a3,
        __int64 a4,
        ULONG64 a5,
        __int64 a6)
{
  char v6; // r13
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r14
  _QWORD *v9; // rax
  __int64 v10; // rdi
  ULONG64 v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rsi
  size_t v14; // r8
  const void *v15; // rdx
  size_t v16; // r8
  const void *v17; // rdx
  const void *v18; // rdi
  size_t v19; // r8
  ACCESS_MASK *v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // r12d
  __int64 v26; // rdx
  int EntryType; // edi
  unsigned int v28; // r14d
  unsigned int v29; // edx
  unsigned int v30; // edi
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // r9
  _QWORD *v34; // rax
  KPROCESSOR_MODE v35; // r14
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  _DWORD *v43; // rsi
  char *v44; // r14
  int v45; // r14d
  NTSTATUS inserted; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  BOOLEAN IsKernelHandle; // al
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _QWORD *v55; // rax
  void **v56; // rdx
  unsigned int v57; // esi
  unsigned int i; // eax
  PVOID v59; // rcx
  __int64 v60; // rcx
  const GUID *v61; // r8
  __int64 v63; // rcx
  const GUID *v64; // r8
  PHANDLE Handle; // [rsp+28h] [rbp-2A0h]
  PVOID Object; // [rsp+60h] [rbp-268h] BYREF
  int v68; // [rsp+68h] [rbp-260h] BYREF
  __int64 v69; // [rsp+70h] [rbp-258h]
  char v70; // [rsp+78h] [rbp-250h]
  struct _KTHREAD **v71; // [rsp+80h] [rbp-248h]
  void *Src[10]; // [rsp+90h] [rbp-238h] BYREF
  HANDLE v73; // [rsp+E0h] [rbp-1E8h] BYREF
  __int64 v74; // [rsp+E8h] [rbp-1E0h]
  _BYTE v75[32]; // [rsp+F0h] [rbp-1D8h] BYREF
  ACCESS_MASK v76[16]; // [rsp+110h] [rbp-1B8h] BYREF
  PVOID v77[16]; // [rsp+150h] [rbp-178h] BYREF
  _DWORD v78[16]; // [rsp+1D0h] [rbp-F8h] BYREF
  _QWORD v79[16]; // [rsp+210h] [rbp-B8h] BYREF

  v6 = a1;
  v74 = a6;
  v68 = -1;
  v69 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v70 = 1;
    v68 = 2157;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2157);
  }
  else
  {
    v70 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v68, 2157);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v71 = Current;
  if ( !Current )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    LODWORD(v10) = -1073741811;
    v9[3] = -1073741811LL;
LABEL_112:
    WdLogEvent5_WdError(v9);
    goto LABEL_113;
  }
  memset(Src, 0, sizeof(Src));
  if ( v6 == 1 )
  {
    v11 = MmUserProbeAddress;
    v12 = (_OWORD *)a5;
    if ( a5 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)Src = *v12;
    *(_OWORD *)&Src[2] = v12[1];
    *(_OWORD *)&Src[4] = v12[2];
    *(_OWORD *)&Src[6] = v12[3];
    *(_OWORD *)&Src[8] = v12[4];
  }
  else
  {
    *(_OWORD *)Src = *(_OWORD *)a5;
    *(_OWORD *)&Src[2] = *(_OWORD *)(a5 + 16);
    *(_OWORD *)&Src[4] = *(_OWORD *)(a5 + 32);
    *(_OWORD *)&Src[6] = *(_OWORD *)(a5 + 48);
    *(_OWORD *)&Src[8] = *(_OWORD *)(a5 + 64);
  }
  Src[9] = 0LL;
  v13 = LODWORD(Src[0]);
  if ( (unsigned int)(LODWORD(Src[0]) - 1) > 0xF )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v9[3] = LODWORD(Src[0]);
    LODWORD(v10) = -1073741811;
    v9[4] = -1073741811LL;
    goto LABEL_112;
  }
  if ( ((-1 << SLOBYTE(Src[0])) & (__int64)Src[8]) != 0 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(LODWORD(Src[0]));
    v9[3] = LODWORD(Src[8]);
    v9[4] = LODWORD(Src[0]);
    LODWORD(v10) = -1073741811;
    v9[5] = -1073741811LL;
    goto LABEL_112;
  }
  memset(v78, 0, sizeof(v78));
  memset(v79, 0, sizeof(v79));
  memset(v76, 0, sizeof(v76));
  if ( v6 == 1 )
  {
    v14 = 4LL * LODWORD(Src[0]);
    v15 = Src[1];
    if ( (char *)Src[1] + v14 < Src[1] || (char *)Src[1] + v14 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v78, v15, v14);
    v16 = 8LL * LODWORD(Src[0]);
    v17 = Src[2];
    if ( (char *)Src[2] + v16 < Src[2] || (char *)Src[2] + v16 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v79, v17, v16);
    v18 = Src[3];
    if ( Src[3] )
    {
      v19 = 4LL * LODWORD(Src[0]);
      if ( (char *)Src[3] + v19 < Src[3] || (char *)Src[3] + v19 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v76, v18, v19);
      v18 = Src[3];
    }
    LODWORD(v13) = Src[0];
  }
  else
  {
    memmove(v78, Src[1], 4LL * LODWORD(Src[0]));
    memmove(v79, Src[2], 8 * v13);
    v18 = Src[3];
    if ( Src[3] )
      memmove(v76, Src[3], 4 * v13);
    Current = v71;
  }
  if ( !v18 )
  {
    v20 = v76;
    v21 = (unsigned int)v13;
    if ( (_DWORD)v13 )
    {
      if ( ((unsigned __int8)v76 & 4) != 0 )
      {
        v76[0] = 0x10000000;
        v21 = (unsigned int)v13 - 1LL;
        if ( (unsigned int)v13 == 1LL )
          goto LABEL_38;
        v20 = &v76[1];
      }
      memset64(v20, 0x1000000010000000uLL, v21 >> 1);
      if ( (v21 & 1) != 0 )
        v20[v21 - 1] = 0x10000000;
    }
  }
LABEL_38:
  Object = 0LL;
  memset(v77, 0, sizeof(v77));
  v25 = 0;
  if ( !(_DWORD)v13 )
  {
LABEL_75:
    v35 = a2;
    LOBYTE(v24) = a2;
    LOBYTE(v22) = v6;
    v36 = ObCreateObject(v22, g_pDxgkSharedBundleObjectType, Src[4], v24, 0LL, 248, 0, 0, &Object);
    v10 = v36;
    if ( v36 < 0 )
    {
      v40 = WdLogNewEntry5_WdWarning(v38, v37, v39);
      *(_QWORD *)(v40 + 24) = v71;
      *(_QWORD *)(v40 + 32) = v10;
      WdLogEvent5_WdWarning(v40);
      if ( Object )
      {
        v42 = WdLogNewEntry5_WdAssertion(v41);
        *(_QWORD *)(v42 + 24) = 2017LL;
        WdLogEvent5_WdAssertion(v42);
      }
      goto LABEL_97;
    }
    v43 = Object;
    memset(Object, 0, 0xF8uLL);
    v43[6] = Src[0];
    memmove(v43 + 8, v77, 8LL * LODWORD(Src[0]));
    memmove(v43 + 40, v76, 4LL * LODWORD(Src[0]));
    *(_OWORD *)v43 = *(_OWORD *)((char *)&Src[5] + 4);
    *((void **)v43 + 2) = *(void **)((char *)&Src[7] + 4);
    *((_BYTE *)v43 + 224) = a2;
    v44 = (char *)(v43 + 58);
    *((_QWORD *)v43 + 29) = 0LL;
    ExAcquirePushLockExclusiveEx(v43 + 58, 0LL);
    ObfReferenceObject(v43);
    LODWORD(v10) = ObInsertObject(Object, 0LL, (ACCESS_MASK)Src[5], 0, 0LL, &Src[9]);
    if ( (int)v10 >= 0 && Src[3] )
    {
      v45 = 0;
      if ( v43[6] )
      {
        while ( 1 )
        {
          v73 = 0LL;
          ObfReferenceObject(*(PVOID *)&v43[2 * v45 + 8]);
          inserted = ObInsertObject(*(PVOID *)&v43[2 * v45 + 8], 0LL, v76[v45], 0, 0LL, &v73);
          v10 = inserted;
          if ( inserted < 0 )
            break;
          IsKernelHandle = ObIsKernelHandle(v73);
          ObCloseHandle(v73, IsKernelHandle == 0);
          if ( (unsigned int)++v45 >= v43[6] )
            goto LABEL_85;
        }
        v51 = WdLogNewEntry5_WdWarning(v48, v47, v49);
        *(_QWORD *)(v51 + 24) = *(_QWORD *)&v43[2 * v45 + 8];
        *(_QWORD *)(v51 + 32) = v10;
        WdLogEvent5_WdWarning(v51);
      }
LABEL_85:
      v44 = (char *)(v43 + 58);
      if ( (int)v10 < 0 )
        goto LABEL_89;
      *((_BYTE *)v43 + 242) = 1;
      *((_BYTE *)v43 + 240) = 1;
    }
    if ( (int)v10 >= 0 )
      *((_BYTE *)v43 + 243) = 1;
LABEL_89:
    ExReleasePushLockExclusiveEx(v44, 0LL);
    ObfDereferenceObject(v43);
    if ( (int)v10 < 0 )
    {
      if ( !Src[9] )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52, v54);
        v55[3] = Object;
        v55[4] = v71;
        v55[5] = (int)v10;
        WdLogEvent5_WdWarning(v55);
      }
      Object = 0LL;
      memset(v77, 0, sizeof(v77));
      goto LABEL_74;
    }
    if ( v6 == 1 )
    {
      v56 = (void **)(a5 + 72);
      if ( a5 + 72 >= MmUserProbeAddress )
        v56 = (void **)MmUserProbeAddress;
      *v56 = Src[9];
    }
    else
    {
      *(void **)(a5 + 72) = Src[9];
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v68);
    if ( v70 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v60, &EventProfilerExit, v61, v68);
    return 0LL;
  }
  while ( 1 )
  {
    v26 = v74;
    if ( v74 && *(_QWORD *)(v74 + 8LL * v25) )
    {
      EntryType = v78[v25];
      v28 = EntryType;
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v75, Current);
      v28 = v78[v25];
      v29 = (v28 >> 6) & 0xFFFFFF;
      if ( v29 < *((_DWORD *)v71 + 62)
        && (v30 = *((_DWORD *)v71[29] + 4 * v29 + 2), v78[v25] >> 30 == ((v30 >> 5) & 3))
        && (v30 & 0x2000) == 0
        && (v30 & 0x1F) != 0 )
      {
        EntryType = HMGRTABLE::GetEntryType((__int64)(v71 + 29), v29);
      }
      else
      {
        EntryType = 0;
      }
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v75);
      v26 = v74;
    }
    if ( EntryType == 4 )
      break;
    if ( EntryType != 8 )
    {
      if ( EntryType == 9 )
      {
        LODWORD(v10) = CreateSharedKeyedMutexNtObject(v6, v26, v28, v24, v79[v25], (__int64)Handle, &v77[v25]);
        if ( (int)v10 < 0 )
        {
          if ( !v77[v25] )
            goto LABEL_74;
          v31 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v31 + 24) = 1943LL;
          goto LABEL_73;
        }
        goto LABEL_68;
      }
      if ( EntryType != 11 )
      {
        if ( EntryType != 14 )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdWarning((unsigned int)(EntryType - 11), v26, v23);
          v34[3] = v28;
          v34[4] = EntryType;
          LODWORD(v10) = -1073741811;
          v34[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v34);
          goto LABEL_74;
        }
        LODWORD(v10) = CreateSharedProtectedSessionNtObject(v6, 14, v28, v24, v79[v25], 1, &v77[v25]);
        if ( (int)v10 < 0 )
        {
          if ( !v77[v25] )
            goto LABEL_74;
          v31 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v31 + 24) = 1982LL;
          goto LABEL_73;
        }
        goto LABEL_68;
      }
    }
    v32 = 0LL;
    if ( v26 )
      v32 = *(_QWORD *)(v26 + 8LL * v25);
    LODWORD(v10) = CreateSharedSyncNtObject(v6, EntryType, v28, v32, v79[v25], 1, &v77[v25]);
    if ( (int)v10 < 0 )
    {
      if ( !v77[v25] )
        goto LABEL_74;
      v31 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v31 + 24) = 1963LL;
      goto LABEL_73;
    }
LABEL_68:
    if ( ++v25 >= LODWORD(Src[0]) )
      goto LABEL_75;
    Current = v71;
  }
  v33 = 0LL;
  if ( v26 )
    v33 = *(_QWORD *)(v26 + 8LL * v25);
  LODWORD(v10) = CreateSharedResourceNtObject(v6, v26, v28, v33, v79[v25], 1, &v77[v25]);
  if ( (int)v10 >= 0 )
    goto LABEL_68;
  if ( !v77[v25] )
    goto LABEL_74;
  v31 = WdLogNewEntry5_WdAssertion(v22);
  *(_QWORD *)(v31 + 24) = 1924LL;
LABEL_73:
  WdLogEvent5_WdAssertion(v31);
LABEL_74:
  v35 = a2;
LABEL_97:
  if ( Src[9] )
  {
    ObCloseHandle(Src[9], v35);
    Src[9] = 0LL;
  }
  else if ( Object )
  {
    ObfDereferenceObject(Object);
    Object = 0LL;
  }
  else
  {
    v57 = 0;
    for ( i = (unsigned int)Src[0]; v57 < i; ++v57 )
    {
      v59 = v77[v57];
      if ( v59 )
      {
        ObfDereferenceObject(v59);
        v77[v57] = 0LL;
        i = (unsigned int)Src[0];
      }
    }
  }
LABEL_113:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v68);
  if ( v70 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v63, &EventProfilerExit, v64, v68);
  }
  return (unsigned int)v10;
}
