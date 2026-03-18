/*
 * XREFs of RtlUnwindEx @ 0x14009DF30
 * Callers:
 *     RtlUnwind @ 0x1401374F0 (RtlUnwind.c)
 *     __C_specific_handler @ 0x140194020 (__C_specific_handler.c)
 *     __longjmp_internal @ 0x1401B7E90 (__longjmp_internal.c)
 *     KiSystemServiceHandler @ 0x1401CEE80 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14009DC20 (RtlLookupFunctionEntry.c)
 *     RtlpCopyContext @ 0x14009E9D0 (RtlpCopyContext.c)
 *     RtlGetExtendedContextLength2 @ 0x1400A1E3C (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1400A1F20 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x1400CAB00 (RtlpGetStackLimits.c)
 *     RtlRaiseStatus @ 0x140128E70 (RtlRaiseStatus.c)
 *     RtlVirtualUnwind @ 0x140137680 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x14013A374 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x14013A52C (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x140184F64 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1401BAD50 (ZwRaiseException.c)
 *     RtlCaptureContext2 @ 0x1401C5630 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x1401C5780 (RtlRestoreContext.c)
 *     _alloca_probe @ 0x1401C5DA0 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1401C6390 (RtlpExecuteHandlerForUnwind.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1402F6618 (RtlGuardCheckLongJumpTarget.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v19; // r8
  __int64 v20; // r11
  int v21; // esi
  unsigned __int64 v22; // rbx
  DWORD64 v23; // r11
  unsigned int v24; // edi
  __int64 v25; // rdx
  int v26; // r9d
  unsigned int *p_BeginAddress; // r15
  unsigned __int64 Rsp; // r12
  unsigned int v29; // edx
  _DWORD *v30; // r14
  unsigned int v31; // esi
  __int64 v32; // rbx
  char v33; // r15
  unsigned __int64 v34; // rdi
  unsigned __int8 v35; // cl
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  unsigned __int64 *v38; // rdx
  unsigned __int64 *v39; // rdx
  unsigned __int64 *v40; // rcx
  unsigned __int64 v41; // r8
  PEXCEPTION_ROUTINE v42; // rdx
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
  char *v85; // rdx
  char v86; // cl
  char *v87; // r8
  unsigned __int64 v88; // rax
  unsigned int v89; // ecx
  __int64 v90; // rax
  __int64 v91; // r15
  __int64 v92; // rcx
  unsigned int v93; // ecx
  char v94; // al
  int v95; // eax
  char v96; // cl
  __int64 v97; // rax
  bool v98; // zf
  _BYTE *v99; // rdx
  char v100; // al
  int v101; // eax
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // rdi
  _DWORD *v104; // rax
  char v105; // al
  unsigned __int64 v106; // rcx
  unsigned __int64 *v107; // r8
  __int64 v108; // rax
  char v109; // r9
  unsigned __int64 *v110; // r8
  unsigned __int64 v111; // rax
  unsigned __int64 *v112; // rcx
  unsigned __int64 *v113; // r9
  _M128A *v114; // rcx
  int v115; // eax
  bool v116; // di
  unsigned __int64 *v117; // rcx
  int v118; // [rsp+40h] [rbp+0h] BYREF
  int v119; // [rsp+44h] [rbp+4h]
  DWORD64 v120; // [rsp+48h] [rbp+8h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+10h] BYREF
  EXCEPTION_ROUTINE *v122; // [rsp+58h] [rbp+18h]
  PRUNTIME_FUNCTION v123; // [rsp+60h] [rbp+20h]
  struct _CONTEXT *v124; // [rsp+68h] [rbp+28h]
  PVOID v125; // [rsp+70h] [rbp+30h]
  unsigned int v126; // [rsp+78h] [rbp+38h]
  unsigned __int64 EstablisherFrame; // [rsp+80h] [rbp+40h] BYREF
  PUNWIND_HISTORY_TABLE v128; // [rsp+88h] [rbp+48h]
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+90h] [rbp+50h]
  unsigned int v130; // [rsp+98h] [rbp+58h] BYREF
  PVOID HandlerData; // [rsp+A0h] [rbp+60h] BYREF
  unsigned __int64 v132; // [rsp+A8h] [rbp+68h] BYREF
  unsigned __int64 v133; // [rsp+B0h] [rbp+70h] BYREF
  PVOID v134; // [rsp+B8h] [rbp+78h]
  PVOID v135; // [rsp+C0h] [rbp+80h]
  struct _CONTEXT *v136; // [rsp+C8h] [rbp+88h]
  struct _CONTEXT *v137; // [rsp+D0h] [rbp+90h]
  DWORD64 ControlPc; // [rsp+E0h] [rbp+A0h] BYREF
  unsigned __int64 v139; // [rsp+E8h] [rbp+A8h]
  struct _RUNTIME_FUNCTION *v140; // [rsp+F0h] [rbp+B0h]
  unsigned __int64 v141; // [rsp+F8h] [rbp+B8h]
  PVOID v142; // [rsp+100h] [rbp+C0h]
  struct _CONTEXT *v143; // [rsp+108h] [rbp+C8h]
  EXCEPTION_ROUTINE *v144; // [rsp+110h] [rbp+D0h]
  PVOID v145; // [rsp+118h] [rbp+D8h]
  struct _UNWIND_HISTORY_TABLE *v146; // [rsp+120h] [rbp+E0h]
  int v147; // [rsp+128h] [rbp+E8h]
  char v148[16]; // [rsp+130h] [rbp+F0h] BYREF
  int v149; // [rsp+140h] [rbp+100h] BYREF
  __int64 v150; // [rsp+148h] [rbp+108h]
  unsigned __int64 v151; // [rsp+150h] [rbp+110h]
  int v152; // [rsp+158h] [rbp+118h]

  v7 = HistoryTable;
  v135 = TargetIp;
  v125 = TargetFrame;
  v136 = ContextRecord;
  v128 = HistoryTable;
  v134 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v132, &v133) )
    goto LABEL_235;
  RtlGetExtendedContextLength2(1048587LL, &v130, 0LL);
  v9 = v130 + 15LL;
  if ( v9 <= v130 )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = alloca(v10);
  v12 = alloca(v10);
  v137 = (struct _CONTEXT *)&v118;
  RtlInitializeExtendedContext2(&v118, 1048587LL, v148, 0LL);
  v124 = ContextRecord;
  v13 = ContextRecord;
  v14 = (struct _CONTEXT *)&v118;
  RtlCaptureContext2(ContextRecord);
  if ( HistoryTable )
    HistoryTable->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v149;
    v151 = Rip;
    v149 = -1073741785;
    v150 = 0LL;
    v152 = 0;
  }
  v119 = 2;
  if ( !TargetFrame )
    v119 = 6;
  v15 = v133;
  v16 = 0LL;
  v17 = v132;
  while ( 1 )
  {
    v18 = v13->Rip;
    v120 = v18;
    v123 = RtlLookupFunctionEntry(v18, &ImageBase, v7);
    if ( v123 )
    {
      RtlpCopyContext(v14, v13);
      v21 = 0;
      v22 = ImageBase + *(unsigned int *)(v20 + 8);
      v122 = 0LL;
      v23 = v18;
      if ( v18 <= 0x7FFFFFFEFFFFLL && (v22 & 3) != 0 )
        goto LABEL_144;
      v24 = *(_BYTE *)v22 & 7;
      if ( v24 < 2 )
      {
        v19 = 0LL;
        v76 = (unsigned __int8 *)(v22 + 2);
        v77 = v22;
        if ( !*(_BYTE *)(v22 + 2) )
        {
          while ( (*(_BYTE *)v77 & 0x20) != 0 )
          {
            v89 = *v76;
            v90 = v89 + 1;
            if ( (v89 & 1) == 0 )
              v90 = v89;
            v19 = (unsigned int)(v19 + 1);
            if ( (unsigned int)v19 > 0x20 )
              goto LABEL_234;
            v77 = ImageBase + *(unsigned int *)(v77 + 2 * v90 + 12);
            if ( v23 <= 0x7FFFFFFEFFFFLL && (v77 & 3) != 0 )
              goto LABEL_144;
            v76 = (unsigned __int8 *)(v77 + 2);
            if ( *(_BYTE *)(v77 + 2) )
              goto LABEL_14;
          }
          v21 = 1;
        }
      }
LABEL_14:
      v25 = *(unsigned __int8 *)(v22 + 3);
      v26 = ImageBase;
      p_BeginAddress = &v123->BeginAddress;
      v118 = ImageBase;
      if ( (v25 & 0xF) == 0 )
        goto LABEL_15;
      v65 = v23 - ImageBase - v123->BeginAddress;
      if ( v65 >= *(unsigned __int8 *)(v22 + 1) || (*(_BYTE *)v22 & 0x20) != 0 )
      {
        v66 = v25;
        v67 = (unsigned __int8)v25;
      }
      else
      {
        v91 = 0LL;
        if ( *(_BYTE *)(v22 + 2) )
        {
          do
          {
            v92 = *(unsigned __int16 *)(v22 + 2 * v91 + 4);
            if ( (BYTE1(v92) & 0xF) == 3 )
              break;
            v91 = (unsigned int)RtlpUnwindOpSlots(v92, v25, v19) + (unsigned int)v91;
          }
          while ( (unsigned int)v91 < *(unsigned __int8 *)(v22 + 2) );
          v23 = v120;
          v26 = v118;
        }
        v93 = *(unsigned __int8 *)(v22 + 2 * v91 + 4);
        p_BeginAddress = &v123->BeginAddress;
        if ( v65 < v93 )
        {
LABEL_15:
          Rsp = v14->Rsp;
          goto LABEL_16;
        }
        v67 = *(unsigned __int8 *)(v22 + 3);
        v66 = *(_BYTE *)(v22 + 3);
      }
      Rsp = *(&v14->Rax + (v66 & 0xF)) - (v67 & 0xFFFFFFF0);
LABEL_16:
      EstablisherFrame = Rsp;
      if ( v21 )
        goto LABEL_17;
      if ( v24 >= 2 )
      {
        if ( !*(_BYTE *)(v22 + 2) )
          goto LABEL_17;
        v58 = *(_WORD *)(v22 + 4);
        if ( (HIBYTE(v58) & 0xF) != 6 )
          goto LABEL_17;
        v59 = (unsigned __int8)v58;
        v60 = v23 - v26;
        if ( (v58 & 0x1000) != 0 )
        {
          v61 = p_BeginAddress[1] - (unsigned __int8)v58;
          if ( v60 - v61 < (unsigned int)(unsigned __int8)v58 )
          {
LABEL_139:
            RtlpUnwindEpilogue(ImageBase, v23, v60 - v61, (_DWORD)p_BeginAddress, (__int64)v14, 0LL, 0LL, 0LL);
            v23 = v120;
            goto LABEL_37;
          }
        }
        for ( i = 1; i < *(unsigned __int8 *)(v22 + 2); ++i )
        {
          v63 = *(_WORD *)(v22 + 2LL * i + 4);
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
      v83 = *(_BYTE *)v23;
      v84 = 0LL;
      v85 = (char *)v23;
      if ( *(_BYTE *)v23 == 72 )
      {
        v94 = *(_BYTE *)(v23 + 1);
        if ( v94 == -125 && *(_BYTE *)(v23 + 2) == 0xC4 )
        {
          v85 = (char *)(v23 + 4);
          goto LABEL_117;
        }
        if ( v94 == -127 && *(_BYTE *)(v23 + 2) == 0xC4 )
          goto LABEL_171;
      }
      if ( (v83 & 0xFE) == 0x48 && *(_BYTE *)(v23 + 1) == 0x8D )
      {
        v95 = *(_BYTE *)(v23 + 2) & 7;
        v84 = v95 | (8 * (v83 & 1u));
        if ( v95 | (8 * (v83 & 1)) )
        {
          if ( (_DWORD)v84 == (*(_BYTE *)(v22 + 3) & 0xF) )
          {
            v96 = *(_BYTE *)(v23 + 2) & 0xF8;
            if ( v96 == 96 )
            {
              v85 = (char *)(v23 + 4);
              goto LABEL_117;
            }
            if ( v96 == -96 )
LABEL_171:
              v85 = (char *)(v23 + 7);
          }
        }
      }
      while ( 1 )
      {
LABEL_117:
        v86 = *v85;
        if ( (*v85 & 0xF8) == 0x58 )
        {
          v97 = 1LL;
        }
        else
        {
          v87 = v85 + 1;
          if ( (v86 & 0xF0) != 0x40 || (*v87 & 0xF8) != 0x58 )
          {
            if ( v86 == -14 )
            {
              v86 = *v87;
              ++v85;
            }
            if ( (unsigned __int8)(v86 + 62) <= 1u )
              goto LABEL_181;
            if ( v86 == -13 )
            {
              v86 = -13;
              if ( v85[1] != -61 )
                goto LABEL_124;
              goto LABEL_181;
            }
            if ( ((v86 + 23) & 0xFD) != 0 )
            {
LABEL_124:
              if ( v86 != -1 || (v86 = -1, v85[1] != 37) )
              {
                if ( (v86 & 0xF8) == 0x48 && v85[1] == -1 )
                {
                  v98 = (v85[2] & 0x38) == 32;
                  goto LABEL_180;
                }
                goto LABEL_17;
              }
LABEL_181:
              v99 = (_BYTE *)v23;
              if ( (*(_BYTE *)v23 & 0xF8) != 0x48 )
                goto LABEL_202;
              v100 = *(_BYTE *)(v23 + 1);
              switch ( v100 )
              {
                case -125:
                  v99 = (_BYTE *)(v23 + 4);
                  v14->Rsp += *(char *)(v23 + 3);
                  goto LABEL_202;
                case -127:
                  v14->Rsp += *(unsigned __int8 *)(v23 + 3) | ((*(unsigned __int8 *)(v23 + 4) | (*(unsigned __int16 *)(v23 + 5) << 8)) << 8);
                  break;
                case -115:
                  v105 = *(_BYTE *)(v23 + 2) & 0xF8;
                  if ( v105 == 96 )
                  {
                    v106 = *(&v14->Rax + v84);
                    v99 = (_BYTE *)(v23 + 4);
                    v14->Rsp = v106;
                    v14->Rsp = v106 + *(char *)(v23 + 3);
                    goto LABEL_202;
                  }
                  if ( v105 != -96 )
                  {
                    while ( 1 )
                    {
LABEL_202:
                      if ( (*v99 & 0xF8) == 0x58 )
                      {
                        v107 = (unsigned __int64 *)v14->Rsp;
                        if ( v23 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v107 & 3) != 0 )
                          goto LABEL_144;
                        *(&v14->Rax + (*v99 & 7)) = *v107;
                        v108 = 1LL;
                      }
                      else
                      {
                        if ( (*v99 & 0xF0) != 0x40 || (v109 = v99[1], (v109 & 0xF8) != 0x58) )
                        {
                          if ( v23 > 0x7FFFFFFEFFFFLL || (v111 = v14->Rsp, (v111 & 3) == 0) )
                          {
                            v112 = (unsigned __int64 *)v14->Rsp;
                            v14->Rip = *v112;
                            v14->Rsp = (unsigned __int64)(v112 + 1);
                            goto LABEL_37;
                          }
LABEL_144:
                          ExRaiseDatatypeMisalignment();
                        }
                        v110 = (unsigned __int64 *)v14->Rsp;
                        if ( v23 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v110 & 3) != 0 )
                          goto LABEL_144;
                        *(&v14->Rax + (v109 & 7 | (8LL * (*v99 & 1)))) = *v110;
                        v108 = 2LL;
                      }
                      v14->Rsp += 8LL;
                      v99 += v108;
                    }
                  }
                  v14->Rsp = *(&v14->Rax + v84)
                           + (*(unsigned __int8 *)(v23 + 3) | ((*(unsigned __int8 *)(v23 + 4) | (*(unsigned __int16 *)(v23 + 5) << 8)) << 8));
                  break;
                default:
                  goto LABEL_202;
              }
              v99 = (_BYTE *)(v23 + 7);
              goto LABEL_202;
            }
            if ( v86 == -21 )
              v101 = v85[1] + 2;
            else
              v101 = *(_DWORD *)(v85 + 1) + 5;
            v102 = *p_BeginAddress;
            v103 = (unsigned __int64)&v85[v101 - ImageBase];
            if ( v103 >= v102 && v103 < p_BeginAddress[1] )
            {
              if ( v103 == v102 )
              {
                v98 = (*(_BYTE *)v22 & 0x20) == 0;
LABEL_180:
                if ( v98 )
                  goto LABEL_181;
              }
LABEL_17:
              v29 = 0;
              v30 = p_BeginAddress;
              v126 = 0;
              while ( 1 )
              {
                v31 = v23 - v26 - *v30;
                v32 = 0LL;
                v33 = 0;
                v34 = (unsigned int)v30[2] + ImageBase;
                if ( v23 <= 0x7FFFFFFEFFFFLL && (v34 & 3) != 0 )
                  goto LABEL_144;
                v35 = *(_BYTE *)(v34 + 2);
                if ( v35 )
                {
                  do
                  {
                    v36 = v34 + 2 * v32;
                    v37 = *(unsigned __int8 *)(v36 + 5) >> 4;
                    if ( v31 < *(unsigned __int8 *)(v36 + 4) )
                    {
                      v115 = RtlpUnwindOpSlots(*(unsigned __int16 *)(v36 + 4), v36, v37);
                      v23 = v120;
                      v32 = (unsigned int)(v115 + v32);
                    }
                    else
                    {
                      if ( (*(_BYTE *)(v34 + 2 * v32 + 5) & 0xF) != 0 )
                      {
                        switch ( *(_BYTE *)(v34 + 2 * v32 + 5) & 0xF )
                        {
                          case 1:
                            v32 = (unsigned int)(v32 + 1);
                            v49 = *(unsigned __int16 *)(v34 + 2 * v32 + 4);
                            if ( (_DWORD)v37 )
                            {
                              v32 = (unsigned int)(v32 + 1);
                              v50 = (*(unsigned __int16 *)(v34 + 2 * v32 + 4) << 16) + v49;
                            }
                            else
                            {
                              v50 = 8 * v49;
                            }
                            v14->Rsp += v50;
                            break;
                          case 2:
                            v14->Rsp += (unsigned int)(8 * v37 + 8);
                            break;
                          case 3:
                            v68 = *(&v14->Rax + (*(_BYTE *)(v34 + 3) & 0xF));
                            v14->Rsp = v68;
                            v14->Rsp = v68 - (*(_BYTE *)(v34 + 3) & 0xF0);
                            break;
                          case 4:
                            v32 = (unsigned int)(v32 + 1);
                            v38 = (unsigned __int64 *)(Rsp + 8LL * *(unsigned __int16 *)(v34 + 2 * v32 + 4));
                            if ( v23 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v38 & 3) != 0 )
                              goto LABEL_144;
                            *(&v14->Rax + v37) = *v38;
                            break;
                          case 5:
                            v32 = (unsigned int)(v32 + 2);
                            if ( v23 <= 0x7FFFFFFEFFFFLL
                              && (((_BYTE)Rsp + (unsigned __int8)*(_WORD *)(v34 + 2LL * (unsigned int)(v32 - 1) + 4)) & 3) != 0 )
                            {
                              goto LABEL_144;
                            }
                            *(&v14->Rax + v37) = *(_QWORD *)(Rsp
                                                           + ((unsigned __int64)*(unsigned __int16 *)(v34 + 2 * v32 + 4) << 16)
                                                           + *(unsigned __int16 *)(v34
                                                                                 + 2LL * (unsigned int)(v32 - 1)
                                                                                 + 4));
                            break;
                          case 6:
                            LODWORD(v32) = v32 + 1;
                            break;
                          case 7:
                            LODWORD(v32) = v32 + 2;
                            break;
                          case 8:
                            v32 = (unsigned int)(v32 + 1);
                            v47 = (unsigned __int64 *)(Rsp + 16LL * *(unsigned __int16 *)(v34 + 2 * v32 + 4));
                            if ( v23 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v47 & 3) != 0 )
                              goto LABEL_144;
                            v48 = &v14->FltSave.XmmRegisters[(unsigned int)v37];
                            v48->Low = *v47;
                            v48->High = v47[1];
                            break;
                          case 9:
                            v32 = (unsigned int)(v32 + 2);
                            v113 = (unsigned __int64 *)(Rsp
                                                      + ((unsigned __int64)*(unsigned __int16 *)(v34 + 2 * v32 + 4) << 16)
                                                      + *(unsigned __int16 *)(v34 + 2LL * (unsigned int)(v32 - 1) + 4));
                            if ( v23 <= 0x7FFFFFFEFFFFLL
                              && (((_BYTE)Rsp + (unsigned __int8)*(_WORD *)(v34 + 2LL * (unsigned int)(v32 - 1) + 4)) & 3) != 0 )
                            {
                              goto LABEL_144;
                            }
                            v114 = &v14->FltSave.XmmRegisters[(unsigned int)v37];
                            v114->Low = *v113;
                            v114->High = v113[1];
                            break;
                          case 0xA:
                            v71 = v14->Rsp;
                            v72 = 32LL;
                            if ( !(_DWORD)v37 )
                              v72 = 24LL;
                            v33 = 1;
                            v73 = (unsigned __int64 *)(v71 + v72);
                            v74 = (unsigned __int64 *)(v71 + 8);
                            if ( !(_DWORD)v37 )
                              v74 = (unsigned __int64 *)v14->Rsp;
                            if ( v23 <= 0x7FFFFFFEFFFFLL
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
                        v39 = (unsigned __int64 *)v14->Rsp;
                        if ( v23 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v39 & 3) != 0 )
                          goto LABEL_144;
                        *(&v14->Rax + v37) = *v39;
                        v14->Rsp += 8LL;
                      }
                      v32 = (unsigned int)(v32 + 1);
                    }
                    v35 = *(_BYTE *)(v34 + 2);
                  }
                  while ( (unsigned int)v32 < v35 );
                  v29 = v126;
                  v26 = v118;
                }
                if ( (*(_BYTE *)v34 & 0x20) == 0 )
                  break;
                v75 = v35;
                if ( (v35 & 1) != 0 )
                  v75 = v35 + 1;
                v30 = (_DWORD *)(v34 + 2 * (v75 + 2LL));
                if ( v23 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v30 & 3) != 0 )
                  goto LABEL_144;
                v126 = ++v29;
                if ( v29 > 0x20 )
                  goto LABEL_234;
              }
              if ( !v33 )
              {
                if ( v23 <= 0x7FFFFFFEFFFFLL )
                {
                  v88 = v14->Rsp;
                  if ( (v88 & 3) != 0 )
                    goto LABEL_144;
                }
                v40 = (unsigned __int64 *)v14->Rsp;
                v14->Rip = *v40;
                v14->Rsp = (unsigned __int64)(v40 + 1);
              }
              v41 = ImageBase + (unsigned int)v30[2];
              if ( v23 <= 0x7FFFFFFEFFFFLL && (v41 & 3) != 0 )
                goto LABEL_144;
              if ( (int)v23 - v26 - *v30 >= (unsigned int)*(unsigned __int8 *)(v41 + 1) && (*(_BYTE *)v41 & 0x10) != 0 )
              {
                v69 = *(unsigned __int8 *)(v41 + 2);
                v70 = v69 + 1;
                if ( (v69 & 1) == 0 )
                  v70 = *(unsigned __int8 *)(v41 + 2);
                v42 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)(v41 + 2LL * v70 + 4));
                HandlerData = (PVOID)(v41 + 2 * (v70 + 2 + 2LL));
                v122 = v42;
              }
              else
              {
LABEL_37:
                v42 = v122;
              }
              if ( (Rsp & 7) == 0 )
              {
                v17 = v132;
                if ( Rsp >= v132 )
                {
                  v15 = v133;
                  if ( Rsp < v133 )
                  {
                    v43 = v125;
                    if ( !v125 || (unsigned __int64)v125 >= Rsp )
                    {
                      v16 = EstablisherFrame;
                      if ( !v42 )
                      {
                        v18 = v120;
                        v7 = v128;
                        if ( (PVOID)Rsp == v125 )
                        {
                          v13 = v124;
                          goto LABEL_47;
                        }
                        v44 = v124;
                        v13 = v14;
                        v124 = v14;
                        v14 = v44;
                        goto LABEL_46;
                      }
                      v51 = 0;
                      v142 = v135;
                      v52 = v119;
                      while ( 2 )
                      {
                        if ( v43 == (PVOID)v16 )
                        {
                          v52 |= 0x20u;
                          v119 = v52;
                        }
                        v13 = v124;
                        v53 = (unsigned __int64)v134;
                        v54 = ExceptionRecorda;
                        ExceptionRecorda->ExceptionFlags = v52;
                        v13->Rax = v53;
                        v139 = ImageBase;
                        v140 = v123;
                        v145 = HandlerData;
                        v146 = v128;
                        ControlPc = v23;
                        v141 = v16;
                        v143 = v13;
                        v144 = v42;
                        v147 = v51;
                        v116 = (v13->ContextFlags & 0x100040) == 1048640;
                        v55 = RtlpExecuteHandlerForUnwind(v54, v16, v13, &ControlPc);
                        if ( !v116 && (v13->ContextFlags & 0x100040) == 0x100040 )
                          v13->ContextFlags &= ~0x40u;
                        v52 = v119 & 0xFFFFFF9F;
                        v119 &= 0xFFFFFF9F;
                        v56 = v55 - 1;
                        if ( v56 )
                        {
                          if ( v56 != 2 )
                            RtlRaiseStatus(-1073741786);
                          v18 = ControlPc;
                          v120 = ControlPc;
                          ImageBase = v139;
                          v123 = v140;
                          RtlpCopyContext(v136, v143);
                          v124 = v78;
                          v13 = v78;
                          v14 = v137;
                          RtlpCopyContext(v137, v78);
                          v42 = RtlVirtualUnwind(2u, v81, v18, v79, v80, &HandlerData, &EstablisherFrame, 0LL);
                          v122 = v42;
                          if ( v42 != v144 || (v16 = EstablisherFrame, EstablisherFrame != v141) || HandlerData != v145 )
                            __fastfail(0x27u);
                          v52 = v119 | 0x40;
                          v51 = v147;
                          v119 |= 0x40u;
                          v128 = v146;
LABEL_73:
                          v43 = v125;
                        }
                        else
                        {
                          v43 = v125;
                          v18 = v120;
                          v42 = v122;
                          if ( (PVOID)v16 != v125 )
                          {
                            v57 = v13;
                            v124 = v14;
                            v13 = v14;
                            v14 = v57;
                            goto LABEL_73;
                          }
                        }
                        if ( (v52 & 0x40) == 0 )
                        {
                          v7 = v128;
                          goto LABEL_47;
                        }
                        v23 = v120;
                        continue;
                      }
                    }
                  }
                }
              }
LABEL_235:
              RtlRaiseStatus(-1073741784);
            }
            v104 = (_DWORD *)RtlpSameFunction(p_BeginAddress, ImageBase, &v85[v101]);
            v23 = v120;
            if ( !v104 || v103 == *v104 )
              goto LABEL_181;
LABEL_84:
            v26 = v118;
            goto LABEL_17;
          }
          v97 = 2LL;
        }
        v85 += v97;
      }
    }
    v117 = (unsigned __int64 *)v13->Rsp;
    v13->Rip = *v117;
    v13->Rsp = (unsigned __int64)(v117 + 1);
LABEL_46:
    v43 = v125;
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
    v13->Rax = (unsigned __int64)v134;
    ExceptionCode = v45->ExceptionCode;
    if ( v45->ExceptionCode != -2147483607 )
    {
      v13->Rip = (unsigned __int64)v135;
      ExceptionCode = v45->ExceptionCode;
    }
    if ( ExceptionCode == -2147483610 )
      RtlGuardCheckLongJumpTarget(*(_QWORD *)(v45->ExceptionInformation[0] + 80));
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
