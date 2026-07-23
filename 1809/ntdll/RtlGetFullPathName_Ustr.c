/*
 * XREFs of RtlGetFullPathName_Ustr @ 0x18000DB20
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18000D640 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpGetFullPath @ 0x180028FE4 (LdrpGetFullPath.c)
 *     RtlGetFullPathName_UstrEx @ 0x18002B310 (RtlGetFullPathName_UstrEx.c)
 *     RtlGetFullPathName_UEx @ 0x1800357E0 (RtlGetFullPathName_UEx.c)
 *     RtlSetCurrentDirectory_U @ 0x18007B770 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlpIsDosDeviceName_Ustr @ 0x18000E580 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18000E8BC (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlUpcaseUnicodeChar @ 0x18003AF90 (RtlUpcaseUnicodeChar.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180056530 (RtlQueryEnvironmentVariable_U.c)
 *     RtlpCheckRelativeDrive @ 0x1800582CC (RtlpCheckRelativeDrive.c)
 *     RtlUnicodeStringCbCatStringN @ 0x18006E6FC (RtlUnicodeStringCbCatStringN.c)
 *     RtlUnicodeStringCopy @ 0x18006E910 (RtlUnicodeStringCopy.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007BAB8 (RtlpReferenceCurrentDirectory.c)
 *     RtlpComputeBackupIndex @ 0x180083080 (RtlpComputeBackupIndex.c)
 *     RtlpCheckDeviceName @ 0x18008B3D8 (RtlpCheckDeviceName.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlUnicodeStringCopyString @ 0x1800CE5F8 (RtlUnicodeStringCopyString.c)
 */

