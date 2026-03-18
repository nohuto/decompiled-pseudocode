/*
 * XREFs of CmpAddDriverToList @ 0x140A13070
 * Callers:
 *     CmpFindDrivers @ 0x140A13674 (CmpFindDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpFindValueByName @ 0x140634324 (CmpFindValueByName.c)
 *     CmpValueToData @ 0x14076A054 (CmpValueToData.c)
 *     CmpFindTagIndex @ 0x140A12EA8 (CmpFindTagIndex.c)
 *     CmpGetNodeName @ 0x140A13970 (CmpGetNodeName.c)
 */

char __fastcall CmpAddDriverToList(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        PCUNICODE_STRING Source,
        __int64 a6,
        char a7)
{
  wchar_t *Buffer; // r14
  wchar_t *v9; // r12
  char *v10; // rsi
  char *v11; // rdi
  __int64 (__fastcall *v12)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v13; // rax
  const WCHAR *NodeName; // rax
  const WCHAR *v15; // r15
  char *v16; // rax
  PCUNICODE_STRING v17; // rax
  unsigned __int16 v18; // cx
  int v19; // edx
  _WORD *v20; // r13
  unsigned int ValueByName; // r15d
  ULONG_PTR v22; // rax
  PVOID v23; // r15
  unsigned int v24; // r15d
  wchar_t *v25; // rax
  void (__fastcall *v26)(ULONG_PTR, __int64 *); // rax
  const UNICODE_STRING *v27; // r15
  __int64 (__fastcall *v28)(_QWORD, _QWORD, __int64); // rax
  __int64 v29; // rcx
  UNICODE_STRING v30; // xmm0
  __int64 v31; // rcx
  UNICODE_STRING v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // r13d
  unsigned int v36; // r15d
  ULONG_PTR v37; // rax
  _DWORD *v38; // r15
  unsigned int v39; // r15d
  ULONG_PTR v40; // rax
  int v41; // r15d
  unsigned __int16 v42; // ax
  unsigned int v43; // r13d
  unsigned int v44; // eax
  char v45; // r13
  ULONG_PTR v47; // rax
  unsigned __int16 v48; // ax
  __int64 (__fastcall *v49)(__int64, _QWORD, __int64); // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  size_t Size; // [rsp+38h] [rbp-71h] BYREF
  _DWORD v55[2]; // [rsp+40h] [rbp-69h] BYREF
  UNICODE_STRING v56; // [rsp+48h] [rbp-61h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-51h] BYREF
  __int64 v58; // [rsp+68h] [rbp-41h] BYREF
  __int64 v59; // [rsp+70h] [rbp-39h]
  __int64 v60; // [rsp+78h] [rbp-31h] BYREF
  __int64 v61; // [rsp+80h] [rbp-29h] BYREF
  __int64 v62; // [rsp+88h] [rbp-21h] BYREF
  _DWORD v63[2]; // [rsp+90h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-11h] BYREF
  void *Src; // [rsp+A8h] [rbp-1h]
  unsigned __int16 v66; // [rsp+F8h] [rbp+4Fh] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+108h] [rbp+5Fh]
  unsigned int v68; // [rsp+110h] [rbp+67h]

  v68 = a4;
  BugCheckParameter3a = a3;
  v63[1] = 0;
  v63[0] = -1;
  v62 = 0xFFFFFFFFLL;
  Buffer = 0LL;
  v61 = 0xFFFFFFFFLL;
  v9 = 0LL;
  v10 = 0LL;
  v60 = 0xFFFFFFFFLL;
  v11 = 0LL;
  v58 = 0xFFFFFFFFLL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v55[0] = -1;
  v55[1] = 0;
  v12 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8);
  v66 = 0;
  *(_QWORD *)&v56.Length = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  a7 = 0;
  v13 = v12(BugCheckParameter3, a2, v63);
  v59 = v13;
  if ( !v13 )
    goto LABEL_60;
  NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, v13, &v66);
  v15 = NodeName;
  if ( !NodeName )
  {
    v45 = 0;
    goto LABEL_36;
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) < 0 )
  {
    v45 = 0;
    goto LABEL_34;
  }
  v16 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(144LL, 0LL, 540101955LL);
  v11 = v16;
  if ( !v16 )
  {
    v45 = 0;
    goto LABEL_34;
  }
  memset(v16, 0, 0x90uLL);
  v17 = Source;
  v18 = v66;
  v10 = v11;
  v19 = v59;
  *((_QWORD *)v11 + 8) = BugCheckParameter3;
  *(UNICODE_STRING *)(v11 + 72) = *v17;
  *((_QWORD *)v11 + 5) = 0LL;
  *((_QWORD *)v11 + 3) = 0LL;
  v20 = v11 + 120;
  *((_QWORD *)v11 + 16) = v15;
  *((_WORD *)v11 + 60) = v18 - 2;
  *((_WORD *)v11 + 61) = v18;
  ValueByName = CmpFindValueByName(BugCheckParameter3, v19, (int)&CmpImagePathString);
  if ( ValueByName != -1 )
  {
    v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            ValueByName,
            v55);
    if ( !v22
      || (v23 = CmpValueToData(BugCheckParameter3, ValueByName, v22, (unsigned int *)&Size, (__int64)&v58),
          Src = v23,
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v55),
          !v23) )
    {
      v45 = 0;
      goto LABEL_36;
    }
    v24 = Size;
    v25 = (wchar_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                       (unsigned int)Size,
                       0LL,
                       540233027LL);
    v56.Buffer = v25;
    Buffer = v25;
    if ( v25 )
    {
      memmove(v25, Src, v24);
      v26 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16);
      v56.Length = v24;
      v56.MaximumLength = v24;
      v26(BugCheckParameter3, &v58);
      goto LABEL_10;
    }
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v58);
LABEL_56:
    v45 = 0;
    goto LABEL_38;
  }
  v49 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24);
  v50 = (unsigned int)(unsigned __int16)*v20 + 46;
  v56.MaximumLength = *v20 + 46;
  v56.Buffer = (wchar_t *)v49(v50, 0LL, 540233027LL);
  if ( !v56.Buffer )
    goto LABEL_56;
  if ( RtlAppendUnicodeToString(&v56, L"System32\\Drivers\\") < 0
    || RtlAppendUnicodeStringToString(&v56, (PCUNICODE_STRING)(v11 + 120)) < 0
    || RtlAppendUnicodeToString(&v56, L".sys") < 0 )
  {
    Buffer = v56.Buffer;
    v45 = 0;
    goto LABEL_36;
  }
  Buffer = v56.Buffer;
