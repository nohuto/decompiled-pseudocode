/*
 * XREFs of RtlGetFileMUIPath @ 0x180059E30
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlIntegerToUnicode @ 0x180014840 (RtlIntegerToUnicode.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlGetFullPathName_UEx @ 0x1800291D0 (RtlGetFullPathName_UEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     LdrpCalcAllocSize @ 0x180059E04 (LdrpCalcAllocSize.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18005A338 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18005A6C4 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlUnicodeStringToInteger @ 0x180074900 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008E870 (_wcsicmp.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED14C (RtlpMUIEnumerateFolder.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800ED4B0 (RtlpMUIGetAllInstalledLang.c)
 */

__int64 __fastcall RtlGetFileMUIPath(
        unsigned int a1,
        __int64 a2,
        const WCHAR *a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  wchar_t *v7; // r11
  unsigned __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rdi
  int v14; // ebx
  _WORD *v15; // r14
  int FullPathName_UEx; // eax
  int v17; // ecx
  unsigned __int64 v18; // rax
  int v20; // edi
  char IsWin32WithRCManifest; // al
  int v22; // ecx
  int v23; // esi
  __int64 v24; // rax
  _WORD *v25; // rax
  int v26; // eax
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rcx
  const WCHAR *k; // rbx
  unsigned __int64 v30; // rdi
  int v31; // eax
  WCHAR *v32; // rdi
  int *v33; // r12
  bool v34; // al
  unsigned __int64 Length; // rbx
  __int64 v36; // rax
  __int64 v37; // r10
  unsigned __int16 v38; // r8
  unsigned __int64 v39; // rax
  unsigned __int64 i; // r9
  __int64 v41; // rax
  _WORD *v42; // rax
  int ThreadPreferredUILanguages; // eax
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  const WCHAR *j; // rbx
  __int64 v47; // rax
  unsigned __int64 v48; // rdi
  int MUIRedirectedFilePath; // eax
  __int64 v50; // rax
  char v51; // al
  bool v52; // di
  int v53; // eax
  PCWSTR v54; // rcx
  int v55; // eax
  wchar_t *v56; // rax
  char v57; // al
  char v58; // al
  wchar_t *v59; // rbx
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // eax
  int v63; // eax
  __int64 v64; // rax
  char v65; // bl
  int v66; // [rsp+20h] [rbp-E0h]
  int v67; // [rsp+28h] [rbp-D8h]
  char v68; // [rsp+40h] [rbp-C0h]
  bool v69; // [rsp+41h] [rbp-BFh]
  unsigned int v70; // [rsp+44h] [rbp-BCh] BYREF
  _WORD *v71; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v72; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v73; // [rsp+58h] [rbp-A8h] BYREF
  _WORD *Heap; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v76; // [rsp+80h] [rbp-80h]
  wchar_t *String1; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v78; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v79; // [rsp+98h] [rbp-68h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-60h]
  int v81; // [rsp+A8h] [rbp-58h] BYREF
  int v82; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v83; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v84; // [rsp+B8h] [rbp-48h]
  int *v85; // [rsp+C0h] [rbp-40h]
  __int64 v86; // [rsp+C8h] [rbp-38h]
  PCWSTR SourceString; // [rsp+D0h] [rbp-30h]
  wchar_t *v88; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v89; // [rsp+E0h] [rbp-20h]
  char v90[8]; // [rsp+E8h] [rbp-18h] BYREF
  char v91[16]; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v92; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING v93; // [rsp+110h] [rbp+10h] BYREF
  UNICODE_STRING v94; // [rsp+120h] [rbp+20h] BYREF
  UNICODE_STRING v95; // [rsp+130h] [rbp+30h] BYREF
  WCHAR v96[4]; // [rsp+140h] [rbp+40h] BYREF
  __int16 v97; // [rsp+148h] [rbp+48h]

  v7 = 0LL;
  v80 = a5;
  v9 = 0LL;
  v10 = 0LL;
  v84 = a6;
  v11 = 0LL;
  v85 = a4;
  *(_QWORD *)v96 = 0LL;
  v97 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v12 = a1 >> 10;
  LOBYTE(v12) = (a1 & 0x400) != 0;
  SourceString = a3;
  v13 = a1;
  v89 = a7;
  v72 = 0LL;
  v86 = 0LL;
  v71 = 0LL;
  String1 = 0LL;
  v73 = 0;
  v88 = 0LL;
  Heap = 0LL;
  v79 = 0LL;
  v83 = 0LL;
  v76 = v12;
  if ( !a2 || !a7 )
  {
    v14 = -1073741811;
LABEL_168:
    if ( !v88 )
      goto LABEL_66;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v88);
    v7 = 0LL;
LABEL_170:
    v11 = (__int64)v71;
LABEL_66:
    if ( v11 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v71);
      v7 = 0LL;
    }
    goto LABEL_68;
  }
  v14 = RtlpCreateProcessRegistryInfo(&v83);
  if ( v14 < 0 )
    return (unsigned int)v14;
  Heap = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 522LL);
  v15 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  FullPathName_UEx = RtlGetFullPathName_UEx(a2, 0x208u, Heap, &v79, &v81);
  v7 = 0LL;
  v17 = 0;
  if ( FullPathName_UEx >= 0 )
    v17 = v81;
  if ( (unsigned int)(v17 - 1) > 0x206 || !v79 || v79 <= (unsigned __int64)Heap || v79 >= (unsigned __int64)(Heap + 260) )
    goto LABEL_13;
  *(_WORD *)(v79 - 2) = 0;
  v18 = *a7;
  if ( *a7 )
  {
    v27 = v72;
    v37 = *a7 & 0xF;
    v86 = v37;
    v38 = v18 & 0xF;
    v39 = v18 >> 4;
    for ( i = 0LL; i < 4; ++i )
    {
      v38 ^= v39 & 0xFFF;
      if ( i )
      {
        if ( i == 2 )
        {
          v27 = v39 & 0xFFF;
        }
        else if ( i == 3 )
        {
          v9 = v39 & 0xFFF;
        }
      }
      else
      {
        v10 = v39 & 0xFFF;
      }
      v39 >>= 12;
    }
    v15 = Heap;
    v72 = v27;
    if ( (((unsigned __int16)v39 ^ v38) & 0xFFF) != 0 )
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
          v20 = (unsigned __int64)(v10 & 0x40 | 0x20) >> 5;
        v11 = (__int64)v71;
        v69 = (v10 & 4) == 0;
        v68 = v37 & 1;
LABEL_31:
        if ( v20 != 1 )
        {
          if ( v20 == 2 )
          {
            if ( !v11 )
            {
              RtlpMUIGetAllInstalledLang(v83, &v71, v90);
              v11 = (__int64)v71;
              v7 = 0LL;
            }
            v45 = 0LL;
            for ( j = (const WCHAR *)v11; v45 < v9; j += v47 + 1 )
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              ++v45;
              v47 = -1LL;
              do
                ++v47;
              while ( j[v47] );
            }
            if ( v9 >= v27 )
              goto LABEL_61;
            v48 = v79;
            do
            {
              if ( !j )
                break;
              if ( !*j )
                break;
              RtlInitUnicodeString(&DestinationString, j);
              LOBYTE(v67) = v76;
              LOBYTE(v66) = v68;
              v93 = DestinationString;
              MUIRedirectedFilePath = RtlpGetMUIRedirectedFilePath(&v93, Heap, v48, v84, v66, v67, v80);
              v7 = 0LL;
              if ( MUIRedirectedFilePath >= 0 )
                break;
              if ( MUIRedirectedFilePath == -1073741789 )
                break;
              ++v9;
              v50 = -1LL;
              do
                ++v50;
              while ( j[v50] );
              j += v50 + 1;
            }
            while ( v9 < v27 );
          }
          else
          {
            if ( !String1 )
            {
              v51 = RtlpMUIEnumerateFolder(Heap, v91, &String1);
              v7 = 0LL;
              if ( !v51 )
                v9 = v27;
            }
            v52 = 0;
            if ( !v9 )
            {
              v53 = *v85;
              if ( *v85 )
              {
                if ( SourceString )
                {
                  v54 = SourceString;
                  do
                  {
                    if ( !*v54 )
                      break;
                    ++v54;
                    --v53;
                  }
                  while ( v53 );
                  if ( v53 )
                  {
                    if ( v69 )
                    {
                      RtlInitUnicodeString(&DestinationString, SourceString);
                      v58 = RtlCultureNameToLCID(&DestinationString.Length, &v78);
                      v7 = 0LL;
                      v52 = v58 != 0;
                    }
                    else
                    {
                      RtlInitUnicodeString(&v94, SourceString);
                      v55 = RtlUnicodeStringToInteger(&v94, 16LL, &v78);
                      v7 = 0LL;
                      if ( v55 >= 0 )
                      {
                        v56 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
                        v7 = 0LL;
                        v88 = v56;
                        if ( !v56 )
                          goto LABEL_170;
                        DestinationString.Buffer = v56;
                        *(_DWORD *)&DestinationString.Length = 11141120;
                        v57 = RtlLCIDToCultureName(v78, (__int64)&DestinationString);
                        v27 = v72;
                        v7 = 0LL;
                        v11 = (__int64)v71;
                        if ( v57 )
                          v52 = 1;
                      }
                    }
                  }
                }
              }
            }
            v59 = String1;
            v60 = 0LL;
            if ( v9 )
            {
              do
              {
                if ( !v59 )
                  break;
                if ( !*v59 )
                  break;
                ++v60;
                v61 = -1LL;
                do
                  ++v61;
                while ( v59[v61] );
                v59 += v61 + 1;
              }
              while ( v60 < v9 );
              v11 = (__int64)v71;
            }
            if ( v9 >= v27 )
              goto LABEL_61;
            do
            {
              if ( !v52 || (v62 = wcsicmp(v59, DestinationString.Buffer), v7 = 0LL, !v62) )
              {
                RtlInitUnicodeString(&DestinationString, v59);
                LOBYTE(v67) = v76;
                LOBYTE(v66) = v68;
                v95 = DestinationString;
                v63 = RtlpGetMUIRedirectedFilePath(&v95, Heap, v79, v84, v66, v67, v80);
                v7 = 0LL;
                if ( (int)(v63 + 0x80000000) < 0 || v63 == -1073741789 )
                  break;
              }
              ++v9;
              v64 = -1LL;
              do
                ++v64;
              while ( v59[v64] );
              v59 += v64 + 1;
            }
            while ( v9 < v27 );
          }
          goto LABEL_38;
        }
        if ( v11 )
        {
LABEL_33:
          v28 = 0LL;
          for ( k = (const WCHAR *)v11; v28 < v9; k += v44 + 1 )
          {
            if ( !k )
              break;
            if ( !*k )
              break;
            ++v28;
            v44 = -1LL;
            do
              ++v44;
            while ( k[v44] );
          }
          if ( v9 >= v27 )
            goto LABEL_61;
          v30 = v79;
          do
          {
            if ( !*k )
              break;
            RtlInitUnicodeString(&DestinationString, k);
            LOBYTE(v67) = v76;
            LOBYTE(v66) = v68;
            v92 = DestinationString;
            v31 = RtlpGetMUIRedirectedFilePath(&v92, Heap, v30, v84, v66, v67, v80);
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
            v33 = v85;
            if ( SourceString || v85 )
            {
              if ( v69 )
                goto LABEL_42;
              v65 = RtlCultureNameToLCID(&DestinationString.Length, &v82);
              if ( v65 )
                v65 = (int)RtlIntegerToUnicode((unsigned __int16)v82, 0x10u, -4, (char *)v96) >= 0;
              RtlInitUnicodeString(&DestinationString, v96);
              v7 = 0LL;
              if ( v65 )
              {
LABEL_42:
                if ( v33 )
                {
                  if ( v32 )
                  {
                    if ( *v33 > (unsigned int)(DestinationString.Length >> 1) )
                    {
                      Length = DestinationString.Length;
                      memmove(v32, DestinationString.Buffer, DestinationString.Length);
                      v7 = 0LL;
                      v32[Length >> 1] = 0;
                    }
                  }
                  else
                  {
                    *v33 = 85;
                  }
                }
              }
            }
            v34 = v80 && (v32 || !v33);
            v14 = 0;
            goto LABEL_50;
          }
LABEL_61:
          v14 = -2147483642;
          v34 = 1;
LABEL_50:
          if ( v34 )
            *v89 = v86 | (((v9 + 1) ^ v27 ^ v86 ^ v10) << 52) ^ 0xCB7000000CB70000uLL | (16
                                                                                       * (v10 | ((v27 | ((v9 + 1) << 12)) << 24) | 0xCB7000));
          goto LABEL_168;
        }
        v70 = 0;
        RtlGetThreadPreferredUILanguages(48, (__int64)&v73, 0LL, &v70);
        v7 = 0LL;
        if ( v70 )
        {
          v41 = LdrpCalcAllocSize(v70, 2uLL);
          if ( !v41 )
          {
            v14 = -1073741675;
LABEL_68:
            if ( String1 != v7 )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)String1);
            goto LABEL_70;
          }
          v42 = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v41);
          v7 = 0LL;
          v71 = v42;
          v11 = (__int64)v42;
          if ( v42 )
          {
            ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(48, (__int64)&v73, v42, &v70);
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
    v20 = (unsigned __int64)(v13 & 0x40 | 0x20) >> 5;
  v69 = (v10 & 4) == 0;
  if ( (v10 & 0x200) == 0
    && ((v10 & 0x100) != 0
     || (IsWin32WithRCManifest = RtlpFileIsWin32WithRCManifest(a2), v7 = 0LL, IsWin32WithRCManifest)) )
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
      RtlpMUIGetAllInstalledLang(v83, &v71, &v72);
    }
    else
    {
      if ( v20 != 3 )
      {
        v27 = v72;
        v11 = (__int64)v71;
LABEL_30:
        v9 = 0LL;
        goto LABEL_31;
      }
      RtlpMUIEnumerateFolder(v15, &v72, &String1);
    }
    v27 = v72;
    v7 = 0LL;
    v11 = (__int64)v71;
    goto LABEL_30;
  }
  v23 = v22 + 48;
  v70 = 0;
  RtlGetThreadPreferredUILanguages(v22 + 48, (__int64)&v73, 0LL, &v70);
  if ( !v70 )
    goto LABEL_14;
  v24 = LdrpCalcAllocSize(v70, 2uLL);
  if ( v24 )
  {
    v25 = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, v23 - 40, v24);
    v71 = v25;
    v11 = (__int64)v25;
    if ( !v25 )
    {
      v14 = -1073741801;
LABEL_70:
      v15 = Heap;
      goto LABEL_14;
    }
    v26 = RtlGetThreadPreferredUILanguages(v23, (__int64)&v73, v25, &v70);
    v7 = 0LL;
    if ( v26 < 0 )
    {
      v14 = v26;
      goto LABEL_66;
    }
    v27 = v73;
    v72 = v73;
    goto LABEL_30;
  }
  v14 = -1073741675;
LABEL_14:
  if ( v15 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v15);
  return (unsigned int)v14;
}