__int64 __fastcall RtlGetFullPathName_Ustr(
        unsigned __int16 *a1,
        unsigned int a2,
        wchar_t *a3,
        _QWORD *a4,
        _BYTE *a5,
        __int64 a6)
{
  wchar_t *Buffer; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // edi
  _WORD *v10; // rdx
  unsigned int i; // ecx
  __int16 v12; // ax
  unsigned int IsDosDeviceName_Ustr; // eax
  int v14; // eax
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rdx
  unsigned int j; // ebx
  unsigned int v18; // r10d
  unsigned int v19; // r15d
  unsigned int v20; // edx
  unsigned int k; // ecx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // ecx
  int v25; // ecx
  wchar_t v26; // ax
  __int64 v27; // r8
  unsigned int v28; // ebx
  wchar_t *v29; // rcx
  unsigned __int16 v30; // r9
  unsigned int m; // ecx
  unsigned int v32; // edx
  __int64 v33; // r9
  __int16 v34; // cx
  __int64 v35; // rax
  __int16 v36; // cx
  wchar_t v37; // cx
  wchar_t v38; // cx
  unsigned __int64 v39; // rax
  int v40; // r8d
  __int16 v41; // dx
  _CURDIR *v42; // rax
  _CURDIR *v43; // rcx
  _CURDIR *v44; // rax
  _CURDIR *v45; // rsi
  int v46; // eax
  __int16 v47; // ax
  _CURDIR *v48; // rax
  _CURDIR *p_CurrentDirectory; // rsi
  WCHAR v50; // ax
  WCHAR v51; // r15
  NTSTATUS v52; // eax
  unsigned __int16 Length; // cx
  unsigned __int64 v54; // rax
  __int64 result; // rax
  unsigned int v56; // edi
  __int64 v57; // rsi
  char v58; // [rsp+20h] [rbp-E8h]
  bool v59; // [rsp+21h] [rbp-E7h]
  unsigned int v60; // [rsp+28h] [rbp-E0h]
  unsigned int v61; // [rsp+2Ch] [rbp-DCh]
  _UNICODE_STRING Value; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v63; // [rsp+48h] [rbp-C0h]
  _CURDIR *v64; // [rsp+50h] [rbp-B8h]
  int v65; // [rsp+58h] [rbp-B0h]
  PVOID BaseAddress; // [rsp+60h] [rbp-A8h]
  _UNICODE_STRING DosPath; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t v68; // [rsp+78h] [rbp-90h]
  _CURDIR *v69; // [rsp+80h] [rbp-88h]
  WCHAR v70; // [rsp+88h] [rbp-80h]
  WCHAR v71; // [rsp+8Ch] [rbp-7Ch]
  int v72; // [rsp+90h] [rbp-78h]
  unsigned int v73; // [rsp+94h] [rbp-74h]
  unsigned int v74; // [rsp+98h] [rbp-70h]
  NTSTATUS v75; // [rsp+9Ch] [rbp-6Ch]
  _QWORD *v76; // [rsp+A0h] [rbp-68h]
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v79[6]; // [rsp+BAh] [rbp-4Eh]

  v76 = a4;
  Buffer = a3;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0xFFFF;
  if ( a2 <= 0xFFFF )
    v8 = a2;
  *(_QWORD *)a6 = 0LL;
  v73 = *a1;
  v9 = v73 >> 1;
  if ( !(v73 >> 1) )
    return 0LL;
  v10 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v10 )
    return 0LL;
  for ( i = v73 >> 1; i && v10[i - 1] == 32; --i )
    ;
  if ( !i )
    return 0LL;
  v12 = v10[v9 - 1];
  v59 = v12 != 92 && v12 != 47;
  v63 = v8 >> 1;
  v74 = v8 >> 1;
  memset(a3, 0, v8);
  *(_QWORD *)&Value.Length = 0LL;
  *(_DWORD *)&Value.MaximumLength = (unsigned __int16)(2 * (v8 >> 1));
  Value.Buffer = Buffer;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( IsDosDeviceName_Ustr )
  {
    v56 = HIWORD(IsDosDeviceName_Ustr);
    v57 = (unsigned __int16)IsDosDeviceName_Ustr;
    if ( !a5 || !v56 || (int)RtlpCheckDeviceName(a1, v56, a5) >= 0 && !*a5 )
    {
      if ( (int)v57 + 8 >= (unsigned int)(unsigned __int16)(2 * (v8 >> 1)) )
      {
        result = 0LL;
        if ( (unsigned int)(v57 + 10) <= 0xFFFF )
          return (unsigned int)(v57 + 10);
      }
      else
      {
        RtlUnicodeStringCopy(&Value, L"\b\n");
        RtlUnicodeStringCbCatStringN(&Value, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v56 >> 1), v57);
        return (unsigned int)(v57 + 8);
      }
      return result;
    }
    return 0LL;
  }
  v14 = RtlDetermineDosPathNameType_Ustr(a1);
  *(_DWORD *)a6 = v14;
  v15 = 0LL;
  DosPath = (_UNICODE_STRING)0LL;
  v16 = 0LL;
  v64 = 0LL;
  BaseAddress = 0LL;
  v58 = 0;
  j = 0;
  if ( v14 != 2 )
  {
    switch ( v14 )
    {
      case 1:
        v40 = 0;
        v72 = 0;
        for ( j = 2; j < v9; ++j )
        {
          v41 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v41 == 92 || v41 == 47 )
          {
            v72 = ++v40;
            if ( v40 == 2 )
              break;
          }
        }
        v61 = j;
        v65 = j;
        DosPath.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * j;
        DosPath.MaximumLength = a1[1];
        goto LABEL_103;
      case 3:
        v48 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL, 0LL);
        v64 = v48;
        BaseAddress = v48;
        v58 = 1;
        if ( v48 )
        {
          p_CurrentDirectory = v48 + 1;
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v64 = 0LL;
        }
        v69 = p_CurrentDirectory;
        v70 = RtlUpcaseUnicodeChar(*p_CurrentDirectory->DosPath.Buffer);
        v50 = RtlUpcaseUnicodeChar(**((_WORD **)a1 + 1));
        v51 = v50;
        v71 = v50;
        if ( v70 == v50 )
        {
          DosPath = p_CurrentDirectory->DosPath;
          RtlUnicodeStringCopy(&Value, &DosPath);
          Buffer = Value.Buffer;
        }
        else
        {
          RtlpCheckRelativeDrive(v50);
          SourceString = 61;
          *(_WORD *)v79 = v51;
          *(_DWORD *)&v79[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v52 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &Value);
          v75 = v52;
          if ( v52 < 0 )
          {
            if ( v52 == -1073741789 )
            {
              if ( (unsigned int)Value.Length + 2 > 0xFFFF )
              {
                v19 = 0;
                v60 = 0;
                Buffer = Value.Buffer;
                v28 = v63;
                goto LABEL_52;
              }
              DosPath.Length = Value.Length + 2;
              Buffer = Value.Buffer;
            }
            else
            {
              Value.Length = 0;
              SourceString = v51;
              *(_DWORD *)v79 = 6029370;
              *(_WORD *)&v79[4] = 0;
              RtlUnicodeStringCopyString(&Value, &SourceString);
              DosPath.Length = 8;
              Buffer = Value.Buffer;
            }
          }
          else
          {
            Length = Value.Length;
            v54 = (unsigned __int64)Value.Length >> 1;
            if ( (unsigned int)v54 <= 3 || (unsigned int)v54 >= v63 )
            {
              Buffer = Value.Buffer;
            }
            else
            {
              Buffer = Value.Buffer;
              Value.Buffer[(unsigned int)v54] = 92;
              Value.Length = Length + 2;
            }
            DosPath.Length = Value.Length;
          }
        }
        v18 = 3;
        v65 = 3;
        j = 2;
        goto LABEL_19;
      case 4:
        LOBYTE(v15) = 1;
        v44 = (_CURDIR *)RtlpReferenceCurrentDirectory(v15, 0LL);
        v64 = v44;
        BaseAddress = v44;
        v58 = 1;
        if ( v44 )
        {
          v45 = v44 + 1;
        }
        else
        {
          v45 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v64 = 0LL;
          j = 0;
        }
        v69 = v45;
        v46 = RtlpComputeBackupIndex(v45);
        v61 = v46;
        v65 = v46;
        DosPath = v45->DosPath;
        if ( v46 == 3 )
          v47 = 4;
        else
          v47 = 2 * v46;
        DosPath.Length = v47;
        goto LABEL_103;
      case 5:
        v42 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL, 0LL);
        v64 = v42;
        BaseAddress = v42;
        v58 = 1;
        if ( v42 )
        {
          v43 = v42 + 1;
          *(_DWORD *)(a6 + 4) = v42[1].Handle;
        }
        else
        {
          v43 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v64 = 0LL;
          j = 0;
        }
        v69 = v43;
        DosPath = v43->DosPath;
        v61 = RtlpComputeBackupIndex(v43);
        v65 = v61;
