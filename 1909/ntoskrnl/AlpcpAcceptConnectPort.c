/*
 * XREFs of AlpcpAcceptConnectPort @ 0x14065BBC8
 * Callers:
 *     NtAlpcAcceptConnectPort @ 0x14065A480 (NtAlpcAcceptConnectPort.c)
 *     NtAcceptConnectPort @ 0x1406E5210 (NtAcceptConnectPort.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x1400065C0 (PsGetCurrentProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObInsertObject @ 0x1405D9D30 (ObInsertObject.c)
 *     AlpcpCaptureAttributes @ 0x1405E3860 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x1405E3E30 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     PsReleaseProcessWakeCounter @ 0x140658D40 (PsReleaseProcessWakeCounter.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14065AD68 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpValidateConnectionMessage @ 0x14065AE14 (AlpcpValidateConnectionMessage.c)
 *     AlpcpCancelMessage @ 0x14065B22C (AlpcpCancelMessage.c)
 *     AlpcpDispatchMessage @ 0x14065C514 (AlpcpDispatchMessage.c)
 *     AlpcpReleaseAttributes @ 0x14065C548 (AlpcpReleaseAttributes.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14065C5B4 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCreatePort @ 0x14065C630 (AlpcpCreatePort.c)
 *     AlpcpInitializePort @ 0x14065C694 (AlpcpInitializePort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x14065C820 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpSetOwnerProcessPort @ 0x14065CE78 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpFlushResourcesPort @ 0x14065DE64 (AlpcpFlushResourcesPort.c)
 *     AlpcpReferenceBlob @ 0x14065F5C0 (AlpcpReferenceBlob.c)
 *     AlpcpMapLegacyPortView @ 0x1406C6E38 (AlpcpMapLegacyPortView.c)
 *     PsDereferencePrimaryToken @ 0x1406E5560 (PsDereferencePrimaryToken.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14071EC80 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpReferencePortByHandle @ 0x140884530 (AlpcpReferencePortByHandle.c)
 *     AlpcpReferencePort @ 0x140884B78 (AlpcpReferencePort.c)
 *     AlpcpUnlockCommunicationInfoExclusive @ 0x140884BC4 (AlpcpUnlockCommunicationInfoExclusive.c)
 *     AlpcpLockPortExclusive @ 0x14088588C (AlpcpLockPortExclusive.c)
 *     AlpcpUnlockPortExclusive @ 0x1408858E4 (AlpcpUnlockPortExclusive.c)
 *     AlpcpLockCommunicationInfoExclusive @ 0x140885F08 (AlpcpLockCommunicationInfoExclusive.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpAcceptConnectPort(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        _DWORD *a8,
        char a9,
        __m128i *a10,
        unsigned __int64 a11,
        char a12)
{
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  char PreviousMode; // cl
  unsigned int v16; // edi
  char v17; // si
  int v18; // r8d
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __m128i *v21; // rax
  __int64 result; // rax
  _BYTE *v23; // rcx
  _DWORD *v24; // rax
  _BYTE *v25; // rcx
  PACCESS_TOKEN v26; // r15
  int inserted; // ebx
  __int64 v28; // r8
  void *v29; // rcx
  ULONG_PTR v30; // r14
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // esi
  __int64 v34; // rbx
  PACCESS_TOKEN v35; // rsi
  _QWORD *v36; // rcx
  int v37; // edx
  int v38; // r12d
  int v39; // r15d
  int v40; // r12d
  __int64 v41; // rcx
  __int64 v42; // rcx
  HANDLE v43; // rbx
  __int64 v44; // rax
  _OWORD *v45; // rax
  int v46; // r14d
  char v47; // [rsp+40h] [rbp-218h]
  PACCESS_TOKEN PrimaryToken; // [rsp+48h] [rbp-210h] BYREF
  __int64 v50; // [rsp+50h] [rbp-208h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-200h] BYREF
  int v52; // [rsp+60h] [rbp-1F8h]
  HANDLE Handle; // [rsp+68h] [rbp-1F0h] BYREF
  unsigned __int64 v54; // [rsp+70h] [rbp-1E8h]
  _QWORD *v55; // [rsp+78h] [rbp-1E0h]
  PACCESS_TOKEN Object; // [rsp+80h] [rbp-1D8h] BYREF
  _BYTE v57[40]; // [rsp+88h] [rbp-1D0h] BYREF
  unsigned __int64 v58; // [rsp+B0h] [rbp-1A8h]
  _DWORD *v59; // [rsp+B8h] [rbp-1A0h]
  _OWORD *v60; // [rsp+C0h] [rbp-198h]
  __int128 v61; // [rsp+C8h] [rbp-190h]
  __int64 v62; // [rsp+D8h] [rbp-180h]
  __int64 v63; // [rsp+E0h] [rbp-178h]
  __int64 v64; // [rsp+E8h] [rbp-170h]
  __int64 v65; // [rsp+F0h] [rbp-168h]
  __m128i v66[3]; // [rsp+F8h] [rbp-160h] BYREF
  _OWORD v67[5]; // [rsp+130h] [rbp-128h] BYREF
  _QWORD v68[8]; // [rsp+180h] [rbp-D8h] BYREF
  _OWORD v69[5]; // [rsp+1C0h] [rbp-98h] BYREF

  v54 = a4;
  v50 = a3;
  v55 = (_QWORD *)a1;
  v58 = a7;
  v59 = a8;
  v60 = (_OWORD *)a11;
  memset(v68, 0, sizeof(v68));
  memset(v57, 0, sizeof(v57));
  memset(v69, 0, 0x48uLL);
  memset(v67, 0, 0x48uLL);
  memset(v66, 0, sizeof(v66));
  v61 = 0uLL;
  v62 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v47 = PreviousMode;
  v16 = 0;
  if ( PreviousMode )
  {
    v17 = a12;
    if ( a12 || a9 )
    {
      v18 = a2;
      v19 = a1;
      if ( a2 >= 0 )
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v19 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v19 = *(_QWORD *)v19;
      }
      else
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v19 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v19 = *(_DWORD *)v19;
      }
    }
    else
    {
      v18 = a2;
    }
    AlpcpProbeAndCaptureMessageHeader(a7, (__int64)v57, v18);
    if ( a5 )
    {
      v20 = a5;
      if ( a5 >= v14 )
        v20 = v14;
      v69[0] = *(_OWORD *)v20;
      v69[1] = *(_OWORD *)(v20 + 16);
      v69[2] = *(_OWORD *)(v20 + 32);
      v69[3] = *(_OWORD *)(v20 + 48);
      *(_QWORD *)&v69[4] = *(_QWORD *)(v20 + 64);
    }
    if ( a10 )
    {
      v21 = a10;
      if ( (unsigned __int64)a10 >= v14 )
        v21 = (__m128i *)v14;
      v66[0] = *v21;
      v66[1] = v21[1];
      v66[2] = v21[2];
      if ( _mm_cvtsi128_si32(v66[0]) != 48 )
        return 3221225485LL;
      if ( ((unsigned __int8)a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = a10;
      if ( (unsigned __int64)a10 >= v14 )
        v23 = (_BYTE *)v14;
      *v23 = *v23;
      v23[47] = v23[47];
    }
    if ( a11 )
    {
      v24 = (_DWORD *)a11;
      if ( a11 >= v14 )
        v24 = (_DWORD *)v14;
      if ( *v24 != 24 )
        return 3221225485LL;
      if ( (a11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v25 = (_BYTE *)a11;
      if ( a11 >= v14 )
        v25 = (_BYTE *)v14;
      *v25 = *v25;
      v25[23] = v25[23];
    }
    PreviousMode = v47;
  }
  else
  {
    if ( a5 )
    {
      v69[0] = *(_OWORD *)a5;
      v69[1] = *(_OWORD *)(a5 + 16);
      v69[2] = *(_OWORD *)(a5 + 32);
      v69[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v69[4] = *(_QWORD *)(a5 + 64);
    }
    *(_OWORD *)v57 = *(_OWORD *)a7;
    *(_OWORD *)&v57[16] = *(_OWORD *)(a7 + 16);
    *(_QWORD *)&v57[32] = *(_QWORD *)(a7 + 32);
    v17 = a12;
  }
  if ( !*(_DWORD *)&v57[24] )
    return 3221226015LL;
  v26 = 0LL;
  PrimaryToken = 0LL;
  if ( v50 )
  {
    LOBYTE(v13) = PreviousMode;
    result = AlpcpReferencePortByHandle(v50, 1LL, v13, &PrimaryToken);
    if ( (int)result < 0 )
      return result;
    v26 = PrimaryToken;
  }
  else
  {
    if ( !v17 )
      return 3221225792LL;
    *(_DWORD *)&v57[32] = 0;
  }
  inserted = AlpcpLookupMessage((__int64)v26, *(unsigned int *)&v57[24], *(int *)&v57[32], v14, &BugCheckParameter2);
  if ( inserted < 0 )
  {
    if ( !v26 )
      return (unsigned int)inserted;
    v29 = v26;
LABEL_48:
    PsDereferencePrimaryToken(v29);
    return (unsigned int)inserted;
  }
  if ( v26 )
  {
    PsDereferencePrimaryToken(v26);
    v30 = BugCheckParameter2;
  }
  else
  {
    v30 = BugCheckParameter2;
    v26 = *(PACCESS_TOKEN *)(BugCheckParameter2 + 16);
  }
  v31 = *(_DWORD *)(v30 + 40);
  if ( (v31 & 0x80u) != 0 )
  {
    v16 = -1073740029;
LABEL_68:
    AlpcpCancelMessage((__int64)v26, v30, 0x10000);
    return v16;
  }
  if ( (*(unsigned __int16 *)(v30 + 244) & 0xFFFF00FF) != 0xA )
    goto LABEL_63;
  if ( *(_QWORD *)(v30 + 16) != *(_QWORD *)(v30 + 192) || (v31 & 7) != 3 )
  {
    v33 = -1073740030;
    goto LABEL_110;
  }
  LOBYTE(v28) = v17;
  v33 = AlpcpValidateConnectionMessage((__int64)v26, v57, v28);
  if ( v33 < 0 )
  {
LABEL_110:
    AlpcpUnlockMessage(v30);
    return (unsigned int)v33;
  }
  v34 = *(_QWORD *)(v30 + 24);
  PrimaryToken = *(PACCESS_TOKEN *)(v34 + 16);
  if ( (*(_DWORD *)(v34 + 416) & 0x20) != 0 )
  {
    v16 = -1073741769;
    goto LABEL_68;
  }
  if ( (*((_DWORD *)v26 + 64) & 0x100000) == 0 && PsGetCurrentProcess() != *((_KPROCESS **)v26 + 3) )
  {
LABEL_63:
    v33 = -1073741281;
    goto LABEL_110;
  }
  if ( !a9 )
  {
    AlpcpLockPortExclusive(v34);
    *(_DWORD *)(v34 + 416) |= 0x10u;
    if ( (*(_DWORD *)(v34 + 416) & 0x100) != 0 )
      *(_QWORD *)(v34 + 56) = a6;
    AlpcpUnlockPortExclusive(v34);
    goto LABEL_68;
  }
  LOBYTE(v32) = v47;
  v33 = AlpcpCreatePort(v32, v54, &Object);
  if ( v33 < 0 )
    goto LABEL_110;
  v35 = Object;
  LODWORD(v50) = AlpcpInitializePort(Object, 3LL);
  if ( (int)v50 < 0
    || (v54 = (unsigned __int64)v69 & -(__int64)(a5 != 0),
        LODWORD(v50) = AlpcpValidateAndSetPortAttributes((_DWORD)v35, v54, (_DWORD)v26, 0, 0, 0, a12),
        (int)v50 < 0) )
  {
    AlpcpUnlockMessage(v30);
    PsDereferencePrimaryToken(v35);
    return (unsigned int)v50;
  }
  else
  {
    AlpcpSetOwnerProcessPort(v35, v54);
    if ( a12 )
      *((_DWORD *)v35 + 104) |= 0x1000u;
    AlpcpReferenceBlob((ULONG_PTR)PrimaryToken);
    AlpcpLockCommunicationInfoExclusive(PrimaryToken);
    v36 = PrimaryToken;
    *((_QWORD *)v35 + 2) = PrimaryToken;
    v36[1] = v35;
    *(_QWORD *)(v34 + 424) = v26;
    *(_QWORD *)(v34 + 432) = v35;
    *((_QWORD *)v35 + 53) = v34;
    *((_QWORD *)v35 + 54) = v34;
    v37 = *(_DWORD *)(v34 + 416);
    if ( (v37 & 0x1000) != 0 && (*((_DWORD *)v35 + 104) & 0x1000) != 0 )
    {
      *(_DWORD *)(v34 + 416) = v37 | 0x2000;
      *((_DWORD *)v35 + 104) |= 0x2000u;
    }
    AlpcpUnlockCommunicationInfoExclusive(v36);
    WORD2(v68[6]) = *(_WORD *)v57 + 40;
    *(_DWORD *)((char *)&v68[6] + 6) = 11;
    v38 = AlpcpSetupMessageDataForDeferredCopy(v30, v58, a2, *(unsigned __int16 *)v57, 0, v47);
    if ( v38 < 0 || a12 && *(_QWORD *)(v30 + 144) && (v38 = AlpcpMapLegacyPortRemoteView(v35), v38 < 0) )
    {
      AlpcpUnlockMessage(v30);
      PsDereferencePrimaryToken(v35);
      return (unsigned int)v38;
    }
    else
    {
      if ( a10 )
      {
        v63 = 0LL;
        v64 = 0LL;
        v65 = 0LL;
        v39 = AlpcpMapLegacyPortView(v35);
        if ( v39 < 0 )
        {
          v40 = a2;
        }
        else
        {
          v39 = AlpcpMapLegacyPortRemoteView((PVOID)v34);
          v40 = a2;
          if ( v39 >= 0 )
            v66[2].m128i_i64[1] = v65;
        }
      }
      else
      {
        v40 = a2;
        v39 = AlpcpCaptureAttributes((__int64)v26, a2, v59, v30, v67);
      }
      if ( v39 >= 0 )
      {
        AlpcpReferencePort(v35);
        inserted = ObInsertObject(v35, 0LL, 0x1F0001u, 0, 0LL, &Handle);
        if ( inserted < 0 )
        {
          AlpcpReleaseAttributes(v67);
          AlpcpUnlockMessage(v30);
          AlpcpFlushResourcesPort(v35);
          v29 = v35;
          goto LABEL_48;
        }
        AlpcpReleaseAttributes(v30 + 104);
        *(_OWORD *)(v30 + 104) = v67[0];
        *(_OWORD *)(v30 + 120) = v67[1];
        *(_OWORD *)(v30 + 136) = v67[2];
        *(_OWORD *)(v30 + 152) = v67[3];
        *(_QWORD *)(v30 + 168) = *(_QWORD *)&v67[4];
        v41 = *(_QWORD *)(v30 + 208);
        if ( v41 )
        {
          PsReleaseProcessWakeCounter(v41, *(unsigned int *)(v30 + 264));
          *(_QWORD *)(v30 + 208) = 0LL;
        }
        v42 = *(_QWORD *)(v30 + 216);
        if ( v42 )
        {
          PsReleaseProcessWakeCounter(v42, *(unsigned int *)(v30 + 264));
          *(_QWORD *)(v30 + 216) = 0LL;
        }
        v43 = Handle;
        if ( v40 >= 0 )
          *v55 = Handle;
        else
          *(_DWORD *)v55 = (_DWORD)Handle;
        v44 = a6;
        if ( !a6 )
          v44 = (__int64)v43;
        *((_QWORD *)v35 + 7) = v44;
        if ( a10 )
        {
          *a10 = v66[0];
          a10[1] = v66[1];
          a10[2] = v66[2];
        }
        v45 = v60;
        if ( v60 )
        {
          *v60 = v61;
          *((_QWORD *)v45 + 2) = v62;
        }
        v68[0] = v35;
        v68[1] = v30;
        LODWORD(v68[6]) = 0x10000;
        v46 = AlpcpDispatchMessage(v68);
        v52 = v46;
        BugCheckParameter2 = 0LL;
        PsDereferencePrimaryToken(v35);
        if ( v46 < 0 )
          NtClose(v43);
        return (unsigned int)v46;
      }
      else
      {
        AlpcpReleaseAttributes(v67);
        AlpcpUnlockMessage(v30);
        AlpcpFlushResourcesPort(v35);
        PsDereferencePrimaryToken(v35);
        return (unsigned int)v39;
      }
    }
  }
}
