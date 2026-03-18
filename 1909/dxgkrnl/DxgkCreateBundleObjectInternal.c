/*
 * XREFs of DxgkCreateBundleObjectInternal @ 0x1C02515CC
 * Callers:
 *     DxgkCreateBundleObject @ 0x1C0251570 (DxgkCreateBundleObject.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C0263900 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BDF8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C013D5F4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C013D630 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C013D874 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C0250E68 (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C02510D8 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkCreateBundleObjectInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        const GUID *a3,
        __int64 a4,
        ULONG64 a5,
        __int64 a6)
{
  unsigned __int8 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD **Current; // r14
  _QWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  ULONG64 v16; // rcx
  __int64 v17; // r8
  _OWORD *v18; // rax
  __int64 v19; // rsi
  size_t v20; // r8
  const void *v21; // rdx
  size_t v22; // r8
  const void *v23; // rdx
  const void *v24; // rdi
  size_t v25; // r8
  ACCESS_MASK *v26; // r8
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // r12d
  __int64 v32; // rdx
  unsigned int EntryType; // edi
  unsigned int v34; // r14d
  __int64 v35; // rdx
  unsigned int v36; // edi
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // r9
  _QWORD *v44; // rax
  KPROCESSOR_MODE v45; // r14
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  _DWORD *v53; // rsi
  char *v54; // r14
  int v55; // r14d
  NTSTATUS inserted; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  BOOLEAN IsKernelHandle; // al
  __int64 v61; // rax
  void **v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  _QWORD *v65; // rax
  unsigned int v66; // esi
  unsigned int i; // eax
  PVOID v68; // rcx
  __int64 v69; // rcx
  const GUID *v70; // r8
  __int64 v72; // rcx
  const GUID *v73; // r8
  PHANDLE Handle; // [rsp+28h] [rbp-2D0h]
  PVOID Object; // [rsp+60h] [rbp-298h] BYREF
  int v77; // [rsp+68h] [rbp-290h] BYREF
  __int64 v78; // [rsp+70h] [rbp-288h]
  char v79; // [rsp+78h] [rbp-280h]
  struct _KTHREAD **v80; // [rsp+80h] [rbp-278h]
  void *Src[10]; // [rsp+90h] [rbp-268h] BYREF
  HANDLE v82; // [rsp+E0h] [rbp-218h] BYREF
  __int64 v83; // [rsp+E8h] [rbp-210h]
  _BYTE v84[80]; // [rsp+F0h] [rbp-208h] BYREF
  ACCESS_MASK v85[16]; // [rsp+140h] [rbp-1B8h] BYREF
  PVOID v86[16]; // [rsp+180h] [rbp-178h] BYREF
  _DWORD v87[16]; // [rsp+200h] [rbp-F8h] BYREF
  _QWORD v88[16]; // [rsp+240h] [rbp-B8h] BYREF

  v6 = a1;
  v83 = a6;
  v77 = -1;
  v78 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v79 = 1;
    v77 = 2157;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2157);
  }
  else
  {
    v79 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v77, 2157LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8, v7);
  v80 = Current;
  if ( !Current )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    LODWORD(v14) = -1073741811;
    v13[3] = -1073741811LL;
LABEL_112:
    WdLogEvent5_WdError(v13);
    goto LABEL_113;
  }
  memset(Src, 0, sizeof(Src));
  if ( v6 == 1 )
  {
    v16 = MmUserProbeAddress;
    v18 = (_OWORD *)a5;
    if ( a5 >= MmUserProbeAddress )
      v18 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)Src = *v18;
    *(_OWORD *)&Src[2] = v18[1];
    *(_OWORD *)&Src[4] = v18[2];
    *(_OWORD *)&Src[6] = v18[3];
    *(_OWORD *)&Src[8] = v18[4];
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
  v19 = LODWORD(Src[0]);
  if ( (unsigned int)(LODWORD(Src[0]) - 1) > 0xF )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15, v17);
    v13[3] = LODWORD(Src[0]);
    LODWORD(v14) = -1073741811;
    v13[4] = -1073741811LL;
    goto LABEL_112;
  }
  if ( ((-1 << SLOBYTE(Src[0])) & (__int64)Src[8]) != 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(LODWORD(Src[0]), v15, v17);
    v13[3] = LODWORD(Src[8]);
    v13[4] = LODWORD(Src[0]);
    LODWORD(v14) = -1073741811;
    v13[5] = -1073741811LL;
    goto LABEL_112;
  }
  memset(v87, 0, sizeof(v87));
  memset(v88, 0, sizeof(v88));
  memset(v85, 0, sizeof(v85));
  if ( v6 == 1 )
  {
    v20 = 4LL * LODWORD(Src[0]);
    v21 = Src[1];
    if ( (char *)Src[1] + v20 < Src[1] || (char *)Src[1] + v20 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v87, v21, v20);
    v22 = 8LL * LODWORD(Src[0]);
    v23 = Src[2];
    if ( (char *)Src[2] + v22 < Src[2] || (char *)Src[2] + v22 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v88, v23, v22);
    v24 = Src[3];
    if ( Src[3] )
    {
      v25 = 4LL * LODWORD(Src[0]);
      if ( (char *)Src[3] + v25 < Src[3] || (char *)Src[3] + v25 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v85, v24, v25);
      v24 = Src[3];
    }
    LODWORD(v19) = Src[0];
  }
  else
  {
    memmove(v87, Src[1], 4LL * LODWORD(Src[0]));
    memmove(v88, Src[2], 8 * v19);
    v24 = Src[3];
    if ( Src[3] )
      memmove(v85, Src[3], 4 * v19);
    Current = v80;
  }
  if ( !v24 )
  {
    v26 = v85;
    v27 = (unsigned int)v19;
    if ( (_DWORD)v19 )
    {
      if ( ((unsigned __int8)v85 & 4) != 0 )
      {
        v85[0] = 0x10000000;
        v27 = (unsigned int)v19 - 1LL;
        if ( (unsigned int)v19 == 1LL )
          goto LABEL_38;
        v26 = &v85[1];
      }
      memset64(v26, 0x1000000010000000uLL, v27 >> 1);
      if ( (v27 & 1) != 0 )
        v26[v27 - 1] = 0x10000000;
    }
  }
LABEL_38:
  Object = 0LL;
  memset(v86, 0, sizeof(v86));
  memset(&v84[24], 0, 0x30uLL);
  v31 = 0;
  if ( !(_DWORD)v19 )
  {
LABEL_75:
    v45 = a2;
    LOBYTE(v30) = a2;
    LOBYTE(v28) = v6;
    v46 = ObCreateObject(v28, g_pDxgkSharedBundleObjectType, Src[4], v30, 0LL, 248, 0, 0, &Object);
    v14 = v46;
    if ( v46 < 0 )
    {
      v50 = WdLogNewEntry5_WdWarning(v48, v47, v49);
      *(_QWORD *)(v50 + 24) = v80;
      *(_QWORD *)(v50 + 32) = v14;
      WdLogEvent5_WdWarning(v50);
      if ( Object )
      {
        v52 = WdLogNewEntry5_WdAssertion(v51, v40);
        *(_QWORD *)(v52 + 24) = 2004LL;
        WdLogEvent5_WdAssertion(v52);
      }
      goto LABEL_97;
    }
    v53 = Object;
    memset(Object, 0, 0xF8uLL);
    v53[6] = Src[0];
    memmove(v53 + 8, v86, 8LL * LODWORD(Src[0]));
    memmove(v53 + 40, v85, 4LL * LODWORD(Src[0]));
    *(_OWORD *)v53 = *(_OWORD *)((char *)&Src[5] + 4);
    *((void **)v53 + 2) = *(void **)((char *)&Src[7] + 4);
    *((_BYTE *)v53 + 224) = a2;
    v54 = (char *)(v53 + 58);
    *((_QWORD *)v53 + 29) = 0LL;
    ExAcquirePushLockExclusiveEx(v53 + 58, 0LL);
    ObfReferenceObject(v53);
    LODWORD(v14) = ObInsertObject(Object, 0LL, (ACCESS_MASK)Src[5], 0, 0LL, &Src[9]);
    if ( (int)v14 >= 0 && Src[3] )
    {
      v55 = 0;
      if ( v53[6] )
      {
        while ( 1 )
        {
          v82 = 0LL;
          ObfReferenceObject(*(PVOID *)&v53[2 * v55 + 8]);
          inserted = ObInsertObject(*(PVOID *)&v53[2 * v55 + 8], 0LL, v85[v55], 0, 0LL, &v82);
          v14 = inserted;
          if ( inserted < 0 )
            break;
          IsKernelHandle = ObIsKernelHandle(v82);
          ObCloseHandle(v82, IsKernelHandle == 0);
          if ( (unsigned int)++v55 >= v53[6] )
            goto LABEL_85;
        }
        v61 = WdLogNewEntry5_WdWarning(v58, v57, v59);
        *(_QWORD *)(v61 + 24) = *(_QWORD *)&v53[2 * v55 + 8];
        *(_QWORD *)(v61 + 32) = v14;
        WdLogEvent5_WdWarning(v61);
      }
LABEL_85:
      v54 = (char *)(v53 + 58);
      if ( (int)v14 < 0 )
        goto LABEL_89;
      *((_BYTE *)v53 + 242) = 1;
      *((_BYTE *)v53 + 240) = 1;
    }
    if ( (int)v14 >= 0 )
      *((_BYTE *)v53 + 243) = 1;
LABEL_89:
    ExReleasePushLockExclusiveEx(v54, 0LL);
    ObfDereferenceObject(v53);
    if ( (int)v14 < 0 )
    {
      if ( !Src[9] )
      {
        v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v63, v62, v64);
        v65[3] = Object;
        v65[4] = v80;
        v65[5] = (int)v14;
        WdLogEvent5_WdWarning(v65);
      }
      Object = 0LL;
      memset(v86, 0, sizeof(v86));
      goto LABEL_74;
    }
    if ( v6 == 1 )
    {
      v62 = (void **)(a5 + 72);
      if ( a5 + 72 >= MmUserProbeAddress )
        v62 = (void **)MmUserProbeAddress;
      *v62 = Src[9];
    }
    else
    {
      *(void **)(a5 + 72) = Src[9];
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77, (__int64)v62);
    if ( v79 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v69, &EventProfilerExit, v70, v77);
    return 0LL;
  }
  while ( 1 )
  {
    v32 = v83;
    if ( v83 && *(_QWORD *)(v83 + 8LL * v31) )
    {
      EntryType = v87[v31];
      v34 = EntryType;
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v84, Current);
      v34 = v87[v31];
      v35 = (v34 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v35 < *((_DWORD *)v80 + 56)
        && (v36 = *((_DWORD *)v80[26] + 4 * (unsigned int)v35 + 2), v87[v31] >> 30 == ((v36 >> 5) & 3))
        && (v36 & 0x2000) == 0
        && (v36 & 0x1F) != 0 )
      {
        EntryType = HMGRTABLE::GetEntryType((__int64)(v80 + 26), v35);
      }
      else
      {
        EntryType = 0;
      }
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v84);
      v32 = v83;
    }
    v37 = EntryType - 4;
    if ( EntryType == 4 )
      break;
    v38 = EntryType - 8;
    if ( EntryType != 8 )
    {
      v39 = EntryType - 9;
      if ( EntryType == 9 )
      {
        LODWORD(v39) = v6;
        LODWORD(v14) = CreateSharedKeyedMutexNtObject(v39, v32, v34, v30, v88[v31], (__int64)Handle, &v86[v31]);
        if ( (int)v14 < 0 )
        {
          if ( !v86[v31] )
            goto LABEL_74;
          v41 = WdLogNewEntry5_WdAssertion(v28, v40);
          *(_QWORD *)(v41 + 24) = 1930LL;
          goto LABEL_73;
        }
        goto LABEL_68;
      }
      v38 = EntryType - 11;
      if ( EntryType != 11 )
      {
        if ( EntryType != 14 )
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v32, v29);
          v44[3] = v34;
          v44[4] = (int)EntryType;
          LODWORD(v14) = -1073741811;
          v44[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v44);
          goto LABEL_74;
        }
        LOBYTE(v38) = v6;
        LODWORD(v14) = CreateSharedProtectedSessionNtObject(v38, 14LL, v34, v30, v88[v31], 1, &v86[v31]);
        if ( (int)v14 < 0 )
        {
          if ( !v86[v31] )
            goto LABEL_74;
          v41 = WdLogNewEntry5_WdAssertion(v28, v40);
          *(_QWORD *)(v41 + 24) = 1969LL;
          goto LABEL_73;
        }
        goto LABEL_68;
      }
    }
    v42 = 0LL;
    if ( v32 )
      v42 = *(_QWORD *)(v32 + 8LL * v31);
    LOBYTE(v38) = v6;
    LODWORD(v14) = CreateSharedSyncNtObject(v38, EntryType, v34, v42, v88[v31], 1, &v86[v31]);
    if ( (int)v14 < 0 )
    {
      if ( !v86[v31] )
        goto LABEL_74;
      v41 = WdLogNewEntry5_WdAssertion(v28, v40);
      *(_QWORD *)(v41 + 24) = 1950LL;
      goto LABEL_73;
    }
LABEL_68:
    if ( ++v31 >= LODWORD(Src[0]) )
      goto LABEL_75;
    Current = v80;
  }
  v43 = 0LL;
  if ( v32 )
    v43 = *(_QWORD *)(v32 + 8LL * v31);
  LOBYTE(v37) = v6;
  LODWORD(v14) = CreateSharedResourceNtObject(v37, v32, v34, v43, v88[v31], 1, &v86[v31]);
  if ( (int)v14 >= 0 )
    goto LABEL_68;
  if ( !v86[v31] )
    goto LABEL_74;
  v41 = WdLogNewEntry5_WdAssertion(v28, v40);
  *(_QWORD *)(v41 + 24) = 1911LL;
LABEL_73:
  WdLogEvent5_WdAssertion(v41);
LABEL_74:
  v45 = a2;
LABEL_97:
  if ( Src[9] )
  {
    ObCloseHandle(Src[9], v45);
    Src[9] = 0LL;
  }
  else if ( Object )
  {
    ObfDereferenceObject(Object);
    Object = 0LL;
  }
  else
  {
    v66 = 0;
    for ( i = (unsigned int)Src[0]; v66 < i; ++v66 )
    {
      v68 = v86[v66];
      if ( v68 )
      {
        ObfDereferenceObject(v68);
        v86[v66] = 0LL;
        i = (unsigned int)Src[0];
      }
    }
  }
LABEL_113:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77, v40);
  if ( v79 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v72, &EventProfilerExit, v73, v77);
  }
  return (unsigned int)v14;
}
