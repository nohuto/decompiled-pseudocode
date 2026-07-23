/*
 * XREFs of RtlDispatchException @ 0x1800048E0
 * Callers:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     KiUserExceptionDispatcher @ 0x1800A4090 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlpSameFunction @ 0x180002E70 (RtlpSameFunction.c)
 *     RtlpPopUserShadowStack @ 0x180003738 (RtlpPopUserShadowStack.c)
 *     RtlpGetStackLimits @ 0x180003870 (RtlpGetStackLimits.c)
 *     RtlVirtualUnwind @ 0x1800053B0 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x180006870 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x180006A90 (RtlLookupFunctionEntry.c)
 *     RtlLocateExtendedFeature2 @ 0x1800083F0 (RtlLocateExtendedFeature2.c)
 *     RtlInitializeExtendedContext2 @ 0x180008450 (RtlInitializeExtendedContext2.c)
 *     RtlpSanitizeContext @ 0x1800085F4 (RtlpSanitizeContext.c)
 *     RtlpValidateContextFlags @ 0x180008730 (RtlpValidateContextFlags.c)
 *     RtlpGetEntireXStateAreaLength @ 0x1800087A4 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpCallVectoredHandlers @ 0x18006CC90 (RtlpCallVectoredHandlers.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     RtlpUnwindEpilogue @ 0x18009F448 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x18009F66C (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     _alloca_probe @ 0x1800A5230 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1800A5340 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x1800FD538 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1800FD6DC (RtlpLogExceptionHandler.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  PEXCEPTION_RECORD v3; // r15
  int v4; // esi
  ULONG64 v5; // rbx
  ULONG v6; // edi
  __int64 v7; // r10
  ULONG64 v8; // r11
  int v9; // eax
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  void *v13; // rsp
  void *v14; // rsp
  ULONG64 Rip; // r12
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  PRUNTIME_FUNCTION v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rdi
  unsigned int v21; // ebx
  int v22; // r8d
  unsigned __int8 *v23; // rax
  _BYTE *v24; // rdx
  __int64 v25; // rdx
  ULONG64 v26; // r14
  char v27; // cl
  char *v28; // r8
  char v29; // cl
  char *v30; // rdx
  unsigned __int64 v31; // rax
  unsigned int v32; // edx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v33; // r15
  int v34; // r12d
  char v35; // r8
  _BYTE *v36; // rdi
  __int64 v37; // rbx
  unsigned int v38; // esi
  unsigned __int8 v39; // cl
  _BYTE *v40; // rdx
  __int64 v41; // r9
  ULONG64 v42; // rdi
  _BYTE *v43; // r8
  unsigned int v44; // ecx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v45; // rbx
  int v46; // ecx
  int v47; // eax
  PEXCEPTION_ROUTINE v48; // rcx
  struct _UNWIND_HISTORY_TABLE *v49; // r8
  int v50; // eax
  PVOID v51; // rdx
  __int64 v52; // rbx
  int v53; // edx
  unsigned __int64 v54; // rbx
  int v55; // edx
  unsigned int v56; // edx
  unsigned int v57; // r14d
  char v58; // cl
  int v59; // eax
  __int64 v60; // rax
  char *v61; // r8
  char v62; // al
  char v63; // dl
  int v64; // eax
  __int64 v65; // rbx
  __int64 v66; // rax
  unsigned __int64 v67; // rbx
  unsigned __int64 BeginAddress; // rcx
  char v69; // al
  int v70; // eax
  char v71; // dl
  __int64 ExtendedFeature2; // rax
  unsigned __int8 v73; // r8
  __int16 v74; // dx
  int v75; // r10d
  unsigned int v76; // r9d
  int v77; // edx
  unsigned int v78; // r11d
  unsigned __int16 v79; // dx
  int v80; // ecx
  __int64 v81; // rdx
  _QWORD *v82; // rcx
  unsigned int v83; // eax
  __int64 v84; // r9
  __int64 v85; // rax
  int v86; // edx
  _DWORD *v87; // rax
  char v88; // r9
  DWORD64 *v89; // rax
  ULONG64 *v90; // rcx
  BOOLEAN v91; // bl
  __int64 v93; // r15
  __int64 v94; // rcx
  unsigned int v95; // ecx
  char v96; // al
  _QWORD *v97; // r8
  _QWORD *v98; // rcx
  char v99; // [rsp+40h] [rbp+0h] BYREF
  char v100; // [rsp+41h] [rbp+1h]
  int v101; // [rsp+44h] [rbp+4h]
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v102; // [rsp+48h] [rbp+8h]
  unsigned int v103; // [rsp+50h] [rbp+10h] BYREF
  unsigned __int64 ImageBase; // [rsp+58h] [rbp+18h] BYREF
  PEXCEPTION_RECORD v105; // [rsp+60h] [rbp+20h]
  EXCEPTION_DISPOSITION (__cdecl *v106)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+68h] [rbp+28h]
  PVOID HandlerData; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v109; // [rsp+80h] [rbp+40h]
  struct _UNWIND_HISTORY_TABLE *v110; // [rsp+88h] [rbp+48h]
  PCONTEXT_EX ContextEx; // [rsp+90h] [rbp+50h] BYREF
  ULONG64 v112; // [rsp+98h] [rbp+58h] BYREF
  unsigned __int64 v113; // [rsp+A0h] [rbp+60h] BYREF
  PCONTEXT v114; // [rsp+A8h] [rbp+68h]
  ULONG64 ControlPc; // [rsp+B0h] [rbp+70h] BYREF
  ULONG64 v116; // [rsp+B8h] [rbp+78h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+C0h] [rbp+80h]
  unsigned __int64 v118; // [rsp+C8h] [rbp+88h]
  ULONG64 v119; // [rsp+D8h] [rbp+98h]
  EXCEPTION_DISPOSITION (__cdecl *v120)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+E0h] [rbp+A0h]
  PVOID v121; // [rsp+E8h] [rbp+A8h]
  struct _UNWIND_HISTORY_TABLE *v122; // [rsp+F0h] [rbp+B0h]
  int v123; // [rsp+F8h] [rbp+B8h]
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+100h] [rbp+C0h] BYREF
  _OWORD v125[4]; // [rsp+1E0h] [rbp+1A0h] BYREF

  v114 = ContextRecord;
  v3 = ExceptionRecord;
  v105 = ExceptionRecord;
  v100 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
  {
    v100 = 1;
    RtlpLogExceptionDispatch();
  }
  if ( (unsigned __int8)RtlpCallVectoredHandlers(v3, ContextRecord, 0LL) )
  {
LABEL_155:
    v91 = 1;
    goto LABEL_156;
  }
  v4 = v3->ExceptionFlags & 1;
  v101 = v4;
  if ( !RtlpGetStackLimits(&v112, (void **)&v113) )
  {
LABEL_200:
    v4 |= 8u;
    goto LABEL_201;
  }
  RtlpSanitizeContext(ContextRecord);
  v5 = 0LL;
  v6 = 1048587;
  if ( (MEMORY[0x7FFE0708] & 0x800) != 0 )
  {
    v6 = 1048651;
    v5 = 2048LL;
  }
  if ( (int)RtlpValidateContextFlags(v6, &v103) < 0 )
  {
    v10 = v103;
  }
  else
  {
    v9 = 1256;
    if ( (v103 & 2) != 0 )
    {
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
        v8 = v5 & (v7 | MEMORY[0x7FFE03D8]);
      v9 = RtlpGetEntireXStateAreaLength(v8) + 800;
    }
    v10 = (unsigned int)(v9 + 15);
  }
  v11 = v10 + 15;
  if ( v10 + 15 < v10 )
    v11 = 0xFFFFFFFFFFFFFF0LL;
  v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
  v13 = alloca(v12);
  v14 = alloca(v12);
  RtlInitializeExtendedContext2((PCONTEXT)&v99, v6, &ContextEx, v5);
  RtlpCopyContext(&v99, ContextRecord);
  Rip = ContextRecord->Rip;
  p_HistoryTable = &HistoryTable;
  v110 = &HistoryTable;
  v109 = 0LL;
  HistoryTable.Count = 0;
  HistoryTable.HighAddress = 0LL;
  ContextEx = (PCONTEXT_EX)Rip;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  while ( 2 )
  {
    v17 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v102 = v17;
    if ( !v17 )
    {
      if ( Rip != *(_QWORD *)v119 )
      {
        HistoryTable.Entry[2].ImageBase = *(_QWORD *)v119;
        v119 += 8LL;
        RtlpPopUserShadowStack((__int64)&v99);
        goto LABEL_60;
      }
      break;
    }
    v18 = 0LL;
    v19 = ImageBase;
    v20 = ImageBase + v17->UnwindInfoAddress;
    v106 = 0LL;
    v21 = *(_BYTE *)v20 & 7;
    if ( v21 < 2 )
    {
      v22 = 0;
      v23 = (unsigned __int8 *)(v20 + 2);
      v24 = (_BYTE *)v20;
      if ( !*(_BYTE *)(v20 + 2) )
      {
        while ( (*v24 & 0x20) != 0 )
        {
          v84 = *v23;
          if ( (v84 & 1) != 0 )
            v84 = (unsigned int)(v84 + 1);
          if ( (unsigned int)++v22 > 0x20 )
LABEL_196:
            RtlRaiseStatus(-1073741569);
          v24 = (_BYTE *)(ImageBase + *(unsigned int *)&v24[2 * v84 + 12]);
          v23 = v24 + 2;
          if ( v24[2] )
            goto LABEL_16;
        }
        v18 = 1LL;
      }
LABEL_16:
      v17 = v102;
    }
    v25 = *(unsigned __int8 *)(v20 + 3);
    if ( (v25 & 0xF) == 0 )
      goto LABEL_18;
    v57 = Rip - v17->BeginAddress - ImageBase;
    if ( v57 >= *(unsigned __int8 *)(v20 + 1) || (*(_BYTE *)v20 & 0x20) != 0 )
    {
      v58 = *(_BYTE *)(v20 + 3);
      v59 = (unsigned __int8)v25;
    }
    else
    {
      v93 = 0LL;
      if ( *(_BYTE *)(v20 + 2) )
      {
        do
        {
          v94 = *(unsigned __int16 *)(v20 + 2 * v93 + 4);
          if ( (BYTE1(v94) & 0xF) == 3 )
            break;
          v93 = (unsigned int)RtlpUnwindOpSlots(v94, v25) + (unsigned int)v93;
        }
        while ( (unsigned int)v93 < *(unsigned __int8 *)(v20 + 2) );
        v19 = ImageBase;
      }
      v95 = *(unsigned __int8 *)(v20 + 2 * v93 + 4);
      v3 = v105;
      if ( v57 < v95 )
      {
LABEL_18:
        v26 = v119;
        goto LABEL_19;
      }
      v59 = *(unsigned __int8 *)(v20 + 3);
      v58 = *(_BYTE *)(v20 + 3);
    }
    v26 = *(&v116 + (v58 & 0xF)) - (v59 & 0xFFFFFFF0);
LABEL_19:
    EstablisherFrame = v26;
    if ( (_DWORD)v18 )
      goto LABEL_32;
    if ( v21 >= 2 )
    {
      v73 = *(_BYTE *)(v20 + 2);
      if ( !v73 )
        goto LABEL_32;
      v74 = *(_WORD *)(v20 + 4);
      if ( (HIBYTE(v74) & 0xF) != 6 )
        goto LABEL_32;
      v45 = v102;
      v75 = Rip - v19;
      v76 = (unsigned __int8)v74;
      if ( (v74 & 0x1000) == 0 || (v77 = v102->EndAddress - (unsigned __int8)v74, v75 - v77 >= v76) )
      {
        v78 = 1;
        if ( v73 <= 1u )
          goto LABEL_32;
        while ( 1 )
        {
          v79 = *(_WORD *)(v20 + 2LL * v78 + 4);
          if ( (HIBYTE(v79) & 0xF) != 6 )
            goto LABEL_32;
          v80 = (unsigned __int8)v79 + (v79 >> 12 << 8);
          if ( !v80 )
            goto LABEL_32;
          v77 = v102->EndAddress - v80;
          if ( v75 - v77 < v76 )
            break;
          if ( ++v78 >= v73 )
            goto LABEL_32;
        }
      }
      v42 = ImageBase;
      RtlpUnwindEpilogue(ImageBase, v77, v75 - v77, (_DWORD)v102, (__int64)&v99, 0LL, 0LL, 0LL);
      goto LABEL_84;
    }
    v27 = *(_BYTE *)Rip;
    v28 = (char *)Rip;
    if ( *(_BYTE *)Rip == 72 )
    {
      v69 = *(_BYTE *)(Rip + 1);
      if ( v69 == -125 && *(_BYTE *)(Rip + 2) == 0xC4 )
      {
        v28 = (char *)(Rip + 4);
        goto LABEL_23;
      }
      if ( v69 == -127 && *(_BYTE *)(Rip + 2) == 0xC4 )
        goto LABEL_97;
    }
    if ( (v27 & 0xFE) == 0x48 && *(_BYTE *)(Rip + 1) == 0x8D )
    {
      v70 = *(_BYTE *)(Rip + 2) & 7;
      v18 = v70 | (8 * (v27 & 1u));
      if ( v70 | (8 * (v27 & 1)) )
      {
        if ( (_DWORD)v18 == (*(_BYTE *)(v20 + 3) & 0xF) )
        {
          v71 = *(_BYTE *)(Rip + 2) & 0xF8;
          if ( v71 == 96 )
          {
            v28 = (char *)(Rip + 4);
            goto LABEL_23;
          }
          if ( v71 != -96 )
            goto LABEL_23;
LABEL_97:
          v28 = (char *)(Rip + 7);
        }
      }
    }
LABEL_23:
    while ( 1 )
    {
      v29 = *v28;
      if ( (*v28 & 0xF8) != 0x58 )
        break;
      v60 = 1LL;
LABEL_132:
      v28 += v60;
    }
    v30 = v28 + 1;
    if ( (v29 & 0xF0) == 0x40 && (*v30 & 0xF8) == 0x58 )
    {
      v60 = 2LL;
      goto LABEL_132;
    }
    if ( v29 == -14 )
    {
      v29 = *v30;
      ++v28;
    }
    if ( (unsigned __int8)(v29 + 62) <= 1u )
    {
LABEL_77:
      v61 = (char *)Rip;
      if ( (*(_BYTE *)Rip & 0xF8) != 0x48 )
        goto LABEL_80;
      v62 = *(_BYTE *)(Rip + 1);
      switch ( v62 )
      {
        case -125:
          v61 = (char *)(Rip + 4);
          v119 += *(char *)(Rip + 3);
          goto LABEL_80;
        case -127:
          v119 += *(unsigned __int8 *)(Rip + 3) | (unsigned __int64)((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8);
          break;
        case -115:
          v96 = *(_BYTE *)(Rip + 2) & 0xF8;
          if ( v96 == 96 )
          {
            v61 = (char *)(Rip + 4);
            v119 = *(&v116 + v18);
            v119 += *(char *)(Rip + 3);
            goto LABEL_80;
          }
          if ( v96 != -96 )
          {
            while ( 1 )
            {
LABEL_80:
              v63 = *v61;
              if ( (*v61 & 0xF8) == 0x58 )
              {
                *(&v116 + (v63 & 7)) = *(_QWORD *)v119;
                v85 = 1LL;
              }
              else
              {
                if ( (v63 & 0xF0) != 0x40 || (v88 = v61[1], (v88 & 0xF8) != 0x58) )
                {
                  HistoryTable.Entry[2].ImageBase = *(_QWORD *)v119;
                  v119 += 8LL;
                  RtlpPopUserShadowStack((__int64)&v99);
                  v42 = ImageBase;
                  goto LABEL_83;
                }
                *(&v116 + (v88 & 7 | (8LL * (*v61 & 1)))) = *(_QWORD *)v119;
                v85 = 2LL;
              }
              v119 += 8LL;
              v61 += v85;
            }
          }
          v119 = *(&v116 + v18)
               + (*(unsigned __int8 *)(Rip + 3) | ((*(unsigned __int8 *)(Rip + 4) | (*(unsigned __int16 *)(Rip + 5) << 8)) << 8));
          break;
        default:
          goto LABEL_80;
      }
      v61 = (char *)(Rip + 7);
      goto LABEL_80;
    }
    if ( v29 == -13 )
    {
      v29 = -13;
      if ( v28[1] == -61 )
        goto LABEL_77;
LABEL_30:
      if ( v29 != -1 || (v29 = -1, v28[1] != 37) )
      {
        if ( (v29 & 0xF8) != 0x48 || v28[1] != -1 || (v28[2] & 0x38) != 0x20 )
          goto LABEL_32;
      }
      goto LABEL_77;
    }
    if ( ((v29 + 23) & 0xFD) != 0 )
      goto LABEL_30;
    if ( v29 == -21 )
      v64 = v28[1] + 2;
    else
      v64 = *(_DWORD *)(v28 + 1) + 5;
    v65 = v64;
    v66 = (__int64)v102;
    v67 = (unsigned __int64)&v28[v65 - v19];
    BeginAddress = v102->BeginAddress;
    if ( v67 < BeginAddress )
    {
LABEL_143:
      v87 = RtlpSameFunction(v66, v19, (void *)(v67 + v19));
      if ( v87 && v67 != *v87 )
        goto LABEL_32;
      goto LABEL_77;
    }
    if ( v67 >= v102->EndAddress )
    {
      v66 = (__int64)v102;
      goto LABEL_143;
    }
    if ( v67 == BeginAddress && (*(_BYTE *)v20 & 0x20) == 0 )
      goto LABEL_77;
LABEL_32:
    v31 = ImageBase;
    v32 = 0;
    v33 = v102;
    v34 = Rip - ImageBase;
    v103 = 0;
    while ( 1 )
    {
      v35 = 0;
      v36 = (_BYTE *)(v31 + v33->UnwindInfoAddress);
      v99 = 0;
      v37 = 0LL;
      v38 = v34 - v33->BeginAddress;
      v39 = v36[2];
      if ( v39 )
      {
        do
        {
          v40 = &v36[2 * v37];
          v41 = (unsigned __int8)v40[5] >> 4;
          if ( v38 < (unsigned __int8)v40[4] )
          {
            v37 = (unsigned int)RtlpUnwindOpSlots(*((unsigned __int16 *)v40 + 2), v40) + (unsigned int)v37;
          }
          else
          {
            if ( (v36[2 * v37 + 5] & 0xF) != 0 )
            {
              if ( (v36[2 * v37 + 5] & 0xF) != 4 )
              {
                switch ( v36[2 * v37 + 5] & 0xF )
                {
                  case 1:
                    v37 = (unsigned int)(v37 + 1);
                    v55 = *(unsigned __int16 *)&v36[2 * v37 + 4];
                    if ( (_DWORD)v41 )
                    {
                      v37 = (unsigned int)(v37 + 1);
                      v56 = (*(unsigned __int16 *)&v36[2 * v37 + 4] << 16) + v55;
                    }
                    else
                    {
                      v56 = 8 * v55;
                    }
                    v119 += v56;
                    goto LABEL_37;
                  case 2:
                    v119 += (unsigned int)(8 * v41 + 8);
                    goto LABEL_37;
                  case 3:
                    v119 = *(&v116 + (v36[3] & 0xF));
                    v119 -= v36[3] & 0xF0;
                    goto LABEL_37;
                  case 5:
                    v37 = (unsigned int)(v37 + 2);
                    *(&v116 + v41) = *(_QWORD *)(*(unsigned __int16 *)&v36[2 * (unsigned int)(v37 - 1) + 4]
                                               + v26
                                               + ((unsigned __int64)*(unsigned __int16 *)&v36[2 * v37 + 4] << 16));
                    goto LABEL_37;
                  case 6:
                    LODWORD(v37) = v37 + 1;
                    goto LABEL_37;
                  case 7:
                    LODWORD(v37) = v37 + 2;
                    goto LABEL_37;
                  case 8:
                    v37 = (unsigned int)(v37 + 1);
                    v81 = 2LL * *(unsigned __int16 *)&v36[2 * v37 + 4];
                    v82 = &v125[(unsigned int)v41];
                    *v82 = *(_QWORD *)(v26 + 16LL * *(unsigned __int16 *)&v36[2 * v37 + 4]);
                    v82[1] = *(_QWORD *)(v26 + 8 * v81 + 8);
                    goto LABEL_37;
                  case 9:
                    v37 = (unsigned int)(v37 + 2);
                    v97 = (_QWORD *)(v26
                                   + ((unsigned __int64)*(unsigned __int16 *)&v36[2 * v37 + 4] << 16)
                                   + *(unsigned __int16 *)&v36[2 * (unsigned int)(v37 - 1) + 4]);
                    v98 = &v125[(unsigned int)v41];
                    *v98 = *v97;
                    v98[1] = v97[1];
                    goto LABEL_37;
                  case 0xA:
                    v89 = (DWORD64 *)v119;
                    v99 = 1;
                    v90 = (ULONG64 *)(v119 + 24);
                    if ( (_DWORD)v41 )
                    {
                      v89 = (DWORD64 *)(v119 + 8);
                      v90 = (ULONG64 *)(v119 + 32);
                    }
                    HistoryTable.Entry[2].ImageBase = *v89;
                    v119 = *v90;
                    goto LABEL_37;
                  default:
                    goto LABEL_196;
                }
              }
              LODWORD(v37) = v37 + 1;
              *(&v116 + v41) = *(_QWORD *)(v26 + 8LL * *(unsigned __int16 *)&v36[2 * (unsigned int)v37 + 4]);
            }
            else
            {
              *(&v116 + v41) = *(_QWORD *)v119;
              v119 += 8LL;
            }
LABEL_37:
            v37 = (unsigned int)(v37 + 1);
          }
          v39 = v36[2];
        }
        while ( (unsigned int)v37 < v39 );
        v35 = v99;
        v32 = v103;
      }
      if ( (*v36 & 0x20) == 0 )
        break;
      v83 = v39;
      if ( (v39 & 1) != 0 )
        v83 = v39 + 1;
      v103 = ++v32;
      v33 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v36[2 * v83 + 4];
      if ( v32 > 0x20 )
        goto LABEL_196;
      v31 = ImageBase;
    }
    if ( !v35 )
    {
      HistoryTable.Entry[2].ImageBase = *(_QWORD *)v119;
      v119 += 8LL;
      if ( ((unsigned int)HandlerData & 0x100040) == 0x100040 )
      {
        ExtendedFeature2 = RtlLocateExtendedFeature2(&STACK[0x510], 11LL, 2147353560LL);
        if ( ExtendedFeature2 )
        {
          if ( (*(_BYTE *)ExtendedFeature2 & 1) != 0 )
            *(_QWORD *)(ExtendedFeature2 + 8) += 8LL;
        }
      }
    }
    v42 = ImageBase;
    Rip = (ULONG64)ContextEx;
    v43 = (_BYTE *)(ImageBase + v33->UnwindInfoAddress);
    v44 = (_DWORD)ContextEx - ImageBase - v33->BeginAddress;
    v3 = v105;
    if ( v44 < (unsigned __int8)v43[1] )
    {
LABEL_83:
      v45 = v102;
      goto LABEL_84;
    }
    v45 = v102;
    if ( (*v43 & 8) == 0 )
    {
LABEL_84:
      v48 = v106;
      goto LABEL_48;
    }
    v46 = (unsigned __int8)v43[2];
    v47 = v46 + 1;
    if ( (v46 & 1) == 0 )
      v47 = (unsigned __int8)v43[2];
    v48 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)&v43[2 * v47 + 4]);
    HandlerData = &v43[2 * (v47 + 2) + 4];
LABEL_48:
    if ( (v26 & 7) != 0 || v26 < v112 || v26 >= v113 )
    {
      v4 = v101;
      goto LABEL_200;
    }
    v4 = v101;
    if ( !v48 )
      goto LABEL_60;
    v49 = v110;
    v50 = 0;
    while ( 1 )
    {
      v51 = HandlerData;
      FunctionEntry = v45;
      v52 = 0LL;
      v3->ExceptionFlags = v4;
      ControlPc = Rip;
      v116 = v42;
      v118 = v26;
      v119 = (ULONG64)&v99;
      v120 = v48;
      v121 = v51;
      v122 = v49;
      v123 = v50;
      if ( v100 )
        v52 = RtlpLogExceptionHandler(v3, &v99, Rip, v48);
      v53 = RtlpExecuteHandlerForException(v3, v26, v114, &ControlPc);
      if ( v52 )
        *(_DWORD *)(v52 + 1396) = v53;
      v54 = v109;
      v4 |= v3->ExceptionFlags & 1;
      v101 = v4;
      if ( v109 == v26 )
      {
        v4 &= ~0x10u;
        v54 = 0LL;
        v101 = v4;
        v109 = 0LL;
      }
      if ( v53 == 1 )
        goto LABEL_60;
      if ( !v53 )
      {
        if ( (v4 & 1) != 0 )
          RtlRaiseStatus(-1073741787);
        goto LABEL_155;
      }
      v86 = v53 - 2;
      if ( !v86 )
        break;
      if ( v86 != 1 )
        RtlRaiseStatus(-1073741786);
      v42 = v116;
      Rip = ControlPc;
      v45 = FunctionEntry;
      ImageBase = v116;
      RtlpCopyContext(&v99, v119);
      v48 = RtlVirtualUnwind(1u, v42, Rip, v45, (PCONTEXT)&v99, &HandlerData, &EstablisherFrame, 0LL);
      if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
      {
        if ( v48 != v120 || (v26 = EstablisherFrame, EstablisherFrame != v118) || HandlerData != v121 )
          __fastfail(0x27u);
      }
      else
      {
        v26 = v118;
        v48 = v120;
        EstablisherFrame = v118;
        HandlerData = v121;
      }
      v49 = v122;
      v50 = v123;
      v110 = v122;
    }
    v4 |= 0x10u;
    v101 = v4;
    if ( v118 > v54 )
      v109 = v118;
LABEL_60:
    Rip = HistoryTable.Entry[2].ImageBase;
    ContextEx = (PCONTEXT_EX)HistoryTable.Entry[2].ImageBase;
    if ( (v119 & 7) == 0 && v119 >= v112 && v119 < v113 )
    {
      p_HistoryTable = v110;
      continue;
    }
    break;
  }
LABEL_201:
  v91 = 0;
  v3->ExceptionFlags = v4;
LABEL_156:
  RtlpCallVectoredHandlers(v3, v114, 1LL);
  return v91;
}
