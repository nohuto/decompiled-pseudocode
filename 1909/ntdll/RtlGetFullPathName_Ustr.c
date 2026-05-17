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
        _WORD *a3,
        _QWORD *a4,
        _BYTE *a5,
        __int64 a6)
{
  _WORD *v6; // rsi
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
  unsigned int Length; // r15d
  unsigned int v20; // edx
  unsigned int k; // ecx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // ecx
  int v25; // ecx
  __int16 v26; // ax
  __int64 v27; // r8
  unsigned int v28; // ebx
  _WORD *v29; // rcx
  unsigned __int16 v30; // r9
  unsigned int m; // ecx
  unsigned int v32; // edx
  __int64 v33; // r9
  __int16 v34; // cx
  __int64 v35; // rax
  __int16 v36; // cx
  __int16 v37; // cx
  __int16 v38; // cx
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  _CURDIR *v41; // rcx
  int v42; // r8d
  __int16 v43; // dx
  __int64 v44; // rax
  _CURDIR *v45; // rsi
  int v46; // eax
  __int16 v47; // ax
  __int64 v48; // rax
  _CURDIR *p_CurrentDirectory; // r10
  unsigned __int16 v50; // ax
  _UNICODE_STRING *v51; // r10
  WCHAR v52; // bx
  __int16 v53; // r9
  int v54; // eax
  __int16 v55; // cx
  unsigned __int64 v56; // rax
  __int64 result; // rax
  unsigned int v58; // edi
  __int64 v59; // rsi
  char v60; // [rsp+20h] [rbp-D8h]
  bool v61; // [rsp+21h] [rbp-D7h]
  unsigned int v62; // [rsp+28h] [rbp-D0h]
  unsigned int v63; // [rsp+2Ch] [rbp-CCh]
  __int64 v64; // [rsp+38h] [rbp-C0h] BYREF
  _WORD *v65; // [rsp+40h] [rbp-B8h]
  unsigned int v66; // [rsp+48h] [rbp-B0h]
  int v67; // [rsp+4Ch] [rbp-ACh]
  volatile signed __int32 *v68; // [rsp+50h] [rbp-A8h]
  __int64 v69; // [rsp+58h] [rbp-A0h]
  _UNICODE_STRING DosPath; // [rsp+60h] [rbp-98h] BYREF
  __int16 v71; // [rsp+70h] [rbp-88h]
  _CURDIR *v72; // [rsp+78h] [rbp-80h]
  unsigned __int16 v73; // [rsp+80h] [rbp-78h]
  unsigned __int16 v74; // [rsp+84h] [rbp-74h]
  int v75; // [rsp+88h] [rbp-70h]
  unsigned int v76; // [rsp+8Ch] [rbp-6Ch]
  unsigned int v77; // [rsp+90h] [rbp-68h]
  int v78; // [rsp+94h] [rbp-64h]
  _QWORD *v79; // [rsp+98h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-58h] BYREF
  WCHAR SourceString; // [rsp+B0h] [rbp-48h] BYREF
  _BYTE v82[6]; // [rsp+B2h] [rbp-46h]

  v79 = a4;
  v6 = a3;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v8 = 0xFFFF;
  if ( a2 <= 0xFFFF )
    v8 = a2;
  *(_QWORD *)a6 = 0LL;
  v76 = *a1;
  v9 = v76 >> 1;
  if ( !(v76 >> 1) )
    return 0LL;
  v10 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !*v10 )
    return 0LL;
  for ( i = v76 >> 1; i && v10[i - 1] == 32; --i )
    ;
  if ( !i )
    return 0LL;
  v12 = v10[v9 - 1];
  v61 = v12 != 92 && v12 != 47;
  v66 = v8 >> 1;
  v77 = v8 >> 1;
  memset(a3, 0, v8);
  v64 = 0LL;
  *(_DWORD *)((char *)&v64 + 2) = (unsigned __int16)(2 * (v8 >> 1));
  v65 = v6;
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
        RtlUnicodeStringCopy(&v64, L"\b\n");
        RtlUnicodeStringCbCatStringN(&v64, *((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v58 >> 1), v59);
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
  v68 = 0LL;
  v69 = 0LL;
  v60 = 0;
  j = 0;
  if ( v14 != 2 )
  {
    switch ( v14 )
    {
      case 1:
        v42 = 0;
        v75 = 0;
        for ( j = 2; j < v9; ++j )
        {
          v43 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
          if ( v43 == 92 || v43 == 47 )
          {
            v75 = ++v42;
            if ( v42 == 2 )
              break;
          }
        }
        v63 = j;
        v67 = j;
        DosPath.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
        DosPath.Length = 2 * j;
        DosPath.MaximumLength = a1[1];
        goto LABEL_102;
      case 3:
        v48 = RtlpReferenceCurrentDirectory(0LL, 0x180000000uLL);
        v16 = (volatile signed __int32 *)v48;
        v68 = (volatile signed __int32 *)v48;
        v69 = v48;
        v60 = 1;
        if ( v48 )
        {
          p_CurrentDirectory = (_CURDIR *)(v48 + 24);
        }
        else
        {
          p_CurrentDirectory = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v16 = 0LL;
          v68 = 0LL;
        }
        v72 = p_CurrentDirectory;
        v73 = NLS_UPCASE(*p_CurrentDirectory->DosPath.Buffer);
        v50 = NLS_UPCASE(**((_WORD **)a1 + 1));
        v52 = v50;
        v74 = v50;
        if ( v53 == v50 )
        {
          DosPath = *v51;
          RtlUnicodeStringCopy(&v64, &DosPath);
          v6 = v65;
        }
        else
        {
          RtlpCheckRelativeDrive(v50);
          SourceString = 61;
          *(_WORD *)v82 = v52;
          *(_DWORD *)&v82[2] = 58;
          RtlInitUnicodeString(&DestinationString, &SourceString);
          v54 = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &v64);
          v78 = v54;
          if ( v54 < 0 )
          {
            if ( v54 == -1073741789 )
            {
              if ( (unsigned int)(unsigned __int16)v64 + 2 > 0xFFFF )
              {
                Length = 0;
                v62 = 0;
                v6 = v65;
                v28 = v66;
                goto LABEL_146;
              }
              DosPath.Length = v64 + 2;
              v6 = v65;
            }
            else
            {
              LOWORD(v64) = 0;
              SourceString = v52;
              *(_DWORD *)v82 = 6029370;
              *(_WORD *)&v82[4] = 0;
              RtlUnicodeStringCopyString(&v64, &SourceString);
              DosPath.Length = 8;
              v6 = v65;
            }
          }
          else
          {
            v55 = v64;
            v56 = (unsigned __int64)(unsigned __int16)v64 >> 1;
            if ( (unsigned int)v56 <= 3 || (unsigned int)v56 >= v66 )
            {
              v6 = v65;
            }
            else
            {
              v6 = v65;
              v65[(unsigned int)v56] = 92;
              LOWORD(v64) = v55 + 2;
            }
            DosPath.Length = v64;
          }
        }
        v18 = 3;
        v67 = 3;
        j = 2;
        goto LABEL_19;
      case 4:
        LOBYTE(v15) = 1;
        v44 = RtlpReferenceCurrentDirectory(v15, 0x180000000uLL);
        v68 = (volatile signed __int32 *)v44;
        v69 = v44;
        v60 = 1;
        if ( v44 )
        {
          v45 = (_CURDIR *)(v44 + 24);
        }
        else
        {
          v45 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v68 = 0LL;
          j = 0;
        }
        v72 = v45;
        v46 = RtlpComputeBackupIndex(v45);
        v63 = v46;
        v67 = v46;
        DosPath = v45->DosPath;
        if ( v46 == 3 )
          v47 = 4;
        else
          v47 = 2 * v46;
        DosPath.Length = v47;
        goto LABEL_102;
      case 5:
        v40 = RtlpReferenceCurrentDirectory(0LL, 0x180000000uLL);
        v68 = (volatile signed __int32 *)v40;
        v69 = v40;
        v60 = 1;
        if ( v40 )
        {
          v41 = (_CURDIR *)(v40 + 24);
          *(_DWORD *)(a6 + 4) = *(_DWORD *)(v40 + 40);
        }
        else
        {
          v41 = &NtCurrentPeb()->ProcessParameters->CurrentDirectory;
          v68 = 0LL;
          j = 0;
        }
        v72 = v41;
        DosPath = v41->DosPath;
        v63 = RtlpComputeBackupIndex(v41);
        v67 = v63;
LABEL_102:
        RtlUnicodeStringCopy(&v64, &DosPath);
        v6 = v65;
        v18 = v63;
        goto LABEL_19;
      case 6:
      case 7:
        v67 = 4;
        j = 4;
        if ( v9 < 4 )
          j = v9;
        DosPath = *(_UNICODE_STRING *)L"\b\n";
        RtlUnicodeStringCopy(&v64, &DosPath);
        v6 = v65;
        if ( (unsigned __int16)v64 >= 6u )
          v65[2] = *(_WORD *)(*((_QWORD *)a1 + 1) + 4LL);
        v18 = 4;
        if ( *(_DWORD *)a6 == 7 )
          v61 = 0;
        goto LABEL_19;
      default:
        Length = 0;
        v62 = 0;
        v28 = v66;
        goto LABEL_146;
    }
  }
  v18 = 3;
  v67 = 3;
