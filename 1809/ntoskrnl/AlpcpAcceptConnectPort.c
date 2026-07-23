/*
 * XREFs of AlpcpAcceptConnectPort @ 0x14061ACD8
 * Callers:
 *     NtAlpcAcceptConnectPort @ 0x14061BEE0 (NtAlpcAcceptConnectPort.c)
 *     NtAcceptConnectPort @ 0x1406C52E0 (NtAcceptConnectPort.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     AlpcpCreatePort @ 0x140615C6C (AlpcpCreatePort.c)
 *     AlpcpInitializePort @ 0x140615CD0 (AlpcpInitializePort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140615E5C (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpSetOwnerProcessPort @ 0x1406164A0 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateConnectionMessage @ 0x1406164F8 (AlpcpValidateConnectionMessage.c)
 *     AlpcpCancelMessage @ 0x14061690C (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpReferenceBlob @ 0x140619428 (AlpcpReferenceBlob.c)
 *     AlpcpFlushResourcesPort @ 0x14061A228 (AlpcpFlushResourcesPort.c)
 *     AlpcpDispatchMessage @ 0x14061B7E4 (AlpcpDispatchMessage.c)
 *     AlpcpReleaseAttributes @ 0x14061B818 (AlpcpReleaseAttributes.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14061B884 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14061BE2C (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsReleaseProcessWakeCounter @ 0x14061D390 (PsReleaseProcessWakeCounter.c)
 *     AlpcpMapLegacyPortView @ 0x14061DCE4 (AlpcpMapLegacyPortView.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     AlpcpCaptureAttributes @ 0x140637400 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     PsDereferencePrimaryToken @ 0x1406C4CB0 (PsDereferencePrimaryToken.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1406DC1E0 (AlpcpMapLegacyPortRemoteView.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall AlpcpAcceptConnectPort(
        unsigned __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned __int64 a5,
        void *a6,
        __int128 *a7,
        __int64 a8,
        char a9,
        __m128i *a10,
        __m128i *a11,
        char a12)
{
  KPROCESSOR_MODE PreviousMode; // al
  unsigned int v15; // edx
  __int64 v16; // rcx
  __m128i *v17; // r9
  char v18; // r10
  __m128i *v19; // rax
  __m128i *v20; // rax
  NTSTATUS result; // eax
  __m128i *v22; // rcx
  __m128i *v23; // rax
  __m128i *v24; // rcx
  __int64 v25; // r8
  int inserted; // ebx
  ULONG_PTR v27; // rsi
  int v28; // r8d
  int v29; // r14d
  int v30; // r13d
  _BYTE *v31; // rdx
  __int64 v32; // r15
  PVOID *v33; // rbx
  signed __int64 *v34; // rsi
  bool v35; // bl
  void **v36; // rax
  __int64 v37; // r15
  int v38; // eax
  _DWORD *v39; // r14
  bool v40; // cf
  ULONG_PTR v41; // rbx
  volatile signed __int64 *v42; // rbx
  _QWORD *v43; // r14
  ULONG_PTR v44; // rax
  int v45; // ecx
  unsigned int v46; // r14d
  __m128i *v47; // r12
  __int64 v48; // rcx
  __int64 v49; // rcx
  HANDLE v50; // r14
  HANDLE v51; // rcx
  __m128i *v52; // rax
  BOOL v53; // r15d
  void *v54; // r12
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-258h]
  PVOID PrimaryToken; // [rsp+50h] [rbp-248h]
  _BYTE *v57; // [rsp+58h] [rbp-240h]
  ULONG_PTR v58; // [rsp+60h] [rbp-238h] BYREF
  PVOID v59; // [rsp+68h] [rbp-230h] BYREF
  int v60; // [rsp+70h] [rbp-228h]
  int v61; // [rsp+74h] [rbp-224h]
  HANDLE Handle[2]; // [rsp+78h] [rbp-220h] BYREF
  unsigned __int64 v63; // [rsp+88h] [rbp-210h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-208h]
  _QWORD *v65; // [rsp+98h] [rbp-200h]
  PVOID v66; // [rsp+A0h] [rbp-1F8h]
  PVOID Object; // [rsp+A8h] [rbp-1F0h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-1E8h]
  __int128 *v69; // [rsp+B8h] [rbp-1E0h]
  __m128i *v70; // [rsp+C0h] [rbp-1D8h]
  __int64 v71; // [rsp+C8h] [rbp-1D0h]
  __m128i *v72; // [rsp+D0h] [rbp-1C8h]
  __m128i v73; // [rsp+D8h] [rbp-1C0h]
  __int64 v74; // [rsp+E8h] [rbp-1B0h]
  __int128 v75; // [rsp+F0h] [rbp-1A8h] BYREF
  __int128 v76; // [rsp+100h] [rbp-198h]
  __int64 v77; // [rsp+110h] [rbp-188h]
  __m128i v78[3]; // [rsp+118h] [rbp-180h] BYREF
  _OWORD v79[5]; // [rsp+150h] [rbp-148h] BYREF
  _QWORD v80[12]; // [rsp+1A0h] [rbp-F8h] BYREF
  _OWORD v81[5]; // [rsp+200h] [rbp-98h] BYREF

  v68 = a4;
  v60 = a2;
  v65 = (_QWORD *)a1;
  v63 = a5;
  v69 = a7;
  v71 = a8;
  v70 = a10;
  v72 = a11;
  memset(v80, 0, 0x40uLL);
  memset(v81, 0, 0x48uLL);
  memset(v78, 0, sizeof(v78));
  v73 = 0uLL;
  v74 = 0LL;
  v59 = 0LL;
  PrimaryToken = 0LL;
  v66 = 0LL;
  v58 = 0LL;
  Handle[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    if ( a12 || a9 )
    {
      v15 = v60;
      v16 = a1;
      if ( v60 >= 0 )
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v16 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v16 = *(_QWORD *)v16;
      }
      else
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v16 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v16 = *(_DWORD *)v16;
      }
    }
    else
    {
      v15 = v60;
    }
    AlpcpProbeAndCaptureMessageHeader(a7, &v75, v15);
    if ( a5 )
    {
      v19 = (__m128i *)a5;
      if ( a5 >= (unsigned __int64)v17 )
        v19 = v17;
      v81[0] = *v19;
      v81[1] = v19[1];
      v81[2] = v19[2];
      v81[3] = v19[3];
      *(_QWORD *)&v81[4] = v19[4].m128i_i64[0];
    }
    if ( a10 )
    {
      v20 = a10;
      if ( a10 >= v17 )
        v20 = v17;
      v78[0] = *v20;
      v78[1] = v20[1];
      v78[2] = v20[2];
      if ( _mm_cvtsi128_si32(v78[0]) != 48 )
        return -1073741811;
      if ( ((unsigned __int8)a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = a10;
      if ( a10 >= v17 )
        v22 = v17;
      v22->m128i_i8[0] = v22->m128i_i8[0];
      v22[2].m128i_i8[15] = v22[2].m128i_i8[15];
    }
    if ( a11 )
    {
      v23 = a11;
      if ( a11 >= v17 )
        v23 = v17;
      if ( v23->m128i_i32[0] != 24 )
        return -1073741811;
      if ( ((unsigned __int8)a11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = a11;
      if ( a11 >= v17 )
        v24 = v17;
      v24->m128i_i8[0] = v24->m128i_i8[0];
      v24[1].m128i_i8[7] = v24[1].m128i_i8[7];
    }
    PreviousMode = AccessMode;
  }
  else
  {
    if ( a5 )
    {
      v81[0] = *(_OWORD *)a5;
      v81[1] = *(_OWORD *)(a5 + 16);
      v81[2] = *(_OWORD *)(a5 + 32);
      v81[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v81[4] = *(_QWORD *)(a5 + 64);
    }
    v75 = *a7;
    v76 = a7[1];
    v77 = *((_QWORD *)a7 + 4);
    v18 = a12;
  }
  if ( !DWORD2(v76) )
    return -1073741281;
  v57 = 0LL;
  if ( a3 )
  {
    result = ObReferenceObjectByHandle(a3, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    v57 = Object;
    PrimaryToken = Object;
    if ( result < 0 )
      return result;
    v66 = Object;
    v25 = (unsigned int)v77;
  }
  else
  {
    if ( !v18 )
      return -1073741504;
    v25 = 0LL;
    LODWORD(v77) = 0;
  }
  inserted = AlpcpLookupMessage(v57, DWORD2(v76), v25, &v58);
  v61 = inserted;
  v27 = v58;
  if ( inserted < 0 )
    goto LABEL_123;
  if ( !v57 )
    v57 = *(_BYTE **)(v58 + 16);
  v28 = *(_DWORD *)(v58 + 40);
  if ( (v28 & 0x80u) != 0 )
  {
    inserted = -1073740029;
LABEL_50:
    v29 = 1;
    v30 = 0;
    goto LABEL_124;
  }
  if ( (*(unsigned __int16 *)(v58 + 244) & 0xFFFF00FF) != 0xA )
    goto LABEL_52;
  v31 = *(_BYTE **)(v58 + 16);
  if ( v31 != *(_BYTE **)(v58 + 192) )
    goto LABEL_122;
  if ( v31 != v57 )
  {
    if ( (v28 & 7) == 0 )
    {
      v32 = *(_QWORD *)(v58 + 24);
      if ( v32 )
      {
        v33 = *(PVOID **)(v32 + 16);
        v34 = (signed __int64 *)(v33 - 2);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v33 - 2), 0LL);
        if ( ((*(_DWORD *)(v32 + 416) >> 1) & 3) == 2 )
          v35 = *v33 == v57 || v33[1] == v57;
        else
          v35 = v33[2] == v57;
        if ( _InterlockedCompareExchange64(v34, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v34);
        KeAbPostRelease((ULONG_PTR)v34);
        v27 = v58;
        goto LABEL_72;
      }
LABEL_122:
      inserted = -1073740030;
      goto LABEL_123;
    }
    if ( (v57[416] & 6) != 6 )
      goto LABEL_122;
    v36 = (void **)*((_QWORD *)v57 + 2);
    if ( !v36 || *v36 != v31 )
      goto LABEL_122;
  }
  if ( (*(_DWORD *)(v58 + 40) & 7) != 3 || (v28 & 0x2000) != 0 )
    goto LABEL_122;
  v35 = 1;
LABEL_72:
  if ( !v35 )
    goto LABEL_122;
  inserted = AlpcpValidateConnectionMessage((__int64)v57, &v75, a12);
  v61 = inserted;
  if ( inserted < 0 )
    goto LABEL_123;
  v37 = *(_QWORD *)(v27 + 24);
  BugCheckParameter2 = *(_QWORD *)(v37 + 16);
  if ( (*(_DWORD *)(v37 + 416) & 0x20) != 0 )
  {
    inserted = -1073741769;
    goto LABEL_50;
  }
  if ( (*((_DWORD *)v57 + 64) & 0x100000) == 0 )
  {
    v27 = v58;
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)*((_QWORD *)v57 + 3) )
    {
LABEL_52:
      inserted = -1073741281;
LABEL_123:
      v29 = 0;
      v30 = 0;
      goto LABEL_124;
    }
  }
  if ( !a9 )
  {
    ExAcquirePushLockExclusiveEx(v37 + 352, 0LL);
    v38 = *(_DWORD *)(v37 + 416) | 0x10;
    *(_DWORD *)(v37 + 416) = v38;
    if ( (v38 & 0x100) != 0 )
      *(_QWORD *)(v37 + 56) = a6;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v37 + 352));
    KeAbPostRelease(v37 + 352);
    v29 = 1;
    inserted = 0;
    v27 = v58;
    v30 = 0;
    goto LABEL_124;
  }
  inserted = AlpcpCreatePort(AccessMode, v68, &v59);
  if ( inserted < 0 )
    goto LABEL_123;
  v39 = v59;
  inserted = AlpcpInitializePort((__int64)v59, 3, 0);
  if ( inserted < 0 )
    goto LABEL_123;
  inserted = AlpcpValidateAndSetPortAttributes(
               (__int64)v39,
               (int *)((unsigned __int64)v81 & ((unsigned __int128)-(__int128)v63 >> 64)),
               (__int64)v57,
               0LL,
               0,
               0,
               a12);
  v61 = inserted;
  if ( inserted < 0 )
    goto LABEL_123;
  v40 = v63 != 0;
  v63 = -(__int64)v63;
  AlpcpSetOwnerProcessPort((__int64)v39, (_DWORD *)((unsigned __int64)v81 & -(__int64)v40));
  if ( a12 )
    v39[104] |= 0x1000u;
  v41 = BugCheckParameter2;
  AlpcpReferenceBlob(BugCheckParameter2);
  v42 = (volatile signed __int64 *)(v41 - 16);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v42, 0LL);
  v43 = v59;
  v44 = BugCheckParameter2;
  *((_QWORD *)v59 + 2) = BugCheckParameter2;
  *(_QWORD *)(v44 + 8) = v43;
  *(_QWORD *)(v37 + 424) = v57;
  *(_QWORD *)(v37 + 432) = v43;
  v43[53] = v37;
  v43[54] = v37;
  v45 = *(_DWORD *)(v37 + 416);
  if ( (v45 & 0x1000) != 0 && (v43[52] & 0x1000) != 0 )
  {
    *(_DWORD *)(v37 + 416) = v45 | 0x2000;
    *((_DWORD *)v43 + 104) |= 0x2000u;
  }
  if ( (_InterlockedExchangeAdd64(v42, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v42);
  KeAbPostRelease((ULONG_PTR)v42);
  WORD2(v80[6]) = v75 + 40;
  *(_DWORD *)((char *)&v80[6] + 6) = 11;
  v46 = v60;
  v27 = v58;
  inserted = AlpcpSetupMessageDataForDeferredCopy(v58, (_DWORD)v69, v60, (unsigned __int16)v75, 0, AccessMode);
  if ( inserted < 0 )
    goto LABEL_123;
  if ( a12 )
  {
    if ( *(_QWORD *)(v27 + 144) )
    {
      inserted = AlpcpMapLegacyPortRemoteView(v59);
      if ( inserted < 0 )
        goto LABEL_123;
    }
  }
  v30 = 1;
  v47 = v70;
  if ( v70 )
  {
    memset(v79, 0, 0x48uLL);
    inserted = AlpcpMapLegacyPortView(v59);
    if ( inserted >= 0 )
    {
      inserted = AlpcpMapLegacyPortRemoteView((PVOID)v37);
      if ( inserted >= 0 )
        v78[2].m128i_i64[1] = v80[10];
    }
  }
  else
  {
    inserted = AlpcpCaptureAttributes(v57, v46, v71, v27, v79);
  }
  if ( inserted >= 0 )
  {
    ObfReferenceObject(v59);
    inserted = ObInsertObjectEx(v59, 0LL, 0, 0LL, (__int64)Handle);
    if ( inserted >= 0 )
    {
      AlpcpReleaseAttributes(v27 + 104);
      *(_OWORD *)(v27 + 104) = v79[0];
      *(_OWORD *)(v27 + 120) = v79[1];
      *(_OWORD *)(v27 + 136) = v79[2];
      *(_OWORD *)(v27 + 152) = v79[3];
      *(_QWORD *)(v27 + 168) = *(_QWORD *)&v79[4];
      v30 = 0;
      v48 = *(_QWORD *)(v27 + 208);
      if ( v48 )
      {
        PsReleaseProcessWakeCounter(v48, *(unsigned int *)(v27 + 264));
        *(_QWORD *)(v27 + 208) = 0LL;
      }
      v49 = *(_QWORD *)(v27 + 216);
      if ( v49 )
      {
        PsReleaseProcessWakeCounter(v49, *(unsigned int *)(v27 + 264));
        *(_QWORD *)(v27 + 216) = 0LL;
      }
      v50 = Handle[0];
      if ( v60 >= 0 )
        *v65 = Handle[0];
      else
        *(_DWORD *)v65 = Handle[0];
      v51 = a6;
      if ( !a6 )
        v51 = v50;
      *((_QWORD *)v59 + 7) = v51;
      if ( v47 )
      {
        *v47 = v78[0];
        v47[1] = v78[1];
        v47[2] = v78[2];
      }
      v52 = v72;
      if ( v72 )
      {
        *v72 = v73;
        v52[1].m128i_i64[0] = v74;
      }
      v80[0] = v59;
      v80[1] = v27;
      LODWORD(v80[6]) = 0x10000;
      inserted = AlpcpDispatchMessage(v80);
      v61 = inserted;
      if ( inserted >= 0 )
        v50 = 0LL;
      Handle[0] = v50;
      v27 = 0LL;
      v58 = 0LL;
      v53 = 0;
      v29 = 0;
      v54 = PrimaryToken;
      goto LABEL_125;
    }
  }
  v29 = 0;
LABEL_124:
  v54 = PrimaryToken;
  v53 = 0;
LABEL_125:
  if ( v27 )
  {
    if ( v30 )
      AlpcpReleaseAttributes(v79);
    v53 = v30 != 0;
    if ( v29 )
      AlpcpCancelMessage((__int64)v57, v27, 0x10000);
    else
      AlpcpUnlockMessage(v27);
  }
  if ( v54 )
    PsDereferencePrimaryToken(v54);
  if ( v59 )
  {
    if ( v53 )
      AlpcpFlushResourcesPort((__int64)v59);
    PsDereferencePrimaryToken(v59);
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  return inserted;
}