LABEL_103:
        RtlUnicodeStringCopy(&Value, &DosPath);
        Buffer = Value.Buffer;
        v18 = v61;
        goto LABEL_19;
      case 6:
      case 7:
        v65 = 4;
        j = 4;
        if ( v9 < 4 )
          j = v9;
        DosPath = *(_UNICODE_STRING *)L"\b\n";
        RtlUnicodeStringCopy(&Value, &DosPath);
        Buffer = Value.Buffer;
        if ( Value.Length >= 6u )
          Value.Buffer[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v18 = 4;
        if ( *(_DWORD *)a6 == 7 )
          v59 = 0;
        goto LABEL_19;
      default:
        v19 = 0;
        v60 = 0;
        v28 = v63;
        goto LABEL_147;
    }
  }
  v18 = 3;
  v65 = 3;
LABEL_19:
  v19 = DosPath.Length;
  v20 = v73 + DosPath.Length - 2 * j;
  if ( (unsigned __int64)v20 + 2 <= v8 )
    goto LABEL_20;
  if ( v9 > 1 || **((_WORD **)a1 + 1) != 46 )
  {
    v32 = v20 + 2;
    if ( v32 > 0xFFFF )
      v32 = 0;
    v19 = v32;
    v60 = v32;
    v28 = v63;
    v16 = (volatile signed __int32 *)v64;
    goto LABEL_147;
  }
  if ( v9 != 1 )
  {
    v19 = 0;
    if ( v20 <= 0xFFFF )
      v19 = v73 + DosPath.Length - 2 * j;
    v28 = v63;
    goto LABEL_51;
  }
  if ( DosPath.Length != 8 )
  {
    if ( v8 < DosPath.Length )
    {
      v28 = v63;
      v60 = DosPath.Length;
      v16 = (volatile signed __int32 *)v64;
      goto LABEL_147;
    }
    v39 = (unsigned __int64)Value.Length >> 1;
    if ( (_DWORD)v39 && Buffer[(unsigned int)(v39 - 1)] == 92 )
      Value.Length -= 2;
    goto LABEL_20;
  }
  if ( v8 <= 8 )
  {
    v19 = 10;
    v28 = v63;
LABEL_51:
    v60 = v19;
LABEL_52:
    v16 = (volatile signed __int32 *)v64;
    goto LABEL_147;
  }