LABEL_19:
  Length = DosPath.Length;
  v20 = v76 + DosPath.Length - 2 * j;
  if ( (unsigned __int64)v20 + 2 <= v8 )
    goto LABEL_20;
  if ( v9 > 1 || **((_WORD **)a1 + 1) != 46 )
  {
    v32 = v20 + 2;
    if ( v32 > 0xFFFF )
      v32 = 0;
    Length = v32;
    v62 = v32;
    v28 = v66;
    v16 = v68;
    goto LABEL_146;
  }
  if ( v9 != 1 )
  {
    Length = 0;
    if ( v20 <= 0xFFFF )
      Length = v76 + DosPath.Length - 2 * j;
    v28 = v66;
    goto LABEL_51;
  }
  if ( DosPath.Length != 8 )
  {
    if ( v8 < DosPath.Length )
    {
      v28 = v66;
      v62 = DosPath.Length;
      v16 = v68;
      goto LABEL_146;
    }
    v39 = (unsigned __int64)(unsigned __int16)v64 >> 1;
    if ( (_DWORD)v39 && v6[(unsigned int)(v39 - 1)] == 92 )
      LOWORD(v64) = v64 - 2;
    goto LABEL_20;
  }
  if ( v8 <= 8 )
  {
    Length = 10;
    v28 = v66;
LABEL_51:
    v62 = Length;
    v16 = v68;
    goto LABEL_146;
  }
