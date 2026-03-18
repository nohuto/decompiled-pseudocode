/*
 * XREFs of AlpcpAcceptConnectPort @ 0x140648064
 * Callers:
 *     NtAlpcAcceptConnectPort @ 0x140646720 (NtAlpcAcceptConnectPort.c)
 *     NtAcceptConnectPort @ 0x1406E4230 (NtAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     AlpcpCaptureAttributes @ 0x1405E3090 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     PsReleaseProcessWakeCounter @ 0x1406451F0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x140647008 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpValidateConnectionMessage @ 0x1406472BC (AlpcpValidateConnectionMessage.c)
 *     AlpcpCancelMessage @ 0x1406476D0 (AlpcpCancelMessage.c)
 *     AlpcpDispatchMessage @ 0x1406488A4 (AlpcpDispatchMessage.c)
 *     AlpcpReleaseAttributes @ 0x1406488D8 (AlpcpReleaseAttributes.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140648944 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCreatePort @ 0x1406489C0 (AlpcpCreatePort.c)
 *     AlpcpInitializePort @ 0x140648A24 (AlpcpInitializePort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140648BB0 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpSetOwnerProcessPort @ 0x140649208 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpFlushResourcesPort @ 0x14064A1EC (AlpcpFlushResourcesPort.c)
 *     AlpcpReferenceBlob @ 0x14064B920 (AlpcpReferenceBlob.c)
 *     AlpcpMapLegacyPortView @ 0x14068CDB8 (AlpcpMapLegacyPortView.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14071CDF0 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpReferencePortByHandle @ 0x140884E14 (AlpcpReferencePortByHandle.c)
 *     AlpcpUnlockCommunicationInfoExclusive @ 0x140885428 (AlpcpUnlockCommunicationInfoExclusive.c)
 *     AlpcpLockPortExclusive @ 0x1408860B8 (AlpcpLockPortExclusive.c)
 *     AlpcpUnlockPortExclusive @ 0x1408860D8 (AlpcpUnlockPortExclusive.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpAcceptConnectPort(
        unsigned __int64 a1,
        int a2,
        ULONG_PTR a3,
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
  _DWORD *v21; // rax
  _BYTE *v22; // rcx
  __m128i *v23; // rax
  __int64 result; // rax
  _BYTE *v25; // rcx
  _DWORD *v26; // rbx
  __int64 v27; // r8
  int v28; // r14d
  ULONG_PTR v29; // r14
  _KPROCESS *Process; // rcx
  int v31; // esi
  __int64 v32; // r15
  _QWORD *v33; // rsi
  ULONG_PTR v34; // rcx
  int v35; // edx
  int v36; // r12d
  int v37; // r15d
  int inserted; // ebx
  __int64 v39; // rcx
  __int64 v40; // rcx
  HANDLE v41; // rbx
  __int64 v42; // rax
  _OWORD *v43; // rax
  char v44; // [rsp+40h] [rbp-218h]
  PVOID Object; // [rsp+48h] [rbp-210h] BYREF
  ULONG_PTR v47; // [rsp+50h] [rbp-208h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-200h]
  int v49; // [rsp+60h] [rbp-1F8h]
  HANDLE Handle; // [rsp+68h] [rbp-1F0h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-1E8h]
  _DWORD *v52; // [rsp+78h] [rbp-1E0h]
  PVOID v53; // [rsp+80h] [rbp-1D8h] BYREF
  _BYTE v54[40]; // [rsp+88h] [rbp-1D0h] BYREF
  unsigned __int64 v55; // [rsp+B0h] [rbp-1A8h]
  _DWORD *v56; // [rsp+B8h] [rbp-1A0h]
  _OWORD *v57; // [rsp+C0h] [rbp-198h]
  __int128 v58; // [rsp+C8h] [rbp-190h]
  __int64 v59; // [rsp+D8h] [rbp-180h]
  __int64 v60; // [rsp+E0h] [rbp-178h]
  __int64 v61; // [rsp+E8h] [rbp-170h]
  __int64 v62; // [rsp+F0h] [rbp-168h]
  __m128i v63[3]; // [rsp+F8h] [rbp-160h] BYREF
  _OWORD v64[5]; // [rsp+130h] [rbp-128h] BYREF
  _QWORD v65[8]; // [rsp+180h] [rbp-D8h] BYREF
  _OWORD v66[5]; // [rsp+1C0h] [rbp-98h] BYREF

  v51 = a4;
  BugCheckParameter2 = a3;
  v52 = (_DWORD *)a1;
  v55 = a7;
  v56 = a8;
  v57 = (_OWORD *)a11;
  memset(v65, 0, sizeof(v65));
  memset(v54, 0, sizeof(v54));
  memset(v66, 0, 0x48uLL);
  memset(v64, 0, 0x48uLL);
  memset(v63, 0, sizeof(v63));
  v58 = 0uLL;
  v59 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v44 = PreviousMode;
  v16 = 0;
  if ( PreviousMode )
  {
    v17 = a12;
    if ( a12 || a9 )
    {
      v18 = a2;
      v19 = a1;
      if ( a2 < 0 )
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v19 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v19 = *(_DWORD *)v19;
      }
      else
      {
        if ( a1 >= 0x7FFFFFFF0000LL )
          v19 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v19 = *(_QWORD *)v19;
      }
    }
    else
    {
      v18 = a2;
    }
    AlpcpProbeAndCaptureMessageHeader(a7, (__int64)v54, v18);
    if ( a5 )
    {
      v20 = a5;
      if ( a5 >= v14 )
        v20 = v14;
      v66[0] = *(_OWORD *)v20;
      v66[1] = *(_OWORD *)(v20 + 16);
      v66[2] = *(_OWORD *)(v20 + 32);
      v66[3] = *(_OWORD *)(v20 + 48);
      *(_QWORD *)&v66[4] = *(_QWORD *)(v20 + 64);
    }
    if ( a10 )
    {
      v23 = a10;
      if ( (unsigned __int64)a10 >= v14 )
        v23 = (__m128i *)v14;
      v63[0] = *v23;
      v63[1] = v23[1];
      v63[2] = v23[2];
      if ( _mm_cvtsi128_si32(v63[0]) != 48 )
        return 3221225485LL;
      if ( ((unsigned __int8)a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v25 = a10;
      if ( (unsigned __int64)a10 >= v14 )
        v25 = (_BYTE *)v14;
      *v25 = *v25;
      v25[47] = v25[47];
    }
    if ( a11 )
    {
      v21 = (_DWORD *)a11;
      if ( a11 >= v14 )
        v21 = (_DWORD *)v14;
      if ( *v21 != 24 )
        return 3221225485LL;
      if ( (a11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = (_BYTE *)a11;
      if ( a11 >= v14 )
        v22 = (_BYTE *)v14;
      *v22 = *v22;
      v22[23] = v22[23];
    }
    PreviousMode = v44;
  }
  else
  {
    if ( a5 )
    {
      v66[0] = *(_OWORD *)a5;
      v66[1] = *(_OWORD *)(a5 + 16);
      v66[2] = *(_OWORD *)(a5 + 32);
      v66[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v66[4] = *(_QWORD *)(a5 + 64);
    }
    *(_OWORD *)v54 = *(_OWORD *)a7;
    *(_OWORD *)&v54[16] = *(_OWORD *)(a7 + 16);
    *(_QWORD *)&v54[32] = *(_QWORD *)(a7 + 32);
    v17 = a12;
  }
  if ( !*(_DWORD *)&v54[24] )
    return 3221226015LL;
  v26 = 0LL;
  Object = 0LL;
  if ( BugCheckParameter2 )
  {
    LOBYTE(v13) = PreviousMode;
    result = AlpcpReferencePortByHandle(BugCheckParameter2, 1LL, v13, &Object);
    if ( (int)result < 0 )
      return result;
    v26 = Object;
  }
  else
  {
    if ( !v17 )
      return 3221225792LL;
    *(_DWORD *)&v54[32] = 0;
  }
  v28 = AlpcpLookupMessage((__int64)v26, *(unsigned int *)&v54[24], *(int *)&v54[32], v14, &v47);
  if ( v28 >= 0 )
  {
    if ( v26 )
    {
      ObfDereferenceObject(v26);
      v29 = v47;
    }
    else
    {
      v29 = v47;
      v26 = *(_DWORD **)(v47 + 16);
      Object = v26;
    }
    if ( (*(_DWORD *)(v29 + 40) & 0x80u) != 0 )
    {
      v16 = -1073740029;
    }
    else
    {
      if ( (*(unsigned __int16 *)(v29 + 244) & 0xFFFF00FF) != 0xA )
        goto LABEL_96;
      LOBYTE(v27) = v17;
      v31 = AlpcpValidateConnectionMessage((__int64)v26, v54, v27);
      if ( v31 < 0 )
        goto LABEL_97;
      v32 = *(_QWORD *)(v29 + 24);
      BugCheckParameter2 = *(_QWORD *)(v32 + 16);
      if ( (*(_DWORD *)(v32 + 416) & 0x20) != 0 )
      {
        v16 = -1073741769;
        goto LABEL_101;
      }
      if ( (v26[64] & 0x100000) == 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v26 = Object;
        v29 = v47;
        if ( Process != *((_KPROCESS **)Object + 3) )
        {
LABEL_96:
          v31 = -1073741281;
          goto LABEL_97;
        }
      }
      if ( a9 )
      {
        LOBYTE(Process) = v44;
        v31 = AlpcpCreatePort(Process, v51, &v53);
        if ( v31 >= 0 )
        {
          v33 = v53;
          LODWORD(Object) = AlpcpInitializePort(v53, 3LL);
          if ( (int)Object < 0
            || (v51 = (unsigned __int64)v66 & -(__int64)(a5 != 0),
                LODWORD(Object) = AlpcpValidateAndSetPortAttributes((_DWORD)v33, v51, (_DWORD)v26, 0, 0, 0, a12),
                (int)Object < 0) )
          {
            AlpcpUnlockMessage(v29);
            ObfDereferenceObject(v33);
            return (unsigned int)Object;
          }
          AlpcpSetOwnerProcessPort(v33, v51);
          if ( a12 )
            *((_DWORD *)v33 + 104) |= 0x1000u;
          AlpcpReferenceBlob(BugCheckParameter2);
          ExAcquirePushLockExclusiveEx(BugCheckParameter2 - 16, 0LL);
          v34 = BugCheckParameter2;
          v33[2] = BugCheckParameter2;
          *(_QWORD *)(v34 + 8) = v33;
          *(_QWORD *)(v32 + 424) = v26;
          *(_QWORD *)(v32 + 432) = v33;
          v33[53] = v32;
          v33[54] = v32;
          v35 = *(_DWORD *)(v32 + 416);
          if ( (v35 & 0x1000) != 0 && (v33[52] & 0x1000) != 0 )
          {
            *(_DWORD *)(v32 + 416) = v35 | 0x2000;
            *((_DWORD *)v33 + 104) |= 0x2000u;
          }
          AlpcpUnlockCommunicationInfoExclusive(v34);
          WORD2(v65[6]) = *(_WORD *)v54 + 40;
          *(_DWORD *)((char *)&v65[6] + 6) = 11;
          v36 = AlpcpSetupMessageDataForDeferredCopy(v29, v55, a2, *(unsigned __int16 *)v54, 0, v44);
          if ( v36 < 0 || a12 && *(_QWORD *)(v29 + 144) && (v36 = AlpcpMapLegacyPortRemoteView(v33), v36 < 0) )
          {
            AlpcpUnlockMessage(v29);
            ObfDereferenceObject(v33);
            return (unsigned int)v36;
          }
          if ( a10 )
          {
            v60 = 0LL;
            v61 = 0LL;
            v62 = 0LL;
            inserted = AlpcpMapLegacyPortView(v33);
            if ( inserted < 0 )
            {
              v37 = a2;
            }
            else
            {
              inserted = AlpcpMapLegacyPortRemoteView((PVOID)v32);
              v37 = a2;
              if ( inserted >= 0 )
                v63[2].m128i_i64[1] = v62;
            }
          }
          else
          {
            v37 = a2;
            inserted = AlpcpCaptureAttributes((__int64)v26, a2, v56, v29, v64);
          }
          if ( inserted < 0
            || (ObfReferenceObject(v33),
                inserted = ObInsertObjectEx(v33, 0LL, 0x1F0001u, 0, 0, 0LL, &Handle),
                inserted < 0) )
          {
            AlpcpReleaseAttributes(v64);
            AlpcpUnlockMessage(v29);
            AlpcpFlushResourcesPort(v33);
            ObfDereferenceObject(v33);
            return (unsigned int)inserted;
          }
          AlpcpReleaseAttributes(v29 + 104);
          *(_OWORD *)(v29 + 104) = v64[0];
          *(_OWORD *)(v29 + 120) = v64[1];
          *(_OWORD *)(v29 + 136) = v64[2];
          *(_OWORD *)(v29 + 152) = v64[3];
          *(_QWORD *)(v29 + 168) = *(_QWORD *)&v64[4];
          v39 = *(_QWORD *)(v29 + 208);
          if ( v39 )
          {
            PsReleaseProcessWakeCounter(v39, *(unsigned int *)(v29 + 264));
            *(_QWORD *)(v29 + 208) = 0LL;
          }
          v40 = *(_QWORD *)(v29 + 216);
          if ( v40 )
          {
            PsReleaseProcessWakeCounter(v40, *(unsigned int *)(v29 + 264));
            *(_QWORD *)(v29 + 216) = 0LL;
          }
          v41 = Handle;
          if ( v37 < 0 )
            *v52 = (_DWORD)Handle;
          else
            *(_QWORD *)v52 = Handle;
          v42 = a6;
          if ( !a6 )
            v42 = (__int64)v41;
          v33[7] = v42;
          if ( a10 )
          {
            *a10 = v63[0];
            a10[1] = v63[1];
            a10[2] = v63[2];
          }
          v43 = v57;
          if ( v57 )
          {
            *v57 = v58;
            *((_QWORD *)v43 + 2) = v59;
          }
          v65[0] = v33;
          v65[1] = v29;
          LODWORD(v65[6]) = 0x10000;
          v28 = AlpcpDispatchMessage(v65);
          v49 = v28;
          v47 = 0LL;
          ObfDereferenceObject(v33);
          if ( v28 < 0 )
            NtClose(v41);
          return (unsigned int)v28;
        }
LABEL_97:
        AlpcpUnlockMessage(v29);
        return (unsigned int)v31;
      }
      AlpcpLockPortExclusive(v32);
      *(_DWORD *)(v32 + 416) |= 0x10u;
      if ( (*(_DWORD *)(v32 + 416) & 0x100) != 0 )
        *(_QWORD *)(v32 + 56) = a6;
      AlpcpUnlockPortExclusive(v32);
    }
LABEL_101:
    AlpcpCancelMessage((__int64)v26, v29, 0x10000);
    return v16;
  }
  if ( v26 )
    ObfDereferenceObject(v26);
  return (unsigned int)v28;
}
