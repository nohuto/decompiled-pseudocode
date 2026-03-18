/*
 * XREFs of DxgkExtractBundleObjectInternal @ 0x1C0251BF8
 * Callers:
 *     DxgkExtractBundleObject @ 0x1C0251BA0 (DxgkExtractBundleObject.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0263D20 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  const GUID *v17; // r8
  const void *v19; // r14
  __int64 v20; // rax
  char *v21; // rcx
  KPROCESSOR_MODE v22; // r9
  HANDLE v23; // r13
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int128 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  const GUID *v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned int v40; // eax
  _QWORD *v41; // rax
  char v42; // r13
  struct _KPROCESS *v43; // r14
  __int64 v44; // rcx
  __int64 v45; // r14
  DWORD v46; // r9d
  int v47; // eax
  __int64 ObjectType; // rax
  void *v49; // rcx
  NTSTATUS inserted; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int128 v58; // xmm1
  void **v59; // xmm0_8
  size_t v60; // r8
  ULONG64 v61; // r9
  _DWORD *v62; // rcx
  _OWORD *v63; // rcx
  unsigned int i; // r14d
  HANDLE v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  const GUID *v68; // r8
  char v69; // [rsp+41h] [rbp-1C7h]
  char v70; // [rsp+42h] [rbp-1C6h]
  int v71; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v72; // [rsp+50h] [rbp-1B8h]
  char v73; // [rsp+58h] [rbp-1B0h]
  DWORD AccessMask; // [rsp+60h] [rbp-1A8h] BYREF
  int v75; // [rsp+64h] [rbp-1A4h]
  PHANDLE v76; // [rsp+68h] [rbp-1A0h]
  PRKPROCESS PROCESS[2]; // [rsp+70h] [rbp-198h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-188h] BYREF
  ULONG64 v79; // [rsp+88h] [rbp-180h]
  PVOID Object; // [rsp+90h] [rbp-178h] BYREF
  char *v81; // [rsp+98h] [rbp-170h]
  HANDLE Handle[2]; // [rsp+A0h] [rbp-168h]
  void *Src[2]; // [rsp+B0h] [rbp-158h]
  __int128 v84; // [rsp+C0h] [rbp-148h]
  void **v85; // [rsp+D0h] [rbp-138h]
  struct _KPROCESS *v86; // [rsp+D8h] [rbp-130h]
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-128h] BYREF
  _DWORD v88[16]; // [rsp+110h] [rbp-F8h] BYREF
  HANDLE v89[16]; // [rsp+150h] [rbp-B8h] BYREF

  v79 = a4;
  PROCESS[0] = a3;
  v6 = a1;
  v70 = a1;
  v86 = a3;
  v71 = -1;
  v72 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v73 = 1;
    v71 = 2158;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, (const GUID *)a3, 2158);
  }
  else
  {
    v73 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v71, 2158LL);
  v10 = 0;
  v69 = 0;
  if ( v6 == 1 )
  {
    v8 = MmUserProbeAddress;
    v11 = a4;
    if ( a4 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v11;
    *(_OWORD *)Src = *(_OWORD *)(v11 + 16);
    v84 = *(_OWORD *)(v11 + 32);
    v85 = *(void ***)(v11 + 48);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)a4;
    *(_OWORD *)Src = *(_OWORD *)(a4 + 16);
    v84 = *(_OWORD *)(a4 + 32);
    v85 = *(void ***)(a4 + 48);
  }
  v12 = LODWORD(Handle[1]);
  if ( LODWORD(Handle[1]) > 0x10 )
  {
    v13 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v13 + 24) = v12;
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v15);
    if ( v73 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, v71);
    }
    return (unsigned int)v14;
  }
  v19 = Src[0];
  if ( !LODWORD(Handle[1]) )
  {
    if ( Src[0] || Src[1] )
    {
      v20 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v20 + 24) = v19;
      *(void **)(v20 + 32) = Src[1];
      LODWORD(v14) = -1073741811;
      *(_QWORD *)(v20 + 40) = -1073741811LL;
LABEL_21:
      WdLogEvent5_WdWarning(v20);
      goto LABEL_12;
    }
    v10 = 1;
    v69 = 1;
  }
  memset(v88, 0, sizeof(v88));
  if ( !v10 && Src[0] )
  {
    if ( v70 == 1 )
    {
      v21 = (char *)Src[0] + 4 * LODWORD(Handle[1]);
      if ( v21 < Src[0] || (unsigned __int64)v21 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v88, v19, 4 * v12);
    }
    else
    {
      memmove(v88, Src[0], 4LL * LODWORD(Handle[1]));
    }
  }
  memset(v89, 0, sizeof(v89));
  HandleInformation = 0LL;
  v22 = a2;
  v23 = Handle[0];
  v24 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedBundleObjectType, v22, &Object, &HandleInformation);
  v14 = v24;
  if ( v24 == -1073741788 )
  {
    v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v28 + 24) = v23;
    *(_QWORD *)(v28 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v29);
    if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v30, &EventProfilerExit, v31, v71);
    return 3221225508LL;
  }
  if ( v24 < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v20 + 24) = v23;
    *(_QWORD *)(v20 + 32) = v14;
    goto LABEL_21;
  }
  v32 = (__int128 *)Object;
  if ( !*((_BYTE *)Object + 243) )
  {
    v33 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v33 + 24) = v23;
    WdLogEvent5_WdWarning(v33);
    ObfDereferenceObject(v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v34);
    if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v35, &EventProfilerExit, v36, v71);
    return -1073741811LL;
  }
  v81 = (char *)Object + 232;
  ExAcquirePushLockExclusiveEx((char *)Object + 232, 0LL);
  memset(&ApcState, 0, sizeof(ApcState));
  LOBYTE(v39) = v69;
  if ( v69 )
  {
    LODWORD(v12) = *((_DWORD *)v32 + 6);
    LODWORD(Handle[1]) = v12;
    v40 = v12;
  }
  else
  {
    v40 = *((_DWORD *)v32 + 6);
    if ( (_DWORD)v12 != v40 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v37, v38);
      v41[3] = v12;
      v41[4] = *((unsigned int *)v32 + 6);
      v41[5] = v23;
      LODWORD(v14) = -1073741811;
      v41[6] = -1073741811LL;
      goto LABEL_50;
    }
  }
  if ( !v69 )
  {
    if ( *((_BYTE *)v32 + 241) && !*((_BYTE *)v32 + 240) )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v37, v38);
      v41[3] = v23;
      LODWORD(v14) = -1073741811;
      v41[4] = -1073741811LL;
LABEL_50:
      WdLogEvent5_WdWarning(v41);
      v42 = 0;
      goto LABEL_91;
    }
    if ( !v19 )
      memmove(v88, v32 + 10, 4LL * v40);
    v43 = PROCESS[0];
    if ( !PROCESS[0] || v43 == (struct _KPROCESS *)PsGetCurrentProcess(v39, v37) )
    {
      v42 = 0;
    }
    else
    {
      KeStackAttachProcess(v43, &ApcState);
      v42 = 1;
    }
    v44 = 0LL;
    v75 = 0;
    if ( *((_DWORD *)v32 + 6) )
    {
      while ( 1 )
      {
        v45 = (unsigned int)v44;
        v46 = v88[(unsigned int)v44];
        AccessMask = v46;
        v47 = *((_DWORD *)v32 + 5);
        if ( _bittest(&v47, v44) )
        {
          if ( (v46 & 0xF0000000) != 0 )
          {
            ObjectType = ObGetObjectType(*((_QWORD *)v32 + (unsigned int)v44 + 4));
            RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(ObjectType + 76));
            v46 = AccessMask;
          }
          v46 &= HandleInformation.GrantedAccess;
          AccessMask = v46;
        }
        v49 = (void *)*((_QWORD *)v32 + v45 + 4);
        if ( *((_BYTE *)v32 + 242) )
        {
          v76 = &v89[v45];
          inserted = ObOpenObjectByPointer(v49, 0, 0LL, v46, 0LL, 0, v76);
        }
        else
        {
          ObfReferenceObject(v49);
          v76 = &v89[v45];
          inserted = ObInsertObject(*((PVOID *)v32 + v45 + 4), 0LL, AccessMask, 0, 0LL, v76);
        }
        LODWORD(v14) = inserted;
        if ( inserted < 0 )
          break;
        if ( ObIsKernelHandle(*v76) )
        {
          v55 = WdLogNewEntry5_WdAssertion(v54, v37);
          *(_QWORD *)(v55 + 24) = 2475LL;
          WdLogEvent5_WdAssertion(v55);
        }
        v44 = (unsigned int)(v75 + 1);
        v75 = v44;
        if ( (unsigned int)v44 >= *((_DWORD *)v32 + 6) )
          goto LABEL_72;
      }
      v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, v51, v53);
      v56[3] = *((_QWORD *)v32 + v45 + 4);
      v56[4] = *((unsigned __int8 *)v32 + 242);
      v56[5] = (int)v14;
      WdLogEvent5_WdWarning(v56);
    }
LABEL_72:
    if ( v42 )
      KeUnstackDetachProcess(&ApcState);
    if ( (int)v14 < 0 )
    {
      v57 = WdLogNewEntry5_WdWarning(v44, v37, v38);
      *(_QWORD *)(v57 + 24) = (int)v14;
      WdLogEvent5_WdWarning(v57);
LABEL_91:
      if ( v89[0] )
      {
        if ( v42 )
          KeStackAttachProcess(PROCESS[0], &ApcState);
        for ( i = 0; i < *((_DWORD *)v32 + 6); v89[i++] = 0LL )
        {
          v65 = v89[i];
          if ( !v65 )
            break;
          ObCloseHandle(v65, 1);
        }
        if ( v42 )
          KeUnstackDetachProcess(&ApcState);
      }
      ExReleasePushLockExclusiveEx(v81, 0LL);
      ObfDereferenceObject(v32);
      goto LABEL_12;
    }
    *(_WORD *)((char *)v32 + 241) = 257;
    LOBYTE(v39) = 0;
  }
  v58 = *v32;
  *(_OWORD *)PROCESS = v58;
  v84 = v58;
  v59 = (void **)*((_QWORD *)v32 + 2);
  v76 = v59;
  v85 = v59;
  if ( v70 == 1 )
  {
    if ( (_BYTE)v39 )
    {
      v61 = v79;
      v62 = (_DWORD *)(v79 + 8);
      if ( v79 + 12 > MmUserProbeAddress || v79 + 12 <= (unsigned __int64)v62 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v62 = v12;
    }
    else
    {
      v60 = 8LL * (unsigned int)v12;
      if ( (char *)Src[1] + v60 > (void *)MmUserProbeAddress || (char *)Src[1] + v60 <= Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Src[1], v89, v60);
      v58 = *(_OWORD *)PROCESS;
      v59 = v76;
      v61 = v79;
    }
    v63 = (_OWORD *)(v61 + 32);
    if ( v61 + 56 > MmUserProbeAddress || v61 + 56 <= (unsigned __int64)v63 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *v63 = v58;
    *(_QWORD *)(v61 + 48) = v59;
  }
  else if ( !(_BYTE)v39 )
  {
    memmove(Src[1], v89, 8LL * (unsigned int)v12);
  }
  ExReleasePushLockExclusiveEx(v81, 0LL);
  ObfDereferenceObject(v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v71, v66);
  if ( v73 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v67, &EventProfilerExit, v68, v71);
  return 0LL;
}
