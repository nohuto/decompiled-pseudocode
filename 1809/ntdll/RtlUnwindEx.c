/*
 * XREFs of RtlUnwindEx @ 0x180005BF0
 * Callers:
 *     RtlUnwind @ 0x180003640 (RtlUnwind.c)
 *     __C_specific_handler @ 0x180090350 (__C_specific_handler.c)
 *     KiUserCallbackDispatcherHandler @ 0x1800A3F90 (KiUserCallbackDispatcherHandler.c)
 *     __longjmp_internal @ 0x1800A6C80 (__longjmp_internal.c)
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
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     LdrpValidateUserCallTarget @ 0x180090200 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180090250 (LdrpValidateUserCallTargetES.c)
 *     RtlpUnwindEpilogue @ 0x18009F434 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x18009F658 (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     ZwRaiseException @ 0x1800A2EB0 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x1800A4450 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x1800A4540 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A4A40 (RtlpGuardSynchronizeRestorePc.c)
 *     _alloca_probe @ 0x1800A5210 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1800A53A0 (RtlpExecuteHandlerForUnwind.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  PVOID v6; // rsi
  __int64 v8; // rdi
  unsigned int v9; // ebx
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
  unsigned __int64 v22; // r14
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
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rbx
  __int64 v76; // rax
  unsigned __int64 v77; // rbx
  unsigned __int64 BeginAddress; // rcx
  char v79; // al
  int v80; // eax
  char v81; // dl
  __int64 ExtendedFeature2; // rax
  unsigned __int8 v83; // r8
  __int16 v84; // dx
  int v85; // r10d
  unsigned int v86; // r9d
  int v87; // edx
  unsigned int v88; // r11d
  unsigned __int16 v89; // dx
  int v90; // ecx
  DWORD64 Rip; // rax
  __int64 v92; // rdx
  M128A *v93; // rcx
  unsigned int v94; // eax
  unsigned __int64 v95; // rbx
  __int64 v96; // r9
  unsigned __int64 v97; // rbx
  __int64 v98; // rax
  ULONG64 v99; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v100; // rdi
  struct _CONTEXT *v101; // r14
  PEXCEPTION_ROUTINE v102; // rax
  _DWORD *v103; // rax
  char v104; // r9
  DWORD64 *v105; // rax
  DWORD64 *v106; // rcx
  __int64 v107; // r15
  __int64 v108; // rcx
  unsigned int v109; // ecx
  char v110; // al
  DWORD64 v111; // rcx
  ULONGLONG *v112; // r8
  M128A *v113; // rcx
  bool v114; // bl
  DWORD64 *Rsp; // rcx
  char v116[8]; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  int v118; // [rsp+50h] [rbp+10h]
  PRUNTIME_FUNCTION v119; // [rsp+58h] [rbp+18h]
  unsigned int v120; // [rsp+60h] [rbp+20h] BYREF
  PEXCEPTION_ROUTINE v121; // [rsp+68h] [rbp+28h]
  ULONG64 v122; // [rsp+70h] [rbp+30h]
  PVOID HandlerData; // [rsp+78h] [rbp+38h] BYREF
  PUNWIND_HISTORY_TABLE v124; // [rsp+80h] [rbp+40h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+88h] [rbp+48h]
  unsigned __int64 EstablisherFrame; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v127; // [rsp+98h] [rbp+58h] BYREF
  unsigned __int64 v128; // [rsp+A0h] [rbp+60h] BYREF
  PCONTEXT v129; // [rsp+A8h] [rbp+68h]
  PVOID v130; // [rsp+B0h] [rbp+70h]
  PVOID v131; // [rsp+B8h] [rbp+78h]
  ULONG64 ControlPc; // [rsp+C0h] [rbp+80h] BYREF
  ULONG64 v133; // [rsp+C8h] [rbp+88h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+D0h] [rbp+90h]
  unsigned __int64 v135; // [rsp+D8h] [rbp+98h]
  PVOID v136; // [rsp+E0h] [rbp+A0h]
  PCONTEXT v137; // [rsp+E8h] [rbp+A8h]
  EXCEPTION_ROUTINE *v138; // [rsp+F0h] [rbp+B0h]
  PVOID v139; // [rsp+F8h] [rbp+B8h]
  struct _UNWIND_HISTORY_TABLE *v140; // [rsp+100h] [rbp+C0h]
  int v141; // [rsp+108h] [rbp+C8h]
  PVOID v142; // [rsp+110h] [rbp+D0h]
  PCONTEXT v143; // [rsp+118h] [rbp+D8h]
  int v144; // [rsp+120h] [rbp+E0h] BYREF
  __int64 v145; // [rsp+128h] [rbp+E8h]
  DWORD64 v146; // [rsp+130h] [rbp+F0h]
  int v147; // [rsp+138h] [rbp+F8h]

  v6 = TargetFrame;
  v131 = TargetIp;
  v142 = TargetFrame;
  v143 = ContextRecord;
  v124 = HistoryTable;
  v130 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !RtlpGetStackLimits(&v128, (void **)&v127) )
    goto LABEL_173;
  RtlpSanitizeContext(ContextRecord);
  v8 = 0LL;
  v9 = 1048587;
  if ( (MEMORY[0x7FFE0708] & 0x800) != 0 )
  {
    v9 = 1048651;
    v8 = 2048LL;
  }
  if ( (int)RtlpValidateContextFlags(v9, &v120) < 0 )
  {
    v13 = v120;
  }
  else
  {
    v12 = 1256;
    if ( (v120 & 2) != 0 )
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
  v18 = (PCONTEXT)v116;
  v129 = (PCONTEXT)v116;
  RtlInitializeExtendedContext2(v116, v9, &EstablisherFrame, v8);
  v19 = ContextRecord;
  RtlCaptureContext2(ContextRecord);
  v20 = v124;
  if ( v124 )
    v124->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v144;
    v146 = Rip;
    v144 = -1073741785;
    v145 = 0LL;
    v147 = 0;
  }
  v118 = 2;
  if ( !v6 )
    v118 = 6;
  v21 = v127;
  v22 = 0LL;
  while ( 2 )
  {
    v23 = v19->Rip;
    v122 = v23;
    v119 = RtlLookupFunctionEntry(v23, &ImageBase, v20);
    v24 = v119;
    if ( !v119 )
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
    v121 = 0LL;
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
          v96 = *v30;
          if ( (v96 & 1) != 0 )
            v96 = (unsigned int)(v96 + 1);
          if ( (unsigned int)++v29 > 0x20 )
            goto LABEL_223;
          v31 = (_BYTE *)(ImageBase + *(unsigned int *)&v31[2 * v96 + 12]);
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
    v67 = v23 - v119->BeginAddress - ImageBase;
    if ( v67 >= *(unsigned __int8 *)(v27 + 1) || (*(_BYTE *)v27 & 0x20) != 0 )
    {
      v68 = *(_BYTE *)(v27 + 3);
      v69 = (unsigned __int8)v32;
    }
    else
    {
      v107 = 0LL;
      if ( *(_BYTE *)(v27 + 2) )
      {
        do
        {
          v108 = *(unsigned __int16 *)(v27 + 2 * v107 + 4);
          if ( (BYTE1(v108) & 0xF) == 3 )
            break;
          v107 = (unsigned int)RtlpUnwindOpSlots(v108, v32) + (unsigned int)v107;
        }
        while ( (unsigned int)v107 < *(unsigned __int8 *)(v27 + 2) );
        v25 = ImageBase;
      }
      v109 = *(unsigned __int8 *)(v27 + 2 * v107 + 4);
      v23 = v122;
      if ( v67 < v109 )
      {
LABEL_20:
        v22 = v18->Rsp;
        goto LABEL_21;
      }
      v69 = *(unsigned __int8 *)(v27 + 3);
      v68 = *(_BYTE *)(v27 + 3);
    }
    v22 = *(&v18->Rax + (v68 & 0xF)) - (v69 & 0xFFFFFFF0);
LABEL_21:
    EstablisherFrame = v22;
    if ( (_DWORD)v26 )
      goto LABEL_34;
    if ( v28 >= 2 )
    {
      v83 = *(_BYTE *)(v27 + 2);
      if ( !v83 )
        goto LABEL_34;
      v84 = *(_WORD *)(v27 + 4);
      if ( (HIBYTE(v84) & 0xF) != 6 )
        goto LABEL_34;
      v49 = v119;
      v85 = v23 - v25;
      v86 = (unsigned __int8)v84;
      if ( (v84 & 0x1000) == 0 || (v87 = v119->EndAddress - (unsigned __int8)v84, v85 - v87 >= v86) )
      {
        v88 = 1;
        if ( v83 <= 1u )
          goto LABEL_131;
        while ( 1 )
        {
          v89 = *(_WORD *)(v27 + 2LL * v88 + 4);
          if ( (HIBYTE(v89) & 0xF) != 6 )
            goto LABEL_131;
          v90 = (unsigned __int8)v89 + (v89 >> 12 << 8);
          if ( !v90 )
            goto LABEL_131;
          v87 = v119->EndAddress - v90;
          if ( v85 - v87 < v86 )
            break;
          if ( ++v88 >= v83 )
            goto LABEL_131;
        }
        LODWORD(v25) = ImageBase;
      }
      RtlpUnwindEpilogue(v25, v87, v85 - v87, (_DWORD)v119, (__int64)v18, 0LL, 0LL, 0LL);
      v25 = ImageBase;
      goto LABEL_61;
    }
    v33 = *(_BYTE *)v23;
    v34 = (char *)v23;
    if ( *(_BYTE *)v23 == 72 )
    {
      v79 = *(_BYTE *)(v23 + 1);
      if ( v79 == -125 && *(_BYTE *)(v23 + 2) == 0xC4 )
      {
        v34 = (char *)(v23 + 4);
        goto LABEL_25;
      }
      if ( v79 == -127 && *(_BYTE *)(v23 + 2) == 0xC4 )
        goto LABEL_114;
    }
    if ( (v33 & 0xFE) == 0x48 && *(_BYTE *)(v23 + 1) == 0x8D )
    {
      v80 = *(_BYTE *)(v23 + 2) & 7;
      v26 = v80 | (8 * (v33 & 1u));
      if ( v80 | (8 * (v33 & 1)) )
      {
        if ( (_DWORD)v26 == (*(_BYTE *)(v27 + 3) & 0xF) )
        {
          v81 = *(_BYTE *)(v23 + 2) & 0xF8;
          if ( v81 == 96 )
          {
            v34 = (char *)(v23 + 4);
            goto LABEL_25;
          }
          if ( v81 != -96 )
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
      v73 = 1LL;
LABEL_156:
      v34 += v73;
    }
    v36 = v34 + 1;
    if ( (v35 & 0xF0) == 0x40 && (*v36 & 0xF8) == 0x58 )
    {
      v73 = 2LL;
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
          v110 = *(_BYTE *)(v23 + 2) & 0xF8;
          if ( v110 == 96 )
          {
            v111 = *(&v18->Rax + v26);
            v53 = (char *)(v23 + 4);
            v18->Rsp = v111;
            v18->Rsp = v111 + *(char *)(v23 + 3);
            goto LABEL_57;
          }
          if ( v110 != -96 )
          {
            while ( 1 )
            {
LABEL_57:
              v55 = *v53;
              if ( (*v53 & 0xF8) == 0x58 )
              {
                *(&v18->Rax + (v55 & 7)) = *(_QWORD *)v18->Rsp;
                v98 = 1LL;
              }
              else
              {
                if ( (v55 & 0xF0) != 0x40 || (v104 = v53[1], (v104 & 0xF8) != 0x58) )
                {
                  v56 = (DWORD64 *)v18->Rsp;
                  v18->Rip = *v56;
                  v18->Rsp = (DWORD64)(v56 + 1);
                  RtlpPopUserShadowStack((__int64)v18);
                  v25 = ImageBase;
                  goto LABEL_60;
                }
                *(&v18->Rax + (v104 & 7 | (8LL * (*v53 & 1)))) = *(_QWORD *)v18->Rsp;
                v98 = 2LL;
              }
              v18->Rsp += 8LL;
              v53 += v98;
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
      v74 = v34[1] + 2;
    else
      v74 = *(_DWORD *)(v34 + 1) + 5;
    v75 = v74;
    v76 = (__int64)v119;
    v77 = (unsigned __int64)&v34[v75 - v25];
    BeginAddress = v119->BeginAddress;
    if ( v77 < BeginAddress )
    {
LABEL_166:
      v103 = RtlpSameFunction(v76, v25, v77 + v25);
      if ( !v103 || v77 == *v103 )
        goto LABEL_54;
LABEL_131:
      v25 = ImageBase;
      goto LABEL_34;
    }
    if ( v77 >= v119->EndAddress )
    {
      v76 = (__int64)v119;
      goto LABEL_166;
    }
    if ( v77 == BeginAddress && (*(_BYTE *)v27 & 0x20) == 0 )
      goto LABEL_54;
LABEL_34:
    p_BeginAddress = &v119->BeginAddress;
    v38 = 0;
    v120 = 0;
    while ( 1 )
    {
      v39 = 0;
      v40 = (_BYTE *)(v25 + (unsigned int)p_BeginAddress[2]);
      v41 = 0LL;
      v42 = v122 - *p_BeginAddress - v25;
      v116[0] = 0;
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
                    *(&v18->Rax + v45) = *(_QWORD *)(*(unsigned __int16 *)&v40[2 * (unsigned int)(v41 - 1) + 4]
                                                   + v22
                                                   + ((unsigned __int64)*(unsigned __int16 *)&v40[2 * v41 + 4] << 16));
                    goto LABEL_39;
                  case 6:
                    LODWORD(v41) = v41 + 1;
                    goto LABEL_39;
                  case 7:
                    LODWORD(v41) = v41 + 2;
                    goto LABEL_39;
                  case 8:
                    v41 = (unsigned int)(v41 + 1);
                    v92 = 2LL * *(unsigned __int16 *)&v40[2 * v41 + 4];
                    v93 = &v18->FltSave.XmmRegisters[(unsigned int)v45];
                    v93->Low = *(_QWORD *)(v22 + 16LL * *(unsigned __int16 *)&v40[2 * v41 + 4]);
                    v93->High = *(_QWORD *)(v22 + 8 * v92 + 8);
                    goto LABEL_39;
                  case 9:
                    v41 = (unsigned int)(v41 + 2);
                    v112 = (ULONGLONG *)(v22
                                       + ((unsigned __int64)*(unsigned __int16 *)&v40[2 * v41 + 4] << 16)
                                       + *(unsigned __int16 *)&v40[2 * (unsigned int)(v41 - 1) + 4]);
                    v113 = &v18->FltSave.XmmRegisters[(unsigned int)v45];
                    v113->Low = *v112;
                    v113->High = v112[1];
                    goto LABEL_39;
                  case 0xA:
                    v105 = (DWORD64 *)v18->Rsp;
                    v116[0] = 1;
                    v106 = v105 + 3;
                    if ( (_DWORD)v45 )
                    {
                      ++v105;
                      ++v106;
                    }
                    v18->Rip = *v105;
                    v18->Rsp = *v106;
                    goto LABEL_39;
                  default:
                    goto LABEL_223;
                }
              }
              LODWORD(v41) = v41 + 1;
              *(&v18->Rax + v45) = *(_QWORD *)(v22 + 8LL * *(unsigned __int16 *)&v40[2 * (unsigned int)v41 + 4]);
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
        v39 = v116[0];
        v38 = v120;
        v25 = ImageBase;
      }
      if ( (*v40 & 0x20) == 0 )
        break;
      v94 = v43;
      if ( (v43 & 1) != 0 )
        v94 = v43 + 1;
      v120 = ++v38;
      p_BeginAddress = &v40[2 * v94 + 4];
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
    v48 = v122 - *p_BeginAddress;
    v23 = v122;
    if ( v48 - (int)v25 < (unsigned int)(unsigned __int8)v47[1] )
    {
LABEL_60:
      v49 = v119;
      goto LABEL_61;
    }
    v49 = v119;
    if ( (*v47 & 0x10) == 0 )
    {
LABEL_61:
      v52 = (unsigned __int64)v121;
      goto LABEL_62;
    }
    v50 = (unsigned __int8)v47[2];
    v51 = v50 + 1;
    if ( (v50 & 1) == 0 )
      v51 = (unsigned __int8)v47[2];
    HandlerData = &v47[2 * (v51 + 2) + 4];
    v52 = v25 + *(unsigned int *)&v47[2 * v51 + 4];
    v121 = (PEXCEPTION_ROUTINE)v52;
LABEL_62:
    if ( (v22 & 7) != 0
      || (v57 = v128, v22 < v128)
      || (v21 = v127, v22 >= v127)
      || (v6 = v142) != 0LL && (unsigned __int64)v142 < v22 )
    {
LABEL_173:
      RtlRaiseStatus(3221225512LL);
    }
    if ( v52 )
    {
      v58 = 0;
      v136 = v131;
      v59 = v118;
      do
      {
        if ( v6 == (PVOID)v22 )
        {
          v59 |= 0x20u;
          v118 = v59;
        }
        v60 = ExceptionRecorda;
        ExceptionRecorda->ExceptionFlags = v59;
        v19->Rax = (DWORD64)v130;
        v138 = (EXCEPTION_ROUTINE *)v52;
        v139 = HandlerData;
        v140 = v124;
        FunctionEntry = v49;
        ControlPc = v23;
        v133 = v25;
        v135 = v22;
        v137 = v19;
        v141 = v58;
        v114 = (v19->ContextFlags & 0x100040) == 1048640;
        v61 = RtlpExecuteHandlerForUnwind(v60, v22, v19, &ControlPc);
        if ( !v114 && (v19->ContextFlags & 0x100040) == 0x100040 )
          v19->ContextFlags &= ~0x40u;
        v59 = v118 & 0xFFFFFF9F;
        v118 &= 0xFFFFFF9F;
        v62 = v61 - 1;
        if ( v62 )
        {
          if ( v62 != 2 )
            RtlRaiseStatus(3221225510LL);
          v99 = v133;
          v100 = FunctionEntry;
          v101 = v143;
          v23 = ControlPc;
          ImageBase = v133;
          v119 = FunctionEntry;
          RtlpCopyContext(v143, v137);
          v18 = v129;
          v19 = v101;
          RtlpCopyContext(v129, v101);
          v102 = RtlVirtualUnwind(2u, v99, v23, v100, v18, &HandlerData, &EstablisherFrame, 0LL);
          v121 = v102;
          if ( ((*((_QWORD *)&xmmword_180178390 + 1) >> 12) & 3) == 1 )
          {
            if ( v102 != v138 || (v22 = EstablisherFrame, EstablisherFrame != v135) || HandlerData != v139 )
              __fastfail(0x27u);
          }
          else
          {
            v22 = v135;
            v121 = v138;
            HandlerData = v139;
            EstablisherFrame = v135;
          }
          v59 = v118 | 0x40;
          v58 = v141;
          v118 |= 0x40u;
          v124 = v140;
        }
        else if ( (PVOID)v22 != v6 )
        {
          v63 = v19;
          v19 = v18;
          v18 = v63;
        }
        v25 = ImageBase;
        v49 = v119;
        v52 = (unsigned __int64)v121;
      }
      while ( (v59 & 0x40) != 0 );
      v21 = v127;
LABEL_79:
      v57 = v128;
    }
    else if ( (PVOID)v22 != v142 )
    {
      v66 = v19;
      v19 = v18;
      v18 = v66;
    }
    if ( (v22 & 7) != 0 || v22 < v57 || v22 >= v21 )
    {
      if ( (PVOID)v22 == v6 )
        break;
      if ( v23 != v19->Rip )
      {
        ZwRaiseException(ExceptionRecorda, v19, 0LL);
        return;
      }
LABEL_223:
      RtlRaiseStatus(3221225727LL);
    }
    if ( (PVOID)v22 != v6 )
    {
      v20 = v124;
      continue;
    }
    break;
  }
  v71 = ExceptionRecorda;
  p_Rip = &v19->Rip;
  v19->Rax = (DWORD64)v130;
  if ( v71->ExceptionCode != -2147483607 )
    *p_Rip = (DWORD64)v131;
  RtlpGuardSynchronizeRestorePc(p_Rip);
  if ( v71->ExceptionCode == -2147483610 )
  {
    v97 = v71->ExceptionInformation[0];
    if ( (unsigned int)LdrControlFlowGuardEnforced() && !RtlGuardIsValidStackPointer(*(void **)(v97 + 16)) )
      goto LABEL_222;
    RtlGuardCheckLongJumpTarget(*(_QWORD *)(v97 + 80), 0, 0LL);
  }
  else
  {
    if ( v71->ExceptionCode == -2147483607 )
    {
      if ( v71->NumberParameters )
      {
        v95 = v71->ExceptionInformation[0];
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
        {
          if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
            LdrpValidateUserCallTargetES(v95);
          else
            LdrpValidateUserCallTarget(v95);
        }
      }
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced() && !RtlGuardIsValidStackPointer((void *)v19->Rsp) )
LABEL_222:
      __fastfail(0xDu);
  }
  RtlRestoreContext(v19, v71);
}
