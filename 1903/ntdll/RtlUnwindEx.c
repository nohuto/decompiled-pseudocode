/*
 * XREFs of RtlUnwindEx @ 0x18001D490
 * Callers:
 *     RtlUnwind @ 0x18001AD60 (RtlUnwind.c)
 *     __C_specific_handler @ 0x18008CC40 (__C_specific_handler.c)
 *     sub_1800A03B0 @ 0x1800A03B0 (sub_1800A03B0.c)
 *     sub_1800A31A0 @ 0x1800A31A0 (sub_1800A31A0.c)
 * Callees:
 *     sub_18000108C @ 0x18000108C (sub_18000108C.c)
 *     RtlVirtualUnwind @ 0x18001CC50 (RtlVirtualUnwind.c)
 *     sub_18001E080 @ 0x18001E080 (sub_18001E080.c)
 *     RtlLookupFunctionEntry @ 0x18001E290 (RtlLookupFunctionEntry.c)
 *     sub_18001EA30 @ 0x18001EA30 (sub_18001EA30.c)
 *     RtlInitializeExtendedContext2 @ 0x18001EA60 (RtlInitializeExtendedContext2.c)
 *     sub_18001EC04 @ 0x18001EC04 (sub_18001EC04.c)
 *     RtlGetExtendedContextLength2 @ 0x18001ECD0 (RtlGetExtendedContextLength2.c)
 *     sub_18001EE1C @ 0x18001EE1C (sub_18001EE1C.c)
 *     RtlRestoreContext @ 0x18001EE50 (RtlRestoreContext.c)
 *     RtlLocateExtendedFeature2 @ 0x180073EF0 (RtlLocateExtendedFeature2.c)
 *     sub_18008296C @ 0x18008296C (sub_18008296C.c)
 *     sub_180085AF0 @ 0x180085AF0 (sub_180085AF0.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x18009F2D0 (ZwRaiseException.c)
 *     sub_1800A0870 @ 0x1800A0870 (sub_1800A0870.c)
 *     nullsub_2 @ 0x1800A0E60 (nullsub_2.c)
 *     __chkstk @ 0x1800A1730 (__chkstk.c)
 *     sub_1800A18C0 @ 0x1800A18C0 (sub_1800A18C0.c)
 *     sub_1800FB4F8 @ 0x1800FB4F8 (sub_1800FB4F8.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
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
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  void *v13; // rsp
  PCONTEXT v14; // r13
  PCONTEXT v15; // r12
  struct _UNWIND_HISTORY_TABLE *v16; // rax
  unsigned __int64 v17; // rdi
  _CONTEXT_EX *v18; // r15
  ULONG64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r8
  PRUNTIME_FUNCTION v22; // rbx
  unsigned __int64 v23; // r10
  int v24; // r14d
  unsigned __int64 v25; // rdi
  unsigned int v26; // ebx
  int v27; // r8d
  unsigned __int8 *v28; // rax
  _BYTE *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rsi
  char *v32; // r8
  char v33; // cl
  char v34; // cl
  char *v35; // rdx
  _DWORD *p_BeginAddress; // r14
  ULONG v37; // edx
  char v38; // r8
  _BYTE *v39; // rdi
  __int64 v40; // rbx
  unsigned int v41; // esi
  unsigned __int8 v42; // cl
  _BYTE *v43; // rdx
  __int64 v44; // r9
  DWORD64 *v45; // rcx
  _BYTE *v46; // r8
  int v47; // ecx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v48; // rbx
  int v49; // ecx
  int v50; // eax
  unsigned __int64 v51; // rax
  unsigned __int8 *v52; // r8
  char v53; // al
  __int64 v54; // rdx
  DWORD64 *v55; // rcx
  unsigned __int64 v56; // rcx
  int v57; // edi
  DWORD v58; // ecx
  struct _EXCEPTION_RECORD *v59; // r11
  int v60; // edx
  char v61; // bl
  int v62; // edx
  struct _CONTEXT *v63; // rax
  ULONG v64; // et0
  bool v65; // zf
  int v66; // edx
  unsigned int v67; // edx
  char v68; // al
  __int64 v69; // rax
  int v70; // eax
  char v71; // dl
  unsigned int v72; // esi
  char v73; // cl
  int v74; // eax
  DWORD64 v75; // rcx
  struct _CONTEXT *v76; // rax
  struct _EXCEPTION_RECORD *v77; // r14
  DWORD64 *p_Rip; // rcx
  unsigned int v79; // eax
  __int64 ExtendedFeature2; // rax
  int v81; // eax
  __int64 v82; // rbx
  __int64 v83; // rax
  unsigned __int64 v84; // rbx
  unsigned __int64 BeginAddress; // rcx
  __int64 v86; // rdx
  M128A *v87; // rcx
  __int64 v88; // rax
  unsigned __int8 v89; // r9
  __int16 v90; // dx
  int v91; // r8d
  unsigned int v92; // r11d
  int v93; // edx
  unsigned int v94; // r10d
  unsigned __int16 v95; // dx
  int v96; // ecx
  unsigned __int8 v97; // r9
  __int64 v98; // r9
  ULONG64 v99; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v100; // rdi
  struct _CONTEXT *v101; // r15
  PEXCEPTION_ROUTINE v102; // rax
  _DWORD *v103; // rax
  DWORD64 *v104; // rax
  DWORD64 *v105; // rcx
  __int64 v106; // r15
  __int64 v107; // rcx
  char v108; // al
  DWORD64 v109; // rcx
  ULONGLONG *v110; // r8
  M128A *v111; // rcx
  bool v112; // bl
  DWORD64 *Rsp; // rcx
  _BYTE v114[4]; // [rsp+40h] [rbp+0h] BYREF
  int v115; // [rsp+44h] [rbp+4h]
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  ULONG ContextLength; // [rsp+50h] [rbp+10h] BYREF
  PRUNTIME_FUNCTION v118; // [rsp+58h] [rbp+18h]
  char *v119; // [rsp+60h] [rbp+20h]
  PEXCEPTION_ROUTINE v120; // [rsp+68h] [rbp+28h]
  PUNWIND_HISTORY_TABLE v121; // [rsp+70h] [rbp+30h]
  PVOID HandlerData; // [rsp+78h] [rbp+38h] BYREF
  struct _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+80h] [rbp+40h]
  PCONTEXT_EX ContextEx; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int64 v125; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v126; // [rsp+98h] [rbp+58h] BYREF
  PCONTEXT v127; // [rsp+A0h] [rbp+60h]
  PVOID v128; // [rsp+A8h] [rbp+68h]
  PVOID v129; // [rsp+B0h] [rbp+70h]
  ULONG64 ControlPc; // [rsp+C0h] [rbp+80h] BYREF
  ULONG64 v131; // [rsp+C8h] [rbp+88h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+D0h] [rbp+90h]
  _CONTEXT_EX *v133; // [rsp+D8h] [rbp+98h]
  PVOID v134; // [rsp+E0h] [rbp+A0h]
  PCONTEXT v135; // [rsp+E8h] [rbp+A8h]
  EXCEPTION_DISPOSITION (__cdecl *v136)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+F0h] [rbp+B0h]
  PVOID v137; // [rsp+F8h] [rbp+B8h]
  struct _UNWIND_HISTORY_TABLE *v138; // [rsp+100h] [rbp+C0h]
  int v139; // [rsp+108h] [rbp+C8h]
  _CONTEXT_EX *v140; // [rsp+110h] [rbp+D0h]
  PCONTEXT v141; // [rsp+118h] [rbp+D8h]
  int v142; // [rsp+120h] [rbp+E0h] BYREF
  __int64 v143; // [rsp+128h] [rbp+E8h]
  DWORD64 Rip; // [rsp+130h] [rbp+F0h]
  int v145; // [rsp+138h] [rbp+F8h]

  v6 = (_CONTEXT_EX *)TargetFrame;
  v129 = TargetIp;
  v140 = (_CONTEXT_EX *)TargetFrame;
  v141 = ContextRecord;
  v121 = HistoryTable;
  v128 = ReturnValue;
  ExceptionRecorda = ExceptionRecord;
  if ( !(unsigned __int8)sub_18001EE1C(&v126, &v125) )
    goto LABEL_205;
  sub_18001EC04(ContextRecord);
  v8 = 0LL;
  v9 = 1048587;
  if ( (MEMORY[0x7FFE0708] & 0x800) != 0 )
  {
    v9 = 1048651;
    v8 = 2048LL;
  }
  RtlGetExtendedContextLength2(v9, &ContextLength, v8);
  v10 = ContextLength + 15LL;
  if ( v10 <= ContextLength )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = alloca(v11);
  v13 = alloca(v11);
  v14 = (PCONTEXT)v114;
  v127 = (PCONTEXT)v114;
  RtlInitializeExtendedContext2((PCONTEXT)v114, v9, &ContextEx, v8);
  v15 = ContextRecord;
  sub_1800A0870(ContextRecord);
  v16 = v121;
  if ( v121 )
    v121->Search = 1;
  if ( !ExceptionRecord )
  {
    Rip = ContextRecord->Rip;
    v16 = v121;
    ExceptionRecorda = (struct _EXCEPTION_RECORD *)&v142;
    v142 = -1073741785;
    v143 = 0LL;
    v145 = 0;
  }
  v115 = 2;
  if ( !v6 )
    v115 = 6;
  v17 = v125;
  v18 = 0LL;
  while ( 2 )
  {
    v19 = v15->Rip;
    v119 = (char *)v19;
    v118 = RtlLookupFunctionEntry(v19, &ImageBase, v16);
    v22 = v118;
    if ( !v118 )
    {
      Rsp = (DWORD64 *)v15->Rsp;
      v15->Rip = *Rsp;
      v15->Rsp = (DWORD64)(Rsp + 1);
      sub_18001EA30(v15, v20, v21);
      goto LABEL_77;
    }
    sub_18001E080(v14, v15);
    v23 = ImageBase;
    v24 = 0;
    v25 = ImageBase + v22->UnwindInfoAddress;
    v120 = 0LL;
    v26 = *(_BYTE *)v25 & 7;
    if ( v26 < 2 )
    {
      v27 = 0;
      v28 = (unsigned __int8 *)(v25 + 2);
      v29 = (_BYTE *)v25;
      if ( !*(_BYTE *)(v25 + 2) )
      {
        while ( (*v29 & 0x20) != 0 )
        {
          v98 = *v28;
          if ( (v98 & 1) != 0 )
            v98 = (unsigned int)(v98 + 1);
          if ( (unsigned int)++v27 > 0x20 )
            goto LABEL_204;
          v29 = (_BYTE *)(ImageBase + *(unsigned int *)&v29[2 * v98 + 12]);
          v28 = v29 + 2;
          if ( v29[2] )
            goto LABEL_16;
        }
        v24 = 1;
      }
    }
LABEL_16:
    v30 = *(unsigned __int8 *)(v25 + 3);
    if ( (v30 & 0xF) == 0 )
      goto LABEL_17;
    v72 = (_DWORD)v119 - v118->BeginAddress - ImageBase;
    if ( v72 >= *(unsigned __int8 *)(v25 + 1) || (*(_BYTE *)v25 & 0x20) != 0 )
    {
      v73 = *(_BYTE *)(v25 + 3);
      v74 = (unsigned __int8)v30;
    }
    else
    {
      v106 = 0LL;
      if ( *(_BYTE *)(v25 + 2) )
      {
        do
        {
          v107 = *(unsigned __int16 *)(v25 + 2 * v106 + 4);
          if ( (BYTE1(v107) & 0xF) == 3 )
            break;
          v106 = (unsigned int)sub_18008296C(v107, v30) + (unsigned int)v106;
        }
        while ( (unsigned int)v106 < *(unsigned __int8 *)(v25 + 2) );
        v23 = ImageBase;
      }
      if ( v72 < *(unsigned __int8 *)(v25 + 2 * v106 + 4) )
      {
LABEL_17:
        v18 = (_CONTEXT_EX *)v14->Rsp;
        goto LABEL_18;
      }
      v74 = *(unsigned __int8 *)(v25 + 3);
      v73 = *(_BYTE *)(v25 + 3);
    }
    v18 = (_CONTEXT_EX *)(*(&v14->Rax + (v73 & 0xF)) - (v74 & 0xFFFFFFF0));
LABEL_18:
    ContextEx = v18;
    if ( v24 )
      goto LABEL_31;
    if ( v26 >= 2 )
    {
      v89 = *(_BYTE *)(v25 + 2);
      if ( !v89 )
        goto LABEL_31;
      v90 = *(_WORD *)(v25 + 4);
      if ( (HIBYTE(v90) & 0xF) != 6 )
        goto LABEL_31;
      v19 = (ULONG64)v119;
      v48 = v118;
      v91 = (_DWORD)v119 - v23;
      v92 = (unsigned __int8)v90;
      if ( (v90 & 0x1000) == 0 || (v93 = v118->EndAddress - (unsigned __int8)v90, v91 - v93 >= v92) )
      {
        v94 = 1;
        if ( v89 <= 1u )
          goto LABEL_139;
        while ( 1 )
        {
          v95 = *(_WORD *)(v25 + 2LL * v94 + 4);
          if ( (HIBYTE(v95) & 0xF) != 6 )
            goto LABEL_139;
          v96 = (unsigned __int8)v95 + (v95 >> 12 << 8);
          if ( !v96 )
            goto LABEL_139;
          v93 = v118->EndAddress - v96;
          if ( v91 - v93 < v92 )
            break;
          if ( ++v94 >= v89 )
            goto LABEL_139;
        }
        LODWORD(v23) = ImageBase;
      }
      sub_1800FB4F8(v23, v93, v91 - v93, (_DWORD)v118, (__int64)v14, 0LL, 0LL, 0LL);
      v23 = ImageBase;
      goto LABEL_56;
    }
    v19 = (ULONG64)v119;
    v31 = 0LL;
    v32 = v119;
    v33 = *v119;
    if ( *v119 == 72 )
    {
      v68 = v119[1];
      if ( v68 == -125 && v119[2] == -60 )
      {
        v32 = v119 + 4;
        goto LABEL_22;
      }
      if ( v68 == -127 && v119[2] == -60 )
        goto LABEL_90;
    }
    if ( (v33 & 0xFE) == 0x48 && v119[1] == -115 )
    {
      v70 = v119[2] & 7;
      v31 = v70 | (8 * (v33 & 1u));
      if ( v70 | (8 * (v33 & 1)) )
      {
        if ( (_DWORD)v31 == (*(_BYTE *)(v25 + 3) & 0xF) )
        {
          v71 = v119[2] & 0xF8;
          if ( v71 == 96 )
          {
            v32 = v119 + 4;
            goto LABEL_22;
          }
          if ( v71 != -96 )
            goto LABEL_22;
LABEL_90:
          v32 = v119 + 7;
        }
      }
    }
LABEL_22:
    while ( 1 )
    {
      v34 = *v32;
      if ( (*v32 & 0xF8) != 0x58 )
        break;
      v69 = 1LL;
LABEL_128:
      v32 += v69;
    }
    v35 = v32 + 1;
    if ( (v34 & 0xF0) == 0x40 && (*v35 & 0xF8) == 0x58 )
    {
      v69 = 2LL;
      goto LABEL_128;
    }
    if ( v34 == -14 )
    {
      v34 = *v35;
      ++v32;
    }
    if ( (unsigned __int8)(v34 + 62) <= 1u )
    {
LABEL_49:
      v52 = (unsigned __int8 *)v19;
      if ( (*(_BYTE *)v19 & 0xF8) != 0x48 )
        goto LABEL_52;
      v53 = *(_BYTE *)(v19 + 1);
      switch ( v53 )
      {
        case -125:
          v52 = (unsigned __int8 *)(v19 + 4);
          v14->Rsp += *(char *)(v19 + 3);
          goto LABEL_52;
        case -127:
          v14->Rsp += *(unsigned __int8 *)(v19 + 3) | (unsigned __int64)((*(unsigned __int8 *)(v19 + 4) | (*(unsigned __int16 *)(v19 + 5) << 8)) << 8);
          break;
        case -115:
          v108 = *(_BYTE *)(v19 + 2) & 0xF8;
          if ( v108 == 96 )
          {
            v109 = *(&v14->Rax + v31);
            v52 = (unsigned __int8 *)(v19 + 4);
            v14->Rsp = v109;
            v14->Rsp = v109 + *(char *)(v19 + 3);
            goto LABEL_52;
          }
          if ( v108 != -96 )
          {
            while ( 1 )
            {
LABEL_52:
              v54 = *v52;
              if ( (v54 & 0xF8) == 0x58 )
              {
                *(&v14->Rax + (v54 & 7)) = *(_QWORD *)v14->Rsp;
                v88 = 1LL;
              }
              else
              {
                if ( (v54 & 0xF0) != 0x40 || (v97 = v52[1], (v97 & 0xF8) != 0x58) )
                {
                  v55 = (DWORD64 *)v14->Rsp;
                  v14->Rip = *v55;
                  v14->Rsp = (DWORD64)(v55 + 1);
                  sub_18001EA30(v14, v54, v52);
                  v23 = ImageBase;
                  goto LABEL_55;
                }
                *(&v14->Rax + (v97 & 7 | (8 * (v54 & 1)))) = *(_QWORD *)v14->Rsp;
                v88 = 2LL;
              }
              v14->Rsp += 8LL;
              v52 += v88;
            }
          }
          v14->Rsp = *(&v14->Rax + v31)
                   + (*(unsigned __int8 *)(v19 + 3) | ((*(unsigned __int8 *)(v19 + 4) | (*(unsigned __int16 *)(v19 + 5) << 8)) << 8));
          break;
        default:
          goto LABEL_52;
      }
      v52 = (unsigned __int8 *)(v19 + 7);
      goto LABEL_52;
    }
    if ( v34 == -13 )
    {
      v34 = -13;
      if ( v32[1] == -61 )
        goto LABEL_49;
LABEL_29:
      if ( v34 != -1 || (v34 = -1, v32[1] != 37) )
      {
        if ( (v34 & 0xF8) != 0x48 || v32[1] != -1 || (v32[2] & 0x38) != 0x20 )
          goto LABEL_31;
      }
      goto LABEL_49;
    }
    if ( ((v34 + 23) & 0xFD) != 0 )
      goto LABEL_29;
    if ( v34 == -21 )
      v81 = v32[1] + 2;
    else
      v81 = *(_DWORD *)(v32 + 1) + 5;
    v82 = v81;
    v83 = (__int64)v118;
    v84 = (unsigned __int64)&v32[v82 - v23];
    BeginAddress = v118->BeginAddress;
    if ( v84 < BeginAddress )
    {
LABEL_156:
      v103 = sub_18000108C(v83, v23, (void *)(v84 + v23));
      if ( !v103 || v84 == *v103 )
        goto LABEL_49;
LABEL_139:
      v23 = ImageBase;
      goto LABEL_31;
    }
    if ( v84 >= v118->EndAddress )
    {
      v83 = (__int64)v118;
      goto LABEL_156;
    }
    if ( v84 == BeginAddress && (*(_BYTE *)v25 & 0x20) == 0 )
      goto LABEL_49;
LABEL_31:
    p_BeginAddress = &v118->BeginAddress;
    v37 = 0;
    ContextLength = 0;
    while ( 1 )
    {
      v38 = 0;
      v39 = (_BYTE *)(v23 + (unsigned int)p_BeginAddress[2]);
      v40 = 0LL;
      v41 = (_DWORD)v119 - *p_BeginAddress - v23;
      v114[0] = 0;
      v42 = v39[2];
      if ( v42 )
      {
        do
        {
          v43 = &v39[2 * v40];
          v44 = (unsigned __int8)v43[5] >> 4;
          if ( v41 < (unsigned __int8)v43[4] )
          {
            v40 = (unsigned int)sub_18008296C(*((unsigned __int16 *)v43 + 2), v43) + (unsigned int)v40;
          }
          else
          {
            if ( (v39[2 * v40 + 5] & 0xF) != 0 )
            {
              switch ( v39[2 * v40 + 5] & 0xF )
              {
                case 1:
                  v40 = (unsigned int)(v40 + 1);
                  v66 = *(unsigned __int16 *)&v39[2 * v40 + 4];
                  if ( (_DWORD)v44 )
                  {
                    v40 = (unsigned int)(v40 + 1);
                    v67 = (*(unsigned __int16 *)&v39[2 * v40 + 4] << 16) + v66;
                  }
                  else
                  {
                    v67 = 8 * v66;
                  }
                  v14->Rsp += v67;
                  goto LABEL_36;
                case 2:
                  v14->Rsp += (unsigned int)(8 * v44 + 8);
                  goto LABEL_36;
                case 3:
                  v75 = *(&v14->Rax + (v39[3] & 0xF));
                  v14->Rsp = v75;
                  v14->Rsp = v75 - (v39[3] & 0xF0);
                  goto LABEL_36;
                case 4:
                  LODWORD(v40) = v40 + 1;
                  *(&v14->Rax + v44) = *((_QWORD *)&v18->All + *(unsigned __int16 *)&v39[2 * (unsigned int)v40 + 4]);
                  goto LABEL_36;
                case 5:
                  v40 = (unsigned int)(v40 + 2);
                  *(&v14->Rax + v44) = *(DWORD64 *)((char *)&v18[2048
                                                               * (unsigned __int64)*(unsigned __int16 *)&v39[2 * v40 + 4]].All
                                                  + *(unsigned __int16 *)&v39[2 * (unsigned int)(v40 - 1) + 4]);
                  goto LABEL_36;
                case 6:
                  LODWORD(v40) = v40 + 1;
                  goto LABEL_36;
                case 7:
                  LODWORD(v40) = v40 + 2;
                  goto LABEL_36;
                case 8:
                  v40 = (unsigned int)(v40 + 1);
                  v86 = 2LL * *(unsigned __int16 *)&v39[2 * v40 + 4];
                  v87 = &v14->FltSave.XmmRegisters[(unsigned int)v44];
                  v87->Low = *((_QWORD *)&v18->All + 2 * *(unsigned __int16 *)&v39[2 * v40 + 4]);
                  v87->High = *((_QWORD *)&v18->Legacy + v86);
                  goto LABEL_36;
                case 9:
                  v40 = (unsigned int)(v40 + 2);
                  v110 = (ULONGLONG *)((char *)&v18[2048 * (unsigned __int64)*(unsigned __int16 *)&v39[2 * v40 + 4]]
                                     + *(unsigned __int16 *)&v39[2 * (unsigned int)(v40 - 1) + 4]);
                  v111 = &v14->FltSave.XmmRegisters[(unsigned int)v44];
                  v111->Low = *v110;
                  v111->High = v110[1];
                  goto LABEL_36;
                case 0xA:
                  v104 = (DWORD64 *)v14->Rsp;
                  v114[0] = 1;
                  v105 = v104 + 3;
                  if ( (_DWORD)v44 )
                  {
                    ++v104;
                    ++v105;
                  }
                  v14->Rip = *v104;
                  v14->Rsp = *v105;
                  goto LABEL_36;
                default:
                  goto LABEL_204;
              }
            }
            *(&v14->Rax + v44) = *(_QWORD *)v14->Rsp;
            v14->Rsp += 8LL;
LABEL_36:
            v40 = (unsigned int)(v40 + 1);
          }
          v42 = v39[2];
        }
        while ( (unsigned int)v40 < v42 );
        v38 = v114[0];
        v37 = ContextLength;
        v23 = ImageBase;
      }
      if ( (*v39 & 0x20) == 0 )
        break;
      v79 = v42;
      if ( (v42 & 1) != 0 )
        v79 = v42 + 1;
      ContextLength = ++v37;
      p_BeginAddress = &v39[2 * v79 + 4];
      if ( v37 > 0x20 )
        goto LABEL_204;
    }
    if ( !v38 )
    {
      v45 = (DWORD64 *)v14->Rsp;
      v14->Rip = *v45;
      v14->Rsp = (DWORD64)(v45 + 1);
      if ( (v14->ContextFlags & 0x100040) == 0x100040 )
      {
        ExtendedFeature2 = RtlLocateExtendedFeature2(&v14[1], 11LL, 2147353560LL);
        v23 = ImageBase;
        if ( ExtendedFeature2 )
        {
          if ( (*(_BYTE *)ExtendedFeature2 & 1) != 0 )
            *(_QWORD *)(ExtendedFeature2 + 8) += 8LL;
        }
      }
    }
    v46 = (_BYTE *)(v23 + (unsigned int)p_BeginAddress[2]);
    v47 = (_DWORD)v119 - *p_BeginAddress;
    v19 = (ULONG64)v119;
    if ( v47 - (int)v23 < (unsigned int)(unsigned __int8)v46[1] )
    {
LABEL_55:
      v48 = v118;
      goto LABEL_56;
    }
    v48 = v118;
    if ( (*v46 & 0x10) == 0 )
    {
LABEL_56:
      v51 = (unsigned __int64)v120;
      goto LABEL_57;
    }
    v49 = (unsigned __int8)v46[2];
    v50 = v49 + 1;
    if ( (v49 & 1) == 0 )
      v50 = (unsigned __int8)v46[2];
    HandlerData = &v46[2 * (v50 + 2) + 4];
    v51 = v23 + *(unsigned int *)&v46[2 * v50 + 4];
    v120 = (PEXCEPTION_ROUTINE)v51;
LABEL_57:
    if ( ((unsigned __int8)v18 & 7) != 0
      || (v56 = v126, (unsigned __int64)v18 < v126)
      || (v17 = v125, (unsigned __int64)v18 >= v125)
      || (v6 = v140) != 0LL && v140 < v18 )
    {
LABEL_205:
      RtlRaiseStatus(-1073741784);
    }
    if ( v51 )
    {
      v57 = 0;
      v134 = v129;
      do
      {
        v58 = v115;
        if ( v6 == v18 )
        {
          v58 = v115 | 0x20;
          v115 |= 0x20u;
        }
        v59 = ExceptionRecorda;
        ExceptionRecorda->ExceptionFlags = v58;
        v15->Rax = (DWORD64)v128;
        v136 = (EXCEPTION_DISPOSITION (__cdecl *)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID))v51;
        v137 = HandlerData;
        v138 = v121;
        FunctionEntry = v48;
        ControlPc = v19;
        v131 = v23;
        v133 = v18;
        v135 = v15;
        v139 = v57;
        v112 = (v15->ContextFlags & 0x100040) == 1048640;
        v60 = sub_1800A18C0(v59, v18, v15, &ControlPc);
        if ( !v112 && (v15->ContextFlags & 0x100040) == 0x100040 )
          v15->ContextFlags &= ~0x40u;
        v61 = v115 & 0x9F;
        v115 &= 0xFFFFFF9F;
        v62 = v60 - 1;
        if ( v62 )
        {
          if ( v62 != 2 )
            RtlRaiseStatus(-1073741786);
          v99 = v131;
          v100 = FunctionEntry;
          v101 = v141;
          v19 = ControlPc;
          ImageBase = v131;
          v118 = FunctionEntry;
          sub_18001E080(v141, v135);
          v14 = v127;
          v15 = v101;
          sub_18001E080(v127, v101);
          v102 = RtlVirtualUnwind(2u, v99, v19, v100, v14, &HandlerData, (PULONG64)&ContextEx, 0LL);
          v120 = v102;
          if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
          {
            if ( v102 != v136 || (v18 = ContextEx, ContextEx != v133) || HandlerData != v137 )
              __fastfail(0x27u);
          }
          else
          {
            v18 = v133;
            v120 = v136;
            HandlerData = v137;
            ContextEx = v133;
          }
          v61 = v115 | 0x40;
          v57 = v139;
          v115 |= 0x40u;
          v121 = v138;
        }
        else
        {
          if ( v18 != v6 )
          {
            v63 = v15;
            v15 = v14;
            v14 = v63;
          }
          v64 = _mm_getcsr();
          ContextLength = v64;
          v15->MxCsr = v64;
          v15->FltSave.MxCsr = v64;
          if ( v15->FltSave.ControlWord != 639 || (v15->FltSave.StatusWord & 0xB880) != 0 || v15->FltSave.TagWord )
            sub_180085AF0(v15);
        }
        v23 = ImageBase;
        v65 = (v61 & 0x40) == 0;
        v48 = v118;
        v51 = (unsigned __int64)v120;
      }
      while ( !v65 );
      v17 = v125;
LABEL_77:
      v56 = v126;
    }
    else if ( v18 != v140 )
    {
      v76 = v15;
      v15 = v14;
      v14 = v76;
    }
    if ( ((unsigned __int8)v18 & 7) != 0 || (unsigned __int64)v18 < v56 || (unsigned __int64)v18 >= v17 )
    {
      if ( v18 == v6 )
        break;
      if ( v19 != v15->Rip )
      {
        ZwRaiseException(ExceptionRecorda, v15, 0);
        return;
      }
LABEL_204:
      RtlRaiseStatus(-1073741569);
    }
    if ( v18 != v6 )
    {
      v16 = v121;
      continue;
    }
    break;
  }
  v77 = ExceptionRecorda;
  p_Rip = &v15->Rip;
  v15->Rax = (DWORD64)v128;
  if ( v77->ExceptionCode != -2147483607 )
    *p_Rip = (DWORD64)v129;
  nullsub_2(p_Rip);
  RtlRestoreContext(v15, v77);
}
