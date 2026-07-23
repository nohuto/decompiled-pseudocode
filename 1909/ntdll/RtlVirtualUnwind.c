/*
 * XREFs of RtlVirtualUnwind @ 0x18001CC50
 * Callers:
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x18006A8C0 (RtlDispatchException.c)
 *     _invalid_parameter @ 0x18008CD78 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x18008CEA0 (__report_gsfailure.c)
 * Callees:
 *     RtlpSameFunction @ 0x18000108C (RtlpSameFunction.c)
 *     RtlpPopUserShadowStack @ 0x18001EA30 (RtlpPopUserShadowStack.c)
 *     RtlLocateExtendedFeature2 @ 0x180074490 (RtlLocateExtendedFeature2.c)
 *     RtlpUnwindOpSlots @ 0x18008300C (RtlpUnwindOpSlots.c)
 *     RtlpUnwindEpilogue @ 0x1800FB5D8 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
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
  _BYTE *v20; // rdx
  unsigned int v21; // r15d
  char v22; // cl
  unsigned __int64 *v23; // r8
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
  _BYTE *v37; // r9
  int v38; // ecx
  int v39; // eax
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned __int64 *v44; // rdx
  int v45; // edx
  unsigned int v46; // edx
  char v47; // al
  __int64 v48; // rax
  bool v49; // zf
  char v50; // al
  DWORD64 *v51; // rdx
  char v52; // cl
  unsigned int v53; // ebx
  unsigned __int64 v54; // rcx
  DWORD64 v55; // rcx
  __int64 v56; // rax
  __int64 ExtendedFeature2; // rax
  int v58; // eax
  unsigned __int64 BeginAddress; // rcx
  unsigned __int64 v60; // r14
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  __int64 v64; // rcx
  struct _M128A *v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int16 v68; // cx
  unsigned int v69; // r10d
  int v70; // r8d
  DWORD v71; // ecx
  unsigned int v72; // r11d
  unsigned int v73; // r9d
  int v74; // r14d
  __int16 v75; // dx
  __int64 v76; // rcx
  unsigned int v77; // r9d
  int v78; // r8d
  __int64 v79; // rax
  _DWORD *v80; // rax
  int v81; // eax
  unsigned int v82; // ecx
  DWORD64 v83; // rcx
  DWORD64 *v84; // rax
  unsigned int v85; // r14d
  __int64 v86; // rcx
  bool v87; // cf
  char v88; // al
  DWORD64 v89; // rcx
  unsigned __int64 *v90; // r9
  __int64 v91; // rcx
  struct _M128A *v92; // r9
  unsigned int v93; // [rsp+40h] [rbp-48h]
  unsigned int v94; // [rsp+44h] [rbp-44h]
  unsigned __int64 v95; // [rsp+48h] [rbp-40h]
  ULONG v96; // [rsp+90h] [rbp+8h]
  ULONG64 v97; // [rsp+98h] [rbp+10h]
  PRUNTIME_FUNCTION v98; // [rsp+A8h] [rbp+20h]

  v98 = FunctionEntry;
  v97 = ImageBase;
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
        v77 = (unsigned __int8)*v15;
        ImageBase = (unsigned int)(ImageBase + 1);
        v78 = *v15 & 1;
        if ( (unsigned int)ImageBase > 0x20 )
LABEL_163:
          RtlRaiseStatus(-1073741569);
        v79 = v77 + 1;
        if ( !v78 )
          v79 = v77;
        v16 = (_BYTE *)(v11 + *(unsigned int *)&v16[2 * v79 + 12]);
        v15 = v16 + 2;
        if ( v16[2] )
          goto LABEL_127;
      }
      v13 = 1;
LABEL_127:
      FunctionEntry = v98;
    }
  }
  v96 = HandlerType & 0x7FFFFFFF;
  if ( (*(_BYTE *)(v9 + 3) & 0xF) != 0 )
  {
    v53 = ControlPc - v11 - FunctionEntry->BeginAddress;
    if ( v53 >= *(unsigned __int8 *)(v9 + 1) || (*(_BYTE *)v9 & 0x20) != 0 )
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
        FunctionEntry = v98;
      }
      v87 = v53 < *(unsigned __int8 *)(v9 + 2LL * v85 + 4);
      v17 = ContextRecord;
      if ( v87 )
        goto LABEL_5;
    }
    v54 = *(&v17->Rax + (*(_BYTE *)(v9 + 3) & 0xF));
    *EstablisherFrame = v54;
    Rsp = v54 - (*(_BYTE *)(v9 + 3) & 0xF0);
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
    v68 = HIBYTE(*(_WORD *)(v9 + 4));
    if ( (v68 & 0xF) != 6 )
      goto LABEL_19;
    v69 = *(unsigned __int8 *)(v9 + 4);
    v70 = ControlPc - v11;
    if ( (v68 & 0x10) != 0 )
    {
      v71 = FunctionEntry->EndAddress - v69;
      LOBYTE(v19) = v70 - v71 < v69;
    }
    else
    {
      v71 = 0;
    }
    if ( v19 )
    {
      v74 = (int)v98;
    }
    else
    {
      v72 = *(unsigned __int8 *)(v9 + 2);
      v73 = 1;
      if ( v72 <= 1 )
        goto LABEL_19;
      v74 = (int)v98;
      while ( 1 )
      {
        v75 = HIBYTE(*(_WORD *)(v9 + 2LL * v73 + 4));
        if ( (v75 & 0xF) != 6 )
          goto LABEL_19;
        v19 = *(unsigned __int8 *)(v9 + 2LL * v73 + 4) + ((unsigned __int8)v75 >> 4 << 8);
        if ( !v19 )
          goto LABEL_19;
        v71 = v98->EndAddress - v19;
        if ( v70 - v71 < v69 )
          break;
        if ( ++v73 >= v72 )
          goto LABEL_19;
      }
    }
    RtlpUnwindEpilogue(v11, v19, v70 - v71, v74, (__int64)v17, (__int64)ContextPointers, 0LL, 0LL);
    return v8;
  }
  v20 = (_BYTE *)ControlPc;
  v21 = 0;
  if ( *(_BYTE *)ControlPc == 72 )
  {
    v47 = *(_BYTE *)(ControlPc + 1);
    if ( v47 == -125 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
      goto LABEL_78;
    if ( v47 == -127 && *(_BYTE *)(ControlPc + 2) == 0xC4 )
      goto LABEL_54;
  }
  if ( (*(_BYTE *)ControlPc & 0xFE) == 0x48 && *(_BYTE *)(ControlPc + 1) == 0x8D )
  {
    v21 = *(_BYTE *)(ControlPc + 2) & 7 | (8 * (*(_BYTE *)ControlPc & 1));
    if ( v21 )
    {
      if ( v21 == (*(_BYTE *)(v9 + 3) & 0xF) )
      {
        v52 = *(_BYTE *)(ControlPc + 2) & 0xF8;
        if ( v52 != 96 )
        {
          if ( v52 != -96 )
            goto LABEL_10;
LABEL_54:
          v20 = (_BYTE *)(ControlPc + 7);
          goto LABEL_10;
        }
LABEL_78:
        v20 = (_BYTE *)(ControlPc + 4);
      }
    }
  }
LABEL_10:
  while ( 1 )
  {
    v22 = *v20;
    if ( (*v20 & 0xF8) != 0x58 )
      break;
    v48 = 1LL;
LABEL_98:
    v20 += v48;
  }
  v23 = (unsigned __int64 *)(v20 + 1);
  if ( (v22 & 0xF0) == 0x40 && (*(_BYTE *)v23 & 0xF8) == 0x58 )
  {
    v48 = 2LL;
    goto LABEL_98;
  }
  if ( v22 == -14 )
  {
    v22 = *(_BYTE *)v23;
    ++v20;
  }
  if ( (unsigned __int8)(v22 + 62) <= 1u || v22 == -13 && (v22 = -13, v20[1] == 0xC3) )
  {
LABEL_60:
    if ( (*(_BYTE *)ControlPc & 0xF8) != 0x48 )
      goto LABEL_64;
    v50 = *(_BYTE *)(ControlPc + 1);
    switch ( v50 )
    {
      case -125:
        v17->Rsp += *(char *)(ControlPc + 3);
LABEL_63:
        ControlPc += 4LL;
        goto LABEL_64;
      case -127:
        v17->Rsp += *(unsigned __int8 *)(ControlPc + 3) | (unsigned __int64)((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8);
        break;
      case -115:
        v88 = *(_BYTE *)(ControlPc + 2) & 0xF8;
        if ( v88 == 96 )
        {
          v89 = *(&v17->Rax + v21);
          v17->Rsp = v89;
          v17->Rsp = v89 + *(char *)(ControlPc + 3);
          goto LABEL_63;
        }
        if ( v88 != -96 )
        {
          while ( 1 )
          {
LABEL_64:
            if ( (*(_BYTE *)ControlPc & 0xF8) == 0x58 )
            {
              v23 = (unsigned __int64 *)v17->Rsp;
              v66 = *(_BYTE *)ControlPc & 7;
              *(&v17->Rax + v66) = *v23;
              if ( ContextPointers )
                ContextPointers->IntegerContext[v66] = v23;
              v67 = 1LL;
            }
            else
            {
              if ( (*(_BYTE *)ControlPc & 0xF0) != 0x40 || (*(_BYTE *)(ControlPc + 1) & 0xF8) != 0x58 )
              {
                v51 = (DWORD64 *)v17->Rsp;
                v17->Rip = *v51;
                v17->Rsp = (DWORD64)(v51 + 1);
                RtlpPopUserShadowStack(v17, v51, v23);
                return v8;
              }
              v23 = (unsigned __int64 *)v17->Rsp;
              v76 = *(_BYTE *)(ControlPc + 1) & 7 | (8LL * (*(_BYTE *)ControlPc & 1));
              *(&v17->Rax + v76) = *v23;
              if ( ContextPointers )
                ContextPointers->IntegerContext[v76] = v23;
              v67 = 2LL;
            }
            v17->Rsp += 8LL;
            ControlPc += v67;
          }
        }
        v17->Rsp = *(&v17->Rax + v21)
                 + (*(unsigned __int8 *)(ControlPc + 3) | ((*(unsigned __int8 *)(ControlPc + 4) | (*(unsigned __int16 *)(ControlPc + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_64;
    }
    ControlPc += 7LL;
    goto LABEL_64;
  }
  if ( ((v22 + 23) & 0xFD) != 0 )
  {
    if ( v22 == -1 )
    {
      v22 = -1;
      if ( v20[1] == 37 )
        goto LABEL_60;
    }
    if ( (v22 & 0xF8) == 0x48 && v20[1] == 0xFF )
    {
      v49 = (v20[2] & 0x38) == 32;
      goto LABEL_59;
    }
  }
  else
  {
    v23 = (unsigned __int64 *)&v20[-v11];
    if ( v22 == -21 )
      v58 = (char)v20[1] + 2;
    else
      v58 = *(_DWORD *)(v20 + 1) + 5;
    BeginAddress = FunctionEntry->BeginAddress;
    v60 = (unsigned __int64)v23 + v58;
    if ( v60 < BeginAddress || v60 >= FunctionEntry->EndAddress )
    {
      v80 = RtlpSameFunction((__int64)FunctionEntry, v11, (void *)(v60 + v11));
      if ( !v80 )
        goto LABEL_60;
      v49 = v60 == *v80;
LABEL_59:
      if ( v49 )
        goto LABEL_60;
    }
    else if ( v60 == BeginAddress )
    {
      v49 = (*(_BYTE *)v9 & 0x20) == 0;
      goto LABEL_59;
    }
  }
LABEL_19:
  v24 = 0;
  v25 = v98;
  v26 = ControlPc - v11;
  v93 = 0;
  v27 = *EstablisherFrame;
  v95 = *EstablisherFrame;
  while ( 1 )
  {
    v28 = (_BYTE *)(v97 + v25->UnwindInfoAddress);
    LODWORD(v29) = 0;
    v30 = v26 - v25->BeginAddress;
    v31 = 0;
    v94 = v30;
    v32 = v28[2];
    if ( v32 )
    {
      do
      {
        v33 = (unsigned __int8)v28[2 * (unsigned int)v29 + 5] >> 4;
        if ( v30 < (unsigned __int8)v28[2 * (unsigned int)v29 + 4] )
        {
          v81 = RtlpUnwindOpSlots(*(unsigned __int16 *)&v28[2 * (unsigned int)v29 + 4], (unsigned int)v29);
          v27 = v95;
          LODWORD(v29) = v81 + v29;
        }
        else
        {
          v34 = v28[2 * (unsigned int)v29 + 5] & 0xF;
          if ( v34 > 5 )
          {
            v61 = v34 - 6;
            if ( v61 )
            {
              v62 = v61 - 1;
              if ( v62 )
              {
                v63 = v62 - 1;
                if ( v63 )
                {
                  v82 = v63 - 1;
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
                    v91 = (unsigned int)v33;
                    v92 = (struct _M128A *)(v27
                                          + ((unsigned __int64)*(unsigned __int16 *)&v28[2 * v29 + 4] << 16)
                                          + *(unsigned __int16 *)&v28[2 * (unsigned int)(v29 - 1) + 4]);
                    v17->FltSave.XmmRegisters[v91].Low = v92->Low;
                    v17->FltSave.XmmRegisters[v91].High = v92->High;
                    if ( ContextPointers )
                      ContextPointers->FloatingContext[v33] = v92;
                  }
                }
                else
                {
                  v29 = (unsigned int)(v29 + 1);
                  v64 = (unsigned int)v33;
                  v65 = (struct _M128A *)(v27 + 16LL * *(unsigned __int16 *)&v28[2 * v29 + 4]);
                  v17->FltSave.XmmRegisters[v64].Low = v65->Low;
                  v17->FltSave.XmmRegisters[v64].High = v65->High;
                  if ( ContextPointers )
                    ContextPointers->FloatingContext[v33] = v65;
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
            v90 = (unsigned __int64 *)(v27
                                     + ((unsigned __int64)*(unsigned __int16 *)&v28[2 * v29 + 4] << 16)
                                     + *(unsigned __int16 *)&v28[2 * (unsigned int)(v29 - 1) + 4]);
            *(&v17->Rax + v33) = *v90;
            if ( ContextPointers )
              ContextPointers->IntegerContext[v33] = v90;
          }
          else if ( (v28[2 * (unsigned int)v29 + 5] & 0xF) != 0 )
          {
            v41 = v34 - 1;
            if ( v41 )
            {
              v42 = v41 - 1;
              if ( v42 )
              {
                v43 = v42 - 1;
                if ( v43 )
                {
                  if ( v43 != 1 )
                    goto LABEL_163;
                  v29 = (unsigned int)(v29 + 1);
                  v44 = (unsigned __int64 *)(v27 + 8LL * *(unsigned __int16 *)&v28[2 * v29 + 4]);
                  *(&v17->Rax + v33) = *v44;
                  if ( ContextPointers )
                    ContextPointers->IntegerContext[v33] = v44;
                }
                else
                {
                  v55 = *(&v17->Rax + (v28[3] & 0xF));
                  v17->Rsp = v55;
                  v17->Rsp = v55 - (v28[3] & 0xF0);
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
        v30 = v94;
        v32 = v28[2];
      }
      while ( (unsigned int)v29 < v32 );
      v24 = v93;
    }
    if ( (*v28 & 0x20) == 0 )
      break;
    v56 = (unsigned int)v32 + 1;
    if ( (v32 & 1) == 0 )
      v56 = v32;
    v93 = ++v24;
    v25 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)&v28[2 * v56 + 4];
    v98 = v25;
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
  if ( v96 )
  {
    v37 = (_BYTE *)(v97 + v98->UnwindInfoAddress);
    if ( (int)ControlPc - (int)v97 - v98->BeginAddress >= (unsigned __int8)v37[1]
      && ((*v37 >> 3) & (unsigned __int8)v96) != 0 )
    {
      v38 = (unsigned __int8)v37[2];
      v39 = v38 + 1;
      if ( (v38 & 1) == 0 )
        v39 = (unsigned __int8)v37[2];
      *HandlerData = &v37[2 * (v39 + 2) + 4];
      return (PEXCEPTION_ROUTINE)(v97 + *(unsigned int *)&v37[2 * v39 + 4]);
    }
  }
  return v8;
}
