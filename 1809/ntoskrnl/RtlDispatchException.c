/*
 * XREFs of RtlDispatchException @ 0x1400A0E80
 * Callers:
 *     KiDispatchException @ 0x1400A2E90 (KiDispatchException.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x1402EDA30 (RtlRaiseException.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14009DB60 (RtlLookupFunctionEntry.c)
 *     RtlpCopyContext @ 0x14009E910 (RtlpCopyContext.c)
 *     RtlpIsFrameInBounds @ 0x1400A17D4 (RtlpIsFrameInBounds.c)
 *     RtlGetExtendedContextLength2 @ 0x1400A1D7C (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1400A1E60 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x1400CAC00 (RtlpGetStackLimits.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     RtlVirtualUnwind @ 0x1401377A0 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x14013A494 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x14013A64C (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x1401850C4 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1401C6490 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x1402EC580 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1402EC720 (RtlpLogExceptionHandler.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

BOOLEAN __stdcall RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context)
{
  BOOLEAN v2; // r14
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  void *v9; // rsp
  DWORD64 Rip; // r12
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rsi
  PRUNTIME_FUNCTION v12; // rax
  __int64 v13; // r8
  PEXCEPTION_ROUTINE v14; // r9
  PRUNTIME_FUNCTION v15; // r15
  int v16; // esi
  unsigned __int64 v17; // rbx
  unsigned int v18; // edi
  __int64 v19; // rdx
  int v20; // r11d
  unsigned __int64 v21; // r14
  unsigned int v22; // edx
  struct _RUNTIME_FUNCTION *v23; // r8
  __int64 UnwindData; // rcx
  char v25; // r9
  __int64 v26; // rbx
  unsigned int v27; // esi
  _BYTE *v28; // rdi
  unsigned __int8 v29; // cl
  _BYTE *v30; // rdx
  __int64 v31; // r8
  __int64 *v32; // rdx
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r9
  DWORD64 *v35; // rdx
  PRUNTIME_FUNCTION *v36; // rdx
  PRUNTIME_FUNCTION *p_FunctionEntry; // rcx
  int v38; // edx
  unsigned int v39; // edx
  unsigned __int64 v40; // rbx
  int v41; // ecx
  int v42; // r14d
  __int64 v43; // rdi
  PEXCEPTION_RECORD v44; // r15
  int v45; // edx
  unsigned __int64 v46; // rcx
  int v47; // edx
  DWORD64 v48; // r10
  __int16 v49; // ax
  unsigned int v50; // r10d
  int v51; // r8d
  int v52; // ecx
  unsigned int i; // r9d
  __int16 v54; // ax
  int v55; // edx
  unsigned int v56; // r14d
  char v57; // cl
  int v58; // eax
  int v59; // ecx
  unsigned int v60; // eax
  __int64 v61; // r8
  void *v62; // rax
  __int64 v63; // rdx
  DWORD64 **v64; // rdx
  DWORD64 *v65; // rcx
  unsigned int v66; // eax
  unsigned __int8 *v67; // rcx
  unsigned __int64 v68; // rdx
  char v69; // r8
  __int64 v70; // rsi
  char *v71; // rdx
  char v72; // cl
  char *v73; // r8
  unsigned int v74; // ecx
  __int64 v75; // rax
  __int64 v76; // r15
  __int64 v77; // rcx
  unsigned int v78; // ecx
  char v79; // al
  int v80; // eax
  char v81; // cl
  __int64 v82; // rax
  bool v83; // zf
  _BYTE *v84; // rdx
  char v85; // al
  int v86; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v88; // rdi
  _DWORD *v89; // rax
  char v90; // al
  __int64 v91; // rax
  char v92; // r9
  PRUNTIME_FUNCTION *v93; // r9
  PRUNTIME_FUNCTION *v94; // rcx
  DWORD64 v95; // rax
  int v96; // ebx
  char ContextRecord; // [rsp+40h] [rbp+0h] BYREF
  char v99; // [rsp+41h] [rbp+1h]
  int v100; // [rsp+44h] [rbp+4h]
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  int v102; // [rsp+50h] [rbp+10h]
  struct _RUNTIME_FUNCTION *v103; // [rsp+58h] [rbp+18h]
  unsigned __int64 v104; // [rsp+60h] [rbp+20h]
  PEXCEPTION_RECORD v105; // [rsp+68h] [rbp+28h]
  ULONG ContextLength; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+78h] [rbp+38h] BYREF
  PVOID HandlerData; // [rsp+80h] [rbp+40h] BYREF
  DWORD64 *v109; // [rsp+88h] [rbp+48h]
  struct _UNWIND_HISTORY_TABLE *v110; // [rsp+90h] [rbp+50h]
  PRUNTIME_FUNCTION v111; // [rsp+98h] [rbp+58h]
  char v112[8]; // [rsp+A0h] [rbp+60h] BYREF
  char v113[8]; // [rsp+A8h] [rbp+68h] BYREF
  PCONTEXT v114; // [rsp+B0h] [rbp+70h]
  __int64 v115; // [rsp+B8h] [rbp+78h]
  DWORD64 ControlPc; // [rsp+C0h] [rbp+80h] BYREF
  unsigned __int64 v117; // [rsp+C8h] [rbp+88h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+D0h] [rbp+90h]
  DWORD64 *v119; // [rsp+D8h] [rbp+98h]
  char *p_ContextRecord; // [rsp+E8h] [rbp+A8h]
  EXCEPTION_DISPOSITION (__cdecl *v121)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+F0h] [rbp+B0h]
  PVOID v122; // [rsp+F8h] [rbp+B8h]
  struct _UNWIND_HISTORY_TABLE *v123; // [rsp+100h] [rbp+C0h]
  int v124; // [rsp+108h] [rbp+C8h]
  PCONTEXT_EX ContextEx; // [rsp+110h] [rbp+D0h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+120h] [rbp+E0h] BYREF

  v2 = 0;
  v114 = Context;
  v105 = ExceptionRecord;
  v99 = 0;
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v99 = 1;
    RtlpLogExceptionDispatch();
  }
  v5 = ExceptionRecord->ExceptionFlags & 1;
  v100 = v5;
  if ( !(unsigned __int8)RtlpGetStackLimits(v113, v112) )
  {
    ExceptionRecord->ExceptionFlags = v5 | 8;
    return v2;
  }
  RtlGetExtendedContextLength2(0x10000Bu, &ContextLength, 0LL);
  v6 = ContextLength + 15LL;
  if ( v6 <= ContextLength )
    v6 = 0xFFFFFFFFFFFFFF0LL;
  v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = alloca(v7);
  v9 = alloca(v7);
  RtlInitializeExtendedContext2((PCONTEXT)&ContextRecord, 0x10000Bu, &ContextEx, 0LL);
  RtlpCopyContext((__int64)&ContextRecord, (__int64)Context);
  Rip = Context->Rip;
  p_HistoryTable = &HistoryTable;
  v109 = 0LL;
  v110 = &HistoryTable;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
LABEL_7:
  v12 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
  v103 = v12;
  v15 = v12;
  if ( v12 )
  {
    v104 = 0LL;
    v16 = 0;
    v17 = ImageBase + v12->UnwindData;
    if ( Rip <= 0x7FFFFFFEFFFFLL && (v17 & 3) != 0 )
      goto LABEL_125;
    v18 = *(_BYTE *)v17 & 7;
    if ( v18 < 2 )
    {
      v13 = 0LL;
      v67 = (unsigned __int8 *)(v17 + 2);
      v68 = ImageBase + v12->UnwindData;
      if ( !*(_BYTE *)(v17 + 2) )
      {
        while ( (*(_BYTE *)v68 & 0x20) != 0 )
        {
          v74 = *v67;
          v75 = v74 + 1;
          if ( (v74 & 1) == 0 )
            v75 = v74;
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 > 0x20 )
LABEL_212:
            RtlRaiseStatus(-1073741569);
          v68 = ImageBase + *(unsigned int *)(v68 + 2 * v75 + 12);
          if ( Rip <= 0x7FFFFFFEFFFFLL && (v68 & 3) != 0 )
            goto LABEL_125;
          v67 = (unsigned __int8 *)(v68 + 2);
          if ( *(_BYTE *)(v68 + 2) )
            goto LABEL_10;
        }
        v16 = 1;
      }
    }
LABEL_10:
    v19 = *(unsigned __int8 *)(v17 + 3);
    v20 = ImageBase;
    v102 = ImageBase;
    if ( (v19 & 0xF) == 0 )
      goto LABEL_11;
    v56 = Rip - ImageBase - v15->BeginAddress;
    if ( v56 >= *(unsigned __int8 *)(v17 + 1) || (*(_BYTE *)v17 & 0x20) != 0 )
    {
      v57 = v19;
      v58 = (unsigned __int8)v19;
    }
    else
    {
      v76 = 0LL;
      if ( *(_BYTE *)(v17 + 2) )
      {
        do
        {
          v77 = *(unsigned __int16 *)(v17 + 2 * v76 + 4);
          if ( (BYTE1(v77) & 0xF) == 3 )
            break;
          v76 = (unsigned int)RtlpUnwindOpSlots(v77, v19, v13) + (unsigned int)v76;
        }
        while ( (unsigned int)v76 < *(unsigned __int8 *)(v17 + 2) );
        v20 = v102;
      }
      v78 = *(unsigned __int8 *)(v17 + 2 * v76 + 4);
      v15 = v103;
      if ( v56 < v78 )
      {
LABEL_11:
        v21 = (unsigned __int64)v119;
LABEL_12:
        EstablisherFrame = v21;
        if ( v16 )
          goto LABEL_13;
        if ( v18 >= 2 )
        {
          if ( *(_BYTE *)(v17 + 2) )
          {
            v49 = *(_WORD *)(v17 + 4);
            if ( (HIBYTE(v49) & 0xF) == 6 )
            {
              v50 = (unsigned __int8)v49;
              v51 = Rip - v20;
              if ( (v49 & 0x1000) != 0 )
              {
                v52 = v15->EndAddress - (unsigned __int8)v49;
                if ( v51 - v52 < (unsigned int)(unsigned __int8)v49 )
                {
LABEL_122:
                  RtlpUnwindEpilogue(ImageBase, Rip, v51 - v52, (_DWORD)v15, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
                  goto LABEL_33;
                }
              }
              for ( i = 1; i < *(unsigned __int8 *)(v17 + 2); ++i )
              {
                v54 = *(_WORD *)(v17 + 2LL * i + 4);
                if ( (HIBYTE(v54) & 0xF) != 6 )
                  break;
                v55 = (unsigned __int8)v54 + (HIBYTE(v54) >> 4 << 8);
                if ( !v55 )
                  break;
                v52 = v15->EndAddress - v55;
                if ( v51 - v52 < v50 )
                  goto LABEL_122;
              }
            }
          }
          goto LABEL_13;
        }
        v69 = *(_BYTE *)Rip;
        v70 = 0LL;
        v71 = (char *)Rip;
        if ( *(_BYTE *)Rip == 72 )
        {
          v79 = *(_BYTE *)(Rip + 1);
          if ( v79 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
          {
            v71 = (char *)(Rip + 4);
            goto LABEL_96;
          }
          if ( v79 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
            goto LABEL_153;
        }
        if ( (v69 & 0xFE) == 0x48 && *(_BYTE *)(Rip + 1) == 0x8D )
        {
          v80 = *(_BYTE *)(Rip + 2) & 7;
          v70 = v80 | (8 * (v69 & 1u));
          if ( v80 | (8 * (v69 & 1)) )
          {
            if ( (_DWORD)v70 == (*(_BYTE *)(v17 + 3) & 0xF) )
            {
              v81 = *(_BYTE *)(Rip + 2) & 0xF8;
              if ( v81 == 96 )
              {
                v71 = (char *)(Rip + 4);
                goto LABEL_96;
              }
              if ( v81 == -96 )
LABEL_153:
                v71 = (char *)(Rip + 7);
            }
          }
        }
        while ( 1 )
        {
LABEL_96:
          v72 = *v71;
          if ( (*v71 & 0xF8) == 0x58 )
          {
            v82 = 1LL;
          }
          else
          {
            v73 = v71 + 1;
            if ( (v72 & 0xF0) != 0x40 || (*v73 & 0xF8) != 0x58 )
            {
              if ( v72 == -14 )
              {
                v72 = *v73;
                ++v71;
              }
              if ( (unsigned __int8)(v72 + 62) <= 1u )
                goto LABEL_163;
              if ( v72 == -13 )
              {
                v72 = -13;
                if ( v71[1] != -61 )
                  goto LABEL_103;
                goto LABEL_163;
              }
              if ( ((v72 + 23) & 0xFD) != 0 )
              {
LABEL_103:
                if ( v72 != -1 || (v72 = -1, v71[1] != 37) )
                {
                  if ( (v72 & 0xF8) == 0x48 && v71[1] == -1 )
                  {
                    v83 = (v71[2] & 0x38) == 32;
                    goto LABEL_162;
                  }
                  goto LABEL_13;
                }
LABEL_163:
                v84 = (_BYTE *)Rip;
                if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
                  goto LABEL_184;
                v85 = *(_BYTE *)(Rip + 1);
                switch ( v85 )
                {
                  case -125:
                    v84 = (_BYTE *)(Rip + 4);
                    v119 = (DWORD64 *)((char *)v119 + *(char *)(Rip + 3));
                    goto LABEL_184;
                  case -127:
                    v119 = (DWORD64 *)((char *)v119
                                     + (*(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
                    break;
                  case -115:
                    v90 = *(_BYTE *)(Rip + 2) & 0xF8;
                    if ( v90 == 96 )
                    {
                      v84 = (_BYTE *)(Rip + 4);
                      v119 = (DWORD64 *)*(&v115 + v70);
                      v119 = (DWORD64 *)((char *)v119 + *(char *)(Rip + 3));
                      goto LABEL_184;
                    }
                    if ( v90 != -96 )
                    {
                      while ( 1 )
                      {
LABEL_184:
                        if ( (*v84 & 0xF8) == 0x58 )
                        {
                          if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v119 & 3) != 0 )
                            goto LABEL_125;
                          *(&v115 + (*v84 & 7)) = *v119;
                          v91 = 1LL;
                        }
                        else
                        {
                          if ( (*v84 & 0xF0) != 0x40 || (v92 = v84[1], (v92 & 0xF8) != 0x58) )
                          {
                            if ( Rip > 0x7FFFFFFEFFFFLL || ((unsigned __int8)v119 & 3) == 0 )
                            {
                              HistoryTable.Entry[0].ImageBase = *v119++;
                              goto LABEL_33;
                            }
LABEL_125:
                            ExRaiseDatatypeMisalignment();
                          }
                          if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v119 & 3) != 0 )
                            goto LABEL_125;
                          *(&v115 + (v92 & 7 | (8LL * (*v84 & 1)))) = *v119;
                          v91 = 2LL;
                        }
                        ++v119;
                        v84 += v91;
                      }
                    }
                    v119 = (DWORD64 *)(*(&v115 + v70)
                                     + (*(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8)));
                    break;
                  default:
                    goto LABEL_184;
                }
                v84 = (_BYTE *)(Rip + 7);
                goto LABEL_184;
              }
              if ( v72 == -21 )
                v86 = v71[1] + 2;
              else
                v86 = *(_DWORD *)(v71 + 1) + 5;
              BeginAddress = v15->BeginAddress;
              v88 = (unsigned __int64)&v71[v86 - ImageBase];
              if ( v88 < BeginAddress || v88 >= v15->EndAddress )
              {
                v89 = (_DWORD *)RtlpSameFunction(v15, ImageBase, &v71[v86]);
                if ( v89 && v88 != *v89 )
                {
                  v20 = v102;
                  goto LABEL_13;
                }
                goto LABEL_163;
              }
              if ( v88 == BeginAddress )
              {
                v83 = (*(_BYTE *)v17 & 0x20) == 0;
LABEL_162:
                if ( v83 )
                  goto LABEL_163;
              }
LABEL_13:
              v22 = 0;
              v111 = v15;
              LODWORD(v103) = 0;
              v23 = v15;
              while ( 1 )
              {
                UnwindData = v23->UnwindData;
                v25 = 0;
                v26 = 0LL;
                v27 = Rip - v23->BeginAddress - v20;
                ContextRecord = 0;
                v28 = (_BYTE *)(UnwindData + ImageBase);
                if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v28 & 3) != 0 )
                  goto LABEL_125;
                v29 = v28[2];
                if ( v29 )
                {
                  do
                  {
                    v30 = &v28[2 * v26];
                    v31 = (unsigned __int8)v30[5] >> 4;
                    if ( v27 < (unsigned __int8)v30[4] )
                    {
                      v26 = (unsigned int)RtlpUnwindOpSlots(*((unsigned __int16 *)v30 + 2), v30, v31)
                          + (unsigned int)v26;
                    }
                    else
                    {
                      if ( (v28[2 * v26 + 5] & 0xF) != 0 )
                      {
                        switch ( v28[2 * v26 + 5] & 0xF )
                        {
                          case 1:
                            v26 = (unsigned int)(v26 + 1);
                            v38 = *(unsigned __int16 *)&v28[2 * v26 + 4];
                            if ( (_DWORD)v31 )
                            {
                              v26 = (unsigned int)(v26 + 1);
                              v39 = (*(unsigned __int16 *)&v28[2 * v26 + 4] << 16) + v38;
                            }
                            else
                            {
                              v39 = 8 * v38;
                            }
                            v119 = (DWORD64 *)((char *)v119 + v39);
                            break;
                          case 2:
                            v119 = (DWORD64 *)((char *)v119 + (unsigned int)(8 * v31 + 8));
                            break;
                          case 3:
                            v119 = (DWORD64 *)*(&v115 + (v28[3] & 0xF));
                            v119 = (DWORD64 *)((char *)v119 - (v28[3] & 0xF0));
                            break;
                          case 4:
                            v26 = (unsigned int)(v26 + 1);
                            v32 = (__int64 *)(v21 + 8LL * *(unsigned __int16 *)&v28[2 * v26 + 4]);
                            if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v32 & 3) != 0 )
                              goto LABEL_125;
                            *(&v115 + v31) = *v32;
                            break;
                          case 5:
                            v26 = (unsigned int)(v26 + 2);
                            if ( Rip <= 0x7FFFFFFEFFFFLL
                              && (((_BYTE)v21 + (unsigned __int8)*(_WORD *)&v28[2 * (unsigned int)(v26 - 1) + 4]) & 3) != 0 )
                            {
                              goto LABEL_125;
                            }
                            *(&v115 + v31) = *(_QWORD *)(v21
                                                       + ((unsigned __int64)*(unsigned __int16 *)&v28[2 * v26 + 4] << 16)
                                                       + *(unsigned __int16 *)&v28[2 * (unsigned int)(v26 - 1) + 4]);
                            break;
                          case 6:
                            LODWORD(v26) = v26 + 1;
                            break;
                          case 7:
                            LODWORD(v26) = v26 + 2;
                            break;
                          case 8:
                            v26 = (unsigned int)(v26 + 1);
                            v36 = (PRUNTIME_FUNCTION *)(v21 + 16LL * *(unsigned __int16 *)&v28[2 * v26 + 4]);
                            if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v36 & 3) != 0 )
                              goto LABEL_125;
                            p_FunctionEntry = &HistoryTable.Entry[(unsigned int)v31 + 10].FunctionEntry;
                            *p_FunctionEntry = *v36;
                            p_FunctionEntry[1] = v36[1];
                            break;
                          case 9:
                            v26 = (unsigned int)(v26 + 2);
                            v93 = (PRUNTIME_FUNCTION *)(v21
                                                      + ((unsigned __int64)*(unsigned __int16 *)&v28[2 * v26 + 4] << 16)
                                                      + *(unsigned __int16 *)&v28[2 * (unsigned int)(v26 - 1) + 4]);
                            if ( Rip <= 0x7FFFFFFEFFFFLL
                              && (((_BYTE)v21 + (unsigned __int8)*(_WORD *)&v28[2 * (unsigned int)(v26 - 1) + 4]) & 3) != 0 )
                            {
                              goto LABEL_125;
                            }
                            v94 = &HistoryTable.Entry[(unsigned int)v31 + 10].FunctionEntry;
                            *v94 = *v93;
                            v94[1] = v93[1];
                            break;
                          case 0xA:
                            ContextRecord = 1;
                            v63 = 4LL;
                            if ( !(_DWORD)v31 )
                              v63 = 3LL;
                            v64 = (DWORD64 **)&v119[v63];
                            v65 = v119 + 1;
                            if ( !(_DWORD)v31 )
                              v65 = v119;
                            if ( Rip <= 0x7FFFFFFEFFFFLL
                              && (((unsigned __int8)v65 & 3) != 0 || ((unsigned __int8)v64 & 3) != 0) )
                            {
                              goto LABEL_125;
                            }
                            HistoryTable.Entry[0].ImageBase = *v65;
                            v119 = *v64;
                            break;
                          default:
                            goto LABEL_212;
                        }
                      }
                      else
                      {
                        if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v119 & 3) != 0 )
                          goto LABEL_125;
                        *(&v115 + v31) = *v119++;
                      }
                      v26 = (unsigned int)(v26 + 1);
                    }
                    v29 = v28[2];
                  }
                  while ( (unsigned int)v26 < v29 );
                  v23 = v111;
                  v25 = ContextRecord;
                  v22 = (unsigned int)v103;
                  v20 = v102;
                }
                if ( (*v28 & 0x20) == 0 )
                  break;
                v66 = v29;
                if ( (v29 & 1) != 0 )
                  v66 = v29 + 1;
                v23 = (struct _RUNTIME_FUNCTION *)&v28[2 * v66 + 4];
                v111 = v23;
                if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v23 & 3) != 0 )
                  goto LABEL_125;
                LODWORD(v103) = ++v22;
                if ( v22 > 0x20 )
                  goto LABEL_212;
              }
              if ( !v25 )
              {
                if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v119 & 3) != 0 )
                  goto LABEL_125;
                HistoryTable.Entry[0].ImageBase = *v119++;
              }
              v33 = ImageBase + v23->UnwindData;
              if ( Rip <= 0x7FFFFFFEFFFFLL && (v33 & 3) != 0 )
                goto LABEL_125;
              if ( (int)Rip - v23->BeginAddress - v20 >= *(unsigned __int8 *)(v33 + 1) && (*(_BYTE *)v33 & 8) != 0 )
              {
                v59 = *(unsigned __int8 *)(v33 + 2);
                v60 = v59 + 1;
                if ( (v59 & 1) == 0 )
                  v60 = *(unsigned __int8 *)(v33 + 2);
                v61 = v60;
                v62 = (void *)(v33 + 2 * (v60 + 2 + 2LL));
                v34 = ImageBase + *(unsigned int *)(v33 + 2 * v61 + 4);
                HandlerData = v62;
              }
              else
              {
LABEL_33:
                v34 = v104;
              }
              if ( !(unsigned __int8)RtlpIsFrameInBounds(v113, v21, v112, v34) )
              {
                v96 = v100 | 8;
                goto LABEL_220;
              }
              p_HistoryTable = v110;
              if ( !v14 )
                goto LABEL_36;
              v40 = EstablisherFrame;
              v41 = 0;
              v42 = v100;
              while ( 1 )
              {
                v43 = 0LL;
                FunctionEntry = v15;
                v44 = v105;
                ControlPc = Rip;
                v105->ExceptionFlags = v42;
                v117 = ImageBase;
                v122 = HandlerData;
                v119 = (DWORD64 *)v40;
                p_ContextRecord = &ContextRecord;
                v121 = v14;
                v123 = p_HistoryTable;
                v124 = v41;
                if ( v99 )
                  v43 = RtlpLogExceptionHandler(v44, &ContextRecord, Rip);
                v45 = RtlpExecuteHandlerForException(v44, v40, v114, &ControlPc);
                if ( v43 )
                  *(_DWORD *)(v43 + 1396) = v45;
                v42 |= v44->ExceptionFlags & 1;
                v46 = (unsigned __int64)v109;
                v100 = v42;
                if ( v109 == (DWORD64 *)v40 )
                {
                  v42 &= ~0x10u;
                  v46 = 0LL;
                  v100 = v42;
                  v109 = 0LL;
                }
                if ( v45 == 1 )
                  goto LABEL_36;
                if ( !v45 )
                {
                  if ( (v42 & 1) != 0 )
                    RtlRaiseStatus(-1073741787);
                  return 1;
                }
                v47 = v45 - 2;
                if ( !v47 )
                  break;
                if ( v47 != 1 )
                  RtlRaiseStatus(-1073741786);
                Rip = ControlPc;
                v15 = FunctionEntry;
                ImageBase = v117;
                RtlpCopyContext((__int64)&ContextRecord, (__int64)p_ContextRecord);
                v14 = RtlVirtualUnwind(
                        1u,
                        v48,
                        Rip,
                        v15,
                        (struct _CONTEXT *)&ContextRecord,
                        &HandlerData,
                        &EstablisherFrame,
                        0LL);
                if ( v14 != v121 || (v40 = EstablisherFrame, (DWORD64 *)EstablisherFrame != v119) || HandlerData != v122 )
                  __fastfail(0x27u);
                p_HistoryTable = v123;
                v41 = v124;
                v110 = v123;
              }
              v100 = v42 | 0x10;
              if ( (unsigned __int64)v119 > v46 )
                v109 = v119;
LABEL_36:
              Rip = HistoryTable.Entry[0].ImageBase;
              v35 = v119;
LABEL_37:
              if ( (unsigned __int8)RtlpIsFrameInBounds(v113, v35, v112, v14) != 1 )
                goto LABEL_219;
              goto LABEL_7;
            }
            v82 = 2LL;
          }
          v71 += v82;
        }
      }
      v58 = *(unsigned __int8 *)(v17 + 3);
      v57 = *(_BYTE *)(v17 + 3);
    }
    v21 = *(&v115 + (v57 & 0xF)) - (v58 & 0xFFFFFFF0);
    goto LABEL_12;
  }
  v95 = *v119;
  if ( Rip != *v119 )
  {
    v35 = v119 + 1;
    HistoryTable.Entry[0].ImageBase = *v119++;
    Rip = v95;
    goto LABEL_37;
  }
LABEL_219:
  v96 = v100;
LABEL_220:
  v2 = 0;
  v105->ExceptionFlags = v96;
  return v2;
}
