/*
 * XREFs of RtlpReAllocateHeapInternal @ 0x18000C3B0
 * Callers:
 *     RtlpHpTagReAllocateHeap @ 0x18000A49C (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x18000C1D4 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlReAllocateHeap @ 0x18000C320 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     RtlpReAllocateHeap @ 0x18000C610 (RtlpReAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpHpReAllocateHeap @ 0x18001556C (RtlpHpReAllocateHeap.c)
 *     RtlSizeHeap @ 0x1800178D0 (RtlSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180017DC4 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpHpStackLoggingEnabled @ 0x180018410 (RtlpHpStackLoggingEnabled.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18005AF08 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180063D68 (RtlpHpMetadataHeapCtxGet.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     RtlpCallInterceptRoutine @ 0x1800F2E74 (RtlpCallInterceptRoutine.c)
 *     RtlpSetupExtendedBlock @ 0x1800F5EB4 (RtlpSetupExtendedBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpStackTraceAddStack @ 0x18010449C (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180105188 (RtlpHpStackTraceRemoveStack.c)
 *     RtlDebugReAllocateHeap @ 0x1801081A8 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateLFHBlock @ 0x18010A7D8 (RtlpValidateLFHBlock.c)
 */

__int64 __fastcall RtlpReAllocateHeapInternal(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        _WORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbp
  unsigned __int16 v10; // r12
  _QWORD *v11; // r15
  int v12; // eax
  int v13; // r14d
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  int v18; // r9d
  int v20; // eax
  __int64 v21; // r11
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r14d
  unsigned __int64 v26; // r12
  __int64 Heap; // rax
  int v28; // r12d
  struct _TEB *v29; // rbx
  struct _TEB *v30; // rbx
  _QWORD *v31; // rax
  bool v32; // zf
  int v33; // r12d
  struct _TEB *v34; // rdi
  __int64 v35; // r9
  int v36; // ecx
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
  char v49; // dl
  int v50; // edx
  __int16 v51; // cx
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  unsigned __int16 v54; // ax
  int v55; // eax
  __int64 v56; // rax
  unsigned __int16 v57; // ax
  int v58; // eax
  unsigned __int64 v59; // r8
  char v60; // al
  int v61; // r9d
  int v62; // eax
  unsigned __int16 v63; // [rsp+30h] [rbp-128h]
  int v64; // [rsp+40h] [rbp-118h]
  int v65; // [rsp+40h] [rbp-118h]
  int v66; // [rsp+40h] [rbp-118h]
  int v67; // [rsp+40h] [rbp-118h]
  __int128 v68; // [rsp+50h] [rbp-108h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-F8h] BYREF

  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  v10 = 0;
  v11 = 0LL;
  if ( a3 )
  {
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
    {
      v20 = RtlpHpConvertFlagsToSegmentFlags(a2);
      v22 = *(_DWORD *)(a1 + 220);
      v23 = 0;
      if ( v22 )
        LOBYTE(v23) = v22 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
      v24 = v8;
      v25 = v20 | 1;
      if ( !v23 )
        v25 = v20;
      if ( (RtlpHpAppCompatFlags & 2) != 0 )
      {
        v26 = *(_QWORD *)(v8 - 16);
        v24 = v8 - v26;
      }
      else
      {
        v26 = 0LL;
      }
      if ( v26 + v7 < v7
        || (Heap = RtlpHpReAllocateHeap(a1, v25, v24, (int)v26 + (int)v7, (__int64)a5, v21),
            v11 = (_QWORD *)Heap,
            (unsigned __int64)(Heap - 1) > 0xFFFFFFFFFFFFFFFDuLL) )
      {
        v32 = v11 == 0LL;
        v33 = -1073741801;
        v11 = 0LL;
        if ( !v32 )
          v33 = -1073741819;
        NtCurrentTeb()->LastStatusValue = v33;
        v34 = NtCurrentTeb();
        v34->LastErrorValue = RtlNtStatusToDosError(v33);
        if ( v25 < 0 || *(int *)(a1 + 20) < 0 )
        {
          ExceptionRecord.ExceptionCode = v33;
          ExceptionRecord.ExceptionAddress = RtlRaiseException;
          ExceptionRecord.ExceptionRecord = 0LL;
          ExceptionRecord.NumberParameters = 1;
          ExceptionRecord.ExceptionFlags = 0;
          ExceptionRecord.ExceptionInformation[0] = v7;
          RtlRaiseException(&ExceptionRecord);
        }
      }
      else
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          v31 = (_QWORD *)(v26 + Heap);
          *(v31 - 2) = v26;
          if ( v26 > 0x10 )
            *v11 = v26;
          v11 = v31;
        }
        if ( a5 )
          *a5 -= v26;
      }
      if ( (unsigned int)RtlpHpStackLoggingEnabled(a1) && v11 )
      {
        RtlpHpStackTraceRemoveStack(a1, v8);
        RtlpHpStackTraceAddStack(a1, v11);
      }
      return (__int64)v11;
    }
    else
    {
      if ( a5 )
        *a5 = 0LL;
      if ( a6 )
        *a6 = 0;
      v12 = *(_DWORD *)(a1 + 116);
      v13 = v12 | a2;
      if ( (v12 & 0x1000000) == 0 )
      {
        if ( !dword_18015F3E8 )
        {
          v14 = *(_QWORD *)(a1 + 392);
          v15 = v14;
          if ( (v14 || (v15 = qword_1801634C8) != 0) && a4 > v15 )
          {
            v35 = *(_QWORD *)(a1 + 400);
            if ( v35 )
              RtlpLogHeapFailure(20, a1, 0, v35, v7, v14);
            goto LABEL_38;
          }
        }
        if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
        {
          v16 = RtlpProbeUserBufferSafe(a1, a3);
          goto LABEL_16;
        }
        if ( (a3 & 0xF) != 0 )
        {
          v36 = 9;
        }
        else
        {
          v16 = a3 - 16;
          _m_prefetchw((const void *)(a3 - 16));
          if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
            v16 -= 16LL * *(unsigned __int8 *)(v16 + 14);
          if ( (*(_BYTE *)(v16 + 15) & 0x3F) != 0 )
          {
LABEL_16:
            if ( !v16 )
            {
              v28 = -1073741819;
              goto LABEL_39;
            }
            if ( *(_BYTE *)(v8 - 1) != 5 )
              goto LABEL_18;
            if ( *(char *)(v16 + 15) >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v37 = *(_DWORD *)(v16 + 8) ^ *(_DWORD *)(a1 + 136);
                if ( HIBYTE(v37) != ((unsigned __int8)v37 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v16 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v37))) )
                  goto LABEL_86;
              }
            }
            else if ( !(unsigned __int8)RtlpValidateLFHBlock(a1, v16) )
            {
              goto LABEL_86;
            }
            if ( *(char *)(v16 + 15) >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v40 = *(_DWORD *)(v16 + 8);
                LOWORD(v64) = v40;
                if ( (v40 & *(_DWORD *)(a1 + 124)) != 0 )
                  v64 = *(_DWORD *)(a1 + 136) ^ v40;
                v39 = v64;
              }
              else
              {
                v39 = *(_WORD *)(v16 + 8);
              }
            }
            else
            {
              if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v16 + 8) ^ (v16 >> 4)) )
                v38 = 0LL;
              else
                v38 = *(_QWORD *)(v16
                                - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v16 + 8) ^ (unsigned int)(v16 >> 4)) >> 12));
              v39 = *(_WORD *)(v38 + 36);
            }
            if ( *(_BYTE *)(v16 + 15) == 4 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v41 = *(_DWORD *)(v16 + 8);
                LOWORD(v65) = v41;
                if ( (v41 & *(_DWORD *)(a1 + 124)) != 0 )
                  v65 = *(_DWORD *)(a1 + 136) ^ v41;
                v42 = v65;
              }
              else
              {
                v42 = *(_WORD *)(v16 + 8);
              }
              v43 = v39 + *(_QWORD *)(v16 - 16) - v42;
            }
            else
            {
              v43 = 16LL * v39;
            }
            if ( v43 + v16 >= v8 )
            {
              LODWORD(v11) = *(_DWORD *)(v8 - 8);
              if ( (v13 & 0x3C000102) != 0 )
                goto LABEL_18;
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
              v63 = v45;
              v47 = v45 + v7;
              if ( v47 < v7 )
              {
LABEL_38:
                v28 = -1073741801;
                goto LABEL_39;
              }
              v7 = v47;
              if ( v44 == 5 )
                v48 = v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14);
              else
                v48 = 0LL;
              if ( (int)RtlpCallInterceptRoutine((_DWORD)v11, a1, v8, 5, v48) >= 0 )
              {
                v49 = *(_BYTE *)(v16 + 15);
                if ( v49 == 4 )
                {
                  if ( (v13 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
                    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v50 = *(_DWORD *)(v16 + 8) ^ *(_DWORD *)(a1 + 136);
                    *(_DWORD *)(v16 + 8) = v50;
                    if ( HIBYTE(v50) != ((unsigned __int8)v50 ^ (unsigned __int8)(BYTE1(v50) ^ BYTE2(v50))) )
                      RtlpAnalyzeHeapFailure(a1, v16);
                  }
                  v10 = v63;
                  v51 = *(_WORD *)(v16 + 8) - v63;
                  *(_WORD *)(v16 + 8) = v51;
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    *(_BYTE *)(v16 + 11) = v51 ^ *(_BYTE *)(v16 + 10) ^ HIBYTE(v51);
                    *(_DWORD *)(v16 + 8) ^= *(_DWORD *)(a1 + 136);
                  }
                  if ( (v13 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
                    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
                }
                else
                {
                  if ( v49 == 5 )
                  {
                    v52 = *(unsigned __int16 *)(v16 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
                  }
                  else if ( (v49 & 0x40) != 0 )
                  {
                    v52 = *(unsigned __int16 *)(16LL * (v49 & 0x3F) + v16 + 12);
                  }
                  else if ( (v49 & 0x3F) == 0x3F )
                  {
                    if ( v49 >= 0 )
                    {
                      if ( *(_DWORD *)(a1 + 124) )
                      {
                        v55 = *(_DWORD *)(v16 + 8);
                        LOWORD(v66) = v55;
                        if ( (v55 & *(_DWORD *)(a1 + 124)) != 0 )
                          v66 = *(_DWORD *)(a1 + 136) ^ v55;
                        v54 = v66;
                      }
                      else
                      {
                        v54 = *(_WORD *)(v16 + 8);
                      }
                    }
                    else
                    {
                      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v16 + 8) ^ (v16 >> 4)) )
                        v53 = 0LL;
                      else
                        v53 = *(_QWORD *)(v16
                                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v16 + 8) ^ (unsigned int)(v16 >> 4)) >> 12));
                      v54 = *(_WORD *)(v53 + 36);
                    }
                    v49 = *(_BYTE *)(v16 + 15);
                    v52 = *(_QWORD *)(16LL * v54 + v16);
                  }
                  else
                  {
                    v52 = v49 & 0x3F;
                  }
                  if ( v49 >= 0 )
                  {
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v58 = *(_DWORD *)(v16 + 8);
                      LOWORD(v67) = v58;
                      if ( (v58 & *(_DWORD *)(a1 + 124)) != 0 )
                        v67 = *(_DWORD *)(a1 + 136) ^ v58;
                      v57 = v67;
                    }
                    else
                    {
                      v57 = *(_WORD *)(v16 + 8);
                    }
                  }
                  else
                  {
                    if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v16 + 8) ^ (v16 >> 4)) )
                      v56 = 0LL;
                    else
                      v56 = *(_QWORD *)(v16
                                      - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v16 + 8) ^ (unsigned int)(v16 >> 4)) >> 12));
                    v57 = *(_WORD *)(v56 + 36);
                  }
                  v59 = v52 - v46;
                  v10 = v63;
                  if ( v59 >= 0x3F )
                  {
                    *(_QWORD *)(v16 + 16LL * v57) = v59;
                    v60 = -65;
                    if ( v49 >= 0 )
                      v60 = 63;
                    *(_BYTE *)(v16 + 15) = v60;
                  }
                  else
                  {
                    *(_BYTE *)(v16 + 15) = v59 | (v49 >> 7) & 0x80;
                  }
                }
                v8 = v16 + 16;