LABEL_10:
  v27 = Source;
  v28 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24);
  Destination.MaximumLength = *v20 + Source->Length + 92;
  v9 = (wchar_t *)v28(Destination.MaximumLength, 0LL, 540298563LL);
  Destination.Buffer = v9;
  if ( v9 )
  {
    if ( RtlAppendUnicodeStringToString(&Destination, &CmpRegistryRootKeyPath) >= 0
      && RtlAppendUnicodeStringToString(&Destination, v27) >= 0
      && RtlAppendUnicodeStringToString(&Destination, &CmpServicesSubKeyPath) >= 0
      && RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(v11 + 120)) >= 0 )
    {
      v29 = *((_QWORD *)v11 + 3);
      if ( v29 )
        (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v29, *((unsigned __int16 *)v11 + 8));
      v30 = v56;
      v31 = *((_QWORD *)v11 + 5);
      Buffer = 0LL;
      *(_QWORD *)&v56.Length = 0LL;
      *((UNICODE_STRING *)v11 + 1) = v30;
      if ( v31 )
        (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v31, *((unsigned __int16 *)v11 + 16));
      v32 = Destination;
      v33 = a6;
      v9 = 0LL;
      *(_QWORD *)&Destination.Length = 0LL;
      *((UNICODE_STRING *)v11 + 2) = v32;
      v34 = *(_QWORD *)v33;
      if ( *(_QWORD *)(*(_QWORD *)v33 + 8LL) != v33 )
        __fastfail(3u);
      v35 = v59;
      *(_QWORD *)v11 = v34;
      *((_QWORD *)v11 + 1) = v33;
      v10 = 0LL;
      *(_QWORD *)(v34 + 8) = v11;
      *(_QWORD *)v33 = v11;
      v36 = CmpFindValueByName(BugCheckParameter3, v35, (int)&CmpErrorControlString);
      if ( v36 == -1 )
      {
        *((_DWORD *)v11 + 35) = 1;
      }
      else
      {
        v37 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                BugCheckParameter3,
                v36,
                v55);
        if ( !v37 )
          goto LABEL_60;
        v38 = CmpValueToData(BugCheckParameter3, v36, v37, (unsigned int *)&Size, (__int64)&v60);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v55);
        if ( !v38 )
          goto LABEL_60;
        *((_DWORD *)v11 + 35) = *v38;
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v60);
      }
      v39 = CmpFindValueByName(BugCheckParameter3, v35, (int)&CmpGroupString);
      if ( v39 == -1 )
      {
        v41 = (_DWORD)v11 + 104;
        *((_WORD *)v11 + 52) = 0;
        *((_WORD *)v11 + 53) = 0;
        *((_QWORD *)v11 + 14) = 0LL;
        goto LABEL_29;
      }
      v40 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v39,
              v55);
      if ( v40 )
      {
        *((_QWORD *)v11 + 14) = CmpValueToData(BugCheckParameter3, v39, v40, (unsigned int *)&Size, (__int64)&v61);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v55);
        if ( *((_QWORD *)v11 + 14) )
        {
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v61);
          v41 = (_DWORD)v11 + 104;
          v42 = Size - 2;
          *((_WORD *)v11 + 52) = Size - 2;
          if ( v42 <= (unsigned __int16)Size )
          {
            *((_WORD *)v11 + 53) = v42;
LABEL_29:
            v43 = CmpFindValueByName(BugCheckParameter3, v35, (int)&CmpDriverDependencyString);
            if ( v43 == -1 )
            {
              *((_DWORD *)v11 + 22) = 0;
              *((_QWORD *)v11 + 12) = 0LL;
LABEL_31:
              v44 = CmpFindValueByName(BugCheckParameter3, v59, (int)&CmpTagString);
              if ( v44 == -1 )
                *((_DWORD *)v11 + 34) = -1;
              else
                *((_DWORD *)v11 + 34) = CmpFindTagIndex(BugCheckParameter3a, v44, v68, v41);
              v45 = 1;
              v15 = 0LL;
LABEL_34:
              v10 = 0LL;
              if ( v15 )
                (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v15, v66);
              goto LABEL_36;
            }
            v47 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                    BugCheckParameter3,
                    v43,
                    v55);
            if ( v47 )
            {
              *((_QWORD *)v11 + 12) = CmpValueToData(BugCheckParameter3, v43, v47, (unsigned int *)&Size, (__int64)&v62);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v55);
              if ( *((_QWORD *)v11 + 12) )
              {
                (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v62);
                v48 = Size - 2;
                *((_WORD *)v11 + 44) = Size - 2;
                if ( v48 <= (unsigned __int16)Size )
                {
                  *((_WORD *)v11 + 45) = v48;
                  goto LABEL_31;
                }
              }
            }
          }
        }
      }
LABEL_60:
      v45 = 0;
      goto LABEL_36;
    }
    v9 = Destination.Buffer;
    v45 = a7;
  }
  else
  {
    v45 = 0;
  }
LABEL_36:
  if ( Buffer )
    (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(Buffer, v56.Length);
LABEL_38:
  if ( v9 )
    (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(v9, Destination.Length);
  if ( v10 )
  {
    v51 = *((_QWORD *)v10 + 3);
    if ( v51 )
      (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v51, *((unsigned __int16 *)v10 + 8));
    v52 = *((_QWORD *)v10 + 5);
    if ( v52 )
      (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v52, *((unsigned __int16 *)v10 + 16));
    v53 = *((_QWORD *)v11 + 16);
    if ( v53 )
      (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v53, *((unsigned __int16 *)v11 + 60));
    (*(void (__fastcall **)(char *, __int64))(BugCheckParameter3 + 32))(v11, 144LL);
  }
  if ( v59 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v63);
  return v45;
}
