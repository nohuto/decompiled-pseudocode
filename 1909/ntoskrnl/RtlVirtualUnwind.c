/*
 * XREFs of RtlVirtualUnwind @ 0x14013A7A0
 * Callers:
 *     RtlDispatchException @ 0x1400177D0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140019C30 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x14030BA70 (RtlRaiseException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x14013CA58 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x14013CC00 (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x14018F100 (RtlpSameFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, struct _CONTEXT *ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  PRUNTIME_FUNCTION v8; // r11
  EXCEPTION_DISPOSITION (__cdecl *v9)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // rbp
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
  DWORD64 v66; // rdx
  int v67; // r8d
  char v68; // r8
  char *v69; // rdx
  unsigned int v70; // r15d
  char v71; // al
  char v72; // cl
  char *v73; // r8
  int v74; // eax
  unsigned int v75; // ecx
  __int64 v76; // rax
  unsigned int v77; // r14d
  __int64 v78; // rcx
  bool v79; // cf
  char v80; // cl
  __int64 v81; // rax
  char *j; // rdx
  char v83; // al
  int v84; // eax
  unsigned __int64 v85; // r14
  unsigned __int64 BeginAddress; // rcx
  _DWORD *v87; // rax
  char v88; // al
  unsigned __int64 v89; // rcx
  char v90; // r9
  unsigned __int64 *v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  unsigned __int64 *v94; // r8
  __int64 v95; // rcx
  unsigned __int64 v96; // rax
  unsigned __int64 *v97; // rcx
  unsigned __int64 *v98; // r8
  struct _M128A *v99; // r8
  __int64 v100; // rcx
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // [rsp+40h] [rbp-58h]
  EXCEPTION_DISPOSITION (__cdecl *v103)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+48h] [rbp-50h]
  DWORD v104; // [rsp+A0h] [rbp+8h]
  char v106; // [rsp+B0h] [rbp+18h]
  PRUNTIME_FUNCTION v107; // [rsp+B8h] [rbp+20h]

  v107 = FunctionEntry;
  v8 = FunctionEntry;
  v9 = 0LL;
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
    v66 = ImageBase + v8->UnwindData;
    v67 = 0;
    if ( *(_BYTE *)(v14 + 2) )
    {
LABEL_100:
      if ( (HandlerType & 0x80000000) != 0 )
        return v103;
    }
    else
    {
      while ( (v15 & 0x20) != 0 )
      {
        v75 = *v65;
        v76 = v75 + 1;
        if ( (v75 & 1) == 0 )
          v76 = v75;
        if ( (unsigned int)++v67 > 0x20 )
LABEL_200:
          RtlRaiseStatus(-1073741569);
        v66 = v11 + *(unsigned int *)(v66 + 2 * v76 + 12);
        if ( ControlPc <= 0x7FFFFFFEFFFFLL && (v66 & 3) != 0 )
          goto LABEL_204;
        v65 = (unsigned __int8 *)(v66 + 2);
        if ( *(_BYTE *)(v66 + 2) )
          goto LABEL_100;
        v15 = *(_BYTE *)v66;
      }
      v13 = 1;
    }
  }
  v104 = HandlerType & 0x7FFFFFFF;
  if ( (*(_BYTE *)(v14 + 3) & 0xF) == 0 )
  {
    v17 = ContextRecord;
LABEL_5:
    Rsp = v17->Rsp;
    goto LABEL_6;
  }
  v56 = ControlPc - v8->BeginAddress - v11;
  if ( v56 >= *(unsigned __int8 *)(v14 + 1) || (*(_BYTE *)v14 & 0x20) != 0 )
  {
    v17 = ContextRecord;
    v57 = *(_BYTE *)(v14 + 3);
  }
  else
  {
    v77 = 0;
    if ( *(_BYTE *)(v14 + 2) )
    {
      do
      {
        v78 = *(unsigned __int16 *)(v14 + 2LL * v77 + 4);
        if ( (BYTE1(v78) & 0xF) == 3 )
          break;
        v77 += RtlpUnwindOpSlots(v78);
      }
      while ( v77 < *(unsigned __int8 *)(v14 + 2) );
      v8 = v107;
      v11 = ImageBase;
    }
    v79 = v56 < *(unsigned __int8 *)(v14 + 2LL * v77 + 4);
    v17 = ContextRecord;
    if ( v79 )
      goto LABEL_5;
    v57 = *(_BYTE *)(v14 + 3);
  }
  v58 = *(&v17->Rax + (v57 & 0xF));
  *EstablisherFrame = v58;
  Rsp = v58 - (*(_BYTE *)(v14 + 3) & 0xF0);
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
    v50 = ControlPc - ImageBase;
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
          goto LABEL_102;
      }
      goto LABEL_7;
    }
LABEL_102:
    RtlpUnwindEpilogue(ImageBase, ControlPc, v50 - v52, (_DWORD)v8, (__int64)v17, (__int64)ContextPointers, 0LL, 0LL);
    return v9;
  }
  v68 = *(_BYTE *)ControlPc;
  v69 = (char *)ControlPc;
  v70 = 0;
  if ( *(_BYTE *)ControlPc == 72 )
  {
    v71 = *(_BYTE *)(ControlPc + 1);
    if ( v71 == -125 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
      goto LABEL_121;
    if ( v71 == -127 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
      goto LABEL_123;
  }
  if ( (v68 & 0xFE) == 0x48 && *(_BYTE *)(ControlPc + 1) == 0x8D )
  {
    v70 = *(_BYTE *)(ControlPc + 2) & 7 | (8 * (v68 & 1));
    if ( v70 )
    {
      if ( v70 == (*(_BYTE *)(v14 + 3) & 0xF) )
      {
        v80 = *(_BYTE *)(ControlPc + 2) & 0xF8;
        if ( v80 == 96 )
        {
LABEL_121:
          v69 = (char *)(ControlPc + 4);
          goto LABEL_88;
        }
        if ( v80 != -96 )
          goto LABEL_88;
LABEL_123:
        v69 = (char *)(ControlPc + 7);
        goto LABEL_88;
      }
    }
  }
  while ( 1 )
  {
LABEL_88:
    v72 = *v69;
    if ( (*v69 & 0xF8) == 0x58 )
    {
      v81 = 1LL;
      goto LABEL_131;
    }
    v73 = v69 + 1;
    if ( (v72 & 0xF0) != 0x40 || (*v73 & 0xF8) != 0x58 )
      break;
    v81 = 2LL;
LABEL_131:
    v69 += v81;
  }
  if ( v72 == -14 )
  {
    v72 = *v73;
    ++v69;
  }
  if ( (unsigned __int8)(v72 + 62) <= 1u || v72 == -13 && (v72 = -13, v69[1] == -61) )
  {
LABEL_133:
    j = (char *)ControlPc;
    if ( (*(_BYTE *)ControlPc & 0xF8) != 0x48 )
      goto LABEL_160;
    v83 = *(_BYTE *)(ControlPc + 1);
    switch ( v83 )
    {
      case -125:
        v17->Rsp += *(char *)(ControlPc + 3);
LABEL_156:
        j = (char *)(ControlPc + 4);
        goto LABEL_160;
      case -127:
        v17->Rsp += ((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8) | *(unsigned __int8 *)(ControlPc + 3);
        break;
      case -115:
        v88 = *(_BYTE *)(ControlPc + 2) & 0xF8;
        if ( v88 == 96 )
        {
          v89 = *(&v17->Rax + v70);
          v17->Rsp = v89;
          v17->Rsp = v89 + *(char *)(ControlPc + 3);
          goto LABEL_156;
        }
        if ( v88 != -96 )
          goto LABEL_160;
        v17->Rsp = *(&v17->Rax + v70)
                 + (*(unsigned __int8 *)(ControlPc + 3) | ((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_160;
    }
    for ( j = (char *)(ControlPc + 7); ; j += v93 )
    {
LABEL_160:
      v90 = *j;
      if ( (*j & 0xF8) == 0x58 )
      {
        v91 = (unsigned __int64 *)v17->Rsp;
        if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v91 & 3) != 0 )
          goto LABEL_204;
        v92 = v90 & 7;
        *(&v17->Rax + v92) = *v91;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v92] = v91;
        v93 = 1LL;
      }
      else
      {
        if ( (v90 & 0xF0) != 0x40 || (j[1] & 0xF8) != 0x58 )
        {
          if ( ControlPc > 0x7FFFFFFEFFFFLL || (v96 = v17->Rsp, (v96 & 3) == 0) )
          {
            v97 = (unsigned __int64 *)v17->Rsp;
            v17->Rip = *v97;
            v17->Rsp = (unsigned __int64)(v97 + 1);
            return v9;
          }
LABEL_204:
          ExRaiseDatatypeMisalignment();
        }
        v94 = (unsigned __int64 *)v17->Rsp;
        if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v94 & 3) != 0 )
          goto LABEL_204;
        v95 = j[1] & 7 | (8LL * (v90 & 1));
        *(&v17->Rax + v95) = *v94;
        if ( ContextPointers )
          ContextPointers->IntegerContext[v95] = v94;
        v93 = 2LL;
      }
      v17->Rsp += 8LL;
    }
  }
  if ( ((v72 + 23) & 0xFD) != 0 )
  {
    if ( v72 == -1 )
    {
      v72 = -1;
      if ( v69[1] == 37 )
        goto LABEL_133;
    }
    if ( (v72 & 0xF8) == 0x48 && v69[1] == -1 && (v69[2] & 0x38) == 0x20 )
      goto LABEL_133;
LABEL_7:
    v19 = v107;
  }
  else
  {
    if ( v72 == -21 )
      v84 = v69[1] + 2;
    else
      v84 = *(_DWORD *)(v69 + 1) + 5;
    v19 = v107;
    v85 = (unsigned __int64)&v69[v84 - v11];
    BeginAddress = v107->BeginAddress;
    if ( v85 < BeginAddress || v85 >= v107->EndAddress )
    {
      v87 = (_DWORD *)RtlpSameFunction(v107, v11, &v69[v84]);
      if ( !v87 || v85 == *v87 )
        goto LABEL_133;
      goto LABEL_7;
    }
    if ( v85 == BeginAddress && (*(_BYTE *)v14 & 0x20) == 0 )
      goto LABEL_133;
  }
  v20 = *EstablisherFrame;
  v21 = 0;
  v22 = ImageBase;
  v102 = *EstablisherFrame;
  while ( 1 )
  {
    v23 = (_BYTE *)(v22 + v19->UnwindData);
    v24 = ControlPc - v19->BeginAddress - v22;
    v106 = 0;
    LODWORD(v25) = 0;
    v26 = 0;
    if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v23 & 3) != 0 )
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
          v74 = RtlpUnwindOpSlots(*(unsigned __int16 *)&v23[2 * (unsigned int)v25 + 4]);
          v20 = v102;
          LODWORD(v25) = v74 + v25;
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
                    v106 = 1;
                    v61 = v17->Rsp;
                    v62 = (unsigned __int64 *)(v61 + 8);
                    v63 = (unsigned __int64 *)(v61 + ((_DWORD)v29 != 0 ? 32LL : 24LL));
                    if ( !(_DWORD)v29 )
                      v62 = (unsigned __int64 *)v17->Rsp;
                    if ( ControlPc <= 0x7FFFFFFEFFFFLL
                      && (((unsigned __int8)v62 & 3) != 0 || ((unsigned __int8)v63 & 3) != 0) )
                    {
                      goto LABEL_204;
                    }
                    v17->Rip = *v62;
                    v17->Rsp = *v63;
                  }
                  else
                  {
                    v25 = (unsigned int)(v25 + 2);
                    v99 = (struct _M128A *)(v20
                                          + ((unsigned __int64)*(unsigned __int16 *)&v23[2 * v25 + 4] << 16)
                                          + *(unsigned __int16 *)&v23[2 * (unsigned int)(v25 - 1) + 4]);
                    if ( ControlPc <= 0x7FFFFFFEFFFFLL
                      && (((_BYTE)v20 + (unsigned __int8)*(_WORD *)&v23[2 * (unsigned int)(v25 - 1) + 4]) & 3) != 0 )
                    {
                      goto LABEL_204;
                    }
                    v100 = (unsigned int)v29;
                    v17->FltSave.XmmRegisters[v100].Low = v99->Low;
                    v17->FltSave.XmmRegisters[v100].High = v99->High;
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v29] = v99;
                  }
                }
                else
                {
                  v25 = (unsigned int)(v25 + 1);
                  v40 = (struct _M128A *)(v20 + 16LL * *(unsigned __int16 *)&v23[2 * v25 + 4]);
                  if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v40 & 3) != 0 )
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
            v98 = (unsigned __int64 *)(v20
                                     + ((unsigned __int64)*(unsigned __int16 *)&v23[2 * v25 + 4] << 16)
                                     + *(unsigned __int16 *)&v23[2 * (unsigned int)(v25 - 1) + 4]);
            if ( ControlPc <= 0x7FFFFFFEFFFFLL
              && (((_BYTE)v20 + (unsigned __int8)*(_WORD *)&v23[2 * (unsigned int)(v25 - 1) + 4]) & 3) != 0 )
            {
              goto LABEL_204;
            }
            *(&v17->Rax + v29) = *v98;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v29] = v98;
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
                  if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v36 & 3) != 0 )
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
            if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v30 & 3) != 0 )
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
      v26 = v106;
      v19 = v107;
      v22 = ImageBase;
    }
    if ( (*v23 & 0x20) == 0 )
      break;
    v64 = (unsigned int)v27 + 1;
    if ( (v27 & 1) == 0 )
      v64 = v27;
    v19 = (struct _RUNTIME_FUNCTION *)&v23[2 * v64 + 4];
    v107 = v19;
    if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v19 & 3) != 0 )
      goto LABEL_204;
    if ( (unsigned int)++v21 > 0x20 )
      goto LABEL_200;
  }
  if ( !v26 )
  {
    if ( ControlPc <= 0x7FFFFFFEFFFFLL )
    {
      v101 = v17->Rsp;
      if ( (v101 & 3) != 0 )
        goto LABEL_204;
    }
    v31 = (unsigned __int64 *)v17->Rsp;
    v17->Rip = *v31;
    v17->Rsp = (unsigned __int64)(v31 + 1);
  }
  if ( v104 )
  {
    v44 = ControlPc - v19->BeginAddress - v22;
    v45 = (_BYTE *)(v22 + v19->UnwindData);
    if ( ControlPc <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v45 & 3) != 0 )
      goto LABEL_204;
    if ( v44 >= (unsigned __int8)v45[1] && ((*v45 >> 3) & (unsigned __int8)v104) != 0 )
    {
      v46 = (unsigned __int8)v45[2];
      v47 = v46 + 1;
      if ( (v46 & 1) == 0 )
        v47 = (unsigned __int8)v45[2];
      *HandlerData = &v45[2 * (v47 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)&v45[2 * v47 + 4]);
    }
  }
  return v9;
}