LABEL_18:
                v17 = RtlpReAllocateHeap(a1, v13 | 2u, v8, v7);
                if ( (dword_180166388 & 1) != 0 && (dword_180166388 & 2) != 0 )
                {
                  if ( NtCurrentPeb()->ProcessHeap )
                  {
                    v68 = RtlpHpEnvHandle;
                    if ( a1 != *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v68) )
                    {
                      if ( !v17 )
                      {
LABEL_36:
                        v7 -= v10;
                        if ( (_DWORD)v11 )
                        {
                          RtlSizeHeap(a1, 0LL, v8);
                          v62 = RtlpSetupExtendedBlock(a1, v13, v8, v61, v10, (_DWORD)v11);
                          RtlpCallInterceptRoutine((_DWORD)v11, a1, v62, 6, v8);
                        }
                        goto LABEL_38;
                      }
                      if ( (v13 & 0x10000000) == 0 )
                      {
                        RtlpHpStackTraceRemoveStack(a1, v8);
                        RtlpHpStackTraceAddStack(a1, v17);
                      }
                    }
                  }
                }
                if ( v17 )
                {
                  v6 = v17;
                  if ( (_DWORD)v11 )
                  {
                    v6 = RtlpSetupExtendedBlock(a1, v13, v17, v18, v10, (_DWORD)v11);
                    RtlpCallInterceptRoutine((_DWORD)v11, a1, v6, 6, v17);
                  }
                  return v6;
                }
                goto LABEL_36;
              }
              v28 = -1073741819;
