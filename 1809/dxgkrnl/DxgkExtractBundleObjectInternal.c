/*
 * XREFs of DxgkExtractBundleObjectInternal @ 0x1C021D6D8
 * Callers:
 *     DxgkExtractBundleObject @ 0x1C021D680 (DxgkExtractBundleObject.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C022F710 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DxgkExtractBundleObjectInternal(__int64 a1, KPROCESSOR_MODE a2, struct _KPROCESS *a3, ULONG64 a4)
{
  char v6; // r14
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  char v10; // si
  ULONG64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  const void *v15; // r14
  __int64 v16; // rax
  char *v17; // rcx
  KPROCESSOR_MODE v18; // r9
  HANDLE v19; // r13
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  const GUID *v26; // r8
  __int64 v28; // rcx
  const GUID *v29; // r8
  __int128 *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  char v39; // r13
  struct _KPROCESS *v40; // r14
  unsigned int v41; // r14d
  DWORD v42; // r9d
  int v43; // eax
  __int64 ObjectType; // rax
  void *v45; // rcx
  NTSTATUS inserted; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int128 v53; // xmm1
  __int64 v54; // xmm0_8
  size_t v55; // r8
  ULONG64 v56; // r9
  _DWORD *v57; // rcx
  _OWORD *v58; // rcx
  unsigned int i; // r14d
  HANDLE v60; // rcx
  __int64 v61; // rcx
  const GUID *v62; // r8
  char v63; // [rsp+41h] [rbp-1D7h]
  char v64; // [rsp+42h] [rbp-1D6h]
  int v65; // [rsp+48h] [rbp-1D0h] BYREF
  __int64 v66; // [rsp+50h] [rbp-1C8h]
  char v67; // [rsp+58h] [rbp-1C0h]
  DWORD AccessMask; // [rsp+60h] [rbp-1B8h] BYREF
  PRKPROCESS PROCESS; // [rsp+68h] [rbp-1B0h]
  __int64 v70; // [rsp+70h] [rbp-1A8h]
  ULONG64 v71; // [rsp+78h] [rbp-1A0h]
  PVOID Object; // [rsp+80h] [rbp-198h] BYREF
  char *v73; // [rsp+88h] [rbp-190h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-188h]
  void *Src[2]; // [rsp+A0h] [rbp-178h]
  __int128 v76; // [rsp+B0h] [rbp-168h]
  __int64 v77; // [rsp+C0h] [rbp-158h]
  __int128 v78; // [rsp+C8h] [rbp-150h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+D8h] [rbp-140h] BYREF
  struct _KPROCESS *v80; // [rsp+E0h] [rbp-138h]
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-130h] BYREF
  _DWORD v82[16]; // [rsp+120h] [rbp-F8h] BYREF
  HANDLE v83[16]; // [rsp+160h] [rbp-B8h] BYREF

  v71 = a4;
  PROCESS = a3;
  v6 = a1;
  v64 = a1;
  v80 = a3;
  v65 = -1;
  v66 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v67 = 1;
    v65 = 2158;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, (const GUID *)a3, 2158);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v65, 2158);
  v10 = 0;
  v63 = 0;
  if ( v6 == 1 )
  {
    v8 = MmUserProbeAddress;
    v11 = a4;
    if ( a4 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v11;
    *(_OWORD *)Src = *(_OWORD *)(v11 + 16);
    v76 = *(_OWORD *)(v11 + 32);
    v77 = *(_QWORD *)(v11 + 48);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)a4;
    *(_OWORD *)Src = *(_OWORD *)(a4 + 16);
    v76 = *(_OWORD *)(a4 + 32);
    v77 = *(_QWORD *)(a4 + 48);
  }
  v12 = LODWORD(Handle[1]);
  if ( LODWORD(Handle[1]) > 0x10 )
  {
    v13 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v13 + 24) = v12;
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_33;
  }
  v15 = Src[0];
  if ( !LODWORD(Handle[1]) )
  {
    if ( Src[0] || Src[1] )
    {
      v16 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v16 + 24) = v15;
      *(void **)(v16 + 32) = Src[1];
      LODWORD(v14) = -1073741811;
      *(_QWORD *)(v16 + 40) = -1073741811LL;
LABEL_32:
      WdLogEvent5_WdWarning(v16);
LABEL_33:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
      if ( v67 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v28, &EventProfilerExit, v29, v65);
      }
      return (unsigned int)v14;
    }
    v10 = 1;
    v63 = 1;
  }
  memset(v82, 0, sizeof(v82));
  if ( !v10 && Src[0] )
  {
    if ( v64 == 1 )
    {
      v17 = (char *)Src[0] + 4 * LODWORD(Handle[1]);
      if ( v17 < Src[0] || (unsigned __int64)v17 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v82, v15, 4 * v12);
    }
    else
    {
      memmove(v82, Src[0], 4LL * LODWORD(Handle[1]));
    }
  }
  memset(v83, 0, sizeof(v83));
  v18 = a2;
  v19 = Handle[0];
  v20 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedBundleObjectType, v18, &Object, &HandleInformation);
  v14 = v20;
  if ( v20 == -1073741788 )
  {
    v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v24 + 24) = v19;
    *(_QWORD *)(v24 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v25, &EventProfilerExit, v26, v65);
    return 3221225508LL;
  }
  if ( v20 < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v16 + 24) = v19;
    *(_QWORD *)(v16 + 32) = v14;
    goto LABEL_32;
  }
  v30 = (__int128 *)Object;
  if ( !*((_BYTE *)Object + 243) )
  {
    v31 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v31 + 24) = v19;
    WdLogEvent5_WdWarning(v31);
    ObfDereferenceObject(v30);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v32, &EventProfilerExit, v33, v65);
    LODWORD(v14) = -1073741811;
    return (unsigned int)v14;
  }
  v73 = (char *)Object + 232;
  ExAcquirePushLockExclusiveEx((char *)Object + 232, 0LL);
  v36 = *((unsigned int *)v30 + 6);
  LOBYTE(v37) = v63;
  if ( v63 )
  {
    LODWORD(v12) = *((_DWORD *)v30 + 6);
    LODWORD(Handle[1]) = v12;
  }
  else if ( (_DWORD)v12 != (_DWORD)v36 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v34, v35);
    v38[3] = v12;
    v38[4] = *((unsigned int *)v30 + 6);
    v38[5] = v19;
    LODWORD(v14) = -1073741811;
    v38[6] = -1073741811LL;
    goto LABEL_50;
  }
  if ( !v63 )
  {
    if ( *((_BYTE *)v30 + 241) && !*((_BYTE *)v30 + 240) )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v34, v35);
      v38[3] = v19;
      LODWORD(v14) = -1073741811;
      v38[4] = -1073741811LL;
LABEL_50:
      WdLogEvent5_WdWarning(v38);
      v39 = 0;
      goto LABEL_91;
    }
    if ( !v15 )
      memmove(v82, v30 + 10, 4 * v36);
    v40 = PROCESS;
    if ( !PROCESS || v40 == (struct _KPROCESS *)PsGetCurrentProcess(v37, v34) )
    {
      v39 = 0;
    }
    else
    {
      KeStackAttachProcess(v40, &ApcState);
      v39 = 1;
    }
    v41 = 0;
    if ( *((_DWORD *)v30 + 6) )
    {
      while ( 1 )
      {
        v70 = v41;
        v42 = v82[v41];
        AccessMask = v42;
        v43 = *((_DWORD *)v30 + 5);
        if ( _bittest(&v43, v41) )
        {
          if ( (v42 & 0xF0000000) != 0 )
          {
            ObjectType = ObGetObjectType(*((_QWORD *)v30 + v41 + 4));
            RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(ObjectType + 76));
            v42 = AccessMask;
          }
          v42 &= HandleInformation.GrantedAccess;
          AccessMask = v42;
        }
        v45 = (void *)*((_QWORD *)v30 + v41 + 4);
        if ( *((_BYTE *)v30 + 242) )
        {
          *(_QWORD *)&v78 = &v83[v41];
          inserted = ObOpenObjectByPointer(v45, 0, 0LL, v42, 0LL, 0, (PHANDLE)v78);
        }
        else
        {
          ObfReferenceObject(v45);
          *(_QWORD *)&v78 = &v83[v41];
          inserted = ObInsertObject(*((PVOID *)v30 + v41 + 4), 0LL, AccessMask, 0, 0LL, (PHANDLE)v78);
        }
        LODWORD(v14) = inserted;
        if ( inserted < 0 )
          break;
        if ( ObIsKernelHandle(*(HANDLE *)v78) )
        {
          v50 = WdLogNewEntry5_WdAssertion(v37);
          *(_QWORD *)(v50 + 24) = 2488LL;
          WdLogEvent5_WdAssertion(v50);
        }
        if ( ++v41 >= *((_DWORD *)v30 + 6) )
          goto LABEL_72;
      }
      v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49);
      v51[3] = *((_QWORD *)v30 + v70 + 4);
      v51[4] = *((unsigned __int8 *)v30 + 242);
      v51[5] = (int)v14;
      WdLogEvent5_WdWarning(v51);
    }
LABEL_72:
    if ( v39 )
      KeUnstackDetachProcess(&ApcState);
    if ( (int)v14 < 0 )
    {
      v52 = WdLogNewEntry5_WdWarning(v37, v34, v35);
      *(_QWORD *)(v52 + 24) = (int)v14;
      WdLogEvent5_WdWarning(v52);
LABEL_91:
      if ( v83[0] )
      {
        if ( v39 )
          KeStackAttachProcess(PROCESS, &ApcState);
        for ( i = 0; i < *((_DWORD *)v30 + 6); v83[i++] = 0LL )
        {
          v60 = v83[i];
          if ( !v60 )
            break;
          ObCloseHandle(v60, 1);
        }
        if ( v39 )
          KeUnstackDetachProcess(&ApcState);
      }
      ExReleasePushLockExclusiveEx(v73, 0LL);
      ObfDereferenceObject(v30);
      goto LABEL_33;
    }
    *(_WORD *)((char *)v30 + 241) = 257;
    LOBYTE(v37) = 0;
  }
  v53 = *v30;
  v78 = v53;
  v76 = v53;
  v54 = *((_QWORD *)v30 + 2);
  v70 = v54;
  v77 = v54;
  if ( v64 == 1 )
  {
    if ( (_BYTE)v37 )
    {
      v56 = v71;
      v57 = (_DWORD *)(v71 + 8);
      if ( v71 + 12 > MmUserProbeAddress || v71 + 12 <= (unsigned __int64)v57 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v57 = v12;
    }
    else
    {
      v55 = 8LL * (unsigned int)v12;
      if ( (char *)Src[1] + v55 > (void *)MmUserProbeAddress || (char *)Src[1] + v55 <= Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Src[1], v83, v55);
      v53 = v78;
      v54 = v70;
      v56 = v71;
    }
    v58 = (_OWORD *)(v56 + 32);
    if ( v56 + 56 > MmUserProbeAddress || v56 + 56 <= (unsigned __int64)v58 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *v58 = v53;
    *(_QWORD *)(v56 + 48) = v54;
  }
  else if ( !(_BYTE)v37 )
  {
    memmove(Src[1], v83, 8LL * (unsigned int)v12);
  }
  ExReleasePushLockExclusiveEx(v73, 0LL);
  ObfDereferenceObject(v30);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
  if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v61, &EventProfilerExit, v62, v65);
  return 0LL;
}
