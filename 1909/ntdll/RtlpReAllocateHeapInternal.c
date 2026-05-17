/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x180043280
 * Callers:
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180045138 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpTagReAllocateHeap @ 0x180046EEC (RtlpHpTagReAllocateHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlSizeHeap @ 0x1800400A0 (RtlSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180040614 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpHpStackLoggingEnabled @ 0x180040750 (RtlpHpStackLoggingEnabled.c)
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 *     RtlpHpReAllocateHeap @ 0x180044EDC (RtlpHpReAllocateHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x18004CD1C (RtlpHpMetadataHeapCtxGet.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     RtlpProbeUserBufferSafe @ 0x18006E818 (RtlpProbeUserBufferSafe.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE14 (RtlpCallInterceptRoutine.c)
 *     RtlpSetupExtendedBlock @ 0x1800F3270 (RtlpSetupExtendedBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpStackTraceAddStack @ 0x180101C3C (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180102864 (RtlpHpStackTraceRemoveStack.c)
 *     RtlDebugReAllocateHeap @ 0x1801056D8 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateLFHBlock @ 0x180107C7C (RtlpValidateLFHBlock.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpReAllocateHeapInternal(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        _WORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbp
  unsigned __int16 v10; // r12
  int v11; // r15d
  int v12; // eax
  int v13; // r14d
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // rdi
  __int64 v18; // rdi
  int v19; // r9d
  int v21; // eax
  __int64 v22; // r11
  int v23; // ecx
  int v24; // edx
  int v25; // r8d
  int v26; // r14d
  unsigned __int64 v27; // r12
  __int64 Heap; // rax
  _QWORD *v29; // r15
  int v30; // r12d
  struct _TEB *v31; // rbx
  int v32; // r12d
  struct _TEB *v33; // rdi
  struct _TEB *v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // r9
  int v37; // edx
  __int64 v38; // rax
  unsigned __int16 v39; // dx
  int v40; // eax
  int v41; // eax
  unsigned __int16 v42; // ax
  __int64 v43; // rcx
  char v44; // dl
  unsigned __int16 v45; // ax
  __int64 v46; // r12
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  char v49; // cl
  int v50; // edx
  __int16 v51; // cx
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int16 v54; // ax
  int v55; // eax
  char v56; // r8
  __int64 v57; // rax
  unsigned __int16 v58; // ax
  int v59; // eax
  unsigned __int64 v60; // rdx
  char v61; // al
  int v62; // r9d
  int v63; // eax
  unsigned __int16 v64; // [rsp+30h] [rbp-128h]
  int v65; // [rsp+40h] [rbp-118h]
  int v66; // [rsp+40h] [rbp-118h]
  int v67; // [rsp+40h] [rbp-118h]
  int v68; // [rsp+40h] [rbp-118h]
  __int128 v69; // [rsp+50h] [rbp-108h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-F8h] BYREF

  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  v10 = 0;
  v11 = 0;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v34 = NtCurrentTeb();
    v34->LastErrorValue = RtlNtStatusToDosError(0);
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v21 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v23 = *(_DWORD *)(a1 + 220);
    v24 = 0;
    if ( v23 )
      LOBYTE(v24) = v23 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v25 = v8;
    v26 = v21 | 1;
    if ( !v24 )
      v26 = v21;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      v27 = *(_QWORD *)(v8 - 16);
      v25 = v8 - v27;
    }
    else
    {
      v27 = 0LL;
    }
    if ( v27 + v7 >= v7
      && (Heap = RtlpHpReAllocateHeap(a1, v26, v25, (int)v27 + (int)v7, (__int64)a5, v22), (v29 = (_QWORD *)Heap) != 0LL) )
    {
      if ( Heap != -1 )
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          v35 = (_QWORD *)(v27 + Heap);
          *(v35 - 2) = v27;
          if ( v27 > 0x10 )
            *v29 = v27;
          v29 = v35;
        }
        if ( a5 )
          *a5 -= v27;
LABEL_38:
        if ( RtlpHpStackLoggingEnabled() && v29 )
        {
          RtlpHpStackTraceRemoveStack(a1, v8);
          RtlpHpStackTraceAddStack(a1, v29);
        }
        return (__int64)v29;
      }
      v32 = -1073741819;
    }
    else
    {
      v32 = -1073741801;
    }
    v29 = 0LL;
    NtCurrentTeb()->LastStatusValue = v32;
    v33 = NtCurrentTeb();
    v33->LastErrorValue = RtlNtStatusToDosError(v32);
    if ( v26 < 0 || *(int *)(a1 + 20) < 0 )
    {
      ExceptionRecord.ExceptionCode = v32;
      ExceptionRecord.ExceptionAddress = RtlRaiseException;
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 1;
      ExceptionRecord.ExceptionFlags = 0;
      ExceptionRecord.ExceptionInformation[0] = v7;
      RtlRaiseException(&ExceptionRecord);
    }
    goto LABEL_38;
  }
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0;
  v12 = *(_DWORD *)(a1 + 116);
  v13 = v12 | a2;
  if ( (v12 & 0x1000000) == 0 )
  {
    if ( !dword_18015F9B8 )
    {
      v14 = *(_QWORD *)(a1 + 392);
      v15 = v14;
      if ( (v14 || (v15 = qword_180163568) != 0) && a4 > v15 )
      {
        v36 = *(_QWORD *)(a1 + 400);
        if ( v36 )
          RtlpLogHeapFailure(20, a1, 0, v36, v7, v14);
        goto LABEL_42;
      }
    }
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v17 = RtlpProbeUserBufferSafe(a1, a3);
    }
    else
    {
      if ( (a3 & 0xF) != 0 )
      {
        v16 = 9;
LABEL_14:
        RtlpLogHeapFailure(v16, a1, a3, 0, 0LL, 0LL);
        v17 = 0LL;
        goto LABEL_15;
      }
      v17 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v17 -= 16LL * *(unsigned __int8 *)(v17 + 14);
      if ( (*(_BYTE *)(v17 + 15) & 0x3F) == 0 )
      {
        LODWORD(a3) = v17;
        v16 = 8;
        goto LABEL_14;
      }
    }
LABEL_15:
    if ( !v17 )
    {
      v30 = -1073741819;
      goto LABEL_43;
    }
    if ( *(_BYTE *)(v8 - 1) != 5 )
      goto LABEL_17;
    if ( *(char *)(v17 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v37 = *(_DWORD *)(v17 + 8) ^ *(_DWORD *)(a1 + 136);
        if ( HIBYTE(v37) != ((unsigned __int8)v37 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v17 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v37))) )
          goto LABEL_88;
      }
    }
    else if ( !(unsigned __int8)RtlpValidateLFHBlock(a1, v17) )
    {
      goto LABEL_88;
    }
    if ( *(char *)(v17 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v40 = *(_DWORD *)(v17 + 8);
        LOWORD(v65) = v40;
        if ( (v40 & *(_DWORD *)(a1 + 124)) != 0 )
          v65 = *(_DWORD *)(a1 + 136) ^ v40;
        v39 = v65;
      }
      else
      {
        v39 = *(_WORD *)(v17 + 8);
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v17 + 8) ^ a1 ^ (v17 >> 4)) )
        v38 = 0LL;
      else
        v38 = *(_QWORD *)(v17
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v17 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v17 >> 4)) >> 12));
      v39 = *(_WORD *)(v38 + 36);
    }
    if ( *(_BYTE *)(v17 + 15) == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v41 = *(_DWORD *)(v17 + 8);
        LOWORD(v66) = v41;
        if ( (v41 & *(_DWORD *)(a1 + 124)) != 0 )
          v66 = *(_DWORD *)(a1 + 136) ^ v41;
        v42 = v66;
      }
      else
      {
        v42 = *(_WORD *)(v17 + 8);
      }
      v43 = v39 + *(_QWORD *)(v17 - 16) - v42;
    }
    else
    {
      v43 = 16LL * v39;
    }
    if ( v43 + v17 >= v8 )
    {
      v11 = *(_DWORD *)(v8 - 8);
      if ( (v13 & 0x3C000102) != 0 )
        goto LABEL_17;
      v44 = *(_BYTE *)(v8 - 1);
      if ( v44 == 5 )
      {
        v45 = 16 * *(unsigned __int8 *)(v8 - 2);
      }
      else if ( (v44 & 0x40) != 0 )
      {
        v45 = 16 * (v44 & 0x3F);
      }
      else
      {
        v45 = 0;
      }
      v46 = v45;
      v64 = v45;
      v47 = v45 + v7;
      if ( v47 < v7 )
      {
LABEL_42:
        v30 = -1073741801;
        goto LABEL_43;
      }
      v7 = v47;
      if ( v44 == 5 )
        v48 = v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14);
      else
        v48 = 0LL;
      if ( (int)RtlpCallInterceptRoutine(v11, a1, v8, 5, v48) >= 0 )
      {
        v49 = *(_BYTE *)(v17 + 15);
        if ( v49 == 4 )
        {
          if ( (v13 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
            RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
          if ( *(_DWORD *)(a1 + 124) )
          {
            v50 = *(_DWORD *)(v17 + 8) ^ *(_DWORD *)(a1 + 136);
            *(_DWORD *)(v17 + 8) = v50;
            if ( HIBYTE(v50) != ((unsigned __int8)v50 ^ (unsigned __int8)(BYTE1(v50) ^ BYTE2(v50))) )
              RtlpAnalyzeHeapFailure(a1, v17);
          }
          v10 = v64;
          v51 = *(_WORD *)(v17 + 8) - v64;
          *(_WORD *)(v17 + 8) = v51;
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v17 + 11) = v51 ^ *(_BYTE *)(v17 + 10) ^ HIBYTE(v51);
            *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          if ( (v13 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
            RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
        }
        else
        {
          if ( v49 == 5 )
          {
            v52 = *(unsigned __int16 *)(v17 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
          }
          else if ( (v49 & 0x40) != 0 )
          {
            v52 = *(unsigned __int16 *)(16LL * (v49 & 0x3F) + v17 + 12);
          }
          else if ( (v49 & 0x3F) == 0x3F )
          {
            if ( v49 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v55 = *(_DWORD *)(v17 + 8);
                LOWORD(v67) = v55;
                if ( (v55 & *(_DWORD *)(a1 + 124)) != 0 )
                  v67 = *(_DWORD *)(a1 + 136) ^ v55;
                v54 = v67;
              }
              else
              {
                v54 = *(_WORD *)(v17 + 8);
              }
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v17 + 8) ^ a1 ^ (v17 >> 4)) )
                v53 = 0LL;
              else
                v53 = *(_QWORD *)(v17
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v17 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v17 >> 4)) >> 12));
              v54 = *(_WORD *)(v53 + 36);
            }
            v52 = *(_QWORD *)(16LL * v54 + v17);
          }
          else
          {
            v52 = v49 & 0x3F;
          }
          v56 = *(_BYTE *)(v17 + 15);
          if ( v56 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v59 = *(_DWORD *)(v17 + 8);
              LOWORD(v68) = v59;
              if ( (v59 & *(_DWORD *)(a1 + 124)) != 0 )
                v68 = *(_DWORD *)(a1 + 136) ^ v59;
              v58 = v68;
            }
            else
            {
              v58 = *(_WORD *)(v17 + 8);
            }
          }
          else
          {
            if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v17 + 8) ^ a1 ^ (v17 >> 4)) )
              v57 = 0LL;
            else
              v57 = *(_QWORD *)(v17
                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v17 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v17 >> 4)) >> 12));
            v58 = *(_WORD *)(v57 + 36);
          }
          v60 = v52 - v46;
          v10 = v64;
          if ( v60 >= 0x3F )
          {
            *(_QWORD *)(v17 + 16LL * v58) = v60;
            v61 = -65;
            if ( v56 >= 0 )
              v61 = 63;
            *(_BYTE *)(v17 + 15) = v61;
          }
          else
          {
            *(_BYTE *)(v17 + 15) = v60 | (v56 >> 7) & 0x80;
          }
        }
        v8 = v17 + 16;
