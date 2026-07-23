/*
 * XREFs of RtlUnwindEx @ 0x14009DE70
 * Callers:
 *     RtlUnwind @ 0x140137610 (RtlUnwind.c)
 *     __C_specific_handler @ 0x140194180 (__C_specific_handler.c)
 *     __longjmp_internal @ 0x1401B8010 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x1401CF080 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14009DB60 (RtlLookupFunctionEntry.c)
 *     RtlpCopyContext @ 0x14009E910 (RtlpCopyContext.c)
 *     RtlGetExtendedContextLength2 @ 0x1400A1D7C (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1400A1E60 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x1400CAC00 (RtlpGetStackLimits.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     RtlVirtualUnwind @ 0x1401377A0 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x14013A494 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x14013A64C (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x1401850C4 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1401BAED0 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x1401C57B0 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x1401C5900 (RtlRestoreContext.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1401C6510 (RtlpExecuteHandlerForUnwind.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1402F6908 (RtlGuardCheckLongJumpTarget.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        struct _EXCEPTION_RECORD *ExceptionRecord,
        PVOID ReturnValue,
        struct _CONTEXT *ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  struct _UNWIND_HISTORY_TABLE *v7; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  void *v12; // rsp
  struct _CONTEXT *v13; // r12
  struct _CONTEXT *v14; // r13
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r15
  DWORD64 v18; // rdi
  PEXCEPTION_ROUTINE v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r11
  int v23; // esi
  unsigned __int64 v24; // rbx
  DWORD64 v25; // r11
  unsigned int v26; // edi
  __int64 v27; // rdx
  int v28; // r9d
  unsigned int *p_BeginAddress; // r15
  unsigned __int64 Rsp; // r12
  unsigned int v31; // edx
  _DWORD *v32; // r14
  unsigned int v33; // esi
  __int64 v34; // rbx
  char v35; // r15
  unsigned __int64 v36; // rdi
  unsigned __int8 v37; // cl
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int64 *v40; // rdx
  unsigned __int64 *v41; // rdx
  unsigned __int64 *v42; // rcx
  PVOID v43; // rax
  struct _CONTEXT *v44; // rax
  struct _EXCEPTION_RECORD *v45; // rdi
  int ExceptionCode; // eax
  unsigned __int64 *v47; // rdx
  _M128A *v48; // rcx
  int v49; // edx
  unsigned int v50; // edx
  int v51; // esi
  unsigned int v52; // ecx
  unsigned __int64 v53; // rax
  struct _EXCEPTION_RECORD *v54; // r10
  int v55; // edx
  int v56; // edx
  struct _CONTEXT *v57; // rax
  __int16 v58; // ax
  unsigned int v59; // r10d
  int v60; // r8d
  int v61; // ecx
  unsigned int i; // r9d
  __int16 v63; // ax
  int v64; // edx
  unsigned int v65; // r14d
  char v66; // cl
  int v67; // eax
  unsigned __int64 v68; // rcx
  int v69; // ecx
  unsigned int v70; // eax
  unsigned __int64 v71; // rax
  __int64 v72; // rdx
  unsigned __int64 *v73; // rdx
  unsigned __int64 *v74; // rcx
  unsigned int v75; // eax
  unsigned __int8 *v76; // rcx
  unsigned __int64 v77; // rdx
  struct _CONTEXT *v78; // r11
  PRUNTIME_FUNCTION v79; // r8
  struct _CONTEXT *v80; // r9
  DWORD64 v81; // r10
  unsigned __int64 Rip; // rax
  char v83; // r8
  __int64 v84; // rsi
  _BYTE *v85; // rdx
  char v86; // cl
  unsigned __int64 v87; // rax
  unsigned int v88; // ecx
  __int64 v89; // rax
  __int64 v90; // r15
  __int64 v91; // rcx
  unsigned int v92; // ecx
  char v93; // al
  int v94; // eax
  char v95; // cl
  __int64 v96; // rax
  bool v97; // zf
  _BYTE *v98; // rdx
  char v99; // al
  int v100; // eax
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // rdi
  _DWORD *v103; // rax
  char v104; // al
  unsigned __int64 v105; // rcx
  __int64 v106; // rax
  char v107; // r9
  unsigned __int64 v108; // rax
  unsigned __int64 *v109; // rcx
  unsigned __int64 *v110; // r9
  _M128A *v111; // rcx
  int v112; // eax
  bool v113; // di
  unsigned __int64 *v114; // rcx
  int v115; // [rsp+40h] [rbp+0h] BYREF
  int v116; // [rsp+44h] [rbp+4h]
  DWORD64 v117; // [rsp+48h] [rbp+8h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+10h] BYREF
  BOOL IsFastFail[2]; // [rsp+58h] [rbp+18h]
  PRUNTIME_FUNCTION v120; // [rsp+60h] [rbp+20h]
  struct _CONTEXT *v121; // [rsp+68h] [rbp+28h]
  PVOID v122; // [rsp+70h] [rbp+30h]
  unsigned int v123; // [rsp+78h] [rbp+38h]
  unsigned __int64 EstablisherFrame; // [rsp+80h] [rbp+40h] BYREF
  PUNWIND_HISTORY_TABLE v125; // [rsp+88h] [rbp+48h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+90h] [rbp+50h]
  ULONG ContextLength; // [rsp+98h] [rbp+58h] BYREF
  PVOID HandlerData; // [rsp+A0h] [rbp+60h] BYREF
  unsigned __int64 v129; // [rsp+A8h] [rbp+68h] BYREF
  unsigned __int64 v130; // [rsp+B0h] [rbp+70h] BYREF
  PVOID v131; // [rsp+B8h] [rbp+78h]
  PVOID v132; // [rsp+C0h] [rbp+80h]
  struct _CONTEXT *v133; // [rsp+C8h] [rbp+88h]
  struct _CONTEXT *v134; // [rsp+D0h] [rbp+90h]
  DWORD64 ControlPc; // [rsp+E0h] [rbp+A0h] BYREF
  unsigned __int64 v136; // [rsp+E8h] [rbp+A8h]
  struct _RUNTIME_FUNCTION *v137; // [rsp+F0h] [rbp+B0h]
  unsigned __int64 v138; // [rsp+F8h] [rbp+B8h]
  PVOID v139; // [rsp+100h] [rbp+C0h]
  struct _CONTEXT *v140; // [rsp+108h] [rbp+C8h]
  EXCEPTION_DISPOSITION (__cdecl *v141)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+110h] [rbp+D0h]
  PVOID v142; // [rsp+118h] [rbp+D8h]
  struct _UNWIND_HISTORY_TABLE *v143; // [rsp+120h] [rbp+E0h]
  int v144; // [rsp+128h] [rbp+E8h]
  PCONTEXT_EX ContextEx; // [rsp+130h] [rbp+F0h] BYREF
  int v146; // [rsp+140h] [rbp+100h] BYREF
  __int64 v147; // [rsp+148h] [rbp+108h]
  unsigned __int64 v148; // [rsp+150h] [rbp+110h]
  int v149; // [rsp+158h] [rbp+118h]

  v7 = HistoryTable;
  v132 = TargetIp;
  v122 = TargetFrame;
  v133 = ContextRecord;
  v125 = HistoryTable;
  v131 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v129, &v130) )
    goto LABEL_235;
  RtlGetExtendedContextLength2(0x10000Bu, &ContextLength, 0LL);
  v9 = ContextLength + 15LL;
  if ( v9 <= ContextLength )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = alloca(v10);
  v12 = alloca(v10);
  v134 = (struct _CONTEXT *)&v115;
  RtlInitializeExtendedContext2((PCONTEXT)&v115, 0x10000Bu, &ContextEx, 0LL);
  v121 = ContextRecord;
  v13 = ContextRecord;
  v14 = (struct _CONTEXT *)&v115;
  RtlCaptureContext2(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v146;
    v148 = Rip;
    v146 = -1073741785;
    v147 = 0LL;
    v149 = 0;
  }
  v116 = 2;
  if ( !TargetFrame )
    v116 = 6;
  v15 = v130;
  v16 = 0LL;
  v17 = v129;
  while ( 1 )
  {
    v18 = v13->Rip;
    v117 = v18;
    v120 = RtlLookupFunctionEntry(v18, &ImageBase, v7);
    if ( v120 )
    {
      RtlpCopyContext(v14, v13);
      v23 = 0;
      v24 = ImageBase + *(unsigned int *)(v22 + 8);
      *(_QWORD *)IsFastFail = 0LL;
      v25 = v18;
      if ( v18 <= 0x7FFFFFFEFFFFLL && (v24 & 3) != 0 )
        goto LABEL_144;
      v26 = *(_BYTE *)v24 & 7;
      if ( v26 < 2 )
      {
        v21 = 0LL;
        v76 = (unsigned __int8 *)(v24 + 2);
        v77 = v24;
        if ( !*(_BYTE *)(v24 + 2) )
        {
          while ( (*(_BYTE *)v77 & 0x20) != 0 )
          {
            v88 = *v76;
            v89 = v88 + 1;
            if ( (v88 & 1) == 0 )
              v89 = v88;
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 > 0x20 )
              goto LABEL_234;
            v77 = ImageBase + *(unsigned int *)(v77 + 2 * v89 + 12);
            if ( v25 <= 0x7FFFFFFEFFFFLL && (v77 & 3) != 0 )
              goto LABEL_144;
            v76 = (unsigned __int8 *)(v77 + 2);
            if ( *(_BYTE *)(v77 + 2) )
              goto LABEL_14;
          }
          v23 = 1;
        }
      }
LABEL_14:
      v27 = *(unsigned __int8 *)(v24 + 3);
      v28 = ImageBase;
      p_BeginAddress = &v120->BeginAddress;
      v115 = ImageBase;
      if ( (v27 & 0xF) == 0 )
        goto LABEL_15;
      v65 = v25 - ImageBase - v120->BeginAddress;
      if ( v65 >= *(unsigned __int8 *)(v24 + 1) || (*(_BYTE *)v24 & 0x20) != 0 )
      {
        v66 = v27;
        v67 = (unsigned __int8)v27;
      }
      else
      {
        v90 = 0LL;
        if ( *(_BYTE *)(v24 + 2) )
        {
          do
          {
            v91 = *(unsigned __int16 *)(v24 + 2 * v90 + 4);
            if ( (BYTE1(v91) & 0xF) == 3 )
              break;
            v90 = (unsigned int)RtlpUnwindOpSlots(v91, v27, v21) + (unsigned int)v90;
          }
          while ( (unsigned int)v90 < *(unsigned __int8 *)(v24 + 2) );
          v25 = v117;
          v28 = v115;
        }
        v92 = *(unsigned __int8 *)(v24 + 2 * v90 + 4);
        p_BeginAddress = &v120->BeginAddress;
        if ( v65 < v92 )
        {
LABEL_15:
          Rsp = v14->Rsp;
          goto LABEL_16;
        }
        v67 = *(unsigned __int8 *)(v24 + 3);
        v66 = *(_BYTE *)(v24 + 3);
      }
      Rsp = *(&v14->Rax + (v66 & 0xF)) - (v67 & 0xFFFFFFF0);
LABEL_16:
      EstablisherFrame = Rsp;
      if ( v23 )
        goto LABEL_17;
      if ( v26 >= 2 )
      {
        if ( !*(_BYTE *)(v24 + 2) )
          goto LABEL_17;
        v58 = *(_WORD *)(v24 + 4);
        if ( (HIBYTE(v58) & 0xF) != 6 )
          goto LABEL_17;
        v59 = (unsigned __int8)v58;
        v60 = v25 - v28;
        if ( (v58 & 0x1000) != 0 )
        {
          v61 = p_BeginAddress[1] - (unsigned __int8)v58;
          if ( v60 - v61 < (unsigned int)(unsigned __int8)v58 )
          {
LABEL_139:
            RtlpUnwindEpilogue(ImageBase, v25, v60 - v61, (_DWORD)p_BeginAddress, (__int64)v14, 0LL, 0LL, 0LL);
            v25 = v117;
            goto LABEL_37;
          }
        }
        for ( i = 1; i < *(unsigned __int8 *)(v24 + 2); ++i )
        {
          v63 = *(_WORD *)(v24 + 2LL * i + 4);
          if ( (HIBYTE(v63) & 0xF) != 6 )
            break;
          v64 = (unsigned __int8)v63 + (HIBYTE(v63) >> 4 << 8);
          if ( !v64 )
            break;
          v61 = p_BeginAddress[1] - v64;
          if ( v60 - v61 < v59 )
            goto LABEL_139;
        }
        goto LABEL_84;
      }
      v83 = *(_BYTE *)v25;
      v84 = 0LL;
      v85 = (_BYTE *)v25;
      if ( *(_BYTE *)v25 == 72 )
      {
        v93 = *(_BYTE *)(v25 + 1);
        if ( v93 == -125 && *(_BYTE *)(v25 + 2) == 0xC4 )
        {
          v85 = (_BYTE *)(v25 + 4);
          goto LABEL_117;
        }
        if ( v93 == -127 && *(_BYTE *)(v25 + 2) == 0xC4 )
          goto LABEL_171;
      }
      if ( (v83 & 0xFE) == 0x48 && *(_BYTE *)(v25 + 1) == 0x8D )
      {
        v94 = *(_BYTE *)(v25 + 2) & 7;
        v84 = v94 | (8 * (v83 & 1u));
        if ( v94 | (8 * (v83 & 1)) )
        {
          if ( (_DWORD)v84 == (*(_BYTE *)(v24 + 3) & 0xF) )
          {
            v95 = *(_BYTE *)(v25 + 2) & 0xF8;
            if ( v95 == 96 )
            {
              v85 = (_BYTE *)(v25 + 4);
              goto LABEL_117;
            }
            if ( v95 == -96 )
LABEL_171:
              v85 = (_BYTE *)(v25 + 7);
          }
        }
      }
      while ( 1 )
      {
LABEL_117:
        v86 = *v85;
        if ( (*v85 & 0xF8) == 0x58 )
        {
          v96 = 1LL;
        }
        else
        {
          v20 = (unsigned __int64)(v85 + 1);
          if ( (v86 & 0xF0) != 0x40 || (*(_BYTE *)v20 & 0xF8) != 0x58 )
          {
            if ( v86 == -14 )
            {
              v86 = *(_BYTE *)v20;
              ++v85;
            }
            if ( (unsigned __int8)(v86 + 62) <= 1u )
              goto LABEL_181;
            if ( v86 == -13 )
            {
              v86 = -13;
              if ( v85[1] != 0xC3 )
                goto LABEL_124;
              goto LABEL_181;
            }
            if ( ((v86 + 23) & 0xFD) != 0 )
            {
LABEL_124:
              if ( v86 != -1 || (v86 = -1, v85[1] != 37) )
              {
                if ( (v86 & 0xF8) == 0x48 && v85[1] == 0xFF )
                {
                  v97 = (v85[2] & 0x38) == 32;
                  goto LABEL_180;
                }
                goto LABEL_17;
              }
LABEL_181:
              v98 = (_BYTE *)v25;
              if ( (*(_BYTE *)v25 & 0xF8) != 0x48 )
                goto LABEL_202;
              v99 = *(_BYTE *)(v25 + 1);
              switch ( v99 )
              {
                case -125:
                  v98 = (_BYTE *)(v25 + 4);
                  v14->Rsp += *(char *)(v25 + 3);
                  goto LABEL_202;
                case -127:
                  v14->Rsp += *(unsigned __int8 *)(v25 + 3) | ((*(unsigned __int8 *)(v25 + 4) | (*(unsigned __int16 *)(v25 + 5) << 8)) << 8);
                  break;
                case -115:
                  v104 = *(_BYTE *)(v25 + 2) & 0xF8;
                  if ( v104 == 96 )
                  {
                    v105 = *(&v14->Rax + v84);
                    v98 = (_BYTE *)(v25 + 4);
                    v14->Rsp = v105;
                    v14->Rsp = v105 + *(char *)(v25 + 3);
                    goto LABEL_202;
                  }
                  if ( v104 != -96 )
                  {
                    while ( 1 )
                    {
LABEL_202:
                      if ( (*v98 & 0xF8) == 0x58 )
                      {
                        v20 = v14->Rsp;
                        if ( v25 <= 0x7FFFFFFEFFFFLL && (v20 & 3) != 0 )
                          goto LABEL_144;
                        *(&v14->Rax + (*v98 & 7)) = *(_QWORD *)v20;
                        v106 = 1LL;
                      }
                      else
                      {
                        if ( (*v98 & 0xF0) != 0x40 || (v107 = v98[1], (v107 & 0xF8) != 0x58) )
                        {
                          if ( v25 > 0x7FFFFFFEFFFFLL || (v108 = v14->Rsp, (v108 & 3) == 0) )
                          {
                            v109 = (unsigned __int64 *)v14->Rsp;
                            v14->Rip = *v109;
                            v14->Rsp = (unsigned __int64)(v109 + 1);
                            goto LABEL_37;
                          }
LABEL_144:
                          ExRaiseDatatypeMisalignment();
                        }
                        v20 = v14->Rsp;
                        if ( v25 <= 0x7FFFFFFEFFFFLL && (v20 & 3) != 0 )
                          goto LABEL_144;
                        *(&v14->Rax + (v107 & 7 | (8LL * (*v98 & 1)))) = *(_QWORD *)v20;
                        v106 = 2LL;
                      }
                      v14->Rsp += 8LL;
                      v98 += v106;
                    }
                  }
                  v14->Rsp = *(&v14->Rax + v84)
                           + (*(unsigned __int8 *)(v25 + 3) | ((*(unsigned __int8 *)(v25 + 4) | (*(unsigned __int16 *)(v25 + 5) << 8)) << 8));
                  break;
                default:
                  goto LABEL_202;
              }
              v98 = (_BYTE *)(v25 + 7);
              goto LABEL_202;
            }
            v20 = (unsigned __int64)&v85[-ImageBase];
            if ( v86 == -21 )
              v100 = (char)v85[1] + 2;
            else
              v100 = *(_DWORD *)(v85 + 1) + 5;
            v101 = *p_BeginAddress;
            v102 = v20 + v100;
            if ( v102 >= v101 && v102 < p_BeginAddress[1] )
            {
              if ( v102 == v101 )
              {
                v97 = (*(_BYTE *)v24 & 0x20) == 0;
LABEL_180:
                if ( v97 )
                  goto LABEL_181;
              }
LABEL_17:
              v31 = 0;
              v32 = p_BeginAddress;
              v123 = 0;
              while ( 1 )
              {
                v33 = v25 - v28 - *v32;
                v34 = 0LL;
                v35 = 0;
                v36 = (unsigned int)v32[2] + ImageBase;
                if ( v25 <= 0x7FFFFFFEFFFFLL && (v36 & 3) != 0 )
                  goto LABEL_144;
                v37 = *(_BYTE *)(v36 + 2);
                if ( v37 )
                {
                  do
                  {
                    v38 = v36 + 2 * v34;
                    v39 = *(unsigned __int8 *)(v38 + 5) >> 4;
                    if ( v33 < *(unsigned __int8 *)(v38 + 4) )
                    {
                      v112 = RtlpUnwindOpSlots(*(unsigned __int16 *)(v38 + 4), v38, v39);
                      v25 = v117;
                      v34 = (unsigned int)(v112 + v34);
                    }
                    else
                    {
                      if ( (*(_BYTE *)(v36 + 2 * v34 + 5) & 0xF) != 0 )
                      {
                        switch ( *(_BYTE *)(v36 + 2 * v34 + 5) & 0xF )
                        {
                          case 1:
                            v34 = (unsigned int)(v34 + 1);
                            v49 = *(unsigned __int16 *)(v36 + 2 * v34 + 4);
                            if ( (_DWORD)v39 )
                            {
                              v34 = (unsigned int)(v34 + 1);
                              v50 = (*(unsigned __int16 *)(v36 + 2 * v34 + 4) << 16) + v49;
                            }
                            else
                            {
                              v50 = 8 * v49;
                            }
                            v14->Rsp += v50;
                            break;
                          case 2:
                            v14->Rsp += (unsigned int)(8 * v39 + 8);
                            break;
                          case 3:
                            v68 = *(&v14->Rax + (*(_BYTE *)(v36 + 3) & 0xF));
                            v14->Rsp = v68;
                            v14->Rsp = v68 - (*(_BYTE *)(v36 + 3) & 0xF0);
                            break;
                          case 4:
                            v34 = (unsigned int)(v34 + 1);
                            v40 = (unsigned __int64 *)(Rsp + 8LL * *(unsigned __int16 *)(v36 + 2 * v34 + 4));
                            if ( v25 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v40 & 3) != 0 )
                              goto LABEL_144;
                            *(&v14->Rax + v39) = *v40;
                            break;
                          case 5:
                            v34 = (unsigned int)(v34 + 2);
                            if ( v25 <= 0x7FFFFFFEFFFFLL
                              && (((_BYTE)Rsp + (unsigned __int8)*(_WORD *)(v36 + 2LL * (unsigned int)(v34 - 1) + 4)) & 3) != 0 )
                            {
                              goto LABEL_144;
                            }
                            *(&v14->Rax + v39) = *(_QWORD *)(Rsp
                                                           + ((unsigned __int64)*(unsigned __int16 *)(v36 + 2 * v34 + 4) << 16)
                                                           + *(unsigned __int16 *)(v36
                                                                                 + 2LL * (unsigned int)(v34 - 1)
                                                                                 + 4));
                            break;
                          case 6:
                            LODWORD(v34) = v34 + 1;
                            break;
                          case 7:
                            LODWORD(v34) = v34 + 2;
                            break;
                          case 8:
                            v34 = (unsigned int)(v34 + 1);
                            v47 = (unsigned __int64 *)(Rsp + 16LL * *(unsigned __int16 *)(v36 + 2 * v34 + 4));
                            if ( v25 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v47 & 3) != 0 )
                              goto LABEL_144;
                            v48 = &v14->FltSave.XmmRegisters[(unsigned int)v39];
                            v48->Low = *v47;
                            v48->High = v47[1];
                            break;
                          case 9:
                            v34 = (unsigned int)(v34 + 2);
                            v110 = (unsigned __int64 *)(Rsp
                                                      + ((unsigned __int64)*(unsigned __int16 *)(v36 + 2 * v34 + 4) << 16)
                                                      + *(unsigned __int16 *)(v36 + 2LL * (unsigned int)(v34 - 1) + 4));
                            if ( v25 <= 0x7FFFFFFEFFFFLL
                              && (((_BYTE)Rsp + (unsigned __int8)*(_WORD *)(v36 + 2LL * (unsigned int)(v34 - 1) + 4)) & 3) != 0 )
                            {
                              goto LABEL_144;
                            }
                            v111 = &v14->FltSave.XmmRegisters[(unsigned int)v39];
                            v111->Low = *v110;
                            v111->High = v110[1];
                            break;
                          case 0xA:
                            v71 = v14->Rsp;
                            v72 = 32LL;
                            if ( !(_DWORD)v39 )
                              v72 = 24LL;
                            v35 = 1;
                            v73 = (unsigned __int64 *)(v71 + v72);
                            v74 = (unsigned __int64 *)(v71 + 8);
                            if ( !(_DWORD)v39 )
                              v74 = (unsigned __int64 *)v14->Rsp;
                            if ( v25 <= 0x7FFFFFFEFFFFLL
                              && (((unsigned __int8)v74 & 3) != 0 || ((unsigned __int8)v73 & 3) != 0) )
                            {
                              goto LABEL_144;
                            }
                            v14->Rip = *v74;
                            v14->Rsp = *v73;
                            break;
                          default:
                            goto LABEL_234;
                        }
                      }
                      else
                      {
                        v41 = (unsigned __int64 *)v14->Rsp;
                        if ( v25 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v41 & 3) != 0 )
                          goto LABEL_144;
                        *(&v14->Rax + v39) = *v41;
                        v14->Rsp += 8LL;
                      }
                      v34 = (unsigned int)(v34 + 1);
                    }
                    v37 = *(_BYTE *)(v36 + 2);
                  }
                  while ( (unsigned int)v34 < v37 );
                  v31 = v123;
                  v28 = v115;
                }
                if ( (*(_BYTE *)v36 & 0x20) == 0 )
                  break;
                v75 = v37;
                if ( (v37 & 1) != 0 )
                  v75 = v37 + 1;
                v32 = (_DWORD *)(v36 + 2 * (v75 + 2LL));
                if ( v25 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v32 & 3) != 0 )
                  goto LABEL_144;
                v123 = ++v31;
                if ( v31 > 0x20 )
                  goto LABEL_234;
              }
              if ( !v35 )
              {
                if ( v25 <= 0x7FFFFFFEFFFFLL )
                {
                  v87 = v14->Rsp;
                  if ( (v87 & 3) != 0 )
                    goto LABEL_144;
                }
                v42 = (unsigned __int64 *)v14->Rsp;
                v14->Rip = *v42;
                v14->Rsp = (unsigned __int64)(v42 + 1);
              }
              v20 = ImageBase + (unsigned int)v32[2];
              if ( v25 <= 0x7FFFFFFEFFFFLL && (v20 & 3) != 0 )
                goto LABEL_144;
              if ( (int)v25 - v28 - *v32 >= (unsigned int)*(unsigned __int8 *)(v20 + 1) && (*(_BYTE *)v20 & 0x10) != 0 )
              {
                v69 = *(unsigned __int8 *)(v20 + 2);
                v70 = v69 + 1;
                if ( (v69 & 1) == 0 )
                  v70 = *(unsigned __int8 *)(v20 + 2);
                v19 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)(v20 + 2LL * v70 + 4));
                HandlerData = (PVOID)(v20 + 2 * (v70 + 2 + 2LL));
                *(_QWORD *)IsFastFail = v19;
              }
              else
              {
LABEL_37:
                v19 = *(PEXCEPTION_ROUTINE *)IsFastFail;
              }
              if ( (Rsp & 7) == 0 )
              {
                v17 = v129;
                if ( Rsp >= v129 )
                {
                  v15 = v130;
                  if ( Rsp < v130 )
                  {
                    v43 = v122;
                    if ( !v122 || (unsigned __int64)v122 >= Rsp )
                    {
                      v16 = EstablisherFrame;
                      if ( !v19 )
                      {
                        v18 = v117;
                        v7 = v125;
                        if ( (PVOID)Rsp == v122 )
                        {
                          v13 = v121;
                          goto LABEL_47;
                        }
                        v44 = v121;
                        v13 = v14;
                        v121 = v14;
                        v14 = v44;
                        goto LABEL_46;
                      }
                      v51 = 0;
                      v139 = v132;
                      v52 = v116;
                      while ( 2 )
                      {
                        if ( v43 == (PVOID)v16 )
                        {
                          v52 |= 0x20u;
                          v116 = v52;
                        }
                        v13 = v121;
                        v53 = (unsigned __int64)v131;
                        v54 = ExceptionRecorda;
                        ExceptionRecorda->ExceptionFlags = v52;
                        v13->Rax = v53;
                        v136 = ImageBase;
                        v137 = v120;
                        v142 = HandlerData;
                        v143 = v125;
                        ControlPc = v25;
                        v138 = v16;
                        v140 = v13;
                        v141 = v19;
                        v144 = v51;
                        v113 = (v13->ContextFlags & 0x100040) == 1048640;
                        v55 = RtlpExecuteHandlerForUnwind(v54, v16, v13, &ControlPc);
                        if ( !v113 && (v13->ContextFlags & 0x100040) == 0x100040 )
                          v13->ContextFlags &= ~0x40u;
                        v52 = v116 & 0xFFFFFF9F;
                        v116 &= 0xFFFFFF9F;
                        v56 = v55 - 1;
                        if ( v56 )
                        {
                          if ( v56 != 2 )
                            RtlRaiseStatus(-1073741786);
                          v18 = ControlPc;
                          v117 = ControlPc;
                          ImageBase = v136;
                          v120 = v137;
                          RtlpCopyContext(v133, v140);
                          v121 = v78;
                          v13 = v78;
                          v14 = v134;
                          RtlpCopyContext(v134, v78);
                          v19 = RtlVirtualUnwind(2u, v81, v18, v79, v80, &HandlerData, &EstablisherFrame, 0LL);
                          *(_QWORD *)IsFastFail = v19;
                          if ( v19 != v141 || (v16 = EstablisherFrame, EstablisherFrame != v138) || HandlerData != v142 )
                            __fastfail(0x27u);
                          v52 = v116 | 0x40;
                          v51 = v144;
                          v116 |= 0x40u;
                          v125 = v143;
LABEL_73:
                          v43 = v122;
                        }
                        else
                        {
                          v43 = v122;
                          v18 = v117;
                          v19 = *(PEXCEPTION_ROUTINE *)IsFastFail;
                          if ( (PVOID)v16 != v122 )
                          {
                            v57 = v13;
                            v121 = v14;
                            v13 = v14;
                            v14 = v57;
                            goto LABEL_73;
                          }
                        }
                        if ( (v52 & 0x40) == 0 )
                        {
                          v7 = v125;
                          goto LABEL_47;
                        }
                        v25 = v117;
                        continue;
                      }
                    }
                  }
                }
              }
LABEL_235:
              RtlRaiseStatus(-1073741784);
            }
            v103 = (_DWORD *)RtlpSameFunction(p_BeginAddress, ImageBase, v102 + ImageBase);
            v25 = v117;
            if ( !v103 || v102 == *v103 )
              goto LABEL_181;
LABEL_84:
            v28 = v115;
            goto LABEL_17;
          }
          v96 = 2LL;
        }
        v85 += v96;
      }
    }
    v114 = (unsigned __int64 *)v13->Rsp;
    v13->Rip = *v114;
    v13->Rsp = (unsigned __int64)(v114 + 1);
LABEL_46:
    v43 = v122;
LABEL_47:
    if ( (v16 & 7) != 0 || v16 < v17 || v16 >= v15 )
      break;
    if ( (PVOID)v16 == v43 )
      goto LABEL_51;
  }
  if ( (PVOID)v16 == v43 )
  {
LABEL_51:
    v45 = ExceptionRecorda;
    v13->Rax = (unsigned __int64)v131;
    ExceptionCode = v45->ExceptionCode;
    if ( v45->ExceptionCode != -2147483607 )
    {
      v13->Rip = (unsigned __int64)v132;
      ExceptionCode = v45->ExceptionCode;
    }
    if ( ExceptionCode == -2147483610 )
      RtlGuardCheckLongJumpTarget(*(PVOID *)(v45->ExceptionInformation[0] + 80), (BOOL)v19, (PBOOL)v20);
    RtlRestoreContext(v13, v45);
  }
  else
  {
    if ( v18 == v13->Rip )
LABEL_234:
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v13, 0);
  }
}