LABEL_20:
  for ( k = 0; k < Value.Length >> 1; ++k )
  {
    if ( Buffer[k] == 47 )
      Buffer[k] = 92;
  }
  v22 = Value.Length >> 1;
  while ( j < v9 )
  {
    v23 = *((_QWORD *)a1 + 1);
    v24 = *(unsigned __int16 *)(v23 + 2LL * j);
    if ( v24 == 92 )
      goto LABEL_36;
    v25 = v24 - 46;
    if ( v25 )
    {
      if ( v25 != 1 )
        goto LABEL_27;
LABEL_36:
      if ( !(_DWORD)v22 || Buffer[(unsigned int)(v22 - 1)] != 92 )
      {
        Buffer[v22] = 92;
        v22 = (unsigned int)(v22 + 1);
      }
      goto LABEL_35;
    }
    v33 = j + 1;
    if ( (_DWORD)v33 != v9 )
    {
      v34 = *(_WORD *)(v23 + 2 * v33);
      if ( v34 == 92 || v34 == 47 )
      {
        ++j;
      }
      else if ( v34 == 46
             && ((v35 = j + 2, (_DWORD)v35 == v9) || (v36 = *(_WORD *)(v23 + 2 * v35), v36 == 92) || v36 == 47) )
      {
        while ( (unsigned int)v22 >= v18 )
        {
          v68 = Buffer[v22];
          v37 = v68;
          Buffer[v22] = 0;
          if ( v37 == 92 )
          {
            while ( (unsigned int)v22 >= v18 )
            {
              v68 = Buffer[v22];
              v38 = v68;
              Buffer[v22] = 0;
              if ( v38 == 92 )
              {
                if ( (unsigned int)v22 < v18 )
                  goto LABEL_92;
                goto LABEL_80;
              }
              v22 = (unsigned int)(v22 - 1);
            }
            break;
          }
          v22 = (unsigned int)(v22 - 1);
        }
LABEL_92:
        v22 = (unsigned int)(v22 + 1);
LABEL_80:
        ++j;
      }
      else
      {
LABEL_27:
        while ( j < v9 )
        {
          v26 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v26 == 92 || v26 == 47 )
          {
            if ( j < v9 && (unsigned int)v22 >= 2 )
            {
              v27 = (unsigned int)(v22 - 1);
              if ( Buffer[v27] == 46 && Buffer[(unsigned int)(v22 - 2)] != 46 )
                v22 = (unsigned int)v27;
            }
            break;
          }
          Buffer[v22] = v26;
          v22 = (unsigned int)(v22 + 1);
          ++j;
        }
        --j;
      }
    }
LABEL_35:
    ++j;
  }
  if ( v59 && (unsigned int)v22 > v18 && Buffer[(unsigned int)(v22 - 1)] == 92 )
    LODWORD(v22) = v22 - 1;
  v28 = v63;
  if ( (unsigned int)v22 < v63 )
    Buffer[(unsigned int)v22] = 0;
  while ( (_DWORD)v22 )
  {
    v22 = (unsigned int)(v22 - 1);
    v29 = &Buffer[v22];
    if ( *v29 != 32 && *v29 != 46 )
    {
      LODWORD(v22) = v22 + 1;
      break;
    }
    *v29 = 0;
  }
  v30 = 2 * v22;
  Value.Length = 2 * v22;
  if ( !v76 )
  {
LABEL_50:
    v19 = v30;
    goto LABEL_51;
  }
  for ( m = v22; m && Buffer[m - 1] != 92; --m )
    ;
  if ( m >= (unsigned int)v22 || m < v18 )
  {
    *v76 = 0LL;
    goto LABEL_50;
  }
  *v76 = &Buffer[m];
  v19 = v30;
  v60 = v30;
  v16 = (volatile signed __int32 *)v64;
LABEL_147:
  if ( v58 )
  {
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16, 0xFFFFFFFF) == 1 )
      {
        NtClose(*((HANDLE *)BaseAddress + 1));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      v19 = v60;
      Buffer = Value.Buffer;
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
  }
  if ( v19 >= 2 * (unsigned __int64)v28 && v28 )
    *Buffer = 0;
  return v19;
}
