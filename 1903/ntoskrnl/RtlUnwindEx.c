/*
 * XREFs of RtlUnwindEx @ 0x140019840
 * Callers:
 *     RtlUnwind @ 0x14013AC20 (RtlUnwind.c)
 *     __C_specific_handler @ 0x14019E730 (__C_specific_handler.c)
 *     __longjmp_internal @ 0x1401BFDF0 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x1401D4D00 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     RtlpGetStackLimitsEx @ 0x140016C38 (RtlpGetStackLimitsEx.c)
 *     RtlGetExtendedContextLength2 @ 0x140016D58 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x140016E3C (RtlInitializeExtendedContext2.c)
 *     RtlpCopyContext @ 0x14001A3D0 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14001A590 (RtlLookupFunctionEntry.c)
 *     KeQueryCurrentStackInformation @ 0x14001B7E0 (KeQueryCurrentStackInformation.c)
 *     RtlpGetStackLimits @ 0x1400C2F50 (RtlpGetStackLimits.c)
 *     RtlVirtualUnwind @ 0x14013A340 (RtlVirtualUnwind.c)
 *     RtlpIsFrameInBounds @ 0x14013B004 (RtlpIsFrameInBounds.c)
 *     RtlpUnwindEpilogue @ 0x14013C478 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x14013C620 (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x14018E7F0 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1401C2CD0 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x1401CBC70 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x1401CBDC0 (RtlRestoreContext.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1401CC980 (RtlpExecuteHandlerForUnwind.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140315304 (RtlGuardCheckLongJumpTarget.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
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
  unsigned int *p_BeginAddress; // r11
  unsigned __int64 v19; // rbx
  unsigned int v20; // edi
  unsigned __int8 v21; // dl
  int v22; // r10d
  unsigned __int64 v23; // r14
  unsigned int v24; // edx
  _DWORD *v25; // r8
  __int64 v26; // rcx
  char v27; // r9
  __int64 v28; // rbx
  _BYTE *v29; // rdi
  unsigned __int8 v30; // cl
  _BYTE *v31; // rdx
  __int64 v32; // r8
  unsigned __int64 *v33; // rdx
  unsigned __int64 *v34; // rdx
  unsigned __int64 *v35; // rcx
  unsigned int v36; // edx
  unsigned __int64 v37; // r8
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
  int v54; // edx
  struct _CONTEXT *v55; // rax
  int v56; // et0
  __int16 v57; // ax
  unsigned int v58; // r9d
  int v59; // r10d
  int v60; // ecx
  unsigned int i; // r8d
  __int16 v62; // ax
  int v63; // edx
  unsigned int v64; // r14d
  unsigned __int8 v65; // cl
  int v66; // eax
  unsigned __int64 v67; // rcx
  struct _EXCEPTION_RECORD *v68; // rbx
  int ExceptionCode; // eax
  unsigned __int64 *v70; // rax
  __int64 v71; // rdx
  unsigned __int64 *v72; // rdx
  unsigned __int64 *v73; // rcx
  unsigned int v74; // eax
  int v75; // r8d
  unsigned __int8 *v76; // rcx
  unsigned __int64 v77; // rdx
  struct _CONTEXT *v78; // r9
  struct _CONTEXT *v79; // r8
  DWORD64 v80; // r10
  unsigned __int64 Rip; // rax
  char v82; // r8
  char *v83; // rdx
  char v84; // cl
  char *v85; // r8
  unsigned __int64 v86; // rax
  char v87; // al
  unsigned int v88; // ecx
  __int64 v89; // rax
  __int64 v90; // r15
  __int64 v91; // rcx
  unsigned int v92; // ecx
  int v93; // eax
  char v94; // cl
  __int64 v95; // rax
  bool v96; // zf
  _BYTE *v97; // rdx
  char v98; // al
  int v99; // eax
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // rdi
  _DWORD *v102; // rax
  char v103; // al
  unsigned __int64 v104; // rcx
  unsigned __int64 *v105; // r8
  __int64 v106; // rax
  char v107; // r9
  unsigned __int64 *v108; // r8
  unsigned __int64 v109; // rax
  unsigned __int64 *v110; // rcx
  unsigned __int64 *v111; // r9
  _M128A *v112; // rcx
  bool v113; // di
  unsigned __int64 *Rsp; // rcx
  _BYTE v115[4]; // [rsp+40h] [rbp+0h] BYREF
  int v116; // [rsp+44h] [rbp+4h]
  int v117; // [rsp+48h] [rbp+8h]
  int v118; // [rsp+4Ch] [rbp+Ch]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+10h] BYREF
  unsigned int v120; // [rsp+58h] [rbp+18h] BYREF
  unsigned __int64 v121; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int64 v122; // [rsp+68h] [rbp+28h] BYREF
  DWORD64 v123; // [rsp+70h] [rbp+30h]
  PEXCEPTION_ROUTINE v124; // [rsp+78h] [rbp+38h]
  PVOID v125; // [rsp+80h] [rbp+40h]
  unsigned __int64 EstablisherFrame; // [rsp+88h] [rbp+48h] BYREF
  PUNWIND_HISTORY_TABLE v127; // [rsp+90h] [rbp+50h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+98h] [rbp+58h]
  int v129; // [rsp+A0h] [rbp+60h] BYREF
  PRUNTIME_FUNCTION v130; // [rsp+A8h] [rbp+68h]
  PVOID HandlerData; // [rsp+B0h] [rbp+70h] BYREF
  _DWORD *v132; // [rsp+B8h] [rbp+78h]
  struct _CONTEXT *v133; // [rsp+C0h] [rbp+80h]
  PVOID v134; // [rsp+C8h] [rbp+88h]
  PVOID v135; // [rsp+D0h] [rbp+90h]
  DWORD64 ControlPc[10]; // [rsp+E0h] [rbp+A0h] BYREF
  struct _CONTEXT *v137; // [rsp+130h] [rbp+F0h]
  __int64 v138; // [rsp+138h] [rbp+F8h] BYREF
  _QWORD v139[20]; // [rsp+140h] [rbp+100h] BYREF

  v7 = HistoryTable;
  v8 = TargetFrame;
  v135 = TargetIp;
  v125 = TargetFrame;
  v134 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  v133 = ContextRecord;
  v127 = HistoryTable;
  memset(ControlPc, 0, sizeof(ControlPc));
  memset(v139, 0, 0x98uLL);
  KeQueryCurrentStackInformation(&v129, &v121, &v122);
  LOBYTE(v9) = v129 == 10;
  v118 = v129 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v121, &v122) )
    goto LABEL_243;
  RtlGetExtendedContextLength2(1048587LL, &v120);
  v10 = v120 + 15LL;
  if ( v10 <= v120 )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = alloca(v11);
  v13 = alloca(v11);
  v137 = (struct _CONTEXT *)v115;
  RtlInitializeExtendedContext2((__int64)v115, 0x10000Bu, &v138, 0LL);
  v14 = ContextRecord;
  v15 = (struct _CONTEXT *)v115;
  RtlCaptureContext2(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)v139;
    v139[2] = Rip;
    LODWORD(v139[0]) = -1073741785;
    v139[1] = 0LL;
    LODWORD(v139[3]) = 0;
  }
  v117 = 2;
  if ( !v8 )
    v117 = 6;
  v16 = 0LL;
  while ( 2 )
  {
    v17 = v14->Rip;
    v123 = v17;
    v130 = RtlLookupFunctionEntry(v17, &ImageBase, v7);
    if ( !v130 )
    {
      Rsp = (unsigned __int64 *)v14->Rsp;
      v14->Rip = *Rsp;
      v14->Rsp = (unsigned __int64)(Rsp + 1);
      goto LABEL_50;
    }
    RtlpCopyContext(v15, v14);
    LODWORD(v9) = 0;
    v19 = ImageBase + p_BeginAddress[2];
    v124 = 0LL;
    if ( v17 <= 0x7FFFFFFEFFFFLL && (v19 & 3) != 0 )
      goto LABEL_156;
    v20 = *(_BYTE *)v19 & 7;
    if ( v20 < 2 )
    {
      v75 = 0;
      v76 = (unsigned __int8 *)(v19 + 2);
      v77 = v19;
      if ( !*(_BYTE *)(v19 + 2) )
      {
        while ( (*(_BYTE *)v77 & 0x20) != 0 )
        {
          v88 = *v76;
          v89 = v88 + 1;
          if ( (v88 & 1) == 0 )
            v89 = v88;
          if ( (unsigned int)++v75 > 0x20 )
            goto LABEL_242;
          v77 = ImageBase + *(unsigned int *)(v77 + 2 * v89 + 12);
          if ( v17 <= 0x7FFFFFFEFFFFLL && (v77 & 3) != 0 )
            goto LABEL_156;
          v76 = (unsigned __int8 *)(v77 + 2);
          if ( *(_BYTE *)(v77 + 2) )
            goto LABEL_14;
        }
        LODWORD(v9) = 1;
      }
    }
LABEL_14:
    v21 = *(_BYTE *)(v19 + 3);
    v22 = ImageBase;
    v116 = ImageBase;
    if ( (v21 & 0xF) == 0 )
      goto LABEL_15;
    v64 = v17 - ImageBase - *p_BeginAddress;
    if ( v64 >= *(unsigned __int8 *)(v19 + 1) || (*(_BYTE *)v19 & 0x20) != 0 )
    {
      v65 = v21;
      v66 = v21;
LABEL_87:
      v23 = *(&v15->Rax + (v65 & 0xF)) - (v66 & 0xFFFFFFF0);
      goto LABEL_16;
    }
    v90 = 0LL;
    if ( *(_BYTE *)(v19 + 2) )
    {
      do
      {
        v91 = *(unsigned __int16 *)(v19 + 2 * v90 + 4);
        if ( (BYTE1(v91) & 0xF) == 3 )
          break;
        v90 = (unsigned int)RtlpUnwindOpSlots(v91) + (unsigned int)v90;
      }
      while ( (unsigned int)v90 < *(unsigned __int8 *)(v19 + 2) );
      p_BeginAddress = &v130->BeginAddress;
      v22 = v116;
    }
    v92 = *(unsigned __int8 *)(v19 + 2 * v90 + 4);
    v17 = v123;
    if ( v64 >= v92 )
    {
      v66 = *(unsigned __int8 *)(v19 + 3);
      v65 = *(_BYTE *)(v19 + 3);
      goto LABEL_87;
    }
LABEL_15:
    v23 = v15->Rsp;
LABEL_16:
    EstablisherFrame = v23;
    if ( (_DWORD)v9 )
      goto LABEL_17;
    if ( v20 >= 2 )
    {
      if ( !*(_BYTE *)(v19 + 2) )
        goto LABEL_17;
      v57 = *(_WORD *)(v19 + 4);
      if ( (HIBYTE(v57) & 0xF) != 6 )
        goto LABEL_17;
      v58 = (unsigned __int8)v57;
      v59 = v17 - v116;
      if ( (v57 & 0x1000) != 0 )
      {
        v60 = p_BeginAddress[1] - (unsigned __int8)v57;
        if ( v59 - v60 < (unsigned int)(unsigned __int8)v57 )
        {
LABEL_145:
          RtlpUnwindEpilogue(ImageBase, v17, v59 - v60, (_DWORD)p_BeginAddress, (__int64)v15, 0LL, 0LL, 0LL);
          goto LABEL_40;
        }
      }
      for ( i = 1; i < *(unsigned __int8 *)(v19 + 2); ++i )
      {
        v62 = *(_WORD *)(v19 + 2LL * i + 4);
        if ( (HIBYTE(v62) & 0xF) != 6 )
          break;
        v63 = (unsigned __int8)v62 + (HIBYTE(v62) >> 4 << 8);
        if ( !v63 )
          break;
        v60 = p_BeginAddress[1] - v63;
        if ( v59 - v60 < v58 )
          goto LABEL_145;
      }
LABEL_84:
      v22 = v116;
      goto LABEL_17;
    }
    v82 = *(_BYTE *)v17;
    v9 = 0LL;
    v83 = (char *)v17;
    if ( *(_BYTE *)v17 == 72 )
    {
      v87 = *(_BYTE *)(v17 + 1);
      if ( v87 == -125 && *(_BYTE *)(v17 + 2) == 0xC4 )
      {
        v83 = (char *)(v17 + 4);
        goto LABEL_122;
      }
      if ( v87 == -127 && *(_BYTE *)(v17 + 2) == 0xC4 )
        goto LABEL_180;
    }
    if ( (v82 & 0xFE) == 0x48 && *(_BYTE *)(v17 + 1) == 0x8D )
    {
      v93 = *(_BYTE *)(v17 + 2) & 7;
      v9 = v93 | (8 * (v82 & 1u));
      if ( v93 | (8 * (v82 & 1)) )
      {
        if ( (_DWORD)v9 == (*(_BYTE *)(v19 + 3) & 0xF) )
        {
          v94 = *(_BYTE *)(v17 + 2) & 0xF8;
          if ( v94 == 96 )
          {
            v83 = (char *)(v17 + 4);
            goto LABEL_122;
          }
          if ( v94 == -96 )
LABEL_180:
            v83 = (char *)(v17 + 7);
        }
      }
    }
LABEL_122:
    while ( 1 )
    {
      v84 = *v83;
      if ( (*v83 & 0xF8) != 0x58 )
        break;
      v95 = 1LL;
LABEL_182:
      v83 += v95;
    }
    v85 = v83 + 1;
    if ( (v84 & 0xF0) == 0x40 && (*v85 & 0xF8) == 0x58 )
    {
      v95 = 2LL;
      goto LABEL_182;
    }
    if ( v84 == -14 )
    {
      v84 = *v85;
      ++v83;
    }
    if ( (unsigned __int8)(v84 + 62) <= 1u )
      goto LABEL_188;
    if ( v84 == -13 )
    {
      v84 = -13;
      if ( v83[1] != -61 )
        goto LABEL_129;
      goto LABEL_188;
    }
    if ( ((v84 + 23) & 0xFD) != 0 )
    {
LABEL_129:
      if ( v84 != -1 || (v84 = -1, v83[1] != 37) )
      {
        if ( (v84 & 0xF8) == 0x48 && v83[1] == -1 )
        {
          v96 = (v83[2] & 0x38) == 32;
          goto LABEL_187;
        }
        goto LABEL_17;
      }
LABEL_188:
      v97 = (_BYTE *)v17;
      if ( (*(_BYTE *)v17 & 0xF8) != 0x48 )
        goto LABEL_209;
      v98 = *(_BYTE *)(v17 + 1);
      switch ( v98 )
      {
        case -125:
          v97 = (_BYTE *)(v17 + 4);
          v15->Rsp += *(char *)(v17 + 3);
          goto LABEL_209;
        case -127:
          v15->Rsp += *(unsigned __int8 *)(v17 + 3) | ((*(unsigned __int8 *)(v17 + 4) | (*(unsigned __int16 *)(v17 + 5) << 8)) << 8);
          break;
        case -115:
          v103 = *(_BYTE *)(v17 + 2) & 0xF8;
          if ( v103 == 96 )
          {
            v104 = *(&v15->Rax + v9);
            v97 = (_BYTE *)(v17 + 4);
            v15->Rsp = v104;
            v15->Rsp = v104 + *(char *)(v17 + 3);
            goto LABEL_209;
          }
          if ( v103 != -96 )
          {
            while ( 1 )
            {
LABEL_209:
              if ( (*v97 & 0xF8) == 0x58 )
              {
                v105 = (unsigned __int64 *)v15->Rsp;
                if ( v17 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v105 & 3) != 0 )
                  goto LABEL_156;
                *(&v15->Rax + (*v97 & 7)) = *v105;
                v106 = 1LL;
              }
              else
              {
                if ( (*v97 & 0xF0) != 0x40 || (v107 = v97[1], (v107 & 0xF8) != 0x58) )
                {
                  if ( v17 > 0x7FFFFFFEFFFFLL || (v109 = v15->Rsp, (v109 & 3) == 0) )
                  {
                    v110 = (unsigned __int64 *)v15->Rsp;
                    v15->Rip = *v110;
                    v15->Rsp = (unsigned __int64)(v110 + 1);
                    goto LABEL_40;
                  }
LABEL_156:
                  ExRaiseDatatypeMisalignment();
                }
                v108 = (unsigned __int64 *)v15->Rsp;
                if ( v17 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v108 & 3) != 0 )
                  goto LABEL_156;
                *(&v15->Rax + (v107 & 7 | (8LL * (*v97 & 1)))) = *v108;
                v106 = 2LL;
              }
              v15->Rsp += 8LL;
              v97 += v106;
            }
          }
          v15->Rsp = *(&v15->Rax + v9)
                   + (*(unsigned __int8 *)(v17 + 3) | ((*(unsigned __int8 *)(v17 + 4) | (*(unsigned __int16 *)(v17 + 5) << 8)) << 8));
          break;
        default:
          goto LABEL_209;
      }
      v97 = (_BYTE *)(v17 + 7);
      goto LABEL_209;
    }
    if ( v84 == -21 )
      v99 = v83[1] + 2;
    else
      v99 = *(_DWORD *)(v83 + 1) + 5;
    v100 = *p_BeginAddress;
    v101 = (unsigned __int64)&v83[v99 - ImageBase];
    if ( v101 < v100 || v101 >= p_BeginAddress[1] )
    {
      v102 = (_DWORD *)RtlpSameFunction(p_BeginAddress, ImageBase, &v83[v99]);
      if ( !v102 || v101 == *v102 )
        goto LABEL_188;
      p_BeginAddress = &v130->BeginAddress;
      goto LABEL_84;
    }
    if ( v101 == v100 )
    {
      v96 = (*(_BYTE *)v19 & 0x20) == 0;
LABEL_187:
      if ( v96 )
        goto LABEL_188;
    }
LABEL_17:
    v24 = 0;
    v132 = p_BeginAddress;
    v25 = p_BeginAddress;
    LODWORD(v123) = 0;
    while ( 1 )
    {
      v26 = (unsigned int)v25[2];
      v27 = 0;
      v115[0] = 0;
      LODWORD(v9) = v17 - v22 - *v25;
      v28 = 0LL;
      v29 = (_BYTE *)(v26 + ImageBase);
      if ( v17 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v29 & 3) != 0 )
        goto LABEL_156;
      v30 = v29[2];
      if ( v30 )
      {
        do
        {
          v31 = &v29[2 * v28];
          v32 = (unsigned __int8)v31[5] >> 4;
          if ( (unsigned int)v9 < (unsigned __int8)v31[4] )
          {
            v28 = (unsigned int)RtlpUnwindOpSlots(*((unsigned __int16 *)v31 + 2)) + (unsigned int)v28;
          }
          else
          {
            if ( (v29[2 * v28 + 5] & 0xF) != 0 )
            {
              switch ( v29[2 * v28 + 5] & 0xF )
              {
                case 1:
                  v28 = (unsigned int)(v28 + 1);
                  v46 = *(unsigned __int16 *)&v29[2 * v28 + 4];
                  if ( (_DWORD)v32 )
                  {
                    v28 = (unsigned int)(v28 + 1);
                    v47 = (*(unsigned __int16 *)&v29[2 * v28 + 4] << 16) + v46;
                  }
                  else
                  {
                    v47 = 8 * v46;
                  }
                  v15->Rsp += v47;
                  break;
                case 2:
                  v15->Rsp += (unsigned int)(8 * v32 + 8);
                  break;
                case 3:
                  v67 = *(&v15->Rax + (v29[3] & 0xF));
                  v15->Rsp = v67;
                  v15->Rsp = v67 - (v29[3] & 0xF0);
                  break;
                case 4:
                  v28 = (unsigned int)(v28 + 1);
                  v33 = (unsigned __int64 *)(v23 + 8LL * *(unsigned __int16 *)&v29[2 * v28 + 4]);
                  if ( v17 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v33 & 3) != 0 )
                    goto LABEL_156;
                  *(&v15->Rax + v32) = *v33;
                  break;
                case 5:
                  v28 = (unsigned int)(v28 + 2);
                  if ( v17 <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)v23 + (unsigned __int8)*(_WORD *)&v29[2 * (unsigned int)(v28 - 1) + 4]) & 3) != 0 )
                  {
                    goto LABEL_156;
                  }
                  *(&v15->Rax + v32) = *(_QWORD *)(v23
                                                 + ((unsigned __int64)*(unsigned __int16 *)&v29[2 * v28 + 4] << 16)
                                                 + *(unsigned __int16 *)&v29[2 * (unsigned int)(v28 - 1) + 4]);
                  break;
                case 6:
                  LODWORD(v28) = v28 + 1;
                  break;
                case 7:
                  LODWORD(v28) = v28 + 2;
                  break;
                case 8:
                  v28 = (unsigned int)(v28 + 1);
                  v44 = (unsigned __int64 *)(v23 + 16LL * *(unsigned __int16 *)&v29[2 * v28 + 4]);
                  if ( v17 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v44 & 3) != 0 )
                    goto LABEL_156;
                  v45 = &v15->FltSave.XmmRegisters[(unsigned int)v32];
                  v45->Low = *v44;
                  v45->High = v44[1];
                  break;
                case 9:
                  v28 = (unsigned int)(v28 + 2);
                  v111 = (unsigned __int64 *)(v23
                                            + ((unsigned __int64)*(unsigned __int16 *)&v29[2 * v28 + 4] << 16)
                                            + *(unsigned __int16 *)&v29[2 * (unsigned int)(v28 - 1) + 4]);
                  if ( v17 <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)v23 + (unsigned __int8)*(_WORD *)&v29[2 * (unsigned int)(v28 - 1) + 4]) & 3) != 0 )
                  {
                    goto LABEL_156;
                  }
                  v112 = &v15->FltSave.XmmRegisters[(unsigned int)v32];
                  v112->Low = *v111;
                  v112->High = v111[1];
                  break;
                case 0xA:
                  v70 = (unsigned __int64 *)v15->Rsp;
                  v115[0] = 1;
                  v71 = 4LL;
                  if ( !(_DWORD)v32 )
                    v71 = 3LL;
                  v72 = &v70[v71];
                  v73 = v70 + 1;
                  if ( !(_DWORD)v32 )
                    v73 = v70;
                  if ( v17 <= 0x7FFFFFFEFFFFLL && (((unsigned __int8)v73 & 3) != 0 || ((unsigned __int8)v72 & 3) != 0) )
                    goto LABEL_156;
                  v15->Rip = *v73;
                  v15->Rsp = *v72;
                  break;
                default:
                  goto LABEL_242;
              }
            }
            else
            {
              v34 = (unsigned __int64 *)v15->Rsp;
              if ( v17 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v34 & 3) != 0 )
                goto LABEL_156;
              *(&v15->Rax + v32) = *v34;
              v15->Rsp += 8LL;
            }
            v28 = (unsigned int)(v28 + 1);
          }
          v30 = v29[2];
        }
        while ( (unsigned int)v28 < v30 );
        v25 = v132;
        v27 = v115[0];
        v24 = v123;
        v22 = v116;
      }
      if ( (*v29 & 0x20) == 0 )
        break;
      v74 = v30;
      if ( (v30 & 1) != 0 )
        v74 = v30 + 1;
      v25 = &v29[2 * v74 + 4];
      v132 = v25;
      if ( v17 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v25 & 3) != 0 )
        goto LABEL_156;
      LODWORD(v123) = ++v24;
      if ( v24 > 0x20 )
        goto LABEL_242;
    }
    if ( !v27 )
    {
      if ( v17 <= 0x7FFFFFFEFFFFLL )
      {
        v86 = v15->Rsp;
        if ( (v86 & 3) != 0 )
          goto LABEL_156;
      }
      v35 = (unsigned __int64 *)v15->Rsp;
      v15->Rip = *v35;
      v15->Rsp = (unsigned __int64)(v35 + 1);
    }
    v36 = v17 - v22 - *v25;
    v37 = ImageBase + (unsigned int)v25[2];
    if ( v17 <= 0x7FFFFFFEFFFFLL && (v37 & 3) != 0 )
      goto LABEL_156;
    if ( v36 >= *(unsigned __int8 *)(v37 + 1) && (*(_BYTE *)v37 & 0x10) != 0 )
    {
      v38 = *(unsigned __int8 *)(v37 + 2);
      v39 = v38 + 1;
      if ( (v38 & 1) == 0 )
        v39 = *(unsigned __int8 *)(v37 + 2);
      v40 = *(unsigned int *)(v37 + 2LL * v39 + 4);
      HandlerData = (PVOID)(v37 + 2 * (v39 + 2 + 2LL));
      v124 = (PEXCEPTION_ROUTINE)(ImageBase + v40);
    }
LABEL_40:
    if ( (v23 & 7) == 0 && v23 >= v121 && v23 < v122 )
    {
      LOBYTE(v9) = v118;
      goto LABEL_44;
    }
    if ( (_BYTE)v118 != 1
      || (LOBYTE(v9) = 2, v118 = v9, !(unsigned __int8)RtlpGetStackLimitsEx(v23, (__int64)&v121, (__int64)&v122)) )
    {
LABEL_243:
      RtlRaiseStatus(-1073741784);
    }
LABEL_44:
    v8 = v125;
    if ( v125 && !(_BYTE)v9 && (unsigned __int64)v125 < v23 )
      goto LABEL_243;
    v41 = (DWORD64)v124;
    v16 = EstablisherFrame;
    if ( v124 )
    {
      v48 = 0;
      v49 = v130;
      ControlPc[4] = (DWORD64)v135;
      v50 = v117;
      do
      {
        if ( v8 == (PVOID)v16 )
        {
          v50 |= 0x20u;
          v117 = v50;
        }
        v51 = ExceptionRecorda;
        ExceptionRecorda->ExceptionFlags = v50;
        v14->Rax = (unsigned __int64)v134;
        ControlPc[1] = ImageBase;
        ControlPc[7] = (DWORD64)HandlerData;
        ControlPc[8] = (DWORD64)v127;
        ControlPc[0] = v17;
        ControlPc[2] = (DWORD64)v49;
        ControlPc[3] = v16;
        ControlPc[5] = (DWORD64)v14;
        ControlPc[6] = v41;
        LODWORD(ControlPc[9]) = v48;
        v113 = (v14->ContextFlags & 0x100040) == 1048640;
        v52 = RtlpExecuteHandlerForUnwind(v51, v16, v14, ControlPc);
        if ( !v113 && (v14->ContextFlags & 0x100040) == 0x100040 )
          v14->ContextFlags &= ~0x40u;
        v53 = v117 & 0xFFFFFF9F;
        v117 &= 0xFFFFFF9F;
        v54 = v52 - 1;
        if ( v54 )
        {
          if ( v54 != 2 )
            RtlRaiseStatus(-1073741786);
          v17 = ControlPc[0];
          v49 = (struct _RUNTIME_FUNCTION *)ControlPc[2];
          ImageBase = ControlPc[1];
          RtlpCopyContext(v133, ControlPc[5]);
          v14 = v78;
          v15 = v137;
          RtlpCopyContext(v137, v78);
          v124 = RtlVirtualUnwind(2u, v80, v17, v49, v79, &HandlerData, &EstablisherFrame, 0LL);
          if ( v124 != (PEXCEPTION_ROUTINE)ControlPc[6]
            || (v16 = EstablisherFrame, EstablisherFrame != ControlPc[3])
            || HandlerData != (PVOID)ControlPc[7] )
          {
            __fastfail(0x27u);
          }
          v48 = ControlPc[9];
          v127 = (PUNWIND_HISTORY_TABLE)ControlPc[8];
          v117 = v53 | 0x40;
          if ( !(unsigned __int8)RtlpIsFrameInBounds(&v121, EstablisherFrame, &v122) && (_BYTE)v118 == 1 )
          {
            LOBYTE(v118) = 2;
            RtlpGetStackLimitsEx(v16, (__int64)&v121, (__int64)&v122);
            v41 = (DWORD64)v124;
          }
          v8 = v125;
        }
        else
        {
          v8 = v125;
          if ( (PVOID)v16 != v125 )
          {
            v55 = v14;
            v14 = v15;
            v15 = v55;
          }
          v41 = (DWORD64)v124;
          v56 = _mm_getcsr();
          v120 = v56;
          v14->MxCsr = v56;
          v14->FltSave.MxCsr = v56;
        }
        v50 = v117;
      }
      while ( (v117 & 0x40) != 0 );
      LOBYTE(v9) = v118;
      v7 = v127;
    }
    else
    {
      v96 = v23 == (_QWORD)v125;
      v7 = v127;
      if ( !v96 )
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
    if ( (v16 & 7) != 0 || v16 < v121 || v16 >= v122 )
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
      v118 = v43;
      continue;
    }
    break;
  }
  v68 = ExceptionRecorda;
  v14->Rax = (unsigned __int64)v134;
  ExceptionCode = v68->ExceptionCode;
  if ( v68->ExceptionCode != -2147483607 )
  {
    v14->Rip = (unsigned __int64)v135;
    ExceptionCode = v68->ExceptionCode;
  }
  if ( ExceptionCode == -2147483610 )
    RtlGuardCheckLongJumpTarget(*(PVOID *)(v68->ExceptionInformation[0] + 80));
  RtlRestoreContext(v14, v68);
}