LABEL_39:
              NtCurrentTeb()->LastStatusValue = v28;
              v29 = NtCurrentTeb();
              v29->LastErrorValue = RtlNtStatusToDosError(v28);
              if ( (v13 & 4) != 0 )
              {
                ExceptionRecord.ExceptionCode = v28;
                ExceptionRecord.ExceptionAddress = RtlRaiseException;
                ExceptionRecord.ExceptionRecord = 0LL;
                ExceptionRecord.NumberParameters = 1;
                ExceptionRecord.ExceptionFlags = 0;
                ExceptionRecord.ExceptionInformation[0] = v7;
                RtlRaiseException(&ExceptionRecord);
              }
              return v6;
            }
LABEL_86:
            RtlpLogHeapFailure(3, a1, v16, v8, 0LL, 0LL);
            v28 = -1073741811;
            goto LABEL_39;
          }
          LODWORD(a3) = v16;
          v36 = 8;
        }
        RtlpLogHeapFailure(v36, a1, a3, 0, 0LL, 0LL);
        v16 = 0LL;
        goto LABEL_16;
      }
      return RtlDebugReAllocateHeap((void *)a1);
    }
  }
  else
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v30 = NtCurrentTeb();
    v30->LastErrorValue = RtlNtStatusToDosError(0);
    return 0LL;
  }
}
