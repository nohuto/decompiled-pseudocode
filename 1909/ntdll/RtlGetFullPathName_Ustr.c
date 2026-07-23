/*
 * XREFs of RtlGetFullPathName_Ustr @ 0x180027B70
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800276A8 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_UstrEx @ 0x180028E40 (RtlGetFullPathName_UstrEx.c)
 *     RtlGetFullPathName_UEx @ 0x1800291D0 (RtlGetFullPathName_UEx.c)
 *     LdrpGetFullPath @ 0x180029974 (LdrpGetFullPath.c)
 *     RtlSetCurrentDirectory_U @ 0x1800769C0 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     NLS_UPCASE @ 0x18001A234 (NLS_UPCASE.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x1800285E0 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18002891C (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlUnicodeStringCopy @ 0x18002979C (RtlUnicodeStringCopy.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18005CBB0 (RtlQueryEnvironmentVariable_U.c)
 *     RtlpCheckRelativeDrive @ 0x18005DA00 (RtlpCheckRelativeDrive.c)
 *     RtlUnicodeStringCbCatStringN @ 0x18006AFC4 (RtlUnicodeStringCbCatStringN.c)
 *     RtlpReferenceCurrentDirectory @ 0x180076D08 (RtlpReferenceCurrentDirectory.c)
 *     RtlpComputeBackupIndex @ 0x18007FEF0 (RtlpComputeBackupIndex.c)
 *     RtlpCheckDeviceName @ 0x180088D20 (RtlpCheckDeviceName.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlUnicodeStringCopyString @ 0x1800CCE68 (RtlUnicodeStringCopyString.c)
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
  volatile signed __int32 *v16; // r13
  unsigned int j; // ebx
  unsigned int v18; // r11d
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
  _CURDIR *v40; // rax
  _CURDIR *v41; // rcx
  int v42; // r8d
  __int16 v43; // dx
  _CURDIR *v44; // rax
  _CURDIR *v45; // rsi
  int v46; // eax
  __int16 v47; // ax
  char *v48; // rax
  _CURDIR *p_CurrentDirectory; // r10
  unsigned __int16 v50; // ax
  _UNICODE_STRING *v51; // r10
  WCHAR v52; // bx
  __int16 v53; // r9
  NTSTATUS v54; // eax
  unsigned __int16 Length; // cx
  unsigned __int64 v56; // rax
  __int64 result; // rax
  unsigned int v58; // edi
  __int64 v59; // rsi
  char v60; // [rsp+20h] [rbp-D8h]
  bool v61; // [rsp+21h] [rbp-D7h]
  unsigned int v62; // [rsp+28h] [rbp-D0h]
  unsigned int v63; // [rsp+2Ch] [rbp-CCh]
  _UNICODE_STRING Value; // [rsp+38h] [rbp-C0h] BYREF
  unsigned int v65; // [rsp+48h] [rbp-B0h]
  int v66; // [rsp+4Ch] [rbp-ACh]
  _CURDIR *v67; // [rsp+50h] [rbp-A8h]
  PVOID BaseAddress; // [rsp+58h] [rbp-A0h]
  _UNICODE_STRING DosPath; // [rsp+60h] [rbp-98h] BYREF
  wchar_t v70; // [rsp+70h] [rbp-88h]
  _CURDIR *v71; // [rsp+78h] [rbp-80h]
  unsigned __int16 v72; // [rsp+80h] [rbp-78h]
  unsigned __int16 v73; // [rsp+84h] [rbp-74h]
  int v74; // [rsp+88h] [rbp-70h]
  unsigned int v75; // [rsp+8Ch] [rbp-6Ch]
  unsigned int v76; // [rsp+90h] [rbp-68h]
  NTSTATUS v77; // [rsp+94h] [rbp-64h]
  _QWORD *v78; // [rsp+98h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-58h] BYREF
  WCHAR SourceString; // [rsp+B0h] [rbp-48h] BYREF
  _BYTE v81[6]; // [rsp+B2h] [rbp-46h]

  v78 = a4;
  Buffer = a3;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0xFFFF;
  if ( a2 <= 0xFFFF )
    v8 = a2;
  *(_QWORD *)a6 = 0LL;
  v75 = *a1;
  v9 = v75 >> 1;
  if ( !(v75 >> 1) )
    return 0LL;
  v10 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v10 )
    return 0LL;
  for ( i = v75 >> 1; i && v10[i - 1] == 32; --i )
    ;
  if ( !i )
    return 0LL;
  v12 = v10[v9 - 1];
  v61 = v12 != 92 && v12 != 47;
  v65 = v8 >> 1;
  v76 = v8 >> 1;
  memset(a3, 0, v8);
  *(_QWORD *)&Value.Length = 0LL;
  *(_DWORD *)&Value.MaximumLength = (unsigned __int16)(2 * (v8 >> 1));
  Value.Buffer = Buffer;
  IsDosDeviceName_Ustr = RtlpIsDosDeviceName_Ustr(a1);
  if ( IsDosDeviceName_Ustr )
  {
    v58 = HIWORD(IsDosDeviceName_Ustr);
    v59 = (unsigned __int16)IsDosDeviceName_Ustr;
    if ( !a5 || !v58 || (int)RtlpCheckDeviceName(a1, v58, a5) >= 0 && !*a5 )
    {
      if ( (int)v59 + 8 >= (unsigned int)(unsigned __int16)(2 * (v8 >> 1)) )
      {
        result = 0LL;
        if ( (unsigned int)(v59 + 10) <= 0xFFFF )
          return (unsigned int)(v59 + 10);
      }
      else
      {
        RtlUnicodeStringCopy(&Value, L"\b\n");
        RtlUnicodeStringCbCatStringN(&Value, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v58 >> 1), v59);
        return (unsigned int)(v59 + 8);
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
  v67 = 0LL;
  BaseAddress = 0LL;
  v60 = 0;
  j = 0;
  if ( v14 != 2 )
  {
    switch ( v14 )
    {
      case 1:
        v42 = 0;
        v74 = 0;
        for ( j = 2; j < v9; ++j )
        {
          v43 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v43 == 92 || v43 == 47 )
          {
            v74 = ++v42;
            if ( v42 == 2 )
              break;
          }
        }
        v63 = j;
        v66 = j;
        DosPath.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * j;
        DosPath.MaximumLength = a1[1];
        goto LABEL_102;
      case 3:
        v48 = (char *)RtlpReferenceCurrentDirectory(0LL, 0x180000000uLL);
        v16 = (volatile signed __int32 *)v48;
        v67 = (_CURDIR *)v48;
        BaseAddress = v48;
        v60 = 1;
        if ( v48 )
        {
          p_CurrentDirectory = (_CURDIR *)(v48 + 24);
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v16 = 0LL;
          v67 = 0LL;
        }
        v71 = p_CurrentDirectory;
        v72 = NLS_UPCASE(*p_CurrentDirectory->DosPath.Buffer);
        v50 = NLS_UPCASE(**((_WORD **)a1 + 1));
        v52 = v50;
        v73 = v50;
        if ( v53 == v50 )
        {
          DosPath = *v51;
          RtlUnicodeStringCopy(&Value, &DosPath);
          Buffer = Value.Buffer;
        }
        else
        {
          RtlpCheckRelativeDrive(v50);
          SourceString = 61;
          *(_WORD *)v81 = v52;
          *(_DWORD *)&v81[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v54 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &Value);
          v77 = v54;
          if ( v54 < 0 )
          {
            if ( v54 == -1073741789 )
            {
              if ( (unsigned int)Value.Length + 2 > 0xFFFF )
              {
                v19 = 0;
                v62 = 0;
                Buffer = Value.Buffer;
                v28 = v65;
                goto LABEL_146;
              }
              DosPath.Length = Value.Length + 2;
              Buffer = Value.Buffer;
            }
            else
            {
              Value.Length = 0;
              SourceString = v52;
              *(_DWORD *)v81 = 6029370;
              *(_WORD *)&v81[4] = 0;
              RtlUnicodeStringCopyString(&Value, &SourceString);
              DosPath.Length = 8;
              Buffer = Value.Buffer;
            }
          }
          else
          {
            Length = Value.Length;
            v56 = (unsigned __int64)Value.Length >> 1;
            if ( (unsigned int)v56 <= 3 || (unsigned int)v56 >= v65 )
            {
              Buffer = Value.Buffer;
            }
            else
            {
              Buffer = Value.Buffer;
              Value.Buffer[(unsigned int)v56] = 92;
              Value.Length = Length + 2;
            }
            DosPath.Length = Value.Length;
          }
        }
        v18 = 3;
        v66 = 3;
        j = 2;
        goto LABEL_19;
      case 4:
        LOBYTE(v15) = 1;
        v44 = (_CURDIR *)RtlpReferenceCurrentDirectory(v15, 0x180000000uLL);
        v67 = v44;
        BaseAddress = v44;
        v60 = 1;
        if ( v44 )
        {
          v45 = v44 + 1;
        }
        else
        {
          v45 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v67 = 0LL;
          j = 0;
        }
        v71 = v45;
        v46 = RtlpComputeBackupIndex(v45);
        v63 = v46;
        v66 = v46;
        DosPath = v45->DosPath;
        if ( v46 == 3 )
          v47 = 4;
        else
          v47 = 2 * v46;
        DosPath.Length = v47;
        goto LABEL_102;
      case 5:
        v40 = (_CURDIR *)RtlpReferenceCurrentDirectory(0LL, 0x180000000uLL);
        v67 = v40;
        BaseAddress = v40;
        v60 = 1;
        if ( v40 )
        {
          v41 = v40 + 1;
          *(_DWORD *)(a6 + 4) = v40[1].Handle;
        }
        else
        {
          v41 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v67 = 0LL;
          j = 0;
        }
        v71 = v41;
        DosPath = v41->DosPath;
        v63 = RtlpComputeBackupIndex(v41);
        v66 = v63;
LABEL_102:
        RtlUnicodeStringCopy(&Value, &DosPath);
        Buffer = Value.Buffer;
        v18 = v63;
        goto LABEL_19;
      case 6:
      case 7:
        v66 = 4;
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
          v61 = 0;
        goto LABEL_19;
      default:
        v19 = 0;
        v62 = 0;
        v28 = v65;
        goto LABEL_146;
    }
  }
  v18 = 3;
  v66 = 3;
LABEL_19:
  v19 = DosPath.Length;
  v20 = v75 + DosPath.Length - 2 * j;
  if ( (unsigned __int64)v20 + 2 <= v8 )
    goto LABEL_20;
  if ( v9 > 1 || **((_WORD **)a1 + 1) != 46 )
  {
    v32 = v20 + 2;
    if ( v32 > 0xFFFF )
      v32 = 0;
    v19 = v32;
    v62 = v32;
    v28 = v65;
    v16 = (volatile signed __int32 *)v67;
    goto LABEL_146;
  }
  if ( v9 != 1 )
  {
    v19 = 0;
    if ( v20 <= 0xFFFF )
      v19 = v75 + DosPath.Length - 2 * j;
    v28 = v65;
    goto LABEL_51;
  }
  if ( DosPath.Length != 8 )
  {
    if ( v8 < DosPath.Length )
    {
      v28 = v65;
      v62 = DosPath.Length;
      v16 = (volatile signed __int32 *)v67;
      goto LABEL_146;
    }
    v39 = (unsigned __int64)Value.Length >> 1;
    if ( (_DWORD)v39 && Buffer[(unsigned int)(v39 - 1)] == 92 )
      Value.Length -= 2;
    goto LABEL_20;
  }
  if ( v8 <= 8 )
  {
    v19 = 10;
    v28 = v65;
LABEL_51:
    v62 = v19;
    v16 = (volatile signed __int32 *)v67;
    goto LABEL_146;
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
          v70 = Buffer[v22];
          v37 = v70;
          Buffer[v22] = 0;
          if ( v37 == 92 )
          {
            while ( (unsigned int)v22 >= v18 )
            {
              v70 = Buffer[v22];
              v38 = v70;
              Buffer[v22] = 0;
              if ( v38 == 92 )
              {
                if ( (unsigned int)v22 < v18 )
                  goto LABEL_91;
                goto LABEL_79;
              }
              v22 = (unsigned int)(v22 - 1);
            }
            break;
          }
          v22 = (unsigned int)(v22 - 1);
        }
LABEL_91:
        v22 = (unsigned int)(v22 + 1);
LABEL_79:
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
  if ( v61 && (unsigned int)v22 > v18 && Buffer[(unsigned int)(v22 - 1)] == 92 )
    LODWORD(v22) = v22 - 1;
  v28 = v65;
  if ( (unsigned int)v22 < v65 )
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
  if ( !v78 )
  {
LABEL_50:
    v19 = v30;
    goto LABEL_51;
  }
  for ( m = v22; m && Buffer[m - 1] != 92; --m )
    ;
  if ( m >= (unsigned int)v22 || m < v18 )
  {
    *v78 = 0LL;
    goto LABEL_50;
  }
  *v78 = &Buffer[m];
  v19 = v30;
  v62 = v30;
  v16 = (volatile signed __int32 *)v67;
LABEL_146:
  if ( v60 )
  {
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16, 0xFFFFFFFF) == 1 )
      {
        NtClose(*((HANDLE *)BaseAddress + 1));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      v19 = v62;
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
