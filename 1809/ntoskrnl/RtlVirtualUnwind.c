/*
 * XREFs of RtlVirtualUnwind @ 0x1401377A0
 * Callers:
 *     RtlUnwindEx @ 0x14009DE70 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x1400A0E80 (RtlDispatchException.c)
 *     RtlRaiseException @ 0x1402EDA30 (RtlRaiseException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x14013A494 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x14013A64C (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x1401850C4 (RtlpSameFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, struct _CONTEXT *ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  PRUNTIME_FUNCTION v8; // r11
  EXCEPTION_DISPOSITION (__cdecl *v9)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // rbp
  DWORD64 v10; // rdi
  DWORD64 v11; // r10
  int v13; // r12d
  DWORD64 v14; // rsi
  char v15; // cl
  unsigned int v16; // r15d
  struct _CONTEXT *v17; // rbx
  unsigned __int64 Rsp; // rcx
  struct _RUNTIME_FUNCTION *v19; // r9
  unsigned __int64 v20; // r11
  int v21; // r13d
  DWORD64 v22; // rdx
  _BYTE *v23; // r14
  unsigned int v24; // r12d
  __int64 v25; // rsi
  char v26; // r10
  unsigned __int8 v27; // cl
  unsigned int v28; // ecx
  __int64 v29; // r9
  unsigned __int64 *v30; // rcx
  unsigned __int64 *v31; // rcx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned __int64 *v36; // rdx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  struct _M128A *v40; // rdx
  __int64 v41; // rcx
  int v42; // edx
  unsigned int v43; // edx
  unsigned int v44; // ecx
  _BYTE *v45; // r9
  int v46; // ecx
  int v47; // eax
  int v48; // r9d
  __int16 v49; // ax
  int v50; // r8d
  unsigned int v51; // r10d
  int v52; // ecx
  unsigned int i; // r9d
  __int16 v54; // ax
  int v55; // edx
  unsigned int v56; // ebx
  char v57; // al
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  unsigned int v60; // ecx
  unsigned __int64 v61; // rcx
  unsigned __int64 *v62; // r8
  unsigned __int64 *v63; // rdx
  __int64 v64; // rax
  unsigned __int8 *v65; // rax
  char v66; // r8
  char *v67; // rdx
  unsigned int v68; // r15d
  char v69; // cl
  char *v70; // r8
  unsigned int v71; // ecx
  __int64 v72; // rax
  unsigned int v73; // r14d
  __int64 v74; // rcx
  bool v75; // cf
  char v76; // al
  char v77; // cl
  __int64 v78; // rax
  char *j; // rdx
  char v80; // al
  int v81; // eax
  unsigned __int64 v82; // r14
  unsigned __int64 BeginAddress; // rcx
  _DWORD *v84; // rax
  char v85; // al
  unsigned __int64 v86; // rcx
  char v87; // r9
  unsigned __int64 *v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rax
  unsigned __int64 *v91; // r8
  __int64 v92; // rcx
  unsigned __int64 v93; // rax
  unsigned __int64 *v94; // rcx
  unsigned __int64 *v95; // r8
  struct _M128A *v96; // r8
  __int64 v97; // rcx
  int v98; // eax
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // [rsp+40h] [rbp-58h]
  EXCEPTION_DISPOSITION (__cdecl *v101)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+48h] [rbp-50h]
  DWORD v102; // [rsp+A0h] [rbp+8h]
  DWORD64 v103; // [rsp+A8h] [rbp+10h]
  char v104; // [rsp+B0h] [rbp+18h]
  PRUNTIME_FUNCTION v105; // [rsp+B8h] [rbp+20h]

  v105 = FunctionEntry;
  v103 = ImageBase;
  v8 = FunctionEntry;
  v9 = 0LL;
  v10 = ControlPc;
  v11 = ImageBase;
  v13 = 0;
  v14 = ImageBase + v8->UnwindData;
  if ( ControlPc <= 0x7FFFFFFEFFFFLL && (v14 & 3) != 0 )
    goto LABEL_204;
  v15 = *(_BYTE *)v14;
  v16 = *(_BYTE *)v14 & 7;
  if ( v16 < 2 )
  {
    v65 = (unsigned __int8 *)(v14 + 2);
    ImageBase += v8->UnwindData;
    ControlPc = 0LL;
    if ( *(_BYTE *)(v14 + 2) )
    {
LABEL_96:
      if ( (HandlerType & 0x80000000) != 0 )
        return v101;
    }
    else
    {
      while ( (v15 & 0x20) != 0 )
      {
        v71 = *v65;
        v72 = v71 + 1;
        if ( (v71 & 1) == 0 )
          v72 = v71;
        ControlPc = (unsigned int)(ControlPc + 1);
        if ( (unsigned int)ControlPc > 0x20 )
LABEL_200:
          RtlRaiseStatus(-1073741569);
        ImageBase = v11 + *(unsigned int *)(ImageBase + 2 * v72 + 12);
        if ( v10 <= 0x7FFFFFFEFFFFLL && (ImageBase & 3) != 0 )
          goto LABEL_204;
        v65 = (unsigned __int8 *)(ImageBase + 2);
        if ( *(_BYTE *)(ImageBase + 2) )
          goto LABEL_96;
        v15 = *(_BYTE *)ImageBase;
      }
      v13 = 1;
    }
  }
  v102 = HandlerType & 0x7FFFFFFF;
  if ( (*(_BYTE *)(v14 + 3) & 0xF) != 0 )
  {
    v56 = v10 - v8->BeginAddress - v11;
    if ( v56 >= *(unsigned __int8 *)(v14 + 1) || (*(_BYTE *)v14 & 0x20) != 0 )
    {
      v17 = ContextRecord;
      v57 = *(_BYTE *)(v14 + 3);
    }
    else
    {
      v73 = 0;
      if ( *(_BYTE *)(v14 + 2) )
      {
        do
        {
          v74 = *(unsigned __int16 *)(v14 + 2LL * v73 + 4);
          if ( (BYTE1(v74) & 0xF) == 3 )
            break;
          v73 += RtlpUnwindOpSlots(v74, ImageBase, ControlPc);
        }
        while ( v73 < *(unsigned __int8 *)(v14 + 2) );
        v8 = v105;
        v11 = v103;
      }
      v75 = v56 < *(unsigned __int8 *)(v14 + 2LL * v73 + 4);
      v17 = ContextRecord;
      if ( v75 )
        goto LABEL_5;
      v57 = *(_BYTE *)(v14 + 3);
    }
    v58 = *(&v17->Rax + (v57 & 0xF));
    *EstablisherFrame = v58;
    Rsp = v58 - (*(_BYTE *)(v14 + 3) & 0xF0);
    goto LABEL_6;
  }
  v17 = ContextRecord;
LABEL_5:
  Rsp = v17->Rsp;
LABEL_6:
  *EstablisherFrame = Rsp;
  if ( v13 )
    goto LABEL_7;
  v48 = 0;
  if ( v16 >= 2 )
  {
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_7;
    v49 = *(_WORD *)(v14 + 4);
    if ( (HIBYTE(v49) & 0xF) != 6 )
      goto LABEL_7;
    v50 = v10 - v103;
    v51 = (unsigned __int8)v49;
    if ( (v49 & 0x1000) != 0 )
    {
      v52 = v8->EndAddress - (unsigned __int8)v49;
      LOBYTE(v48) = v50 - v52 < (unsigned int)(unsigned __int8)v49;
    }
    else
    {
      v52 = 0;
    }
    if ( !v48 )
    {
      for ( i = 1; i < *(unsigned __int8 *)(v14 + 2); ++i )
      {
        v54 = *(_WORD *)(v14 + 2LL * i + 4);
        if ( (HIBYTE(v54) & 0xF) != 6 )
          break;
        v55 = (unsigned __int8)v54 + (HIBYTE(v54) >> 4 << 8);
        if ( !v55 )
          break;
        v52 = v8->EndAddress - v55;
        if ( v50 - v52 < v51 )
          goto LABEL_98;
      }
      goto LABEL_7;
    }
LABEL_98:
    RtlpUnwindEpilogue(v103, v10, v50 - v52, (_DWORD)v8, (__int64)v17, (__int64)ContextPointers, 0LL, 0LL);
    return v9;
  }
  v66 = *(_BYTE *)v10;
  v67 = (char *)v10;
  v68 = 0;
  if ( *(_BYTE *)v10 == 72 )
  {
    v76 = *(_BYTE *)(v10 + 1);
    if ( v76 == -125 && *(_BYTE *)(v10 + 2) == 0xC4 )
      goto LABEL_126;
    if ( v76 == -127 && *(_BYTE *)(v10 + 2) == 0xC4 )
      goto LABEL_119;
  }
  if ( (v66 & 0xFE) == 0x48 && *(_BYTE *)(v10 + 1) == 0x8D )
  {
    v68 = *(_BYTE *)(v10 + 2) & 7 | (8 * (v66 & 1));
    if ( v68 )
    {
      if ( v68 == (*(_BYTE *)(v14 + 3) & 0xF) )
      {
        v77 = *(_BYTE *)(v10 + 2) & 0xF8;
        if ( v77 != 96 )
        {
          if ( v77 != -96 )
            goto LABEL_85;
LABEL_119:
          v67 = (char *)(v10 + 7);
          goto LABEL_85;
        }
LABEL_126:
        v67 = (char *)(v10 + 4);
        goto LABEL_85;
      }
    }
  }
  while ( 1 )
  {
LABEL_85:
    v69 = *v67;
    if ( (*v67 & 0xF8) == 0x58 )
    {
      v78 = 1LL;
      goto LABEL_129;
    }
    v70 = v67 + 1;
    if ( (v69 & 0xF0) != 0x40 || (*v70 & 0xF8) != 0x58 )
      break;
    v78 = 2LL;
LABEL_129:
    v67 += v78;
  }
  if ( v69 == -14 )
  {
    v69 = *v70;
    ++v67;
  }
  if ( (unsigned __int8)(v69 + 62) <= 1u || v69 == -13 && (v69 = -13, v67[1] == -61) )
  {
LABEL_131:
    j = (char *)v10;
    if ( (*(_BYTE *)v10 & 0xF8) != 0x48 )
      goto LABEL_159;
    v80 = *(_BYTE *)(v10 + 1);
    switch ( v80 )
    {
      case -125:
        v17->Rsp += *(char *)(v10 + 3);
LABEL_155:
        j = (char *)(v10 + 4);
        goto LABEL_159;
      case -127:
        v17->Rsp += ((*(unsigned __int8 *)(v10 + 4) | (*(unsigned __int16 *)(v10 + 5) << 8)) << 8) | *(unsigned __int8 *)(v10 + 3);
        break;
      case -115:
        v85 = *(_BYTE *)(v10 + 2) & 0xF8;
        if ( v85 == 96 )
        {
          v86 = *(&v17->Rax + v68);
          v17->Rsp = v86;
          v17->Rsp = v86 + *(char *)(v10 + 3);
          goto LABEL_155;
        }
        if ( v85 != -96 )
          goto LABEL_159;
        v17->Rsp = *(&v17->Rax + v68)
                 + (*(unsigned __int8 *)(v10 + 3) | ((*(unsigned __int8 *)(v10 + 4) | (*(unsigned __int16 *)(v10 + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_159;
    }
    for ( j = (char *)(v10 + 7); ; j += v90 )
    {
LABEL_159:
      v87 = *j;
      if ( (*j & 0xF8) == 0x58 )
      {
        v88 = (unsigned __int64 *)v17->Rsp;
        if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v88 & 3) != 0 )
          goto LABEL_204;
        v89 = v87 & 7;
        *(&v17->Rax + v89) = *v88;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v89] = v88;
        v90 = 1LL;
      }
      else
      {
        if ( (v87 & 0xF0) != 0x40 || (j[1] & 0xF8) != 0x58 )
        {
          if ( v10 > 0x7FFFFFFEFFFFLL || (v93 = v17->Rsp, (v93 & 3) == 0) )
          {
            v94 = (unsigned __int64 *)v17->Rsp;
            v17->Rip = *v94;
            v17->Rsp = (unsigned __int64)(v94 + 1);
            return v9;
          }
LABEL_204:
          ExRaiseDatatypeMisalignment();
        }
        v91 = (unsigned __int64 *)v17->Rsp;
        if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v91 & 3) != 0 )
          goto LABEL_204;
        v92 = j[1] & 7 | (8LL * (v87 & 1));
        *(&v17->Rax + v92) = *v91;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v92] = v91;
        v90 = 2LL;
      }
      v17->Rsp += 8LL;
    }
  }
  if ( ((v69 + 23) & 0xFD) != 0 )
  {
    if ( v69 == -1 )
    {
      v69 = -1;
      if ( v67[1] == 37 )
        goto LABEL_131;
    }
    if ( (v69 & 0xF8) == 0x48 && v67[1] == -1 && (v67[2] & 0x38) == 0x20 )
      goto LABEL_131;
LABEL_7:
    v19 = v105;
  }
  else
  {
    if ( v69 == -21 )
      v81 = v67[1] + 2;
    else
      v81 = *(_DWORD *)(v67 + 1) + 5;
    v19 = v105;
    v82 = (unsigned __int64)&v67[v81 - v11];
    BeginAddress = v105->BeginAddress;
    if ( v82 < BeginAddress || v82 >= v105->EndAddress )
    {
      v84 = (_DWORD *)RtlpSameFunction(v105, v11, &v67[v81]);
      if ( !v84 || v82 == *v84 )
        goto LABEL_131;
      goto LABEL_7;
    }
    if ( v82 == BeginAddress && (*(_BYTE *)v14 & 0x20) == 0 )
      goto LABEL_131;
  }
  v20 = *EstablisherFrame;
  v21 = 0;
  v22 = v103;
  v100 = *EstablisherFrame;
  while ( 1 )
  {
    v23 = (_BYTE *)(v22 + v19->UnwindData);
    v24 = v10 - v19->BeginAddress - v22;
    v104 = 0;
    LODWORD(v25) = 0;
    v26 = 0;
    if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v23 & 3) != 0 )
      goto LABEL_204;
    v27 = v23[2];
    if ( v27 )
    {
      do
      {
        v28 = v23[2 * (unsigned int)v25 + 5] & 0xF;
        v29 = (unsigned __int8)v23[2 * (unsigned int)v25 + 5] >> 4;
        if ( v24 < (unsigned __int8)v23[2 * (unsigned int)v25 + 4] )
        {
          v98 = RtlpUnwindOpSlots(
                  *(unsigned __int16 *)&v23[2 * (unsigned int)v25 + 4],
                  (unsigned int)v25,
                  0x7FFFFFFF0000LL);
          v20 = v100;
          LODWORD(v25) = v98 + v25;
        }
        else
        {
          if ( v28 > 5 )
          {
            v37 = v28 - 6;
            if ( v37 )
            {
              v38 = v37 - 1;
              if ( v38 )
              {
                v39 = v38 - 1;
                if ( v39 )
                {
                  v60 = v39 - 1;
                  if ( v60 )
                  {
                    if ( v60 != 1 )
                      goto LABEL_200;
                    v104 = 1;
                    v61 = v17->Rsp;
                    v62 = (unsigned __int64 *)(v61 + 8);
                    v63 = (unsigned __int64 *)(v61 + ((_DWORD)v29 != 0 ? 32LL : 24LL));
                    if ( !(_DWORD)v29 )
                      v62 = (unsigned __int64 *)v17->Rsp;
                    if ( v10 <= 0x7FFFFFFEFFFFLL && (((unsigned __int8)v62 & 3) != 0 || ((unsigned __int8)v63 & 3) != 0) )
                      goto LABEL_204;
                    v17->Rip = *v62;
                    v17->Rsp = *v63;
                  }
                  else
                  {
                    v25 = (unsigned int)(v25 + 2);
                    v96 = (struct _M128A *)(v20
                                          + ((unsigned __int64)*(unsigned __int16 *)&v23[2 * v25 + 4] << 16)
                                          + *(unsigned __int16 *)&v23[2 * (unsigned int)(v25 - 1) + 4]);
                    if ( v10 <= 0x7FFFFFFEFFFFLL
                      && (((_BYTE)v20 + (unsigned __int8)*(_WORD *)&v23[2 * (unsigned int)(v25 - 1) + 4]) & 3) != 0 )
                    {
                      goto LABEL_204;
                    }
                    v97 = (unsigned int)v29;
                    v17->FltSave.XmmRegisters[v97].Low = v96->Low;
                    v17->FltSave.XmmRegisters[v97].High = v96->High;
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v29] = v96;
                  }
                }
                else
                {
                  v25 = (unsigned int)(v25 + 1);
                  v40 = (struct _M128A *)(v20 + 16LL * *(unsigned __int16 *)&v23[2 * v25 + 4]);
                  if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v40 & 3) != 0 )
                    goto LABEL_204;
                  v41 = (unsigned int)v29;
                  v17->FltSave.XmmRegisters[v41].Low = v40->Low;
                  v17->FltSave.XmmRegisters[v41].High = v40->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v29] = v40;
                }
              }
              else
              {
                LODWORD(v25) = v25 + 2;
              }
            }
            else
            {
              LODWORD(v25) = v25 + 1;
            }
          }
          else if ( v28 == 5 )
          {
            v25 = (unsigned int)(v25 + 2);
            v95 = (unsigned __int64 *)(v20
                                     + ((unsigned __int64)*(unsigned __int16 *)&v23[2 * v25 + 4] << 16)
                                     + *(unsigned __int16 *)&v23[2 * (unsigned int)(v25 - 1) + 4]);
            if ( v10 <= 0x7FFFFFFEFFFFLL
              && (((_BYTE)v20 + (unsigned __int8)*(_WORD *)&v23[2 * (unsigned int)(v25 - 1) + 4]) & 3) != 0 )
            {
              goto LABEL_204;
            }
            *(&v17->Rax + v29) = *v95;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v29] = v95;
          }
          else if ( (v23[2 * (unsigned int)v25 + 5] & 0xF) != 0 )
          {
            v33 = v28 - 1;
            if ( v33 )
            {
              v34 = v33 - 1;
              if ( v34 )
              {
                v35 = v34 - 1;
                if ( v35 )
                {
                  if ( v35 != 1 )
                    goto LABEL_200;
                  v25 = (unsigned int)(v25 + 1);
                  v36 = (unsigned __int64 *)(v20 + 8LL * *(unsigned __int16 *)&v23[2 * v25 + 4]);
                  if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v36 & 3) != 0 )
                    goto LABEL_204;
                  *(&v17->Rax + v29) = *v36;
                  if ( ContextPointers )
                    ContextPointers->IntegerContext[v29] = v36;
                }
                else
                {
                  v59 = *(&v17->Rax + (v23[3] & 0xF));
                  v17->Rsp = v59;
                  v17->Rsp = v59 - (v23[3] & 0xF0);
                }
              }
              else
              {
                v17->Rsp += (unsigned int)(8 * v29 + 8);
              }
            }
            else
            {
              v25 = (unsigned int)(v25 + 1);
              v42 = *(unsigned __int16 *)&v23[2 * v25 + 4];
              if ( (_DWORD)v29 )
              {
                v25 = (unsigned int)(v25 + 1);
                v43 = (*(unsigned __int16 *)&v23[2 * v25 + 4] << 16) + v42;
              }
              else
              {
                v43 = 8 * v42;
              }
              v17->Rsp += v43;
            }
          }
          else
          {
            v30 = (unsigned __int64 *)v17->Rsp;
            if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v30 & 3) != 0 )
              goto LABEL_204;
            *(&v17->Rax + v29) = *v30;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v29] = v30;
            v17->Rsp += 8LL;
          }
          LODWORD(v25) = v25 + 1;
        }
        v27 = v23[2];
      }
      while ( (unsigned int)v25 < v27 );
      v26 = v104;
      v19 = v105;
      v22 = v103;
    }
    if ( (*v23 & 0x20) == 0 )
      break;
    v64 = (unsigned int)v27 + 1;
    if ( (v27 & 1) == 0 )
      v64 = v27;
    v19 = (struct _RUNTIME_FUNCTION *)&v23[2 * v64 + 4];
    v105 = v19;
    if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v19 & 3) != 0 )
      goto LABEL_204;
    if ( (unsigned int)++v21 > 0x20 )
      goto LABEL_200;
  }
  if ( !v26 )
  {
    if ( v10 <= 0x7FFFFFFEFFFFLL )
    {
      v99 = v17->Rsp;
      if ( (v99 & 3) != 0 )
        goto LABEL_204;
    }
    v31 = (unsigned __int64 *)v17->Rsp;
    v17->Rip = *v31;
    v17->Rsp = (unsigned __int64)(v31 + 1);
  }
  if ( v102 )
  {
    v44 = v10 - v19->BeginAddress - v22;
    v45 = (_BYTE *)(v22 + v19->UnwindData);
    if ( v10 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v45 & 3) != 0 )
      goto LABEL_204;
    if ( v44 >= (unsigned __int8)v45[1] && ((*v45 >> 3) & (unsigned __int8)v102) != 0 )
    {
      v46 = (unsigned __int8)v45[2];
      v47 = v46 + 1;
      if ( (v46 & 1) == 0 )
        v47 = (unsigned __int8)v45[2];
      *HandlerData = &v45[2 * (v47 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(v103 + *(unsigned int *)&v45[2 * v47 + 4]);
    }
  }
  return v9;
}