LABEL_17:
        v18 = RtlpReAllocateHeap(a1, v13 | 2u, v8, v7);
        if ( (dword_1801663A8 & 1) != 0 && (dword_1801663A8 & 2) != 0 )
        {
          if ( NtCurrentPeb()->ProcessHeap )
          {
            v69 = RtlpHpEnvHandle;
            if ( a1 != *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v69) )
            {
              if ( !v18 )
              {
LABEL_40:
                v7 -= v10;
                if ( v11 )
                {
                  RtlSizeHeap(a1, 0, v8);
                  v63 = RtlpSetupExtendedBlock(a1, v13, v8, v62, v10, v11);
                  RtlpCallInterceptRoutine(v11, a1, v63, 6, v8);
                }
                goto LABEL_42;
              }
              if ( (v13 & 0x10000000) == 0 )
              {
                RtlpHpStackTraceRemoveStack(a1, v8);
                RtlpHpStackTraceAddStack(a1, v18);
              }
            }
          }
        }
        if ( v18 )
        {
          v6 = v18;
          if ( v11 )
          {
            v6 = RtlpSetupExtendedBlock(a1, v13, v18, v19, v10, v11);
            RtlpCallInterceptRoutine(v11, a1, v6, 6, v18);
          }
          return v6;
        }
        goto LABEL_40;
      }
      v30 = -1073741819;
LABEL_43:
      NtCurrentTeb()->LastStatusValue = v30;
      v31 = NtCurrentTeb();
      v31->LastErrorValue = RtlNtStatusToDosError(v30);
      if ( (v13 & 4) != 0 )
      {
        ExceptionRecord.ExceptionCode = v30;
        ExceptionRecord.ExceptionAddress = RtlRaiseException;
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionRecord.NumberParameters = 1;
        ExceptionRecord.ExceptionFlags = 0;
        ExceptionRecord.ExceptionInformation[0] = v7;
        RtlRaiseException(&ExceptionRecord);
      }
      return v6;
    }
LABEL_88:
    RtlpLogHeapFailure(3, a1, v17, v8, 0LL, 0LL);
    v30 = -1073741811;
    goto LABEL_43;
  }
  return RtlDebugReAllocateHeap((void *)a1);
}
