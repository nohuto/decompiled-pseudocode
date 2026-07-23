/*
 * XREFs of RtlDispatchException @ 0x1400173E0
 * Callers:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 *     RtlRaiseException @ 0x14030BFC0 (RtlRaiseException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     RtlpGetStackLimitsEx @ 0x140016C38 (RtlpGetStackLimitsEx.c)
 *     RtlGetExtendedContextLength2 @ 0x140016D58 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x140016E3C (RtlInitializeExtendedContext2.c)
 *     RtlpCopyContext @ 0x14001A3D0 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x14001A590 (RtlLookupFunctionEntry.c)
 *     KeQueryCurrentStackInformation @ 0x14001B7E0 (KeQueryCurrentStackInformation.c)
 *     RtlVirtualUnwind @ 0x14013A340 (RtlVirtualUnwind.c)
 *     RtlpIsFrameInBounds @ 0x14013B004 (RtlpIsFrameInBounds.c)
 *     RtlLookupExceptionHandler @ 0x14013B3AC (RtlLookupExceptionHandler.c)
 *     RtlpUnwindEpilogue @ 0x14013C478 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x14013C620 (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x14018E7F0 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1401CC900 (RtlpExecuteHandlerForException.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpLogExceptionDispatch @ 0x14030AB4C (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x14030ACEC (RtlpLogExceptionHandler.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

BOOLEAN __stdcall RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context)
{
  unsigned int v4; // edi
  unsigned __int64 Rsp; // rcx
  BOOL v6; // r14d
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  DWORD64 Rip; // r12
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  PRUNTIME_FUNCTION v13; // rax
  PRUNTIME_FUNCTION v14; // r15
  int v15; // esi
  unsigned __int64 v16; // rbx
  unsigned int v17; // edi
  unsigned __int8 v18; // dl
  int v19; // r11d
  DWORD64 v20; // r14
  unsigned int v21; // edx
  struct _RUNTIME_FUNCTION *v22; // r8
  __int64 UnwindData; // rcx
  char v24; // r9
  unsigned int v25; // esi
  __int64 v26; // rbx
  _BYTE *v27; // rdi
  unsigned __int8 v28; // cl
  _BYTE *v29; // rdx
  __int64 v30; // r8
  DWORD64 *v31; // rdx
  unsigned int v32; // edx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rcx
  PRUNTIME_FUNCTION *v36; // rdx
  PRUNTIME_FUNCTION *p_FunctionEntry; // rcx
  int v38; // edx
  unsigned int v39; // edx
  unsigned __int64 v40; // rbx
  int v41; // esi
  int v42; // r8d
  char v43; // r14
  PEXCEPTION_RECORD v44; // rcx
  __int64 v45; // rdi
  int v46; // edx
  DWORD64 v47; // r10
  __int16 v48; // ax
  unsigned int v49; // r9d
  int v50; // r10d
  int v51; // ecx
  unsigned int i; // r8d
  __int16 v53; // ax
  int v54; // edx
  unsigned int v55; // r14d
  unsigned __int8 v56; // cl
  int v57; // eax
  int v58; // ecx
  unsigned int v59; // eax
  __int64 v60; // rdx
  DWORD64 *v61; // rdx
  DWORD64 v62; // rcx
  unsigned int v63; // eax
  int v64; // r8d
  unsigned __int8 *v65; // rcx
  unsigned __int64 v66; // rdx
  int v67; // edx
  PRUNTIME_FUNCTION v68; // r9
  DWORD64 v69; // r10
  PEXCEPTION_ROUTINE v70; // rax
  int v71; // r9d
  char v72; // r8
  __int64 v73; // rsi
  char *v74; // rdx
  char v75; // cl
  char *v76; // r8
  DWORD64 v77; // rdx
  char IsFrameInBounds; // al
  char v79; // al
  unsigned int v80; // ecx
  __int64 v81; // rax
  __int64 v82; // r15
  unsigned int v83; // ecx
  int v84; // eax
  char v85; // cl
  __int64 v86; // rax
  bool v87; // zf
  _BYTE *v88; // rdx
  char v89; // al
  int v90; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v92; // rdi
  _DWORD *v93; // rax
  char v94; // al
  __int64 v95; // rax
  char v96; // r9
  PRUNTIME_FUNCTION *v97; // r9
  PRUNTIME_FUNCTION *v98; // rcx
  int v99; // edi
  __int64 v100; // rax
  DWORD64 v101; // rax
  int ContextRecord; // [rsp+40h] [rbp+0h] BYREF
  char v104; // [rsp+44h] [rbp+4h]
  char v105; // [rsp+45h] [rbp+5h]
  int v106; // [rsp+48h] [rbp+8h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+10h] BYREF
  unsigned __int64 v108; // [rsp+58h] [rbp+18h]
  DWORD64 v109; // [rsp+60h] [rbp+20h] BYREF
  DWORD64 v110; // [rsp+68h] [rbp+28h] BYREF
  int v111; // [rsp+70h] [rbp+30h]
  struct _RUNTIME_FUNCTION *v112; // [rsp+78h] [rbp+38h]
  PUNWIND_HISTORY_TABLE v113; // [rsp+80h] [rbp+40h]
  PVOID HandlerData; // [rsp+88h] [rbp+48h] BYREF
  PEXCEPTION_RECORD v115; // [rsp+90h] [rbp+50h]
  int v116; // [rsp+98h] [rbp+58h] BYREF
  ULONG ContextLength; // [rsp+9Ch] [rbp+5Ch] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+A0h] [rbp+60h] BYREF
  DWORD64 v119; // [rsp+A8h] [rbp+68h]
  PRUNTIME_FUNCTION v120; // [rsp+B0h] [rbp+70h]
  PEXCEPTION_ROUTINE v121; // [rsp+B8h] [rbp+78h] BYREF
  DWORD64 ControlPc[10]; // [rsp+C0h] [rbp+80h] BYREF
  PCONTEXT v123; // [rsp+110h] [rbp+D0h]
  PCONTEXT_EX ContextEx; // [rsp+118h] [rbp+D8h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+120h] [rbp+E0h] BYREF

  v123 = Context;
  v115 = ExceptionRecord;
  memset(ControlPc, 0, sizeof(ControlPc));
  v105 = 0;
  memset(&HistoryTable, 0, sizeof(HistoryTable));
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v105 = 1;
    RtlpLogExceptionDispatch(ExceptionRecord, Context);
  }
  v4 = ExceptionRecord->ExceptionFlags & 1;
  ContextRecord = v4;
  KeQueryCurrentStackInformation(&v116, &v110, &v109);
  Rsp = Context->Rsp;
  v6 = v116 == 10;
  v106 = v6;
  if ( !(unsigned __int8)RtlpGetStackLimitsEx(Rsp, (__int64)&v110, (__int64)&v109) )
  {
    ExceptionRecord->ExceptionFlags = v4 | 8;
    return 0;
  }
  RtlGetExtendedContextLength2(0x10000Bu, &ContextLength, 0LL);
  v7 = ContextLength + 15LL;
  if ( v7 <= ContextLength )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  v9 = alloca(v8);
  v10 = alloca(v8);
  RtlInitializeExtendedContext2((PCONTEXT)&ContextRecord, 0x10000Bu, &ContextEx, 0LL);
  RtlpCopyContext(&ContextRecord, Context);
  Rip = Context->Rip;
  p_HistoryTable = &HistoryTable;
  v113 = &HistoryTable;
  v119 = 0LL;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 2 )
  {
    v13 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v112 = v13;
    v14 = v13;
    if ( !v13 )
    {
      v101 = *(_QWORD *)ControlPc[3];
      if ( Rip != *(_QWORD *)ControlPc[3] )
      {
        v35 = ControlPc[3] + 8;
        HistoryTable.Entry[0].ImageBase = *(_QWORD *)ControlPc[3];
        ControlPc[3] += 8LL;
        Rip = v101;
        goto LABEL_39;
      }
      goto LABEL_243;
    }
    v108 = 0LL;
    v15 = 0;
    v16 = ImageBase + v13->UnwindData;
    if ( Rip <= 0x7FFFFFFEFFFFLL && (v16 & 3) != 0 )
      goto LABEL_144;
    v17 = *(_BYTE *)v16 & 7;
    if ( v17 < 2 )
    {
      v64 = 0;
      v65 = (unsigned __int8 *)(v16 + 2);
      v66 = ImageBase + v13->UnwindData;
      if ( !*(_BYTE *)(v16 + 2) )
      {
        while ( (*(_BYTE *)v66 & 0x20) != 0 )
        {
          v80 = *v65;
          v81 = v80 + 1;
          if ( (v80 & 1) == 0 )
            v81 = v80;
          if ( (unsigned int)++v64 > 0x20 )
LABEL_237:
            RtlRaiseStatus(-1073741569);
          v66 = ImageBase + *(unsigned int *)(v66 + 2 * v81 + 12);
          if ( Rip <= 0x7FFFFFFEFFFFLL && (v66 & 3) != 0 )
            goto LABEL_144;
          v65 = (unsigned __int8 *)(v66 + 2);
          if ( *(_BYTE *)(v66 + 2) )
            goto LABEL_10;
        }
        v15 = 1;
      }
    }
LABEL_10:
    v18 = *(_BYTE *)(v16 + 3);
    v19 = ImageBase;
    v111 = ImageBase;
    if ( (v18 & 0xF) == 0 )
      goto LABEL_11;
    v55 = Rip - v14->BeginAddress - ImageBase;
    if ( v55 >= *(unsigned __int8 *)(v16 + 1) || (*(_BYTE *)v16 & 0x20) != 0 )
    {
      v56 = v18;
      v57 = v18;
LABEL_73:
      v20 = ControlPc[(v56 & 0xF) - 1] - (v57 & 0xFFFFFFF0);
      goto LABEL_12;
    }
    v82 = 0LL;
    if ( *(_BYTE *)(v16 + 2) )
    {
      do
      {
        if ( (HIBYTE(*(_WORD *)(v16 + 2 * v82 + 4)) & 0xF) == 3 )
          break;
        v82 = (unsigned int)((__int64 (*)(void))RtlpUnwindOpSlots)() + (unsigned int)v82;
      }
      while ( (unsigned int)v82 < *(unsigned __int8 *)(v16 + 2) );
      v19 = v111;
    }
    v83 = *(unsigned __int8 *)(v16 + 2 * v82 + 4);
    v14 = v112;
    if ( v55 >= v83 )
    {
      v57 = *(unsigned __int8 *)(v16 + 3);
      v56 = *(_BYTE *)(v16 + 3);
      goto LABEL_73;
    }
LABEL_11:
    v20 = ControlPc[3];
LABEL_12:
    EstablisherFrame = v20;
    if ( v15 )
      goto LABEL_13;
    if ( v17 >= 2 )
    {
      if ( *(_BYTE *)(v16 + 2) )
      {
        v48 = *(_WORD *)(v16 + 4);
        if ( (HIBYTE(v48) & 0xF) == 6 )
        {
          v49 = (unsigned __int8)v48;
          v50 = Rip - v19;
          if ( (v48 & 0x1000) != 0 )
          {
            v51 = v14->EndAddress - (unsigned __int8)v48;
            if ( v50 - v51 < (unsigned int)(unsigned __int8)v48 )
            {
LABEL_140:
              RtlpUnwindEpilogue(ImageBase, Rip, v50 - v51, (_DWORD)v14, (__int64)&ContextRecord, 0LL, 0LL, 0LL);
              goto LABEL_33;
            }
          }
          for ( i = 1; i < *(unsigned __int8 *)(v16 + 2); ++i )
          {
            v53 = *(_WORD *)(v16 + 2LL * i + 4);
            if ( (HIBYTE(v53) & 0xF) != 6 )
              break;
            v54 = (unsigned __int8)v53 + (HIBYTE(v53) >> 4 << 8);
            if ( !v54 )
              break;
            v51 = v14->EndAddress - v54;
            if ( v50 - v51 < v49 )
              goto LABEL_140;
          }
        }
      }
      goto LABEL_13;
    }
    v72 = *(_BYTE *)Rip;
    v73 = 0LL;
    v74 = (char *)Rip;
    if ( *(_BYTE *)Rip == 72 )
    {
      v79 = *(_BYTE *)(Rip + 1);
      if ( v79 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
      {
        v74 = (char *)(Rip + 4);
        goto LABEL_106;
      }
      if ( v79 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
        goto LABEL_169;
    }
    if ( (v72 & 0xFE) == 0x48 && *(_BYTE *)(Rip + 1) == 0x8D )
    {
      v84 = *(_BYTE *)(Rip + 2) & 7;
      v73 = v84 | (8 * (v72 & 1u));
      if ( v84 | (8 * (v72 & 1)) )
      {
        if ( (_DWORD)v73 == (*(_BYTE *)(v16 + 3) & 0xF) )
        {
          v85 = *(_BYTE *)(Rip + 2) & 0xF8;
          if ( v85 == 96 )
          {
            v74 = (char *)(Rip + 4);
            goto LABEL_106;
          }
          if ( v85 == -96 )
LABEL_169:
            v74 = (char *)(Rip + 7);
        }
      }
    }
LABEL_106:
    while ( 1 )
    {
      v75 = *v74;
      if ( (*v74 & 0xF8) != 0x58 )
        break;
      v86 = 1LL;
LABEL_171:
      v74 += v86;
    }
    v76 = v74 + 1;
    if ( (v75 & 0xF0) == 0x40 && (*v76 & 0xF8) == 0x58 )
    {
      v86 = 2LL;
      goto LABEL_171;
    }
    if ( v75 == -14 )
    {
      v75 = *v76;
      ++v74;
    }
    if ( (unsigned __int8)(v75 + 62) <= 1u )
      goto LABEL_177;
    if ( v75 == -13 )
    {
      v75 = -13;
      if ( v74[1] != -61 )
        goto LABEL_113;
      goto LABEL_177;
    }
    if ( ((v75 + 23) & 0xFD) != 0 )
    {
LABEL_113:
      if ( v75 != -1 || (v75 = -1, v74[1] != 37) )
      {
        if ( (v75 & 0xF8) == 0x48 && v74[1] == -1 )
        {
          v87 = (v74[2] & 0x38) == 32;
          goto LABEL_176;
        }
        goto LABEL_13;
      }
LABEL_177:
      v88 = (_BYTE *)Rip;
      if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
        goto LABEL_198;
      v89 = *(_BYTE *)(Rip + 1);
      switch ( v89 )
      {
        case -125:
          v88 = (_BYTE *)(Rip + 4);
          ControlPc[3] += *(char *)(Rip + 3);
          goto LABEL_198;
        case -127:
          ControlPc[3] += *(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8);
          break;
        case -115:
          v94 = *(_BYTE *)(Rip + 2) & 0xF8;
          if ( v94 == 96 )
          {
            v88 = (_BYTE *)(Rip + 4);
            ControlPc[3] = ControlPc[v73 - 1];
            ControlPc[3] += *(char *)(Rip + 3);
            goto LABEL_198;
          }
          if ( v94 != -96 )
          {
            while ( 1 )
            {
LABEL_198:
              if ( (*v88 & 0xF8) == 0x58 )
              {
                if ( Rip <= 0x7FFFFFFEFFFFLL && (ControlPc[3] & 3) != 0 )
                  goto LABEL_144;
                ControlPc[(*v88 & 7) - 1] = *(_QWORD *)ControlPc[3];
                v95 = 1LL;
              }
              else
              {
                if ( (*v88 & 0xF0) != 0x40 || (v96 = v88[1], (v96 & 0xF8) != 0x58) )
                {
                  if ( Rip > 0x7FFFFFFEFFFFLL || (ControlPc[3] & 3) == 0 )
                  {
                    HistoryTable.Entry[0].ImageBase = *(_QWORD *)ControlPc[3];
                    ControlPc[3] += 8LL;
                    goto LABEL_33;
                  }
LABEL_144:
                  ExRaiseDatatypeMisalignment();
                }
                if ( Rip <= 0x7FFFFFFEFFFFLL && (ControlPc[3] & 3) != 0 )
                  goto LABEL_144;
                ControlPc[(v96 & 7 | (8LL * (*v88 & 1))) - 1] = *(_QWORD *)ControlPc[3];
                v95 = 2LL;
              }
              ControlPc[3] += 8LL;
              v88 += v95;
            }
          }
          ControlPc[3] = ControlPc[v73 - 1]
                       + (*(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8));
          break;
        default:
          goto LABEL_198;
      }
      v88 = (_BYTE *)(Rip + 7);
      goto LABEL_198;
    }
    if ( v75 == -21 )
      v90 = v74[1] + 2;
    else
      v90 = *(_DWORD *)(v74 + 1) + 5;
    BeginAddress = v14->BeginAddress;
    v92 = (unsigned __int64)&v74[v90 - ImageBase];
    if ( v92 < BeginAddress || v92 >= v14->EndAddress )
    {
      v93 = (_DWORD *)RtlpSameFunction(v14, ImageBase, &v74[v90]);
      if ( v93 && v92 != *v93 )
      {
        v19 = v111;
        goto LABEL_13;
      }
      goto LABEL_177;
    }
    if ( v92 == BeginAddress )
    {
      v87 = (*(_BYTE *)v16 & 0x20) == 0;
LABEL_176:
      if ( v87 )
        goto LABEL_177;
    }
LABEL_13:
    v21 = 0;
    v120 = v14;
    LODWORD(v112) = 0;
    v22 = v14;
    while ( 1 )
    {
      UnwindData = v22->UnwindData;
      v24 = 0;
      v104 = 0;
      v25 = Rip - v19 - v22->BeginAddress;
      v26 = 0LL;
      v27 = (_BYTE *)(UnwindData + ImageBase);
      if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v27 & 3) != 0 )
        goto LABEL_144;
      v28 = v27[2];
      if ( v28 )
      {
        do
        {
          v29 = &v27[2 * v26];
          v30 = (unsigned __int8)v29[5] >> 4;
          if ( v25 < (unsigned __int8)v29[4] )
          {
            v26 = (unsigned int)RtlpUnwindOpSlots(*((unsigned __int16 *)v29 + 2)) + (unsigned int)v26;
          }
          else
          {
            if ( (v27[2 * v26 + 5] & 0xF) != 0 )
            {
              switch ( v27[2 * v26 + 5] & 0xF )
              {
                case 1:
                  v26 = (unsigned int)(v26 + 1);
                  v38 = *(unsigned __int16 *)&v27[2 * v26 + 4];
                  if ( (_DWORD)v30 )
                  {
                    v26 = (unsigned int)(v26 + 1);
                    v39 = (*(unsigned __int16 *)&v27[2 * v26 + 4] << 16) + v38;
                  }
                  else
                  {
                    v39 = 8 * v38;
                  }
                  ControlPc[3] += v39;
                  break;
                case 2:
                  ControlPc[3] += (unsigned int)(8 * v30 + 8);
                  break;
                case 3:
                  ControlPc[3] = ControlPc[(v27[3] & 0xF) - 1];
                  ControlPc[3] -= v27[3] & 0xF0;
                  break;
                case 4:
                  v26 = (unsigned int)(v26 + 1);
                  v31 = (DWORD64 *)(v20 + 8LL * *(unsigned __int16 *)&v27[2 * v26 + 4]);
                  if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v31 & 3) != 0 )
                    goto LABEL_144;
                  ControlPc[v30 - 1] = *v31;
                  break;
                case 5:
                  v26 = (unsigned int)(v26 + 2);
                  if ( Rip <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)v20 + (unsigned __int8)*(_WORD *)&v27[2 * (unsigned int)(v26 - 1) + 4]) & 3) != 0 )
                  {
                    goto LABEL_144;
                  }
                  ControlPc[v30 - 1] = *(_QWORD *)(v20
                                                 + ((unsigned __int64)*(unsigned __int16 *)&v27[2 * v26 + 4] << 16)
                                                 + *(unsigned __int16 *)&v27[2 * (unsigned int)(v26 - 1) + 4]);
                  break;
                case 6:
                  LODWORD(v26) = v26 + 1;
                  break;
                case 7:
                  LODWORD(v26) = v26 + 2;
                  break;
                case 8:
                  v26 = (unsigned int)(v26 + 1);
                  v36 = (PRUNTIME_FUNCTION *)(v20 + 16LL * *(unsigned __int16 *)&v27[2 * v26 + 4]);
                  if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v36 & 3) != 0 )
                    goto LABEL_144;
                  p_FunctionEntry = &HistoryTable.Entry[(unsigned int)v30 + 10].FunctionEntry;
                  *p_FunctionEntry = *v36;
                  p_FunctionEntry[1] = v36[1];
                  break;
                case 9:
                  v26 = (unsigned int)(v26 + 2);
                  v97 = (PRUNTIME_FUNCTION *)(v20
                                            + ((unsigned __int64)*(unsigned __int16 *)&v27[2 * v26 + 4] << 16)
                                            + *(unsigned __int16 *)&v27[2 * (unsigned int)(v26 - 1) + 4]);
                  if ( Rip <= 0x7FFFFFFEFFFFLL
                    && (((_BYTE)v20 + (unsigned __int8)*(_WORD *)&v27[2 * (unsigned int)(v26 - 1) + 4]) & 3) != 0 )
                  {
                    goto LABEL_144;
                  }
                  v98 = &HistoryTable.Entry[(unsigned int)v30 + 10].FunctionEntry;
                  *v98 = *v97;
                  v98[1] = v97[1];
                  break;
                case 0xA:
                  v104 = 1;
                  v60 = 32LL;
                  if ( !(_DWORD)v30 )
                    v60 = 24LL;
                  v61 = (DWORD64 *)(ControlPc[3] + v60);
                  v62 = ControlPc[3] + 8;
                  if ( !(_DWORD)v30 )
                    v62 = ControlPc[3];
                  if ( Rip <= 0x7FFFFFFEFFFFLL && ((v62 & 3) != 0 || ((unsigned __int8)v61 & 3) != 0) )
                    goto LABEL_144;
                  HistoryTable.Entry[0].ImageBase = *(_QWORD *)v62;
                  ControlPc[3] = *v61;
                  break;
                default:
                  goto LABEL_237;
              }
            }
            else
            {
              if ( Rip <= 0x7FFFFFFEFFFFLL && (ControlPc[3] & 3) != 0 )
                goto LABEL_144;
              ControlPc[v30 - 1] = *(_QWORD *)ControlPc[3];
              ControlPc[3] += 8LL;
            }
            v26 = (unsigned int)(v26 + 1);
          }
          v28 = v27[2];
        }
        while ( (unsigned int)v26 < v28 );
        v22 = v120;
        v24 = v104;
        v21 = (unsigned int)v112;
        v19 = v111;
      }
      if ( (*v27 & 0x20) == 0 )
        break;
      v63 = v28;
      if ( (v28 & 1) != 0 )
        v63 = v28 + 1;
      v22 = (struct _RUNTIME_FUNCTION *)&v27[2 * v63 + 4];
      v120 = v22;
      if ( Rip <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v22 & 3) != 0 )
        goto LABEL_144;
      LODWORD(v112) = ++v21;
      if ( v21 > 0x20 )
        goto LABEL_237;
    }
    if ( !v24 )
    {
      if ( Rip <= 0x7FFFFFFEFFFFLL && (ControlPc[3] & 3) != 0 )
        goto LABEL_144;
      HistoryTable.Entry[0].ImageBase = *(_QWORD *)ControlPc[3];
      ControlPc[3] += 8LL;
    }
    v32 = Rip - v19 - v22->BeginAddress;
    v33 = ImageBase + v22->UnwindData;
    if ( Rip <= 0x7FFFFFFEFFFFLL && (v33 & 3) != 0 )
      goto LABEL_144;
    if ( v32 >= *(unsigned __int8 *)(v33 + 1) && (*(_BYTE *)v33 & 8) != 0 )
    {
      v58 = *(unsigned __int8 *)(v33 + 2);
      v59 = v58 + 1;
      if ( (v58 & 1) == 0 )
        v59 = *(unsigned __int8 *)(v33 + 2);
      v34 = ImageBase + *(unsigned int *)(v33 + 2LL * v59 + 4);
      HandlerData = (PVOID)(v33 + 2 * (v59 + 2 + 2LL));
      v108 = v34;
    }
    else
    {
LABEL_33:
      v34 = v108;
    }
    if ( (v20 & 7) != 0 || v20 < v110 || v20 >= v109 )
    {
      if ( (_BYTE)v106 == 1 )
      {
        LOBYTE(v106) = 2;
        RtlpGetStackLimitsEx(v20, (__int64)&v110, (__int64)&v109);
        v34 = v108;
        goto LABEL_37;
      }
      if ( !(_BYTE)v106 )
      {
        v99 = ContextRecord | 8;
        goto LABEL_244;
      }
    }
LABEL_37:
    if ( !v34 )
    {
LABEL_38:
      Rip = HistoryTable.Entry[0].ImageBase;
      v35 = ControlPc[3];
      v6 = v106;
LABEL_39:
      if ( (v35 & 7) != 0 || v35 < v110 || (p_HistoryTable = v113, v35 >= v109) )
      {
        if ( v6 )
        {
          LOBYTE(v6) = 0;
          v106 = v6;
          if ( (unsigned __int8)RtlpGetStackLimitsEx(v35, (__int64)&v110, (__int64)&v109) )
          {
            p_HistoryTable = v113;
            continue;
          }
        }
LABEL_243:
        v99 = ContextRecord;
LABEL_244:
        v115->ExceptionFlags = v99;
        return 0;
      }
      continue;
    }
    break;
  }
  v40 = EstablisherFrame;
  v41 = 0;
  v42 = ContextRecord;
  while ( 2 )
  {
    v43 = 0;
    v44 = v115;
    v45 = 0LL;
    ControlPc[1] = ImageBase;
    ControlPc[7] = (DWORD64)HandlerData;
    ControlPc[8] = (DWORD64)v113;
    v115->ExceptionFlags = v42;
    ControlPc[0] = Rip;
    ControlPc[2] = (DWORD64)v14;
    ControlPc[3] = v40;
    ControlPc[5] = (DWORD64)&ContextRecord;
    ControlPc[6] = v34;
    LODWORD(ControlPc[9]) = v41;
    if ( v105 )
    {
      v100 = RtlpLogExceptionHandler(v44, &ContextRecord, Rip);
      v44 = v115;
      v45 = v100;
    }
    v46 = RtlpExecuteHandlerForException(v44, v40, v123, ControlPc);
    if ( v45 )
      *(_DWORD *)(v45 + 1396) = v46;
    v47 = v119;
    v42 = v115->ExceptionFlags & 1 | ContextRecord;
    ContextRecord = v42;
    if ( v119 == v40 )
    {
      v42 &= ~0x10u;
      v47 = 0LL;
      ContextRecord = v42;
      v119 = 0LL;
    }
    if ( v46 == 1 )
    {
LABEL_58:
      v34 = v108;
      goto LABEL_59;
    }
    if ( v46 )
    {
      v67 = v46 - 2;
      if ( !v67 )
      {
        v77 = ControlPc[3];
        v42 |= 0x10u;
        IsFrameInBounds = 1;
        ContextRecord = v42;
        if ( (_BYTE)v106 )
        {
          IsFrameInBounds = RtlpIsFrameInBounds(&v110, ControlPc[3], &v109);
          v42 = ContextRecord;
        }
        if ( v77 > v47 || !IsFrameInBounds )
          v119 = v77;
        goto LABEL_58;
      }
      if ( v67 != 1 )
        RtlRaiseStatus(-1073741786);
      Rip = ControlPc[0];
      ImageBase = ControlPc[1];
      RtlpCopyContext(&ContextRecord, ControlPc[5]);
      v70 = RtlVirtualUnwind(1u, v69, Rip, v68, (struct _CONTEXT *)&ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
      v40 = ControlPc[3];
      EstablisherFrame = ControlPc[3];
      v121 = v70;
      v14 = RtlLookupFunctionEntry(Rip, &ImageBase, v113);
      if ( v14 != (PRUNTIME_FUNCTION)ControlPc[2]
        || (int)RtlLookupExceptionHandler((_DWORD)v14, ImageBase, 2, v71, (__int64)&v121, (__int64)&HandlerData) < 0
        || (v108 = (unsigned __int64)v121, v121 != (PEXCEPTION_ROUTINE)ControlPc[6])
        || HandlerData != (PVOID)ControlPc[7] )
      {
        __fastfail(0x27u);
      }
      v41 = ControlPc[9];
      v113 = (PUNWIND_HISTORY_TABLE)ControlPc[8];
      v43 = 1;
      if ( !(unsigned __int8)RtlpIsFrameInBounds(&v110, v40, &v109) && (_BYTE)v106 == 1 )
      {
        RtlpGetStackLimitsEx(v40, (__int64)&v110, (__int64)&v109);
        v34 = v108;
        v42 = ContextRecord;
        goto LABEL_229;
      }
      v42 = ContextRecord;
LABEL_59:
      if ( (_BYTE)v106 == 2 )
LABEL_229:
        LOBYTE(v106) = 0;
      if ( !v43 )
        goto LABEL_38;
      continue;
    }
    break;
  }
  if ( (v42 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
  return 1;
}
