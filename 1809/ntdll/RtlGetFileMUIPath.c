/*
 * XREFs of RtlGetFileMUIPath @ 0x180034DB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18003451C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18003541C (RtlpGetMUIRedirectedFilePath.c)
 *     RtlGetFullPathName_UEx @ 0x1800357E0 (RtlGetFullPathName_UEx.c)
 *     LdrpCalcAllocSize @ 0x18003586C (LdrpCalcAllocSize.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003F300 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x18003FEC0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x180040460 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x180040B10 (RtlIntegerToUnicode.c)
 *     RtlUnicodeStringToInteger @ 0x180079590 (RtlUnicodeStringToInteger.c)
 *     RtlpMUIEnumerateFolder @ 0x18008A194 (RtlpMUIEnumerateFolder.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800918F0 (_wcsicmp.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800F047C (RtlpMUIGetAllInstalledLang.c)
 */

NTSTATUS __cdecl RtlGetFileMUIPath(
        ULONG Flags,
        PCWSTR FilePath,
        PWSTR Language,
        PULONG LanguageLength,
        PWSTR FileMUIPath,
        PULONG FileMUIPathLength,
        PULONGLONG Enumerator)
{
  wchar_t *v7; // r11
  ULONGLONG v9; // rsi
  ULONGLONG v10; // r13
  const WCHAR *v11; // r14
  ULONG v12; // eax
  ULONGLONG v13; // rdi
  NTSTATUS v14; // ebx
  PWSTR v15; // r14
  NTSTATUS FullPathName_UEx; // eax
  ULONG v17; // ecx
  ULONGLONG v18; // rax
  int v20; // edi
  bool IsWin32WithRCManifest; // al
  int v22; // ecx
  ULONG v23; // esi
  SIZE_T v24; // rax
  PVOID v25; // rax
  NTSTATUS v26; // eax
  ULONGLONG v27; // r15
  ULONGLONG v28; // rcx
  const WCHAR *k; // rbx
  PWSTR v30; // rdi
  int v31; // eax
  WCHAR *v32; // rdi
  int *v33; // r12
  bool v34; // al
  unsigned __int64 Length; // rbx
  __int64 v36; // rax
  bool v37; // di
  ULONG v38; // eax
  PCWSTR v39; // rcx
  BOOLEAN v40; // al
  wchar_t *v41; // rbx
  ULONGLONG v42; // rcx
  int v43; // eax
  int v44; // eax
  ULONGLONG v45; // r10
  unsigned __int16 v46; // r8
  ULONGLONG v47; // rax
  unsigned __int64 i; // r9
  SIZE_T v49; // rax
  PVOID v50; // rax
  NTSTATUS ThreadPreferredUILanguages; // eax
  __int64 v52; // rax
  ULONGLONG v53; // rcx
  const WCHAR *j; // rbx
  __int64 v55; // rax
  PWSTR v56; // rdi
  int MUIRedirectedFilePath; // eax
  __int64 v58; // rax
  char v59; // al
  NTSTATUS v60; // eax
  PVOID v61; // rax
  BOOLEAN v62; // al
  __int64 v63; // rax
  __int64 v64; // rax
  char v65; // bl
  int BytesRequired; // [rsp+20h] [rbp-E0h]
  int v67; // [rsp+28h] [rbp-D8h]
  char v68; // [rsp+40h] [rbp-C0h]
  bool v69; // [rsp+41h] [rbp-BFh]
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  ULONGLONG v72; // [rsp+50h] [rbp-B0h] BYREF
  ULONG NumberOfLanguages; // [rsp+58h] [rbp-A8h] BYREF
  PWSTR Heap; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  ULONG v76; // [rsp+80h] [rbp-80h]
  wchar_t *String1; // [rsp+88h] [rbp-78h] BYREF
  DWORD Lcid; // [rsp+90h] [rbp-70h] BYREF
  PWSTR FilePart; // [rsp+98h] [rbp-68h] BYREF
  PWSTR v80; // [rsp+A0h] [rbp-60h]
  ULONG v81; // [rsp+A8h] [rbp-58h] BYREF
  DWORD v82; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v83; // [rsp+B0h] [rbp-50h] BYREF
  PULONG v84; // [rsp+B8h] [rbp-48h]
  PULONG v85; // [rsp+C0h] [rbp-40h]
  __int64 v86; // [rsp+C8h] [rbp-38h]
  PCWSTR SourceString; // [rsp+D0h] [rbp-30h]
  PVOID v88; // [rsp+D8h] [rbp-28h]
  PULONGLONG v89; // [rsp+E0h] [rbp-20h]
  char v90[8]; // [rsp+E8h] [rbp-18h] BYREF
  char v91[16]; // [rsp+F0h] [rbp-10h] BYREF
  _UNICODE_STRING v92; // [rsp+100h] [rbp+0h] BYREF
  _UNICODE_STRING v93; // [rsp+110h] [rbp+10h] BYREF
  _UNICODE_STRING String; // [rsp+120h] [rbp+20h] BYREF
  _UNICODE_STRING v95; // [rsp+130h] [rbp+30h] BYREF
  WCHAR v96[4]; // [rsp+140h] [rbp+40h] BYREF
  __int16 v97; // [rsp+148h] [rbp+48h]

  v7 = 0LL;
  v80 = FileMUIPath;
  v9 = 0LL;
  v10 = 0LL;
  v84 = FileMUIPathLength;
  v11 = 0LL;
  v85 = LanguageLength;
  *(_QWORD *)v96 = 0LL;
  v97 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v12 = Flags >> 10;
  LOBYTE(v12) = (Flags & 0x400) != 0;
  SourceString = Language;
  v13 = Flags;
  v89 = Enumerator;
  v72 = 0LL;
  v86 = 0LL;
  BaseAddress = 0LL;
  String1 = 0LL;
  v88 = 0LL;
  Heap = 0LL;
  FilePart = 0LL;
  v83 = 0LL;
  v76 = v12;
  if ( !FilePath || !Enumerator )
  {
    v14 = -1073741811;
LABEL_171:
    if ( !v88 )
      goto LABEL_89;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v88);
    v7 = 0LL;
LABEL_173:
    v11 = (const WCHAR *)BaseAddress;
LABEL_89:
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      v7 = 0LL;
    }
    goto LABEL_91;
  }
  v14 = RtlpCreateProcessRegistryInfo(&v83);
  if ( v14 < 0 )
    return v14;
  Heap = (PWSTR)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
  v15 = Heap;
  if ( !Heap )
    return -1073741801;
  FullPathName_UEx = RtlGetFullPathName_UEx(FilePath, 0x208u, Heap, &FilePart, &v81);
  v7 = 0LL;
  v17 = 0;
  if ( FullPathName_UEx >= 0 )
    v17 = v81;
  if ( v17 - 1 > 0x206 || !FilePart || FilePart <= Heap || FilePart >= Heap + 260 )
    goto LABEL_13;
  *(FilePart - 1) = 0;
  v18 = *Enumerator;
  if ( *Enumerator )
  {
    v27 = v72;
    v45 = *Enumerator & 0xF;
    v86 = v45;
    v46 = v18 & 0xF;
    v47 = v18 >> 4;
    for ( i = 0LL; i < 4; ++i )
    {
      v46 ^= v47 & 0xFFF;
      if ( i )
      {
        if ( i == 2 )
        {
          v27 = v47 & 0xFFF;
        }
        else if ( i == 3 )
        {
          v9 = v47 & 0xFFF;
        }
      }
      else
      {
        v10 = v47 & 0xFFF;
      }
      v47 >>= 12;
    }
    v15 = Heap;
    v72 = v27;
    if ( (((unsigned __int16)v47 ^ v46) & 0xFFF) != 0 )
    {
      v14 = -1073741776;
    }
    else
    {
      if ( v9 <= v27 )
      {
        if ( (v10 & 0x20) != 0 )
          v20 = 2;
        else
          v20 = (v10 & 0x40 | 0x20) >> 5;
        v11 = (const WCHAR *)BaseAddress;
        v69 = (v10 & 4) == 0;
        v68 = v45 & 1;
LABEL_31:
        if ( v20 != 1 )
        {
          if ( v20 == 2 )
          {
            if ( !v11 )
            {
              RtlpMUIGetAllInstalledLang(v83, &BaseAddress, v90);
              v11 = (const WCHAR *)BaseAddress;
              v7 = 0LL;
            }
            v53 = 0LL;
            for ( j = v11; v53 < v9; j += v55 + 1 )
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              ++v53;
              v55 = -1LL;
              do
                ++v55;
              while ( j[v55] );
            }
            if ( v9 >= v27 )
              goto LABEL_62;
            v56 = FilePart;
            do
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              RtlInitUnicodeString(&DestinationString, j);
              LOBYTE(v67) = v76;
              LOBYTE(BytesRequired) = v68;
              v93 = DestinationString;
              MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath(&v93, Heap, v56, v84, BytesRequired, v67, v80);
              v7 = 0LL;
              if ( MUIRedirectedFilePath >= 0 )
                break;
              if ( MUIRedirectedFilePath == -1073741789 )
                break;
              ++v9;
              v58 = -1LL;
              do
                ++v58;
              while ( j[v58] );
              j += v58 + 1;
            }
            while ( v9 < v27 );
          }
          else
          {
            if ( !String1 )
            {
              v59 = RtlpMUIEnumerateFolder(Heap, v91, &String1);
              v7 = 0LL;
              if ( !v59 )
                v9 = v27;
            }
            v37 = 0;
            if ( !v9 )
            {
              v38 = *v85;
              if ( *v85 )
              {
                if ( SourceString )
                {
                  v39 = SourceString;
                  do
                  {
                    if ( !*v39 )
                      break;
                    ++v39;
                    --v38;
                  }
                  while ( v38 );
                  if ( v38 )
                  {
                    if ( v69 )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      v40 = RtlCultureNameToLCID(&DestinationString, &Lcid);
                      v7 = 0LL;
                      v37 = v40 != 0;
                    }
                    else
                    {
                      RtlInitUnicodeString(&String, SourceString);
                      v60 = RtlUnicodeStringToInteger(&String, 0x10u, &Lcid);
                      v7 = 0LL;
                      if ( v60 >= 0 )
                      {
                        v61 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
                        v7 = 0LL;
                        v88 = v61;
                        if ( !v61 )
                          goto LABEL_173;
                        DestinationString.Buffer = (wchar_t *)v61;
                        *(_DWORD *)&DestinationString.Length = 11141120;
                        v62 = RtlLCIDToCultureName(Lcid, &DestinationString);
                        v27 = v72;
                        v7 = 0LL;
                        v11 = (const WCHAR *)BaseAddress;
                        if ( v62 )
                          v37 = 1;
                      }
                    }
                  }
                }
              }
            }
            v41 = String1;
            v42 = 0LL;
            if ( v9 )
            {
              do
              {
                if ( !v41 )
                  break;
                if ( !*v41 )
                  break;
                ++v42;
                v63 = -1LL;
                do
                  ++v63;
                while ( v41[v63] );
                v41 += v63 + 1;
              }
              while ( v42 < v9 );
              v11 = (const WCHAR *)BaseAddress;
            }
            if ( v9 >= v27 )
              goto LABEL_62;
            do
            {
              if ( !v37 || (v43 = wcsicmp(v41, DestinationString.Buffer), v7 = 0LL, !v43) )
              {
                RtlInitUnicodeString(&DestinationString, v41);
                LOBYTE(v67) = v76;
                LOBYTE(BytesRequired) = v68;
                v95 = DestinationString;
                v44 = RtlpGetMUIRedirectedFilePath(&v95, Heap, FilePart, v84, BytesRequired, v67, v80);
                v7 = 0LL;
                if ( (int)(v44 + 0x80000000) < 0 || v44 == -1073741789 )
                  break;
              }
              ++v9;
              v64 = -1LL;
              do
                ++v64;
              while ( v41[v64] );
              v41 += v64 + 1;
            }
            while ( v9 < v27 );
          }
          goto LABEL_38;
        }
        if ( v11 )
        {
LABEL_33:
          v28 = 0LL;
          for ( k = v11; v28 < v9; k += v52 + 1 )
          {
            if ( !k )
              break;
            if ( !*k )
              break;
            ++v28;
            v52 = -1LL;
            do
              ++v52;
            while ( k[v52] );
          }
          if ( v9 >= v27 )
            goto LABEL_62;
          v30 = FilePart;
          do
          {
            if ( !*k )
              break;
            RtlInitUnicodeString(&DestinationString, k);
            LOBYTE(v67) = v76;
            LOBYTE(BytesRequired) = v68;
            v92 = DestinationString;
            v31 = RtlpGetMUIRedirectedFilePath(&v92, Heap, v30, v84, BytesRequired, v67, v80);
            v7 = 0LL;
            if ( v31 >= 0 )
              break;
            if ( v31 == -1073741789 )
              break;
            ++v9;
            v36 = -1LL;
            do
              ++v36;
            while ( k[v36] );
            k += v36 + 1;
          }
          while ( v9 < v27 );
LABEL_38:
          if ( v9 < v27 )
          {
            v32 = (WCHAR *)SourceString;
            v33 = (int *)v85;
            if ( SourceString || v85 )
            {
              if ( v69 )
                goto LABEL_42;
              v65 = RtlCultureNameToLCID(&DestinationString, &v82);
              if ( v65 )
                v65 = (int)RtlIntegerToUnicode((unsigned __int16)v82, 16LL, 4294967292LL, v96) >= 0;
              RtlInitUnicodeString(&DestinationString, v96);
              v7 = 0LL;
              if ( v65 )
              {
LABEL_42:
                if ( v32 )
                {
                  if ( v33 && *v33 > (unsigned int)(DestinationString.Length >> 1) )
                  {
                    Length = DestinationString.Length;
                    memmove(v32, DestinationString.Buffer, DestinationString.Length);
                    v7 = 0LL;
                    v32[Length >> 1] = 0;
                  }
                }
                else if ( v33 )
                {
                  *v33 = 85;
                }
              }
            }
            v34 = v80 && (v32 || !v33);
            v14 = 0;
            goto LABEL_50;
          }
LABEL_62:
          v14 = -2147483642;
          v34 = 1;
LABEL_50:
          if ( v34 )
            *v89 = v86 | (((v9 + 1) ^ v27 ^ v86 ^ v10) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                       * (v10 | ((v27 | ((v9 + 1) << 12)) << 24) | 0xCB7000));
          goto LABEL_171;
        }
        ReturnLength = 0;
        RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
        v7 = 0LL;
        if ( ReturnLength )
        {
          v49 = LdrpCalcAllocSize(ReturnLength, 2LL);
          if ( !v49 )
          {
            v14 = -1073741675;
LABEL_91:
            if ( String1 != v7 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String1);
            goto LABEL_93;
          }
          v50 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v49);
          v7 = 0LL;
          BaseAddress = v50;
          v11 = (const WCHAR *)v50;
          if ( v50 )
          {
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(
                                           0x30u,
                                           &NumberOfLanguages,
                                           (PZZWSTR)v50,
                                           &ReturnLength);
            v7 = 0LL;
            if ( ThreadPreferredUILanguages >= 0 )
            {
              v27 = v72;
              goto LABEL_33;
            }
          }
          v27 = v72;
        }
        v9 = v27;
        goto LABEL_33;
      }
      v14 = -2147483642;
    }
    goto LABEL_14;
  }
  if ( (v13 & 0xC) == 0xC
    || (v13 & 0x30) == 0x30
    || (v13 & 0x50) == 0x50
    || (v13 & 0x60) == 0x60
    || (v13 & 0x70) == 112
    || (v13 & 0x300) == 768 )
  {
LABEL_13:
    v14 = -1073741811;
    goto LABEL_14;
  }
  v10 = v13;
  if ( (v13 & 0x20) != 0 )
    v20 = 2;
  else
    v20 = (v13 & 0x40 | 0x20) >> 5;
  v69 = (v10 & 4) == 0;
  if ( (v10 & 0x200) == 0
    && ((v10 & 0x100) != 0
     || (IsWin32WithRCManifest = RtlpFileIsWin32WithRCManifest(FilePath), v7 = 0LL, IsWin32WithRCManifest)) )
  {
    v68 = 1;
    v86 = 1LL;
  }
  else
  {
    v68 = 0;
  }
  v22 = v20 - 1;
  if ( v20 != 1 )
  {
    if ( v20 == 2 )
    {
      v72 = 0LL;
      RtlpMUIGetAllInstalledLang(v83, &BaseAddress, &v72);
    }
    else
    {
      if ( v20 != 3 )
      {
        v27 = v72;
        v11 = (const WCHAR *)BaseAddress;
        goto LABEL_30;
      }
      v72 = 0LL;
      RtlpMUIEnumerateFolder(v15, &v72, &String1);
    }
    v27 = v72;
    v7 = 0LL;
    v11 = (const WCHAR *)BaseAddress;
LABEL_30:
    v9 = 0LL;
    goto LABEL_31;
  }
  v23 = v22 + 48;
  ReturnLength = 0;
  RtlGetThreadPreferredUILanguages(v22 + 48, &NumberOfLanguages, 0LL, &ReturnLength);
  if ( !ReturnLength )
    goto LABEL_14;
  v24 = LdrpCalcAllocSize(ReturnLength, 2LL);
  if ( v24 )
  {
    v25 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v23 - 40, v24);
    BaseAddress = v25;
    v11 = (const WCHAR *)v25;
    if ( !v25 )
    {
      v14 = -1073741801;
LABEL_93:
      v15 = Heap;
      goto LABEL_14;
    }
    v26 = RtlGetThreadPreferredUILanguages(v23, &NumberOfLanguages, (PZZWSTR)v25, &ReturnLength);
    v7 = 0LL;
    if ( v26 < 0 )
    {
      v14 = v26;
      goto LABEL_89;
    }
    v27 = NumberOfLanguages;
    v72 = NumberOfLanguages;
    goto LABEL_30;
  }
  v14 = -1073741675;
LABEL_14:
  if ( v15 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  return v14;
}
