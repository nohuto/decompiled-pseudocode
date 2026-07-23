/*
 * XREFs of RtlUnwindEx @ 0x140019C30
 * Callers:
 *     RtlUnwind @ 0x14013B070 (RtlUnwind.c)
 *     __C_specific_handler @ 0x14019EE50 (__C_specific_handler.c)
 *     __longjmp_internal @ 0x1401C0970 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x1401D5900 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     RtlpGetStackLimitsEx @ 0x140017028 (RtlpGetStackLimitsEx.c)
 *     RtlGetExtendedContextLength2 @ 0x140017148 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14001722C (RtlInitializeExtendedContext2.c)
 *     RtlpCopyContext @ 0x14001A7C0 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14001A980 (RtlLookupFunctionEntry.c)
 *     KeQueryCurrentStackInformation @ 0x14001BBD0 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimits @ 0x1400A2DD0 (RtlpGetStackLimits.c)
 *     RtlVirtualUnwind @ 0x14013A7A0 (RtlVirtualUnwind.c)
 *     RtlpIsFrameInBounds @ 0x14013B624 (RtlpIsFrameInBounds.c)
 *     RtlpUnwindEpilogue @ 0x14013CA58 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x14013CC00 (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x14018F100 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1401C3850 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x1401CC7F0 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x1401CC940 (RtlRestoreContext.c)
 *     _alloca_probe @ 0x1401CD060 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1401CD500 (RtlpExecuteHandlerForUnwind.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140314D54 (RtlGuardCheckLongJumpTarget.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        struct _EXCEPTION_RECORD *ExceptionRecord,
        PVOID ReturnValue,
        struct _CONTEXT *ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  struct _UNWIND_HISTORY_TABLE *v7; // r14
  PVOID v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  void *v13; // rsp
  struct _CONTEXT *v14; // r12
  struct _CONTEXT *v15; // r13
  unsigned __int64 v16; // rbx
  DWORD64 v17; // r15
  _BYTE *v18; // rdx
  unsigned __int64 v19; // r8
  unsigned int *p_BeginAddress; // r11
  unsigned __int64 v21; // rbx
  unsigned int v22; // edi
  unsigned __int8 v23; // dl
  int v24; // r10d
  unsigned __int64 v25; // r14
  unsigned int v26; // edx
  _DWORD *v27; // r8
  __int64 v28; // rcx
  char v29; // r9
  __int64 v30; // rbx
  _BYTE *v31; // rdi
  unsigned __int8 v32; // cl
  _BYTE *v33; // rdx
  __int64 v34; // r8
  unsigned __int64 *v35; // rdx
  unsigned __int64 *v36; // rdx
  unsigned __int64 *v37; // rcx
  int v38; // ecx
  unsigned int v39; // eax
  __int64 v40; // r9
  DWORD64 v41; // r9
  struct _CONTEXT *v42; // rax
  unsigned __int8 v43; // cl
  unsigned __int64 *v44; // rdx
  _M128A *v45; // rcx
  int v46; // edx
  unsigned int v47; // edx
  int v48; // esi
  struct _RUNTIME_FUNCTION *v49; // r14
  unsigned int v50; // eax
  struct _EXCEPTION_RECORD *v51; // rcx
  int v52; // edx
  unsigned int v53; // edi
  struct _CONTEXT *v54; // rax
  ULONG v55; // et0
  __int16 v56; // ax
  unsigned int v57; // r9d
  int v58; // r10d
  int v59; // ecx
  unsigned int i; // r8d
  __int16 v61; // ax
  int v62; // edx
  unsigned int v63; // r14d
  unsigned __int8 v64; // cl
  int v65; // eax
  unsigned __int64 v66; // rcx
  struct _EXCEPTION_RECORD *v67; // rbx
  int ExceptionCode; // eax
  unsigned __int64 *v69; // rax
  __int64 v70; // rdx
  unsigned __int64 *v71; // rdx
  unsigned __int64 *v72; // rcx
  unsigned int v73; // eax
  int v74; // r8d
  unsigned __int8 *v75; // rcx
  unsigned __int64 v76; // rdx
  struct _CONTEXT *v77; // r9
  struct _CONTEXT *v78; // r8
  DWORD64 v79; // r10
  unsigned __int64 Rip; // rax
  char v81; // r8
  _BYTE *v82; // rdx
  char v83; // cl
  unsigned __int64 v84; // rax
  char v85; // al
  unsigned int v86; // ecx
  __int64 v87; // rax
  __int64 v88; // r15
  __int64 v89; // rcx
  unsigned int v90; // ecx
  int v91; // eax
  char v92; // cl
  __int64 v93; // rax
  bool v94; // zf
  char v95; // al
  int v96; // eax
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rdi
  _DWORD *v99; // rax
  char v100; // al
  unsigned __int64 v101; // rcx
  __int64 v102; // rax
  char v103; // r9
  unsigned __int64 v104; // rax
  unsigned __int64 *v105; // rcx
  unsigned __int64 *v106; // r9
  _M128A *v107; // rcx
  bool v108; // di
  unsigned __int64 *Rsp; // rcx
  _BYTE v110[4]; // [rsp+40h] [rbp+0h] BYREF
  int v111; // [rsp+44h] [rbp+4h]
  int v112; // [rsp+48h] [rbp+8h]
  int v113; // [rsp+4Ch] [rbp+Ch]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+10h] BYREF
  ULONG ContextLength; // [rsp+58h] [rbp+18h] BYREF
  unsigned __int64 v116; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 v117; // [rsp+68h] [rbp+28h] BYREF
  DWORD64 v118; // [rsp+70h] [rbp+30h]
  PEXCEPTION_ROUTINE v119; // [rsp+78h] [rbp+38h]
  PVOID v120; // [rsp+80h] [rbp+40h]
  unsigned __int64 EstablisherFrame; // [rsp+88h] [rbp+48h] BYREF
  PUNWIND_HISTORY_TABLE v122; // [rsp+90h] [rbp+50h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+98h] [rbp+58h]
  int v124; // [rsp+A0h] [rbp+60h] BYREF
  PRUNTIME_FUNCTION v125; // [rsp+A8h] [rbp+68h]
  PVOID HandlerData; // [rsp+B0h] [rbp+70h] BYREF
  _DWORD *v127; // [rsp+B8h] [rbp+78h]
  struct _CONTEXT *v128; // [rsp+C0h] [rbp+80h]
  PVOID v129; // [rsp+C8h] [rbp+88h]
  PVOID v130; // [rsp+D0h] [rbp+90h]
  DWORD64 ControlPc[10]; // [rsp+E0h] [rbp+A0h] BYREF
  struct _CONTEXT *v132; // [rsp+130h] [rbp+F0h]
  PCONTEXT_EX ContextEx; // [rsp+138h] [rbp+F8h] BYREF
  _QWORD v134[20]; // [rsp+140h] [rbp+100h] BYREF

  v7 = HistoryTable;
  v8 = TargetFrame;
  v130 = TargetIp;
  v120 = TargetFrame;
  v129 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  v128 = ContextRecord;
  v122 = HistoryTable;
  memset(ControlPc, 0, sizeof(ControlPc));
  memset(v134, 0, 0x98uLL);
  KeQueryCurrentStackInformation(&v124, &v116, &v117);
  LOBYTE(v9) = v124 == 10;
  v113 = v124 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v116, &v117) )
    goto LABEL_243;
  RtlGetExtendedContextLength2(0x10000Bu, &ContextLength, 0LL);
  v10 = ContextLength + 15LL;
  if ( v10 <= ContextLength )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = alloca(v11);
  v13 = alloca(v11);
  v132 = (struct _CONTEXT *)v110;
  RtlInitializeExtendedContext2((PCONTEXT)v110, 0x10000Bu, &ContextEx, 0LL);
  v14 = ContextRecord;
  v15 = (struct _CONTEXT *)v110;
  RtlCaptureContext2(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)v134;
    v134[2] = Rip;
    LODWORD(v134[0]) = -1073741785;
    v134[1] = 0LL;
    LODWORD(v134[3]) = 0;
  }
  v112 = 2;
  if ( !v8 )
    v112 = 6;
  v16 = 0LL;
  while ( 2 )
  {
    v17 = v14->Rip;
    v118 = v17;
    v125 = RtlLookupFunctionEntry(v17, &ImageBase, v7);
    if ( !v125 )
    {
      Rsp = (unsigned __int64 *)v14->Rsp;
      v14->Rip = *Rsp;
      v14->Rsp = (unsigned __int64)(Rsp + 1);
      goto LABEL_50;
    }
    RtlpCopyContext(v15, v14);
    LODWORD(v9) = 0;
    v21 = ImageBase + p_BeginAddress[2];
    v119 = 0LL;
    if ( v17 <= 0x7FFFFFFEFFFFLL && (v21 & 3) != 0 )
      goto LABEL_156;
    v22 = *(_BYTE *)v21 & 7;
    if ( v22 < 2 )
    {
      v74 = 0;
      v75 = (unsigned __int8 *)(v21 + 2);
      v76 = v21;
      if ( !*(_BYTE *)(v21 + 2) )
      {
        while ( (*(_BYTE *)v76 & 0x20) != 0 )
        {
          v86 = *v75;
          v87 = v86 + 1;
          if ( (v86 & 1) == 0 )
            v87 = v86;
          if ( (unsigned int)++v74 > 0x20 )
            goto LABEL_242;
          v76 = ImageBase + *(unsigned int *)(v76 + 2 * v87 + 12);
          if ( v17 <= 0x7FFFFFFEFFFFLL && (v76 & 3) != 0 )
            goto LABEL_156;
          v75 = (unsigned __int8 *)(v76 + 2);
          if ( *(_BYTE *)(v76 + 2) )
            goto LABEL_14;
        }
        LODWORD(v9) = 1;
      }
    }
LABEL_14:
    v23 = *(_BYTE *)(v21 + 3);
    v24 = ImageBase;
    v111 = ImageBase;
    if ( (v23 & 0xF) == 0 )
      goto LABEL_15;
    v63 = v17 - ImageBase - *p_BeginAddress;
    if ( v63 >= *(unsigned __int8 *)(v21 + 1) || (*(_BYTE *)v21 & 0x20) != 0 )
    {
      v64 = v23;
      v65 = v23;
LABEL_87:
      v25 = *(&v15->Rax + (v64 & 0xF)) - (v65 & 0xFFFFFFF0);
      goto LABEL_16;
    }
    v88 = 0LL;
    if ( *(_BYTE *)(v21 + 2) )
    {
      do
      {
        v89 = *(unsigned __int16 *)(v21 + 2 * v88 + 4);
        if ( (BYTE1(v89) & 0xF) == 3 )
          break;
        v88 = (unsigned int)RtlpUnwindOpSlots(v89) + (unsigned int)v88;
      }
      while ( (unsigned int)v88 < *(unsigned __int8 *)(v21 + 2) );
      p_BeginAddress = &v125->BeginAddress;
      v24 = v111;
    }
    v90 = *(unsigned __int8 *)(v21 + 2 * v88 + 4);
    v17 = v118;
    if ( v63 >= v90 )
    {
      v65 = *(unsigned __int8 *)(v21 + 3);
      v64 = *(_BYTE *)(v21 + 3);
      goto LABEL_87;
    }
LABEL_15:
    v25 = v15->Rsp;
LABEL_16:
    EstablisherFrame = v25;
    if ( (_DWORD)v9 )
      goto LABEL_17;
    if ( v22 >= 2 )
    {
      if ( !*(_BYTE *)(v21 + 2) )
        goto LABEL_17;
      v56 = *(_WORD *)(v21 + 4);
      if ( (HIBYTE(v56) & 0xF) != 6 )
        goto LABEL_17;
      v57 = (unsigned __int8)v56;
      v58 = v17 - v111;
      if ( (v56 & 0x1000) != 0 )
      {
        v59 = p_BeginAddress[1] - (unsigned __int8)v56;
        if ( v58 - v59 < (unsigned int)(unsigned __int8)v56 )
        {
LABEL_145:
          RtlpUnwindEpilogue(ImageBase, v17, v58 - v59, (_DWORD)p_BeginAddress, (__int64)v15, 0LL, 0LL, 0LL);
          goto LABEL_40;
        }
      }
      for ( i = 1; i < *(unsigned __int8 *)(v21 + 2); ++i )
      {
        v61 = *(_WORD *)(v21 + 2LL * i + 4);
        if ( (HIBYTE(v61) & 0xF) != 6 )
          break;
        v62 = (unsigned __int8)v61 + (HIBYTE(v61) >> 4 << 8);
        if ( !v62 )
          break;
        v59 = p_BeginAddress[1] - v62;
        if ( v58 - v59 < v57 )
          goto LABEL_145;
      }
LABEL_84:
      v24 = v111;
      goto LABEL_17;
    }
    v81 = *(_BYTE *)v17;
    v9 = 0LL;
    v82 = (_BYTE *)v17;
    if ( *(_BYTE *)v17 == 72 )
    {
      v85 = *(_BYTE *)(v17 + 1);
      if ( v85 == -125 && *(_BYTE *)(v17 + 2) == 0xC4 )
      {
        v82 = (_BYTE *)(v17 + 4);
        goto LABEL_122;
      }
      if ( v85 == -127 && *(_BYTE *)(v17 + 2) == 0xC4 )
        goto LABEL_180;
    }
    if ( (v81 & 0xFE) == 0x48 && *(_BYTE *)(v17 + 1) == 0x8D )
    {
      v91 = *(_BYTE *)(v17 + 2) & 7;
      v9 = v91 | (8 * (v81 & 1u));
      if ( v91 | (8 * (v81 & 1)) )
      {
        if ( (_DWORD)v9 == (*(_BYTE *)(v21 + 3) & 0xF) )
        {
          v92 = *(_BYTE *)(v17 + 2) & 0xF8;
          if ( v92 == 96 )
          {
            v82 = (_BYTE *)(v17 + 4);
            goto LABEL_122;
          }
          if ( v92 == -96 )
LABEL_180:
            v82 = (_BYTE *)(v17 + 7);
        }
      }
    }
LABEL_122:
    while ( 1 )
    {
      v83 = *v82;
      if ( (*v82 & 0xF8) != 0x58 )
        break;
      v93 = 1LL;
LABEL_182:
      v82 += v93;
    }
    v19 = (unsigned __int64)(v82 + 1);
    if ( (v83 & 0xF0) == 0x40 && (*(_BYTE *)v19 & 0xF8) == 0x58 )
    {
      v93 = 2LL;
      goto LABEL_182;
    }
    if ( v83 == -14 )
    {
      v83 = *(_BYTE *)v19;
      ++v82;
    }
    if ( (unsigned __int8)(v83 + 62) <= 1u )
      goto LABEL_188;
    if ( v83 == -13 )
    {
      v83 = -13;
      if ( v82[1] != 0xC3 )
        goto LABEL_129;
      goto LABEL_188;
    }
    if ( ((v83 + 23) & 0xFD) != 0 )
    {
LABEL_129:
      if ( v83 != -1 || (v83 = -1, v82[1] != 37) )
      {
        if ( (v83 & 0xF8) == 0x48 && v82[1] == 0xFF )
        {
          v94 = (v82[2] & 0x38) == 32;
          goto LABEL_187;
        }
        goto LABEL_17;
      }
LABEL_188:
      v18 = (_BYTE *)v17;
      if ( (*(_BYTE *)v17 & 0xF8) != 0x48 )
        goto LABEL_209;
      v95 = *(_BYTE *)(v17 + 1);
      switch ( v95 )
      {
        case -125:
          v18 = (_BYTE *)(v17 + 4);
          v15->Rsp += *(char *)(v17 + 3);
          goto LABEL_209;
        case -127:
          v15->Rsp += *(unsigned __int8 *)(v17 + 3) | ((*(unsigned __int8 *)(v17 + 4) | (*(unsigned __int16 *)(v17 + 5) << 8)) << 8);
          break;
        case -115:
          v100 = *(_BYTE *)(v17 + 2) & 0xF8;
          if ( v100 == 96 )
          {
            v101 = *(&v15->Rax + v9);
            v18 = (_BYTE *)(v17 + 4);
            v15->Rsp = v101;
            v15->Rsp = v101 + *(char *)(v17 + 3);
            goto LABEL_209;
          }
          if ( v100 != -96 )
          {
            while ( 1 )
            {
LABEL_209:
              if ( (*v18 & 0xF8) == 0x58 )
              {
                v19 = v15->Rsp;
                if ( v17 <= 0x7FFFFFFEFFFFLL && (v19 & 3) != 0 )
                  goto LABEL_156;
                *(&v15->Rax + (*v18 & 7)) = *(_QWORD *)v19;
                v102 = 1LL;
              }
              else
              {
                if ( (*v18 & 0xF0) != 0x40 || (v103 = v18[1], (v103 & 0xF8) != 0x58) )
                {
                  if ( v17 > 0x7FFFFFFEFFFFLL || (v104 = v15->Rsp, (v104 & 3) == 0) )
                  {
                    v105 = (unsigned __int64 *)v15->Rsp;
                    v15->Rip = *v105;
                    v15->Rsp = (unsigned __int64)(v105 + 1);
                    goto LABEL_40;
                  }
LABEL_156:
                  ExRaiseDatatypeMisalignment();
                }
                v19 = v15->Rsp;
                if ( v17 <= 0x7FFFFFFEFFFFLL && (v19 & 3) != 0 )
                  goto LABEL_156;
                *(&v15->Rax + (v103 & 7 | (8LL * (*v18 & 1)))) = *(_QWORD *)v19;
                v102 = 2LL;
              }
              v15->Rsp += 8LL;
              v18 += v102;
            }
          }
          v15->Rsp = *(&v15->Rax + v9)
                   + (*(unsigned __int8 *)(v17 + 3) | ((*(unsigned __int8 *)(v17 + 4) | (*(unsigned __int16 *)(v17 + 5) << 8)) << 8));
          break;
        default:
          goto LABEL_209;
      }
      v18 = (_BYTE *)(v17 + 7);
      goto LABEL_209;
    }
    v19 = (unsigned __int64)&v82[-ImageBase];
    if ( v83 == -21 )
      v96 = (char)v82[1] + 2;
    else
      v96 = *(_DWORD *)(v82 + 1) + 5;
    v97 = *p_BeginAddress;
    v98 = v19 + v96;
    if ( v98 < v97 || v98 >= p_BeginAddress[1] )
    {
      v99 = (_DWORD *)RtlpSameFunction(p_BeginAddress, ImageBase, v98 + ImageBase);
      if ( !v99 || v98 == *v99 )
        goto LABEL_188;
      p_BeginAddress = &v125->BeginAddress;
      goto LABEL_84;
    }
    if ( v98 == v97 )
    {
      v94 = (*(_BYTE *)v21 & 0x20) == 0;
LABEL_187:
      if ( v94 )
        goto LABEL_188;
    }
LABEL_17:
    v26 = 0;
    v127 = p_BeginAddress;
    v27 = p_BeginAddress;
    LODWORD(v118) = 0;
    while ( 1 )
    {
      v28 = (unsigned int)v27[2];
      v29 = 0;
      v110[0] = 0;
      LODWORD(v9) = v17 - v24 - *v27;
      v30 = 0LL;
      v31 = (_BYTE *)(v28 + ImageBase);
      if ( v17 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v31 & 3) != 0 )
        goto LABEL_156;
      v32 = v31[2];
      if ( v32 )
      {
        do
        {
          v33 = &v31[2 * v30];
          v34 = (unsigned __int8)v33[5] >> 4;
          if ( (unsigned int)v9 < (unsigned __int8)v33[4] )
          {
            v30 = (unsigned int)RtlpUnwindOpSlots(*((unsigned __int16 *)v33 + 2)) + (unsigned int)v30;
          }
          else
          {
            if ( (v31[2 * v30 + 5] & 0xF) != 0 )
            {
              switch ( v31[2 * v30 + 5] & 0xF )
              {
                case 1:
                  v30 = (unsigned int)(v30 + 1);
                  v46 = *(unsigned __int16 *)&v31[2 * v30 + 4];
                  if ( (_DWORD)v34 )
                  {
                    v30 = (unsigned int)(v30 + 1);
                    v47 = (*(unsigned __int16 *)&v31[2 * v30 + 4] << 16) + v46;
                  }
                  else
                  {
                    v47 = 8 * v46;
                  }
                  v15->Rsp += v47;
                  break;
                case 2:
                  v15->Rsp += (unsigned int)(8 * v34 + 8);
                  break;
                case 3:
                  v66 = *(&v15->Rax + (v31[3] & 0xF));
                  v15->Rsp = v66;
                  v15->Rsp = v66 - (v31[3] & 0xF0);
                  break;
                case 4:
                  v30 = (unsigned int)(v30 + 1);
                  v35 = (unsigned __int64 *)(v25 + 8LL * *(unsigned __int16 *)&v31[2 * v30 + 4]);
                  if ( v17 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v35 & 3) != 0 )
                    goto LABEL_156;
                  *(&v15->Rax + v34) = *v35;
                  break;
                case 5:
                  v30 = (unsigned int)(v30 + 2);
                  if ( v17 <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)v25 + (unsigned __int8)*(_WORD *)&v31[2 * (unsigned int)(v30 - 1) + 4]) & 3) != 0 )
                  {
                    goto LABEL_156;
                  }
                  *(&v15->Rax + v34) = *(_QWORD *)(v25
                                                 + ((unsigned __int64)*(unsigned __int16 *)&v31[2 * v30 + 4] << 16)
                                                 + *(unsigned __int16 *)&v31[2 * (unsigned int)(v30 - 1) + 4]);
                  break;
                case 6:
                  LODWORD(v30) = v30 + 1;
                  break;
                case 7:
                  LODWORD(v30) = v30 + 2;
                  break;
                case 8:
                  v30 = (unsigned int)(v30 + 1);
                  v44 = (unsigned __int64 *)(v25 + 16LL * *(unsigned __int16 *)&v31[2 * v30 + 4]);
                  if ( v17 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v44 & 3) != 0 )
                    goto LABEL_156;
                  v45 = &v15->FltSave.XmmRegisters[(unsigned int)v34];
                  v45->Low = *v44;
                  v45->High = v44[1];
                  break;
                case 9:
                  v30 = (unsigned int)(v30 + 2);
                  v106 = (unsigned __int64 *)(v25
                                            + ((unsigned __int64)*(unsigned __int16 *)&v31[2 * v30 + 4] << 16)
                                            + *(unsigned __int16 *)&v31[2 * (unsigned int)(v30 - 1) + 4]);
                  if ( v17 <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)v25 + (unsigned __int8)*(_WORD *)&v31[2 * (unsigned int)(v30 - 1) + 4]) & 3) != 0 )
                  {
                    goto LABEL_156;
                  }
                  v107 = &v15->FltSave.XmmRegisters[(unsigned int)v34];
                  v107->Low = *v106;
                  v107->High = v106[1];
                  break;
                case 0xA:
                  v69 = (unsigned __int64 *)v15->Rsp;
                  v110[0] = 1;
                  v70 = 4LL;
                  if ( !(_DWORD)v34 )
                    v70 = 3LL;
                  v71 = &v69[v70];
                  v72 = v69 + 1;
                  if ( !(_DWORD)v34 )
                    v72 = v69;
                  if ( v17 <= 0x7FFFFFFEFFFFLL && (((unsigned __int8)v72 & 3) != 0 || ((unsigned __int8)v71 & 3) != 0) )
                    goto LABEL_156;
                  v15->Rip = *v72;
                  v15->Rsp = *v71;
                  break;
                default:
                  goto LABEL_242;
              }
            }
            else
            {
              v36 = (unsigned __int64 *)v15->Rsp;
              if ( v17 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v36 & 3) != 0 )
                goto LABEL_156;
              *(&v15->Rax + v34) = *v36;
              v15->Rsp += 8LL;
            }
            v30 = (unsigned int)(v30 + 1);
          }
          v32 = v31[2];
        }
        while ( (unsigned int)v30 < v32 );
        v27 = v127;
        v29 = v110[0];
        v26 = v118;
        v24 = v111;
      }
      if ( (*v31 & 0x20) == 0 )
        break;
      v73 = v32;
      if ( (v32 & 1) != 0 )
        v73 = v32 + 1;
      v27 = &v31[2 * v73 + 4];
      v127 = v27;
      if ( v17 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v27 & 3) != 0 )
        goto LABEL_156;
      LODWORD(v118) = ++v26;
      if ( v26 > 0x20 )
        goto LABEL_242;
    }
    if ( !v29 )
    {
      if ( v17 <= 0x7FFFFFFEFFFFLL )
      {
        v84 = v15->Rsp;
        if ( (v84 & 3) != 0 )
          goto LABEL_156;
      }
      v37 = (unsigned __int64 *)v15->Rsp;
      v15->Rip = *v37;
      v15->Rsp = (unsigned __int64)(v37 + 1);
    }
    LODWORD(v18) = v17 - v24 - *v27;
    v19 = ImageBase + (unsigned int)v27[2];
    if ( v17 <= 0x7FFFFFFEFFFFLL && (v19 & 3) != 0 )
      goto LABEL_156;
    if ( (unsigned int)v18 >= *(unsigned __int8 *)(v19 + 1) && (*(_BYTE *)v19 & 0x10) != 0 )
    {
      v38 = *(unsigned __int8 *)(v19 + 2);
      v39 = v38 + 1;
      if ( (v38 & 1) == 0 )
        v39 = *(unsigned __int8 *)(v19 + 2);
      LODWORD(v18) = v39;
      v40 = *(unsigned int *)(v19 + 2LL * v39 + 4);
      HandlerData = (PVOID)(v19 + 2 * (v39 + 2 + 2LL));
      v119 = (PEXCEPTION_ROUTINE)(ImageBase + v40);
    }
LABEL_40:
    if ( (v25 & 7) == 0 && v25 >= v116 && v25 < v117 )
    {
      LOBYTE(v9) = v113;
      goto LABEL_44;
    }
    if ( (_BYTE)v113 != 1
      || (LOBYTE(v9) = 2, v113 = v9, !(unsigned __int8)RtlpGetStackLimitsEx(v25, (__int64)&v116, (__int64)&v117)) )
    {
LABEL_243:
      RtlRaiseStatus(-1073741784);
    }
LABEL_44:
    v8 = v120;
    if ( v120 && !(_BYTE)v9 && (unsigned __int64)v120 < v25 )
      goto LABEL_243;
    v41 = (DWORD64)v119;
    v16 = EstablisherFrame;
    if ( v119 )
    {
      v48 = 0;
      v49 = v125;
      ControlPc[4] = (DWORD64)v130;
      v50 = v112;
      do
      {
        if ( v8 == (PVOID)v16 )
        {
          v50 |= 0x20u;
          v112 = v50;
        }
        v51 = ExceptionRecorda;
        ExceptionRecorda->ExceptionFlags = v50;
        v14->Rax = (unsigned __int64)v129;
        ControlPc[1] = ImageBase;
        ControlPc[7] = (DWORD64)HandlerData;
        ControlPc[8] = (DWORD64)v122;
        ControlPc[0] = v17;
        ControlPc[2] = (DWORD64)v49;
        ControlPc[3] = v16;
        ControlPc[5] = (DWORD64)v14;
        ControlPc[6] = v41;
        LODWORD(ControlPc[9]) = v48;
        v108 = (v14->ContextFlags & 0x100040) == 1048640;
        v52 = RtlpExecuteHandlerForUnwind(v51, v16, v14, ControlPc);
        if ( !v108 && (v14->ContextFlags & 0x100040) == 0x100040 )
          v14->ContextFlags &= ~0x40u;
        v53 = v112 & 0xFFFFFF9F;
        v112 &= 0xFFFFFF9F;
        LODWORD(v18) = v52 - 1;
        if ( (_DWORD)v18 )
        {
          if ( (_DWORD)v18 != 2 )
            RtlRaiseStatus(-1073741786);
          v17 = ControlPc[0];
          v49 = (struct _RUNTIME_FUNCTION *)ControlPc[2];
          ImageBase = ControlPc[1];
          RtlpCopyContext(v128, ControlPc[5]);
          v14 = v77;
          v15 = v132;
          RtlpCopyContext(v132, v77);
          v119 = RtlVirtualUnwind(2u, v79, v17, v49, v78, &HandlerData, &EstablisherFrame, 0LL);
          if ( v119 != (PEXCEPTION_ROUTINE)ControlPc[6]
            || (v16 = EstablisherFrame, EstablisherFrame != ControlPc[3])
            || HandlerData != (PVOID)ControlPc[7] )
          {
            __fastfail(0x27u);
          }
          v48 = ControlPc[9];
          v122 = (PUNWIND_HISTORY_TABLE)ControlPc[8];
          v112 = v53 | 0x40;
          if ( !(unsigned __int8)RtlpIsFrameInBounds(&v116, EstablisherFrame, &v117) && (_BYTE)v113 == 1 )
          {
            LOBYTE(v113) = 2;
            RtlpGetStackLimitsEx(v16, (__int64)&v116, (__int64)&v117);
            v41 = (DWORD64)v119;
          }
          v8 = v120;
        }
        else
        {
          v8 = v120;
          if ( (PVOID)v16 != v120 )
          {
            v54 = v14;
            v14 = v15;
            v15 = v54;
          }
          v41 = (DWORD64)v119;
          v55 = _mm_getcsr();
          ContextLength = v55;
          v14->MxCsr = v55;
          v14->FltSave.MxCsr = v55;
        }
        v50 = v112;
      }
      while ( (v112 & 0x40) != 0 );
      LOBYTE(v9) = v113;
      v7 = v122;
    }
    else
    {
      v94 = v25 == (_QWORD)v120;
      v7 = v122;
      if ( !v94 )
      {
        v42 = v14;
        v14 = v15;
        v15 = v42;
      }
    }
LABEL_50:
    v43 = 0;
    if ( (_BYTE)v9 != 2 )
      v43 = v9;
    if ( (v16 & 7) != 0 || v16 < v116 || v16 >= v117 )
    {
      if ( (PVOID)v16 == v8 )
        break;
      if ( v17 != v14->Rip )
      {
        ZwRaiseException(ExceptionRecorda, v14, 0);
        return;
      }
LABEL_242:
      RtlRaiseStatus(-1073741569);
    }
    if ( (PVOID)v16 != v8 )
    {
      LOBYTE(v9) = v43;
      v113 = v43;
      continue;
    }
    break;
  }
  v67 = ExceptionRecorda;
  v14->Rax = (unsigned __int64)v129;
  ExceptionCode = v67->ExceptionCode;
  if ( v67->ExceptionCode != -2147483607 )
  {
    v14->Rip = (unsigned __int64)v130;
    ExceptionCode = v67->ExceptionCode;
  }
  if ( ExceptionCode == -2147483610 )
    RtlGuardCheckLongJumpTarget(*(PVOID *)(v67->ExceptionInformation[0] + 80), (BOOL)v18, (PBOOL)v19);
  RtlRestoreContext(v14, v67);
}