LABEL_20:
  for ( k = 0; k < (unsigned __int16)v64 >> 1; ++k )
  {
    if ( v6[k] == 47 )
      v6[k] = 92;
  }
  v22 = (unsigned __int16)v64 >> 1;
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
      if ( !(_DWORD)v22 || v6[(unsigned int)(v22 - 1)] != 92 )
      {
        v6[v22] = 92;
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
          v71 = v6[v22];
          v37 = v71;
          v6[v22] = 0;
          if ( v37 == 92 )
          {
            while ( (unsigned int)v22 >= v18 )
            {
              v71 = v6[v22];
              v38 = v71;
              v6[v22] = 0;
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
              if ( v6[v27] == 46 && v6[(unsigned int)(v22 - 2)] != 46 )
                v22 = (unsigned int)v27;
            }
            break;
          }
          v6[v22] = v26;
          v22 = (unsigned int)(v22 + 1);
          ++j;
        }
        --j;
      }
    }
LABEL_35:
    ++j;
  }
  if ( v61 && (unsigned int)v22 > v18 && v6[(unsigned int)(v22 - 1)] == 92 )
    LODWORD(v22) = v22 - 1;
  v28 = v66;
  if ( (unsigned int)v22 < v66 )
    v6[(unsigned int)v22] = 0;
  while ( (_DWORD)v22 )
  {
    v22 = (unsigned int)(v22 - 1);
    v29 = &v6[v22];
    if ( *v29 != 32 && *v29 != 46 )
    {
      LODWORD(v22) = v22 + 1;
      break;
    }
    *v29 = 0;
  }
  v30 = 2 * v22;
  LOWORD(v64) = 2 * v22;
  if ( !v79 )
  {
LABEL_50:
    Length = v30;
    goto LABEL_51;
  }
  for ( m = v22; m && v6[m - 1] != 92; --m )
    ;
  if ( m >= (unsigned int)v22 || m < v18 )
  {
    *v79 = 0LL;
    goto LABEL_50;
  }
  *v79 = &v6[m];
  Length = v30;
  v62 = v30;
  v16 = v68;
LABEL_146:
  if ( v60 )
  {
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v69 + 8));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v69);
      }
      Length = v62;
      v6 = v65;
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
  }
  if ( Length >= 2 * (unsigned __int64)v28 && v28 )
    *v6 = 0;
  return Length;
}
