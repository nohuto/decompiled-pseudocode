/*
 * XREFs of RtlVirtualUnwind @ 0x1800053B0
 * Callers:
 *     RtlDispatchException @ 0x1800048E0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x18008FF20 (__report_gsfailure.c)
 * Callees:
 *     RtlpSameFunction @ 0x180002E70 (RtlpSameFunction.c)
 *     RtlpPopUserShadowStack @ 0x180003738 (RtlpPopUserShadowStack.c)
 *     RtlLocateExtendedFeature2 @ 0x1800083F0 (RtlLocateExtendedFeature2.c)
 *     RtlpUnwindEpilogue @ 0x18009F448 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x18009F66C (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 */

PEXCEPTION_ROUTINE __stdcall RtlVirtualUnwind(ULONG HandlerType, ULONG64 ImageBase, ULONG64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PULONG64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)
{
  EXCEPTION_DISPOSITION (__cdecl *v8)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // rsi
  ULONG64 v9; // rbp
  ULONG64 v11; // r13
  int v13; // r12d
  unsigned int v14; // r15d
  _BYTE *v15; // rax
  _BYTE *v16; // rcx
  PCONTEXT v17; // rbx
  unsigned __int64 Rsp; // rcx
  int v19; // edx
  char *v20; // rdx
  unsigned int v21; // r15d
  char v22; // cl
  char *v23; // r8
  unsigned int v24; // edx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v25; // rax
  int v26; // r12d
  unsigned __int64 v27; // r10
  _BYTE *v28; // r14
  __int64 v29; // rbp
  unsigned int v30; // r9d
  char v31; // r13
  unsigned __int8 v32; // cl
  __int64 v33; // r8
  unsigned int v34; // ecx
  unsigned __int64 *v35; // rdx
  DWORD64 *v36; // rcx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned __int64 *v41; // rdx
  _BYTE *v42; // r9
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  unsigned int v46; // edx
  unsigned int v47; // ebx
  unsigned __int64 v48; // rcx
  DWORD64 v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v53; // r14
  char v54; // al
  DWORD64 *v55; // rdx
  char v56; // al
  char v57; // cl
  unsigned int v58; // ecx
  __int64 ExtendedFeature2; // rax
  __int16 v60; // cx
  unsigned int v61; // r10d
  int v62; // r8d
  DWORD v63; // ecx
  unsigned int v64; // r11d
  unsigned int v65; // r9d
  int v66; // r14d
  unsigned __int16 v67; // cx
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  __int64 v70; // rcx
  struct _M128A *v71; // rdx
  __int64 v72; // rax
  unsigned int v73; // r9d
  int v74; // r8d
  __int64 v75; // rax
  unsigned __int64 *v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rax
  _DWORD *v79; // rax
  unsigned __int64 *v80; // r8
  __int64 v81; // rcx
  unsigned int v82; // ecx
  DWORD64 v83; // rcx
  DWORD64 *v84; // rax
  unsigned int v85; // r14d
  __int64 v86; // rcx
  bool v87; // cf
  bool v88; // zf
  char v89; // al
  DWORD64 v90; // rcx
  unsigned __int64 *v91; // r9
  __int64 v92; // rcx
  struct _M128A *v93; // r9
  int v94; // eax
  unsigned int v95; // [rsp+40h] [rbp-48h]
  unsigned int v96; // [rsp+44h] [rbp-44h]
  unsigned __int64 v97; // [rsp+48h] [rbp-40h]
  ULONG v98; // [rsp+90h] [rbp+8h]
  ULONG64 v99; // [rsp+98h] [rbp+10h]
  PRUNTIME_FUNCTION v100; // [rsp+A8h] [rbp+20h]

  v100 = FunctionEntry;
  v99 = ImageBase;
  v8 = 0LL;
  v9 = ImageBase + FunctionEntry->UnwindInfoAddress;
  v11 = ImageBase;
  v13 = 0;
  v14 = *(_BYTE *)v9 & 7;
  if ( v14 < 2 )
  {
    v15 = (_BYTE *)(v9 + 2);
    v16 = (_BYTE *)(ImageBase + FunctionEntry->UnwindInfoAddress);
    ImageBase = 0LL;
    if ( !*(_BYTE *)(v9 + 2) )
    {
      while ( (*v16 & 0x20) != 0 )
      {
        v73 = (unsigned __int8)*v15;
        ImageBase = (unsigned int)(ImageBase + 1);
        v74 = *v15 & 1;
        if ( (unsigned int)ImageBase > 0x20 )
LABEL_163:
          RtlRaiseStatus(-1073741569);
        v75 = v73 + 1;
        if ( !v74 )
          v75 = v73;
        v16 = (_BYTE *)(v11 + *(unsigned int *)&v16[2 * v75 + 12]);
        v15 = v16 + 2;
        if ( v16[2] )
          goto LABEL_115;
      }
      v13 = 1;
LABEL_115:
      FunctionEntry = v100;
    }
  }
  v98 = HandlerType & 0x7FFFFFFF;
  if ( (*(_BYTE *)(v9 + 3) & 0xF) != 0 )
  {
    v47 = ControlPc - v11 - FunctionEntry->BeginAddress;
    if ( v47 >= *(unsigned __int8 *)(v9 + 1) || (*(_BYTE *)v9 & 0x20) != 0 )
    {
      v17 = ContextRecord;
    }
    else
    {
      v85 = 0;
      if ( *(_BYTE *)(v9 + 2) )
      {
        do
        {
          v86 = *(unsigned __int16 *)(v9 + 2LL * v85 + 4);
          if ( (BYTE1(v86) & 0xF) == 3 )
            break;
          v85 += RtlpUnwindOpSlots(v86, ImageBase);
        }
        while ( v85 < *(unsigned __int8 *)(v9 + 2) );
        FunctionEntry = v100;
      }
      v87 = v47 < *(unsigned __int8 *)(v9 + 2LL * v85 + 4);
      v17 = ContextRecord;
      if ( v87 )
        goto LABEL_5;
    }
    v48 = *(&v17->Rax + (*(_BYTE *)(v9 + 3) & 0xF));
    *EstablisherFrame = v48;
    Rsp = v48 - (*(_BYTE *)(v9 + 3) & 0xF0);
    goto LABEL_6;
  }
  v17 = ContextRecord;
LABEL_5:
  Rsp = v17->Rsp;
LABEL_6:
  *EstablisherFrame = Rsp;
  if ( v13 )
    goto LABEL_19;
  v19 = 0;
  if ( v14 >= 2 )
  {
    if ( !*(_BYTE *)(v9 + 2) )
      goto LABEL_19;
    v60 = HIBYTE(*(_WORD *)(v9 + 4));
    if ( (v60 & 0xF) != 6 )
      goto LABEL_19;
    v61 = *(unsigned __int8 *)(v9 + 4);
    v62 = ControlPc - v11;
    if ( (v60 & 0x10) != 0 )
    {
      v63 = FunctionEntry->EndAddress - v61;
      LOBYTE(v19) = v62 - v63 < v61;
    }
    else
    {
      v63 = 0;
    }
    if ( v19 )
    {
      v66 = (int)v100;
    }
    else
    {
      v64 = *(unsigned __int8 *)(v9 + 2);
      v65 = 1;
      if ( v64 <= 1 )
        goto LABEL_19;
      v66 = (int)v100;
      while ( 1 )
      {
        v67 = *(_WORD *)(v9 + 2LL * v65 + 4);
        if ( (HIBYTE(v67) & 0xF) != 6 )
          goto LABEL_19;
        v19 = (unsigned __int8)v67 + (v67 >> 12 << 8);
        if ( !v19 )
          goto LABEL_19;
        v63 = v100->EndAddress - v19;
        if ( v62 - v63 < v61 )
          break;
        if ( ++v65 >= v64 )
          goto LABEL_19;
      }
    }
    RtlpUnwindEpilogue(v11, v19, v62 - v63, v66, (__int64)v17, (__int64)ContextPointers, 0LL, 0LL);
    return v8;
  }
  v20 = (char *)ControlPc;
  v21 = 0;
  if ( *(_BYTE *)ControlPc == 72 )
  {
    v56 = *(_BYTE *)(ControlPc + 1);
    if ( v56 == -125 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
      goto LABEL_109;
    if ( v56 == -127 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
      goto LABEL_76;
  }
  if ( (*(_BYTE *)ControlPc & 0xFE) == 0x48 && *(_BYTE *)(ControlPc + 1) == 0x8D )
  {
    v21 = *(_BYTE *)(ControlPc + 2) & 7 | (8 * (*(_BYTE *)ControlPc & 1));
    if ( v21 )
    {
      if ( v21 == (*(_BYTE *)(v9 + 3) & 0xF) )
      {
        v57 = *(_BYTE *)(ControlPc + 2) & 0xF8;
        if ( v57 != 96 )
        {
          if ( v57 != -96 )
            goto LABEL_10;
LABEL_76:
          v20 = (char *)(ControlPc + 7);
          goto LABEL_10;
        }
LABEL_109:
        v20 = (char *)(ControlPc + 4);
      }
    }
  }
LABEL_10:
  while ( 1 )
  {
    v22 = *v20;
    if ( (*v20 & 0xF8) != 0x58 )
      break;
    v50 = 1LL;
LABEL_117:
    v20 += v50;
  }
  v23 = v20 + 1;
  if ( (v22 & 0xF0) == 0x40 && (*v23 & 0xF8) == 0x58 )
  {
    v50 = 2LL;
    goto LABEL_117;
  }
  if ( v22 == -14 )
  {
    v22 = *v23;
    ++v20;
  }
  if ( (unsigned __int8)(v22 + 62) <= 1u || v22 == -13 && (v22 = -13, v20[1] == -61) )
  {
LABEL_66:
    if ( (*(_BYTE *)ControlPc & 0xF8) != 0x48 )
      goto LABEL_70;
    v54 = *(_BYTE *)(ControlPc + 1);
    switch ( v54 )
    {
      case -125:
        v17->Rsp += *(char *)(ControlPc + 3);
LABEL_69:
        ControlPc += 4LL;
        goto LABEL_70;
      case -127:
        v17->Rsp += *(unsigned __int8 *)(ControlPc + 3) | (unsigned __int64)((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8);
        break;
      case -115:
        v89 = *(_BYTE *)(ControlPc + 2) & 0xF8;
        if ( v89 == 96 )
        {
          v90 = *(&v17->Rax + v21);
          v17->Rsp = v90;
          v17->Rsp = v90 + *(char *)(ControlPc + 3);
          goto LABEL_69;
        }
        if ( v89 != -96 )
        {
          while ( 1 )
          {
LABEL_70:
            if ( (*(_BYTE *)ControlPc & 0xF8) == 0x58 )
            {
              v76 = (unsigned __int64 *)v17->Rsp;
              v77 = *(_BYTE *)ControlPc & 7;
              *(&v17->Rax + v77) = *v76;
              if ( ContextPointers )
                ContextPointers->IntegerContext[v77] = v76;
              v78 = 1LL;
            }
            else
            {
              if ( (*(_BYTE *)ControlPc & 0xF0) != 0x40 || (*(_BYTE *)(ControlPc + 1) & 0xF8) != 0x58 )
              {
                v55 = (DWORD64 *)v17->Rsp;
                v17->Rip = *v55;
                v17->Rsp = (DWORD64)(v55 + 1);
                RtlpPopUserShadowStack((__int64)v17);
                return v8;
              }
              v80 = (unsigned __int64 *)v17->Rsp;
              v81 = *(_BYTE *)(ControlPc + 1) & 7 | (8LL * (*(_BYTE *)ControlPc & 1));
              *(&v17->Rax + v81) = *v80;
              if ( ContextPointers )
                ContextPointers->IntegerContext[v81] = v80;
              v78 = 2LL;
            }
            v17->Rsp += 8LL;
            ControlPc += v78;
          }
        }
        v17->Rsp = *(&v17->Rax + v21)
                 + (*(unsigned __int8 *)(ControlPc + 3) | ((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_70;
    }
    ControlPc += 7LL;
    goto LABEL_70;
  }
  if ( ((v22 + 23) & 0xFD) != 0 )
  {
    if ( v22 == -1 )
    {
      v22 = -1;
      if ( v20[1] == 37 )
        goto LABEL_66;
    }
    if ( (v22 & 0xF8) == 0x48 && v20[1] == -1 )
    {
      v88 = (v20[2] & 0x38) == 32;
      goto LABEL_65;
    }
  }
  else
  {
    if ( v22 == -21 )
      v51 = v20[1] + 2;
    else
      v51 = *(_DWORD *)(v20 + 1) + 5;
    BeginAddress = FunctionEntry->BeginAddress;
    v53 = (unsigned __int64)&v20[v51 - v11];
    if ( v53 < BeginAddress || v53 >= FunctionEntry->EndAddress )
    {
      v79 = RtlpSameFunction((__int64)FunctionEntry, v11, &v20[v51]);
      if ( !v79 )
        goto LABEL_66;
      v88 = v53 == *v79;
    }
    else
    {
      if ( v53 != BeginAddress )
        goto LABEL_19;
      v88 = (*(_BYTE *)v9 & 0x20) == 0;
    }
LABEL_65:
    if ( v88 )
      goto LABEL_66;
  }
LABEL_19:
  v24 = 0;
  v25 = v100;
  v26 = ControlPc - v11;
  v95 = 0;
  v27 = *EstablisherFrame;
  v97 = *EstablisherFrame;
  while ( 1 )
  {
    v28 = (_BYTE *)(v99 + v25->UnwindInfoAddress);
    LODWORD(v29) = 0;
    v30 = v26 - v25->BeginAddress;
    v31 = 0;
    v96 = v30;
    v32 = v28[2];
    if ( v32 )
    {
      do
      {
        v33 = (unsigned __int8)v28[2 * (unsigned int)v29 + 5] >> 4;
        if ( v30 < (unsigned __int8)v28[2 * (unsigned int)v29 + 4] )
        {
          v94 = RtlpUnwindOpSlots(*(unsigned __int16 *)&v28[2 * (unsigned int)v29 + 4], (unsigned int)v29);
          v27 = v97;
          LODWORD(v29) = v94 + v29;
        }
        else
        {
          v34 = v28[2 * (unsigned int)v29 + 5] & 0xF;
          if ( v34 > 5 )
          {
            v58 = v34 - 6;
            if ( v58 )
            {
              v68 = v58 - 1;
              if ( v68 )
              {
                v69 = v68 - 1;
                if ( v69 )
                {
                  v82 = v69 - 1;
                  if ( v82 )
                  {
                    if ( v82 != 1 )
                      goto LABEL_163;
                    v31 = 1;
                    v83 = v17->Rsp;
                    v84 = (DWORD64 *)(v83 + 8);
                    if ( !(_DWORD)v33 )
                      v84 = (DWORD64 *)v17->Rsp;
                    v17->Rip = *v84;
                    v17->Rsp = *(_QWORD *)(((_DWORD)v33 != 0 ? 8 : 0) + v83 + 24);
                  }
                  else
                  {
                    v29 = (unsigned int)(v29 + 2);
                    v92 = (unsigned int)v33;
                    v93 = (struct _M128A *)(v27
                                          + ((unsigned __int64)*(unsigned __int16 *)&v28[2 * v29 + 4] << 16)
                                          + *(unsigned __int16 *)&v28[2 * (unsigned int)(v29 - 1) + 4]);
                    v17->FltSave.XmmRegisters[v92].Low = v93->Low;
                    v17->FltSave.XmmRegisters[v92].High = v93->High;
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v33] = v93;
                  }
                }
                else
                {
                  v29 = (unsigned int)(v29 + 1);
                  v70 = (unsigned int)v33;
                  v71 = (struct _M128A *)(v27 + 16LL * *(unsigned __int16 *)&v28[2 * v29 + 4]);
                  v17->FltSave.XmmRegisters[v70].Low = v71->Low;
                  v17->FltSave.XmmRegisters[v70].High = v71->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v33] = v71;
                }
              }
              else
              {
                LODWORD(v29) = v29 + 2;
              }
            }
            else
            {
              LODWORD(v29) = v29 + 1;
            }
          }
          else if ( v34 == 5 )
          {
            v29 = (unsigned int)(v29 + 2);
            v91 = (unsigned __int64 *)(v27
                                     + ((unsigned __int64)*(unsigned __int16 *)&v28[2 * v29 + 4] << 16)
                                     + *(unsigned __int16 *)&v28[2 * (unsigned int)(v29 - 1) + 4]);
            *(&v17->Rax + v33) = *v91;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v33] = v91;
          }
          else if ( (v28[2 * (unsigned int)v29 + 5] & 0xF) != 0 )
          {
            v38 = v34 - 1;
            if ( v38 )
            {
              v39 = v38 - 1;
              if ( v39 )
              {
                v40 = v39 - 1;
                if ( v40 )
                {
                  if ( v40 != 1 )
                    goto LABEL_163;
                  v29 = (unsigned int)(v29 + 1);
                  v41 = (unsigned __int64 *)(v27 + 8LL * *(unsigned __int16 *)&v28[2 * v29 + 4]);
                  *(&v17->Rax + v33) = *v41;
                  if ( ContextPointers )
                    ContextPointers->IntegerContext[v33] = v41;
                }
                else
                {
                  v49 = *(&v17->Rax + (v28[3] & 0xF));
                  v17->Rsp = v49;
                  v17->Rsp = v49 - (v28[3] & 0xF0);
                }
              }
              else
              {
                v17->Rsp += (unsigned int)(8 * v33 + 8);
              }
            }
            else
            {
              v29 = (unsigned int)(v29 + 1);
              v45 = *(unsigned __int16 *)&v28[2 * v29 + 4];
              if ( (_DWORD)v33 )
              {
                v29 = (unsigned int)(v29 + 1);
                v46 = (*(unsigned __int16 *)&v28[2 * v29 + 4] << 16) + v45;
              }
              else
              {
                v46 = 8 * v45;
              }
              v17->Rsp += v46;
            }
          }
          else
          {
            v35 = (unsigned __int64 *)v17->Rsp;
            *(&v17->Rax + v33) = *v35;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v33] = v35;
            v17->Rsp += 8LL;
          }
          LODWORD(v29) = v29 + 1;
        }
        v30 = v96;
        v32 = v28[2];
      }
      while ( (unsigned int)v29 < v32 );
      v24 = v95;
    }
    if ( (*v28 & 0x20) == 0 )
      break;
    v72 = (unsigned int)v32 + 1;
    if ( (v32 & 1) == 0 )
      v72 = v32;
    v95 = ++v24;
    v25 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v28[2 * v72 + 4];
    v100 = v25;
    if ( v24 > 0x20 )
      goto LABEL_163;
  }
  if ( !v31 )
  {
    v36 = (DWORD64 *)v17->Rsp;
    v17->Rip = *v36;
    v17->Rsp = (DWORD64)(v36 + 1);
    if ( (v17->ContextFlags & 0x100040) == 0x100040 )
    {
      ExtendedFeature2 = RtlLocateExtendedFeature2(&v17[1], 11LL, 2147353560LL);
      if ( ExtendedFeature2 )
      {
        if ( (*(_BYTE *)ExtendedFeature2 & 1) != 0 )
          *(_QWORD *)(ExtendedFeature2 + 8) += 8LL;
      }
    }
  }
  if ( v98 )
  {
    v42 = (_BYTE *)(v99 + v100->UnwindInfoAddress);
    if ( (int)ControlPc - (int)v99 - v100->BeginAddress >= (unsigned __int8)v42[1]
      && ((*v42 >> 3) & (unsigned __int8)v98) != 0 )
    {
      v43 = (unsigned __int8)v42[2];
      v44 = v43 + 1;
      if ( (v43 & 1) == 0 )
        v44 = (unsigned __int8)v42[2];
      *HandlerData = &v42[2 * (v44 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(v99 + *(unsigned int *)&v42[2 * v44 + 4]);
    }
  }
  return v8;
}
