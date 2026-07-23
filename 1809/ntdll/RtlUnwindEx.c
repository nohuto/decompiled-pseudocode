/*
 * XREFs of RtlUnwindEx @ 0x180005BF0
 * Callers:
 *     RtlUnwind @ 0x180003640 (RtlUnwind.c)
 *     __C_specific_handler @ 0x180090360 (__C_specific_handler.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A3FB0 (KiUserCallbackDispatcherHandler.c)
 *     __longjmp_internal @ 0x1800A6CA0 (__longjmp_internal.c)
 * Callees:
 *     RtlpSameFunction @ 0x180002E70 (RtlpSameFunction.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180002F20 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpPopUserShadowStack @ 0x180003738 (RtlpPopUserShadowStack.c)
 *     RtlGuardIsValidStackPointer @ 0x18000375C (RtlGuardIsValidStackPointer.c)
 *     RtlpGetStackLimits @ 0x180003870 (RtlpGetStackLimits.c)
 *     RtlVirtualUnwind @ 0x1800053B0 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x180006870 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x180006A90 (RtlLookupFunctionEntry.c)
 *     RtlLocateExtendedFeature2 @ 0x1800083F0 (RtlLocateExtendedFeature2.c)
 *     RtlInitializeExtendedContext2 @ 0x180008450 (RtlInitializeExtendedContext2.c)
 *     RtlpSanitizeContext @ 0x1800085F4 (RtlpSanitizeContext.c)
 *     RtlpValidateContextFlags @ 0x180008730 (RtlpValidateContextFlags.c)
 *     RtlpGetEntireXStateAreaLength @ 0x1800087A4 (RtlpGetEntireXStateAreaLength.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     LdrpValidateUserCallTarget @ 0x180090210 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180090260 (LdrpValidateUserCallTargetES.c)
 *     RtlpUnwindEpilogue @ 0x18009F448 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x18009F66C (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A2ED0 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x1800A4470 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x1800A4560 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A4A60 (RtlpGuardSynchronizeRestorePc.c)
 *     _alloca_probe @ 0x1800A5230 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1800A53C0 (RtlpExecuteHandlerForUnwind.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  _CONTEXT_EX *v6; // rsi
  ULONG64 v8; // rdi
  ULONG v9; // ebx
  __int64 v10; // r10
  __int64 v11; // r11
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  void *v17; // rsp
  PCONTEXT v18; // r13
  PCONTEXT v19; // r12
  struct _UNWIND_HISTORY_TABLE *v20; // rcx
  unsigned __int64 v21; // rdi
  _CONTEXT_EX *v22; // r14
  ULONG64 v23; // r15
  PRUNTIME_FUNCTION v24; // rbx
  unsigned __int64 v25; // r11
  __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  unsigned int v28; // ebx
  int v29; // r8d
  unsigned __int8 *v30; // rax
  _BYTE *v31; // rdx
  __int64 v32; // rdx
  char v33; // cl
  char *v34; // r8
  char v35; // cl
  char *v36; // rdx
  _DWORD *p_BeginAddress; // r15
  unsigned int v38; // r10d
  char v39; // r8
  _BYTE *v40; // rdi
  __int64 v41; // rbx
  unsigned int v42; // esi
  unsigned __int8 v43; // cl
  _BYTE *v44; // rdx
  __int64 v45; // r9
  DWORD64 *v46; // rcx
  _BYTE *v47; // r8
  int v48; // ecx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v49; // rbx
  int v50; // ecx
  int v51; // eax
  unsigned __int64 v52; // rax
  char *v53; // r8
  char v54; // al
  char v55; // dl
  DWORD64 *v56; // rcx
  unsigned __int64 v57; // rcx
  int v58; // edi
  unsigned int v59; // ecx
  struct _EXCEPTION_RECORD *v60; // r10
  int v61; // edx
  int v62; // edx
  struct _CONTEXT *v63; // rax
  int v64; // edx
  unsigned int v65; // edx
  struct _CONTEXT *v66; // rax
  unsigned int v67; // r14d
  char v68; // cl
  int v69; // eax
  DWORD64 v70; // rcx
  struct _EXCEPTION_RECORD *v71; // r14
  DWORD64 *p_Rip; // rcx
  int v73; // eax
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rbx
  __int64 v77; // rax
  unsigned __int64 v78; // rbx
  unsigned __int64 BeginAddress; // rcx
  char v80; // al
  int v81; // eax
  char v82; // dl
  __int64 ExtendedFeature2; // rax
  unsigned __int8 v84; // r8
  __int16 v85; // dx
  int v86; // r10d
  unsigned int v87; // r9d
  int v88; // edx
  unsigned int v89; // r11d
  unsigned __int16 v90; // dx
  int v91; // ecx
  DWORD64 Rip; // rax
  __int64 v93; // rdx
  M128A *v94; // rcx
  unsigned int v95; // eax
  unsigned __int64 v96; // rbx
  int v97; // eax
  __int64 v98; // r9
  unsigned __int64 v99; // rbx
  int v100; // eax
  __int64 v101; // rax
  ULONG64 v102; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v103; // rdi
  struct _CONTEXT *v104; // r14
  PEXCEPTION_ROUTINE v105; // rax
  _DWORD *v106; // rax
  char v107; // r9
  DWORD64 *v108; // rax
  DWORD64 *v109; // rcx
  __int64 v110; // r15
  __int64 v111; // rcx
  unsigned int v112; // ecx
  char v113; // al
  DWORD64 v114; // rcx
  ULONGLONG *v115; // r8
  M128A *v116; // rcx
  bool v117; // bl
  DWORD64 *Rsp; // rcx
  char v119; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  int v121; // [rsp+50h] [rbp+10h]
  PRUNTIME_FUNCTION v122; // [rsp+58h] [rbp+18h]
  unsigned int v123; // [rsp+60h] [rbp+20h] BYREF
  PEXCEPTION_ROUTINE v124; // [rsp+68h] [rbp+28h]
  ULONG64 v125; // [rsp+70h] [rbp+30h]
  PVOID HandlerData; // [rsp+78h] [rbp+38h] BYREF
  PUNWIND_HISTORY_TABLE v127; // [rsp+80h] [rbp+40h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+88h] [rbp+48h]
  PCONTEXT_EX ContextEx; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v130; // [rsp+98h] [rbp+58h] BYREF
  unsigned __int64 v131; // [rsp+A0h] [rbp+60h] BYREF
  PCONTEXT v132; // [rsp+A8h] [rbp+68h]
  PVOID v133; // [rsp+B0h] [rbp+70h]
  PVOID v134; // [rsp+B8h] [rbp+78h]
  ULONG64 ControlPc; // [rsp+C0h] [rbp+80h] BYREF
  ULONG64 v136; // [rsp+C8h] [rbp+88h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+D0h] [rbp+90h]
  _CONTEXT_EX *v138; // [rsp+D8h] [rbp+98h]
  PVOID v139; // [rsp+E0h] [rbp+A0h]
  PCONTEXT v140; // [rsp+E8h] [rbp+A8h]
  EXCEPTION_DISPOSITION (__cdecl *v141)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+F0h] [rbp+B0h]
  PVOID v142; // [rsp+F8h] [rbp+B8h]
  struct _UNWIND_HISTORY_TABLE *v143; // [rsp+100h] [rbp+C0h]
  int v144; // [rsp+108h] [rbp+C8h]
  _CONTEXT_EX *v145; // [rsp+110h] [rbp+D0h]
  PCONTEXT v146; // [rsp+118h] [rbp+D8h]
  int v147; // [rsp+120h] [rbp+E0h] BYREF
  __int64 v148; // [rsp+128h] [rbp+E8h]
  DWORD64 v149; // [rsp+130h] [rbp+F0h]
  int v150; // [rsp+138h] [rbp+F8h]

  v6 = (_CONTEXT_EX *)TargetFrame;
  v134 = TargetIp;
  v145 = (_CONTEXT_EX *)TargetFrame;
  v146 = ContextRecord;
  v127 = HistoryTable;
  v133 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !RtlpGetStackLimits(&v131, (void **)&v130) )
    goto LABEL_173;
  RtlpSanitizeContext(ContextRecord);
  v8 = 0LL;
  v9 = 1048587;
  if ( (MEMORY[0x7FFE0708] & 0x800) != 0 )
  {
    v9 = 1048651;
    v8 = 2048LL;
  }
  if ( (int)RtlpValidateContextFlags(v9, &v123) < 0 )
  {
    v13 = v123;
  }
  else
  {
    v12 = 1256;
    if ( (v123 & 2) != 0 )
    {
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
        v11 &= v10 | MEMORY[0x7FFE03D8];
      v12 = RtlpGetEntireXStateAreaLength(v11) + 800;
    }
    v13 = (unsigned int)(v12 + 15);
  }
  v14 = v13 + 15;
  if ( v13 + 15 < v13 )
    v14 = 0xFFFFFFFFFFFFFF0LL;
  v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
  v16 = alloca(v15);
  v17 = alloca(v15);
  v18 = (PCONTEXT)&v119;
  v132 = (PCONTEXT)&v119;
  RtlInitializeExtendedContext2((PCONTEXT)&v119, v9, &ContextEx, v8);
  v19 = ContextRecord;
  RtlCaptureContext2(ContextRecord);
  v20 = v127;
  if ( v127 )
    v127->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v147;
    v149 = Rip;
    v147 = -1073741785;
    v148 = 0LL;
    v150 = 0;
  }
  v121 = 2;
  if ( !v6 )
    v121 = 6;
  v21 = v130;
  v22 = 0LL;
  while ( 2 )
  {
    v23 = v19->Rip;
    v125 = v23;
    v122 = RtlLookupFunctionEntry(v23, &ImageBase, v20);
    v24 = v122;
    if ( !v122 )
    {
      Rsp = (DWORD64 *)v19->Rsp;
      v19->Rip = *Rsp;
      v19->Rsp = (DWORD64)(Rsp + 1);
      RtlpPopUserShadowStack((__int64)v19);
      goto LABEL_79;
    }
    RtlpCopyContext(v18, v19);
    v25 = ImageBase;
    v26 = 0LL;
    v27 = ImageBase + v24->UnwindInfoAddress;
    v124 = 0LL;
    v28 = *(_BYTE *)v27 & 7;
    if ( v28 < 2 )
    {
      v29 = 0;
      v30 = (unsigned __int8 *)(v27 + 2);
      v31 = (_BYTE *)v27;
      if ( !*(_BYTE *)(v27 + 2) )
      {
        while ( (*v31 & 0x20) != 0 )
        {
          v98 = *v30;
          if ( (v98 & 1) != 0 )
            v98 = (unsigned int)(v98 + 1);
          if ( (unsigned int)++v29 > 0x20 )
            goto LABEL_223;
          v31 = (_BYTE *)(ImageBase + *(unsigned int *)&v31[2 * v98 + 12]);
          v30 = v31 + 2;
          if ( v31[2] )
            goto LABEL_19;
        }
        v26 = 1LL;
      }
    }
LABEL_19:
    v32 = *(unsigned __int8 *)(v27 + 3);
    if ( (v32 & 0xF) == 0 )
      goto LABEL_20;
    v67 = v23 - v122->BeginAddress - ImageBase;
    if ( v67 >= *(unsigned __int8 *)(v27 + 1) || (*(_BYTE *)v27 & 0x20) != 0 )
    {
      v68 = *(_BYTE *)(v27 + 3);
      v69 = (unsigned __int8)v32;
    }
    else
    {
      v110 = 0LL;
      if ( *(_BYTE *)(v27 + 2) )
      {
        do
        {
          v111 = *(unsigned __int16 *)(v27 + 2 * v110 + 4);
          if ( (BYTE1(v111) & 0xF) == 3 )
            break;
          v110 = (unsigned int)RtlpUnwindOpSlots(v111, v32) + (unsigned int)v110;
        }
        while ( (unsigned int)v110 < *(unsigned __int8 *)(v27 + 2) );
        v25 = ImageBase;
      }
      v112 = *(unsigned __int8 *)(v27 + 2 * v110 + 4);
      v23 = v125;
      if ( v67 < v112 )
      {
LABEL_20:
        v22 = (_CONTEXT_EX *)v18->Rsp;
        goto LABEL_21;
      }
      v69 = *(unsigned __int8 *)(v27 + 3);
      v68 = *(_BYTE *)(v27 + 3);
    }
    v22 = (_CONTEXT_EX *)(*(&v18->Rax + (v68 & 0xF)) - (v69 & 0xFFFFFFF0));
LABEL_21:
    ContextEx = v22;
    if ( (_DWORD)v26 )
      goto LABEL_34;
    if ( v28 >= 2 )
    {
      v84 = *(_BYTE *)(v27 + 2);
      if ( !v84 )
        goto LABEL_34;
      v85 = *(_WORD *)(v27 + 4);
      if ( (HIBYTE(v85) & 0xF) != 6 )
        goto LABEL_34;
      v49 = v122;
      v86 = v23 - v25;
      v87 = (unsigned __int8)v85;
      if ( (v85 & 0x1000) == 0 || (v88 = v122->EndAddress - (unsigned __int8)v85, v86 - v88 >= v87) )
      {
        v89 = 1;
        if ( v84 <= 1u )
          goto LABEL_131;
        while ( 1 )
        {
          v90 = *(_WORD *)(v27 + 2LL * v89 + 4);
          if ( (HIBYTE(v90) & 0xF) != 6 )
            goto LABEL_131;
          v91 = (unsigned __int8)v90 + (v90 >> 12 << 8);
          if ( !v91 )
            goto LABEL_131;
          v88 = v122->EndAddress - v91;
          if ( v86 - v88 < v87 )
            break;
          if ( ++v89 >= v84 )
            goto LABEL_131;
        }
        LODWORD(v25) = ImageBase;
      }
      RtlpUnwindEpilogue(v25, v88, v86 - v88, (_DWORD)v122, (__int64)v18, 0LL, 0LL, 0LL);
      v25 = ImageBase;
      goto LABEL_61;
    }
    v33 = *(_BYTE *)v23;
    v34 = (char *)v23;
    if ( *(_BYTE *)v23 == 72 )
    {
      v80 = *(_BYTE *)(v23 + 1);
      if ( v80 == -125 && *(_BYTE *)(v23 + 2) == 0xC4 )
      {
        v34 = (char *)(v23 + 4);
        goto LABEL_25;
      }
      if ( v80 == -127 && *(_BYTE *)(v23 + 2) == 0xC4 )
        goto LABEL_114;
    }
    if ( (v33 & 0xFE) == 0x48 && *(_BYTE *)(v23 + 1) == 0x8D )
    {
      v81 = *(_BYTE *)(v23 + 2) & 7;
      v26 = v81 | (8 * (v33 & 1u));
      if ( v81 | (8 * (v33 & 1)) )
      {
        if ( (_DWORD)v26 == (*(_BYTE *)(v27 + 3) & 0xF) )
        {
          v82 = *(_BYTE *)(v23 + 2) & 0xF8;
          if ( v82 == 96 )
          {
            v34 = (char *)(v23 + 4);
            goto LABEL_25;
          }
          if ( v82 != -96 )
            goto LABEL_25;
LABEL_114:
          v34 = (char *)(v23 + 7);
        }
      }
    }
LABEL_25:
    while ( 1 )
    {
      v35 = *v34;
      if ( (*v34 & 0xF8) != 0x58 )
        break;
      v74 = 1LL;
LABEL_156:
      v34 += v74;
    }
    v36 = v34 + 1;
    if ( (v35 & 0xF0) == 0x40 && (*v36 & 0xF8) == 0x58 )
    {
      v74 = 2LL;
      goto LABEL_156;
    }
    if ( v35 == -14 )
    {
      v35 = *v36;
      ++v34;
    }
    if ( (unsigned __int8)(v35 + 62) <= 1u )
    {
LABEL_54:
      v53 = (char *)v23;
      if ( (*(_BYTE *)v23 & 0xF8) != 0x48 )
        goto LABEL_57;
      v54 = *(_BYTE *)(v23 + 1);
      switch ( v54 )
      {
        case -125:
          v53 = (char *)(v23 + 4);
          v18->Rsp += *(char *)(v23 + 3);
          goto LABEL_57;
        case -127:
          v18->Rsp += *(unsigned __int8 *)(v23 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v23 + 4) | (*(unsigned __int16 *)(v23 + 5) << 8)) << 8);
          break;
        case -115:
          v113 = *(_BYTE *)(v23 + 2) & 0xF8;
          if ( v113 == 96 )
          {
            v114 = *(&v18->Rax + v26);
            v53 = (char *)(v23 + 4);
            v18->Rsp = v114;
            v18->Rsp = v114 + *(char *)(v23 + 3);
            goto LABEL_57;
          }
          if ( v113 != -96 )
          {
            while ( 1 )
            {
LABEL_57:
              v55 = *v53;
              if ( (*v53 & 0xF8) == 0x58 )
              {
                *(&v18->Rax + (v55 & 7)) = *(_QWORD *)v18->Rsp;
                v101 = 1LL;
              }
              else
              {
                if ( (v55 & 0xF0) != 0x40 || (v107 = v53[1], (v107 & 0xF8) != 0x58) )
                {
                  v56 = (DWORD64 *)v18->Rsp;
                  v18->Rip = *v56;
                  v18->Rsp = (DWORD64)(v56 + 1);
                  RtlpPopUserShadowStack((__int64)v18);
                  v25 = ImageBase;
                  goto LABEL_60;
                }
                *(&v18->Rax + (v107 & 7 | (8LL * (*v53 & 1)))) = *(_QWORD *)v18->Rsp;
                v101 = 2LL;
              }
              v18->Rsp += 8LL;
              v53 += v101;
            }
          }
          v18->Rsp = *(&v18->Rax + v26)
                   + (*(unsigned __int8 *)(v23 + 3) | ((*(unsigned __int8 *)(v23 + 4) | (*(unsigned __int16 *)(v23 + 5) << 8)) << 8));
          break;
        default:
          goto LABEL_57;
      }
      v53 = (char *)(v23 + 7);
      goto LABEL_57;
    }
    if ( v35 == -13 )
    {
      v35 = -13;
      if ( v34[1] == -61 )
        goto LABEL_54;
LABEL_32:
      if ( v35 != -1 || (v35 = -1, v34[1] != 37) )
      {
        if ( (v35 & 0xF8) != 0x48 || v34[1] != -1 || (v34[2] & 0x38) != 0x20 )
          goto LABEL_34;
      }
      goto LABEL_54;
    }
    if ( ((v35 + 23) & 0xFD) != 0 )
      goto LABEL_32;
    if ( v35 == -21 )
      v75 = v34[1] + 2;
    else
      v75 = *(_DWORD *)(v34 + 1) + 5;
    v76 = v75;
    v77 = (__int64)v122;
    v78 = (unsigned __int64)&v34[v76 - v25];
    BeginAddress = v122->BeginAddress;
    if ( v78 < BeginAddress )
    {
LABEL_166:
      v106 = RtlpSameFunction(v77, v25, (void *)(v78 + v25));
      if ( !v106 || v78 == *v106 )
        goto LABEL_54;
LABEL_131:
      v25 = ImageBase;
      goto LABEL_34;
    }
    if ( v78 >= v122->EndAddress )
    {
      v77 = (__int64)v122;
      goto LABEL_166;
    }
    if ( v78 == BeginAddress && (*(_BYTE *)v27 & 0x20) == 0 )
      goto LABEL_54;
LABEL_34:
    p_BeginAddress = &v122->BeginAddress;
    v38 = 0;
    v123 = 0;
    while ( 1 )
    {
      v39 = 0;
      v40 = (_BYTE *)(v25 + (unsigned int)p_BeginAddress[2]);
      v41 = 0LL;
      v42 = v125 - *p_BeginAddress - v25;
      v119 = 0;
      v43 = v40[2];
      if ( v43 )
      {
        do
        {
          v44 = &v40[2 * v41];
          v45 = (unsigned __int8)v44[5] >> 4;
          if ( v42 < (unsigned __int8)v44[4] )
          {
            v41 = (unsigned int)RtlpUnwindOpSlots(*((unsigned __int16 *)v44 + 2), v44) + (unsigned int)v41;
          }
          else
          {
            if ( (v40[2 * v41 + 5] & 0xF) != 0 )
            {
              if ( (v40[2 * v41 + 5] & 0xF) != 4 )
              {
                switch ( v40[2 * v41 + 5] & 0xF )
                {
                  case 1:
                    v41 = (unsigned int)(v41 + 1);
                    v64 = *(unsigned __int16 *)&v40[2 * v41 + 4];
                    if ( (_DWORD)v45 )
                    {
                      v41 = (unsigned int)(v41 + 1);
                      v65 = (*(unsigned __int16 *)&v40[2 * v41 + 4] << 16) + v64;
                    }
                    else
                    {
                      v65 = 8 * v64;
                    }
                    v18->Rsp += v65;
                    goto LABEL_39;
                  case 2:
                    v18->Rsp += (unsigned int)(8 * v45 + 8);
                    goto LABEL_39;
                  case 3:
                    v70 = *(&v18->Rax + (v40[3] & 0xF));
                    v18->Rsp = v70;
                    v18->Rsp = v70 - (v40[3] & 0xF0);
                    goto LABEL_39;
                  case 5:
                    v41 = (unsigned int)(v41 + 2);
                    *(&v18->Rax + v45) = *(DWORD64 *)((char *)&v22[2048
                                                                 * (unsigned __int64)*(unsigned __int16 *)&v40[2 * v41 + 4]].All
                                                    + *(unsigned __int16 *)&v40[2 * (unsigned int)(v41 - 1) + 4]);
                    goto LABEL_39;
                  case 6:
                    LODWORD(v41) = v41 + 1;
                    goto LABEL_39;
                  case 7:
                    LODWORD(v41) = v41 + 2;
                    goto LABEL_39;
                  case 8:
                    v41 = (unsigned int)(v41 + 1);
                    v93 = 2LL * *(unsigned __int16 *)&v40[2 * v41 + 4];
                    v94 = &v18->FltSave.XmmRegisters[(unsigned int)v45];
                    v94->Low = *((_QWORD *)&v22->All + 2 * *(unsigned __int16 *)&v40[2 * v41 + 4]);
                    v94->High = *((_QWORD *)&v22->Legacy + v93);
                    goto LABEL_39;
                  case 9:
                    v41 = (unsigned int)(v41 + 2);
                    v115 = (ULONGLONG *)((char *)&v22[2048 * (unsigned __int64)*(unsigned __int16 *)&v40[2 * v41 + 4]]
                                       + *(unsigned __int16 *)&v40[2 * (unsigned int)(v41 - 1) + 4]);
                    v116 = &v18->FltSave.XmmRegisters[(unsigned int)v45];
                    v116->Low = *v115;
                    v116->High = v115[1];
                    goto LABEL_39;
                  case 0xA:
                    v108 = (DWORD64 *)v18->Rsp;
                    v119 = 1;
                    v109 = v108 + 3;
                    if ( (_DWORD)v45 )
                    {
                      ++v108;
                      ++v109;
                    }
                    v18->Rip = *v108;
                    v18->Rsp = *v109;
                    goto LABEL_39;
                  default:
                    goto LABEL_223;
                }
              }
              LODWORD(v41) = v41 + 1;
              *(&v18->Rax + v45) = *((_QWORD *)&v22->All + *(unsigned __int16 *)&v40[2 * (unsigned int)v41 + 4]);
            }
            else
            {
              *(&v18->Rax + v45) = *(_QWORD *)v18->Rsp;
              v18->Rsp += 8LL;
            }
LABEL_39:
            v41 = (unsigned int)(v41 + 1);
          }
          v43 = v40[2];
        }
        while ( (unsigned int)v41 < v43 );
        v39 = v119;
        v38 = v123;
        v25 = ImageBase;
      }
      if ( (*v40 & 0x20) == 0 )
        break;
      v95 = v43;
      if ( (v43 & 1) != 0 )
        v95 = v43 + 1;
      v123 = ++v38;
      p_BeginAddress = &v40[2 * v95 + 4];
      if ( v38 > 0x20 )
        goto LABEL_223;
    }
    if ( !v39 )
    {
      v46 = (DWORD64 *)v18->Rsp;
      v18->Rip = *v46;
      v18->Rsp = (DWORD64)(v46 + 1);
      if ( (v18->ContextFlags & 0x100040) == 0x100040 )
      {
        ExtendedFeature2 = RtlLocateExtendedFeature2(&v18[1], 11LL, 2147353560LL);
        v25 = ImageBase;
        if ( ExtendedFeature2 )
        {
          if ( (*(_BYTE *)ExtendedFeature2 & 1) != 0 )
            *(_QWORD *)(ExtendedFeature2 + 8) += 8LL;
        }
      }
    }
    v47 = (_BYTE *)(v25 + (unsigned int)p_BeginAddress[2]);
    v48 = v125 - *p_BeginAddress;
    v23 = v125;
    if ( v48 - (int)v25 < (unsigned int)(unsigned __int8)v47[1] )
    {
LABEL_60:
      v49 = v122;
      goto LABEL_61;
    }
    v49 = v122;
    if ( (*v47 & 0x10) == 0 )
    {
LABEL_61:
      v52 = (unsigned __int64)v124;
      goto LABEL_62;
    }
    v50 = (unsigned __int8)v47[2];
    v51 = v50 + 1;
    if ( (v50 & 1) == 0 )
      v51 = (unsigned __int8)v47[2];
    HandlerData = &v47[2 * (v51 + 2) + 4];
    v52 = v25 + *(unsigned int *)&v47[2 * v51 + 4];
    v124 = (PEXCEPTION_ROUTINE)v52;
LABEL_62:
    if ( ((unsigned __int8)v22 & 7) != 0
      || (v57 = v131, (unsigned __int64)v22 < v131)
      || (v21 = v130, (unsigned __int64)v22 >= v130)
      || (v6 = v145) != 0LL && v145 < v22 )
    {
LABEL_173:
      RtlRaiseStatus(-1073741784);
    }
    if ( v52 )
    {
      v58 = 0;
      v139 = v134;
      v59 = v121;
      do
      {
        if ( v6 == v22 )
        {
          v59 |= 0x20u;
          v121 = v59;
        }
        v60 = ExceptionRecorda;
        ExceptionRecorda->ExceptionFlags = v59;
        v19->Rax = (DWORD64)v133;
        v141 = (EXCEPTION_DISPOSITION (__cdecl *)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID))v52;
        v142 = HandlerData;
        v143 = v127;
        FunctionEntry = v49;
        ControlPc = v23;
        v136 = v25;
        v138 = v22;
        v140 = v19;
        v144 = v58;
        v117 = (v19->ContextFlags & 0x100040) == 1048640;
        v61 = RtlpExecuteHandlerForUnwind(v60, v22, v19, &ControlPc);
        if ( !v117 && (v19->ContextFlags & 0x100040) == 0x100040 )
          v19->ContextFlags &= ~0x40u;
        v59 = v121 & 0xFFFFFF9F;
        v121 &= 0xFFFFFF9F;
        v62 = v61 - 1;
        if ( v62 )
        {
          if ( v62 != 2 )
            RtlRaiseStatus(-1073741786);
          v102 = v136;
          v103 = FunctionEntry;
          v104 = v146;
          v23 = ControlPc;
          ImageBase = v136;
          v122 = FunctionEntry;
          RtlpCopyContext(v146, v140);
          v18 = v132;
          v19 = v104;
          RtlpCopyContext(v132, v104);
          v105 = RtlVirtualUnwind(2u, v102, v23, v103, v18, &HandlerData, (PULONG64)&ContextEx, 0LL);
          v124 = v105;
          if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
          {
            if ( v105 != v141 || (v22 = ContextEx, ContextEx != v138) || HandlerData != v142 )
              __fastfail(0x27u);
          }
          else
          {
            v22 = v138;
            v124 = v141;
            HandlerData = v142;
            ContextEx = v138;
          }
          v59 = v121 | 0x40;
          v58 = v144;
          v121 |= 0x40u;
          v127 = v143;
        }
        else if ( v22 != v6 )
        {
          v63 = v19;
          v19 = v18;
          v18 = v63;
        }
        v25 = ImageBase;
        v49 = v122;
        v52 = (unsigned __int64)v124;
      }
      while ( (v59 & 0x40) != 0 );
      v21 = v130;
LABEL_79:
      v57 = v131;
    }
    else if ( v22 != v145 )
    {
      v66 = v19;
      v19 = v18;
      v18 = v66;
    }
    if ( ((unsigned __int8)v22 & 7) != 0 || (unsigned __int64)v22 < v57 || (unsigned __int64)v22 >= v21 )
    {
      if ( v22 == v6 )
        break;
      if ( v23 != v19->Rip )
      {
        ZwRaiseException(ExceptionRecorda, v19, 0);
        return;
      }
LABEL_223:
      RtlRaiseStatus(-1073741569);
    }
    if ( v22 != v6 )
    {
      v20 = v127;
      continue;
    }
    break;
  }
  v71 = ExceptionRecorda;
  p_Rip = &v19->Rip;
  v19->Rax = (DWORD64)v133;
  if ( v71->ExceptionCode != -2147483607 )
    *p_Rip = (DWORD64)v134;
  RtlpGuardSynchronizeRestorePc(p_Rip);
  if ( v71->ExceptionCode == -2147483610 )
  {
    v99 = v71->ExceptionInformation[0];
    LOBYTE(v100) = LdrControlFlowGuardEnforced();
    if ( v100 && !RtlGuardIsValidStackPointer(*(void **)(v99 + 16)) )
      goto LABEL_222;
    RtlGuardCheckLongJumpTarget(*(PVOID *)(v99 + 80), 0, 0LL);
  }
  else
  {
    if ( v71->ExceptionCode == -2147483607 )
    {
      if ( v71->NumberParameters )
      {
        v96 = v71->ExceptionInformation[0];
        LOBYTE(v97) = LdrControlFlowGuardEnforced();
        if ( v97 )
        {
          if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
            LdrpValidateUserCallTargetES(v96);
          else
            LdrpValidateUserCallTarget(v96);
        }
      }
    }
    LOBYTE(v73) = LdrControlFlowGuardEnforced();
    if ( v73 && !RtlGuardIsValidStackPointer((void *)v19->Rsp) )
LABEL_222:
      __fastfail(0xDu);
  }
  RtlRestoreContext(v19, v71);
}
