/*
 * XREFs of CmpAddDriverToList @ 0x1409CE9F8
 * Callers:
 *     CmpFindDrivers @ 0x1409CF508 (CmpFindDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpFindValueByName @ 0x14073EA48 (CmpFindValueByName.c)
 *     CmpValueToData @ 0x14073EA78 (CmpValueToData.c)
 *     CmpFindTagIndex @ 0x1409CE830 (CmpFindTagIndex.c)
 *     CmpGetNodeName @ 0x1409CFA0C (CmpGetNodeName.c)
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
  __int64 v14; // r15
  const WCHAR *NodeName; // rax
  const WCHAR *v16; // r13
  char *v17; // rax
  PCUNICODE_STRING v18; // rax
  unsigned __int16 v19; // cx
  _WORD *v20; // r13
  unsigned int ValueByName; // r15d
  ULONG_PTR v22; // rax
  PVOID v23; // r15
  unsigned int v24; // r15d
  wchar_t *v25; // rax
  void (__fastcall *v26)(ULONG_PTR, __int64 *); // rax
  __int64 (__fastcall *v27)(_QWORD, _QWORD, __int64); // rax
  const UNICODE_STRING *v28; // r15
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
  __int64 v44; // r13
  unsigned int v45; // eax
  ULONG_PTR v47; // rax
  unsigned __int16 v48; // ax
  __int64 (__fastcall *v49)(__int64, _QWORD, __int64); // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  size_t Size; // [rsp+38h] [rbp-71h] BYREF
  __int64 v55; // [rsp+40h] [rbp-69h]
  _DWORD v56[2]; // [rsp+48h] [rbp-61h] BYREF
  UNICODE_STRING v57; // [rsp+50h] [rbp-59h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-49h] BYREF
  __int64 v59; // [rsp+70h] [rbp-39h] BYREF
  __int64 v60; // [rsp+78h] [rbp-31h] BYREF
  __int64 v61; // [rsp+80h] [rbp-29h] BYREF
  __int64 v62; // [rsp+88h] [rbp-21h] BYREF
  _DWORD v63[2]; // [rsp+90h] [rbp-19h] BYREF
  const WCHAR *v64; // [rsp+98h] [rbp-11h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-9h] BYREF
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
  v59 = 0xFFFFFFFFLL;
  v56[0] = -1;
  v56[1] = 0;
  v12 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8);
  v66 = 0;
  *(_QWORD *)&v57.Length = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  a7 = 0;
  v13 = v12(BugCheckParameter3, a2, v63);
  v55 = v13;
  v14 = v13;
  if ( v13 )
  {
    NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, v13, &v66);
    v64 = NodeName;
    v16 = NodeName;
    if ( NodeName )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) < 0
        || (v17 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(
                            144LL,
                            0LL,
                            540101955LL),
            (v11 = v17) == 0LL) )
      {
        v44 = v14;
        goto LABEL_34;
      }
      memset(v17, 0, 0x90uLL);
      v18 = Source;
      v19 = v66;
      *((_QWORD *)v11 + 8) = BugCheckParameter3;
      v10 = v11;
      v64 = 0LL;
      *(UNICODE_STRING *)(v11 + 72) = *v18;
      *((_QWORD *)v11 + 5) = 0LL;
      *((_QWORD *)v11 + 3) = 0LL;
      *((_QWORD *)v11 + 16) = v16;
      v20 = v11 + 120;
      *((_WORD *)v11 + 60) = v19 - 2;
      *((_WORD *)v11 + 61) = v19;
      ValueByName = CmpFindValueByName(BugCheckParameter3, v14, (int)&CmpImagePathString);
      if ( ValueByName == -1 )
      {
        v49 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24);
        v50 = (unsigned int)(unsigned __int16)*v20 + 46;
        v57.MaximumLength = *v20 + 46;
        v57.Length = 0;
        v57.Buffer = (wchar_t *)v49(v50, 0LL, 540233027LL);
        if ( v57.Buffer )
        {
          if ( RtlAppendUnicodeToString(&v57, L"System32\\Drivers\\") < 0
            || RtlAppendUnicodeStringToString(&v57, (PCUNICODE_STRING)(v11 + 120)) < 0
            || RtlAppendUnicodeToString(&v57, L".sys") < 0 )
          {
            Buffer = v57.Buffer;
            goto LABEL_58;
          }
          Buffer = v57.Buffer;
LABEL_10:
          v27 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24);
          Destination.Length = 0;
          v28 = Source;
          Destination.MaximumLength = *v20 + Source->Length + 92;
          Destination.Buffer = (wchar_t *)v27(Destination.MaximumLength, 0LL, 540298563LL);
          v9 = Destination.Buffer;
          if ( Destination.Buffer )
          {
            if ( RtlAppendUnicodeStringToString(&Destination, &CmpRegistryRootKeyPath) < 0
              || RtlAppendUnicodeStringToString(&Destination, v28) < 0
              || RtlAppendUnicodeStringToString(&Destination, &CmpServicesSubKeyPath) < 0
              || RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(v11 + 120)) < 0 )
            {
              v9 = Destination.Buffer;
            }
            else
            {
              v29 = *((_QWORD *)v11 + 3);
              if ( v29 )
                (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(v29, *((unsigned __int16 *)v11 + 8));
              v30 = v57;
              v31 = *((_QWORD *)v11 + 5);
              Buffer = 0LL;
              *(_QWORD *)&v57.Length = 0LL;
              *((UNICODE_STRING *)v11 + 1) = v30;
              if ( v31 )
                (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 32))(
                  v31,
                  *((unsigned __int16 *)v11 + 16));
              v32 = Destination;
              v33 = a6;
              v9 = 0LL;
              *(_QWORD *)&Destination.Length = 0LL;
              *((UNICODE_STRING *)v11 + 2) = v32;
              v34 = *(_QWORD *)v33;
              if ( *(_QWORD *)(*(_QWORD *)v33 + 8LL) != v33 )
                __fastfail(3u);
              v35 = v55;
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
                        v56);
                if ( !v37 )
                  goto LABEL_58;
                v38 = CmpValueToData(BugCheckParameter3, v36, v37, (unsigned int *)&Size, (__int64)&v60);
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v56);
                if ( !v38 )
                  goto LABEL_58;
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
                      v56);
              if ( v40 )
              {
                *((_QWORD *)v11 + 14) = CmpValueToData(
                                          BugCheckParameter3,
                                          v39,
                                          v40,
                                          (unsigned int *)&Size,
                                          (__int64)&v61);
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v56);
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
                      v44 = v55;
                      v45 = CmpFindValueByName(BugCheckParameter3, v55, (int)&CmpTagString);
                      if ( v45 == -1 )
                        *((_DWORD *)v11 + 34) = -1;
                      else
                        *((_DWORD *)v11 + 34) = CmpFindTagIndex(BugCheckParameter3a, v45, v68, v41);
                      a7 = 1;
LABEL_34:
                      v10 = 0LL;
                      if ( v64 )
                        (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v64, v66);
                      goto LABEL_36;
                    }
                    v47 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                            BugCheckParameter3,
                            v43,
                            v56);
                    if ( v47 )
                    {
                      *((_QWORD *)v11 + 12) = CmpValueToData(
                                                BugCheckParameter3,
                                                v43,
                                                v47,
                                                (unsigned int *)&Size,
                                                (__int64)&v62);
                      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v56);
                      if ( *((_QWORD *)v11 + 12) )
                      {
                        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(
                          BugCheckParameter3,
                          &v62);
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
            }
          }
LABEL_58:
          v44 = v55;
          goto LABEL_36;
        }
      }
      else
      {
        v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                BugCheckParameter3,
                ValueByName,
                v56);
        if ( !v22 )
          goto LABEL_58;
        v23 = CmpValueToData(BugCheckParameter3, ValueByName, v22, (unsigned int *)&Size, (__int64)&v59);
        *(_QWORD *)&DestinationString.Length = v23;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v56);
        if ( !v23 )
          goto LABEL_58;
        v24 = Size;
        v25 = (wchar_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                           (unsigned int)Size,
                           0LL,
                           540233027LL);
        v57.Buffer = v25;
        Buffer = v25;
        if ( v25 )
        {
          memmove(v25, *(const void **)&DestinationString.Length, v24);
          v26 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16);
          v57.Length = v24;
          v57.MaximumLength = v24;
          v26(BugCheckParameter3, &v59);
          goto LABEL_10;
        }
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v59);
      }
      v44 = v55;
      goto LABEL_38;
    }
    v44 = v14;
  }
  else
  {
    v44 = 0LL;
  }
LABEL_36:
  if ( Buffer )
    (*(void (__fastcall **)(wchar_t *, _QWORD))(BugCheckParameter3 + 32))(Buffer, v57.Length);
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
  if ( v44 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v63);
  return a7;
}
