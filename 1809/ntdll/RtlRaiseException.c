/*
 * XREFs of RtlRaiseException @ 0x1800087D0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 *     TppCallbackEpilog @ 0x180016F10 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18001725C (TppCallbackCheckThreadAfterCallback.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800237A0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180025950 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlGetActiveActivationContext @ 0x180031F40 (RtlGetActiveActivationContext.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x180033948 (RtlpAllocateActivationContextStackFrame.c)
 *     vDbgPrintExWithPrefixInternal @ 0x18004F348 (vDbgPrintExWithPrefixInternal.c)
 *     TpCheckTerminateWorker @ 0x18005A950 (TpCheckTerminateWorker.c)
 *     RtlDeactivateActivationContext @ 0x180076700 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180076808 (RtlpFreeActivationContextStackFrame.c)
 *     RtlpTpImpersonate @ 0x1800891B0 (RtlpTpImpersonate.c)
 *     PssNtValidateDescriptor @ 0x1800898B0 (PssNtValidateDescriptor.c)
 *     RaiseException @ 0x180098420 (RaiseException.c)
 *     KiRaiseUserExceptionDispatcher @ 0x1800A4100 (KiRaiseUserExceptionDispatcher.c)
 *     RtlpPossibleDeadlock @ 0x1800E9A20 (RtlpPossibleDeadlock.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800F5B88 (RtlpAllocateHeapRaiseException.c)
 *     RtlReportFatalFailure @ 0x1800FB4C0 (RtlReportFatalFailure.c)
 *     TppRaiseHandleStatus @ 0x180110858 (TppRaiseHandleStatus.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlpSameFunction @ 0x180002E70 (RtlpSameFunction.c)
 *     RtlpPopUserShadowStack @ 0x180003738 (RtlpPopUserShadowStack.c)
 *     RtlDispatchException @ 0x1800048E0 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x180006A90 (RtlLookupFunctionEntry.c)
 *     RtlLocateExtendedFeature2 @ 0x1800083F0 (RtlLocateExtendedFeature2.c)
 *     RtlInitializeExtendedContext2 @ 0x180008450 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x180008730 (RtlpValidateContextFlags.c)
 *     RtlpGetEntireXStateAreaLength @ 0x1800087A4 (RtlpGetEntireXStateAreaLength.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     RtlpUnwindEpilogue @ 0x18009F448 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x18009F66C (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A2ED0 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x1800A43F0 (RtlpCaptureContext2.c)
 *     RtlRestoreContext @ 0x1800A4560 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A4A60 (RtlpGuardSynchronizeRestorePc.c)
 *     _alloca_probe @ 0x1800A5230 (_alloca_probe.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  ULONG64 v1; // rdi
  ULONG v2; // esi
  __int64 v3; // r10
  __int64 v4; // r11
  int v5; // eax
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  NTSTATUS v11; // edi
  DWORD64 v12; // rsi
  _CONTEXT_EX *v13; // rax
  unsigned __int64 v14; // rdx
  PCONTEXT_EX v15; // r11
  __int64 Offset; // r14
  unsigned __int64 v17; // r12
  char *v18; // r14
  char v19; // r10
  unsigned int v20; // r13d
  unsigned int v21; // r8d
  _BYTE *v22; // rax
  _BYTE *v23; // rcx
  int v24; // edi
  __int64 v25; // r15
  char v26; // cl
  char *v27; // r8
  PCONTEXT_EX v28; // rax
  unsigned int v29; // r13d
  unsigned int v30; // r15d
  _BYTE *v31; // r14
  __int64 v32; // rdi
  char v33; // r12
  unsigned __int8 v34; // cl
  __int64 v35; // r9
  unsigned int v36; // ecx
  PEXCEPTION_RECORD v37; // rdi
  EXCEPTION_RECORD *v38; // rcx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  DWORD64 v42; // rax
  int v43; // edx
  unsigned int v44; // r12d
  unsigned __int8 v45; // cl
  int v46; // eax
  __int64 v47; // rax
  int v48; // eax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rdi
  char v51; // al
  char v52; // al
  int v53; // eax
  char v54; // cl
  unsigned int v55; // ecx
  __int64 ExtendedFeature2; // rax
  __int16 v57; // cx
  unsigned int v58; // r10d
  ULONG v59; // ecx
  unsigned int v60; // r9d
  unsigned int v61; // r8d
  unsigned __int16 v62; // cx
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int v68; // r9d
  __int64 v69; // rax
  __int64 v70; // rax
  _DWORD *v71; // rax
  unsigned int v72; // ecx
  DWORD64 *v73; // rax
  __int64 v74; // r15
  __int64 v75; // rcx
  bool v76; // cf
  bool v77; // zf
  char v78; // al
  _QWORD *v79; // r8
  BOOLEAN v80; // r8
  int v81[2]; // [rsp+40h] [rbp+0h] BYREF
  DWORD64 v82; // [rsp+48h] [rbp+8h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+10h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+58h] [rbp+18h] BYREF
  PEXCEPTION_RECORD ExceptionRecorda; // [rsp+60h] [rbp+20h]
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+70h] [rbp+30h] BYREF

  v1 = 0LL;
  ExceptionRecorda = ExceptionRecord;
  v2 = 1048587;
  if ( !NtCurrentPeb()->BeingDebugged )
  {
    if ( MEMORY[0x7FFE03D8] )
    {
      v2 = 1048651;
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
        v1 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
    }
  }
  if ( (int)RtlpValidateContextFlags(v2, v81) < 0 )
  {
    v6 = (unsigned int)v81[0];
  }
  else
  {
    v5 = 1256;
    if ( (v81[0] & 2) != 0 )
    {
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
        v3 = v1 & (v4 | MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]);
      v5 = RtlpGetEntireXStateAreaLength(v3) + 800;
    }
    v6 = (unsigned int)(v5 + 15);
  }
  v7 = v6 + 15;
  if ( v6 + 15 < v6 )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = alloca(v8);
  v10 = alloca(v8);
  v11 = RtlInitializeExtendedContext2((PCONTEXT)v81, v2, &ContextEx, v1);
  RtlpCaptureContext2(v81);
  v12 = HistoryTable.Entry[11].ImageBase;
  HistoryTable.Count = 0;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  v13 = (_CONTEXT_EX *)RtlLookupFunctionEntry(HistoryTable.Entry[11].ImageBase, &ImageBase, &HistoryTable);
  ContextEx = v13;
  v15 = v13;
  if ( !v13 )
LABEL_167:
    RtlRaiseStatus(v11);
  Offset = (unsigned int)v13->Legacy.Offset;
  v17 = ImageBase;
  v81[0] = 0;
  v18 = (char *)(ImageBase + Offset);
  v19 = *v18;
  v20 = *v18 & 7;
  if ( v20 < 2 )
  {
    v21 = 0;
    v22 = v18 + 2;
    v23 = v18;
    if ( !v18[2] )
    {
      while ( (*v23 & 0x20) != 0 )
      {
        v68 = (unsigned __int8)*v22;
        ++v21;
        v14 = *v22 & 1;
        if ( v21 > 0x20 )
LABEL_161:
          RtlRaiseStatus(-1073741569);
        v69 = v68 + 1;
        if ( !(_DWORD)v14 )
          v69 = v68;
        v23 = (_BYTE *)(ImageBase + *(unsigned int *)&v23[2 * v69 + 12]);
        v22 = v23 + 2;
        if ( v23[2] )
          goto LABEL_16;
      }
      v81[0] = 1;
    }
  }
LABEL_16:
  v24 = v12 - ImageBase;
  if ( (v18[3] & 0xF) == 0 )
    goto LABEL_17;
  v44 = v24 - v15->All.Offset;
  if ( v44 >= (unsigned __int8)v18[1] || (v19 & 0x20) != 0 )
  {
    v45 = v18[3];
    v46 = v45;
    v17 = ImageBase;
LABEL_58:
    v82 = *(&HistoryTable.Entry[3].ImageBase + (v45 & 0xF)) - (v46 & 0xFFFFFFF0);
    goto LABEL_18;
  }
  v74 = 0LL;
  if ( v18[2] )
  {
    do
    {
      v75 = *(unsigned __int16 *)&v18[2 * v74 + 4];
      if ( (BYTE1(v75) & 0xF) == 3 )
        break;
      v74 = (unsigned int)RtlpUnwindOpSlots(v75, v14) + (unsigned int)v74;
    }
    while ( (unsigned int)v74 < (unsigned __int8)v18[2] );
    v15 = ContextEx;
  }
  v76 = v44 < (unsigned __int8)v18[2 * v74 + 4];
  v17 = ImageBase;
  if ( !v76 )
  {
    v46 = (unsigned __int8)v18[3];
    v45 = v18[3];
    goto LABEL_58;
  }
LABEL_17:
  v82 = HistoryTable.Entry[5].ImageBase;
LABEL_18:
  if ( v81[0] )
    goto LABEL_31;
  v14 = 0LL;
  if ( v20 >= 2 )
  {
    if ( !v18[2] )
      goto LABEL_31;
    v57 = HIBYTE(*((_WORD *)v18 + 2));
    if ( (v57 & 0xF) != 6 )
      goto LABEL_31;
    v58 = (unsigned __int8)v18[4];
    if ( (v57 & 0x10) != 0 )
    {
      v59 = v15->All.Length - v58;
      LOBYTE(v14) = v24 - v59 < v58;
    }
    else
    {
      v59 = 0;
    }
    if ( !(_DWORD)v14 )
    {
      v60 = (unsigned __int8)v18[2];
      v61 = 1;
      if ( v60 <= 1 )
        goto LABEL_31;
      while ( 1 )
      {
        v62 = *(_WORD *)&v18[2 * v61 + 4];
        if ( (HIBYTE(v62) & 0xF) != 6 )
          goto LABEL_31;
        v14 = (unsigned __int8)v62 + (v62 >> 12 << 8);
        if ( !(_DWORD)v14 )
          goto LABEL_31;
        v59 = v15->All.Length - v14;
        if ( v24 - v59 < v58 )
          break;
        if ( ++v61 >= v60 )
          goto LABEL_31;
      }
    }
    RtlpUnwindEpilogue(v17, v14, v24 - v59, (_DWORD)v15, (__int64)v81, 0LL, 0LL, 0LL);
    goto LABEL_43;
  }
  v25 = 0LL;
  v14 = v12;
  if ( *(_BYTE *)v12 == 72 )
  {
    v52 = *(_BYTE *)(v12 + 1);
    if ( v52 == -125 && *(_BYTE *)(v12 + 2) == 0xC4 )
      goto LABEL_113;
    if ( v52 == -127 && *(_BYTE *)(v12 + 2) == 0xC4 )
      goto LABEL_81;
  }
  if ( (*(_BYTE *)v12 & 0xFE) == 0x48 && *(_BYTE *)(v12 + 1) == 0x8D )
  {
    v53 = *(_BYTE *)(v12 + 2) & 7;
    v25 = v53 | (8 * (*(_BYTE *)v12 & 1u));
    if ( v53 | (8 * (*(_BYTE *)v12 & 1)) )
    {
      if ( (_DWORD)v25 == (v18[3] & 0xF) )
      {
        v54 = *(_BYTE *)(v12 + 2) & 0xF8;
        if ( v54 != 96 )
        {
          if ( v54 != -96 )
            goto LABEL_22;
LABEL_81:
          v14 = v12 + 7;
          goto LABEL_22;
        }
LABEL_113:
        v14 = v12 + 4;
      }
    }
  }
LABEL_22:
  while ( 1 )
  {
    v26 = *(_BYTE *)v14;
    if ( (*(_BYTE *)v14 & 0xF8) != 0x58 )
      break;
    v47 = 1LL;
LABEL_121:
    v14 += v47;
  }
  v27 = (char *)(v14 + 1);
  if ( (v26 & 0xF0) == 0x40 && (*v27 & 0xF8) == 0x58 )
  {
    v47 = 2LL;
    goto LABEL_121;
  }
  if ( v26 == -14 )
  {
    v26 = *v27;
    ++v14;
  }
  if ( (unsigned __int8)(v26 + 62) <= 1u || v26 == -13 && (v26 = -13, *(_BYTE *)(v14 + 1) == 0xC3) )
  {
LABEL_71:
    if ( (*(_BYTE *)v12 & 0xF8) != 0x48 )
      goto LABEL_75;
    v51 = *(_BYTE *)(v12 + 1);
    switch ( v51 )
    {
      case -125:
        HistoryTable.Entry[5].ImageBase += *(char *)(v12 + 3);
LABEL_74:
        v12 += 4LL;
        goto LABEL_75;
      case -127:
        HistoryTable.Entry[5].ImageBase += *(unsigned __int8 *)(v12 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v12 + 4) | (*(unsigned __int16 *)(v12 + 5) << 8)) << 8);
        break;
      case -115:
        v78 = *(_BYTE *)(v12 + 2) & 0xF8;
        if ( v78 == 96 )
        {
          HistoryTable.Entry[5].ImageBase = *(&HistoryTable.Entry[3].ImageBase + v25);
          HistoryTable.Entry[5].ImageBase += *(char *)(v12 + 3);
          goto LABEL_74;
        }
        if ( v78 != -96 )
        {
          while ( 1 )
          {
LABEL_75:
            if ( (*(_BYTE *)v12 & 0xF8) == 0x58 )
            {
              *(&HistoryTable.Entry[3].ImageBase + (*(_BYTE *)v12 & 7)) = *(_QWORD *)HistoryTable.Entry[5].ImageBase;
              v70 = 1LL;
            }
            else
            {
              if ( (*(_BYTE *)v12 & 0xF0) != 0x40 || (*(_BYTE *)(v12 + 1) & 0xF8) != 0x58 )
              {
                HistoryTable.Entry[11].ImageBase = *(_QWORD *)HistoryTable.Entry[5].ImageBase;
                HistoryTable.Entry[5].ImageBase += 8LL;
                RtlpPopUserShadowStack((__int64)v81);
                goto LABEL_43;
              }
              *(&HistoryTable.Entry[3].ImageBase + (*(_BYTE *)(v12 + 1) & 7 | (8LL * (*(_BYTE *)v12 & 1)))) = *(_QWORD *)HistoryTable.Entry[5].ImageBase;
              v70 = 2LL;
            }
            HistoryTable.Entry[5].ImageBase += 8LL;
            v12 += v70;
          }
        }
        HistoryTable.Entry[5].ImageBase = *(&HistoryTable.Entry[3].ImageBase + v25)
                                        + (*(unsigned __int8 *)(v12 + 3) | ((*(unsigned __int8 *)(v12 + 4) | (*(unsigned __int16 *)(v12 + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_75;
    }
    v12 += 7LL;
    goto LABEL_75;
  }
  if ( ((v26 + 23) & 0xFD) != 0 )
  {
    if ( v26 == -1 )
    {
      v26 = -1;
      if ( *(_BYTE *)(v14 + 1) == 37 )
        goto LABEL_71;
    }
    if ( (v26 & 0xF8) == 0x48 && *(_BYTE *)(v14 + 1) == 0xFF )
    {
      v77 = (*(_BYTE *)(v14 + 2) & 0x38) == 32;
      goto LABEL_70;
    }
  }
  else
  {
    if ( v26 == -21 )
      v48 = *(char *)(v14 + 1) + 2;
    else
      v48 = *(_DWORD *)(v14 + 1) + 5;
    v49 = (unsigned int)v15->All.Offset;
    v50 = v14 - v17 + v48;
    if ( v50 < v49 || v50 >= v15->All.Length )
    {
      v71 = RtlpSameFunction((__int64)v15, v17, (void *)(v14 + v48));
      if ( !v71 )
        goto LABEL_71;
      v77 = v50 == *v71;
    }
    else
    {
      if ( v50 != v49 )
        goto LABEL_31;
      v77 = (*v18 & 0x20) == 0;
    }
LABEL_70:
    if ( v77 )
      goto LABEL_71;
  }
LABEL_31:
  v28 = ContextEx;
  v29 = 0;
  while ( 2 )
  {
    v30 = v12 - ImageBase - v28->All.Offset;
    v31 = (_BYTE *)(ImageBase + (unsigned int)v28->Legacy.Offset);
    v32 = 0LL;
    v33 = 0;
    v34 = v31[2];
    if ( v34 )
    {
      while ( 2 )
      {
        v35 = (unsigned __int8)v31[2 * v32 + 5] >> 4;
        if ( v30 < (unsigned __int8)v31[2 * v32 + 4] )
        {
          v32 = (unsigned int)RtlpUnwindOpSlots(*(unsigned __int16 *)&v31[2 * v32 + 4], v14) + (unsigned int)v32;
        }
        else
        {
          v36 = v31[2 * v32 + 5] & 0xF;
          if ( v36 > 5 )
          {
            v55 = v36 - 6;
            if ( !v55 )
            {
              LODWORD(v32) = v32 + 1;
              goto LABEL_38;
            }
            v63 = v55 - 1;
            if ( !v63 )
            {
              LODWORD(v32) = v32 + 2;
              goto LABEL_38;
            }
            v64 = v63 - 1;
            if ( v64 )
            {
              v72 = v64 - 1;
              if ( v72 )
              {
                if ( v72 != 1 )
                  goto LABEL_161;
                v33 = 1;
                v73 = (DWORD64 *)(HistoryTable.Entry[5].ImageBase + 8);
                if ( !(_DWORD)v35 )
                  v73 = (DWORD64 *)HistoryTable.Entry[5].ImageBase;
                HistoryTable.Entry[11].ImageBase = *v73;
                HistoryTable.Entry[5].ImageBase = *(_QWORD *)(((_DWORD)v35 != 0 ? 8 : 0)
                                                            + HistoryTable.Entry[5].ImageBase
                                                            + 24);
                goto LABEL_38;
              }
              v32 = (unsigned int)(v32 + 2);
              v14 = (unsigned __int64)*(unsigned __int16 *)&v31[2 * v32 + 4] << 16;
              v79 = (_QWORD *)(v14 + v82 + *(unsigned __int16 *)&v31[2 * (unsigned int)(v32 - 1) + 4]);
              v65 = 4LL * (unsigned int)v35;
              *(_QWORD *)&v81[v65 + 104] = *v79;
              v66 = v79[1];
            }
            else
            {
              v32 = (unsigned int)(v32 + 1);
              v14 = v82 + 16LL * *(unsigned __int16 *)&v31[2 * v32 + 4];
              v65 = 4LL * (unsigned int)v35;
              *(_QWORD *)&v81[v65 + 104] = *(_QWORD *)v14;
              v66 = *(_QWORD *)(v14 + 8);
            }
            *(_QWORD *)&v81[v65 + 106] = v66;
            goto LABEL_38;
          }
          if ( v36 == 5 )
          {
            v32 = (unsigned int)(v32 + 2);
            v14 = *(unsigned __int16 *)&v31[2 * (unsigned int)(v32 - 1) + 4];
            v42 = *(_QWORD *)(v14 + ((unsigned __int64)*(unsigned __int16 *)&v31[2 * v32 + 4] << 16) + v82);
            goto LABEL_51;
          }
          if ( (v31[2 * v32 + 5] & 0xF) == 0 )
          {
            *(&HistoryTable.Entry[3].ImageBase + v35) = *(_QWORD *)HistoryTable.Entry[5].ImageBase;
            HistoryTable.Entry[5].ImageBase += 8LL;
            goto LABEL_38;
          }
          v39 = v36 - 1;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( v41 )
              {
                if ( v41 != 1 )
                  goto LABEL_161;
                v14 = v82;
                LODWORD(v32) = v32 + 1;
                v42 = *(_QWORD *)(v82 + 8LL * *(unsigned __int16 *)&v31[2 * (unsigned int)v32 + 4]);
LABEL_51:
                *(&HistoryTable.Entry[3].ImageBase + v35) = v42;
              }
              else
              {
                HistoryTable.Entry[5].ImageBase = *(&HistoryTable.Entry[3].ImageBase + (v31[3] & 0xF));
                HistoryTable.Entry[5].ImageBase -= v31[3] & 0xF0;
              }
            }
            else
            {
              HistoryTable.Entry[5].ImageBase += (unsigned int)(8 * v35 + 8);
            }
          }
          else
          {
            v32 = (unsigned int)(v32 + 1);
            v43 = *(unsigned __int16 *)&v31[2 * v32 + 4];
            if ( (_DWORD)v35 )
            {
              v32 = (unsigned int)(v32 + 1);
              v14 = (*(unsigned __int16 *)&v31[2 * v32 + 4] << 16) + v43;
            }
            else
            {
              v14 = (unsigned int)(8 * v43);
            }
            HistoryTable.Entry[5].ImageBase += (unsigned int)v14;
          }
LABEL_38:
          v32 = (unsigned int)(v32 + 1);
        }
        v34 = v31[2];
        if ( (unsigned int)v32 >= v34 )
          break;
        continue;
      }
    }
    if ( (*v31 & 0x20) != 0 )
    {
      v67 = (unsigned int)v34 + 1;
      if ( (v34 & 1) == 0 )
        v67 = v34;
      ++v29;
      v28 = (PCONTEXT_EX)&v31[2 * v67 + 4];
      if ( v29 > 0x20 )
        goto LABEL_161;
      continue;
    }
    break;
  }
  if ( !v33 )
  {
    HistoryTable.Entry[11].ImageBase = *(_QWORD *)HistoryTable.Entry[5].ImageBase;
    HistoryTable.Entry[5].ImageBase += 8LL;
    if ( (HistoryTable.Count & 0x100040) == 0x100040 )
    {
      ExtendedFeature2 = RtlLocateExtendedFeature2((__int64)&STACK[0x510], 11, 2147353560LL, 0LL);
      if ( ExtendedFeature2 )
      {
        if ( (*(_BYTE *)ExtendedFeature2 & 1) != 0 )
          *(_QWORD *)(ExtendedFeature2 + 8) += 8LL;
      }
    }
  }
LABEL_43:
  v37 = ExceptionRecorda;
  ExceptionRecorda->ExceptionAddress = (void *)HistoryTable.Entry[11].ImageBase;
  RtlpGuardSynchronizeRestorePc(HistoryTable.Entry[11].ImageBase);
  v38 = v37;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v80 = 1;
    goto LABEL_166;
  }
  if ( !RtlDispatchException(v37, (PCONTEXT)v81) )
  {
    v80 = 0;
    v38 = v37;
LABEL_166:
    v11 = ZwRaiseException(v38, (PCONTEXT)v81, v80);
    goto LABEL_167;
  }
  RtlRestoreContext((PCONTEXT)v81, v37);
}
