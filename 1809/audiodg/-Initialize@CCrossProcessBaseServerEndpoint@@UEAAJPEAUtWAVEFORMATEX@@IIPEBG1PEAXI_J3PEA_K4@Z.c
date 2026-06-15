/*
 * XREFs of ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z @ 0x14000F420
 * Callers:
 *     ?Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z @ 0x140012440 (-Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000ADF0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000AE7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x14000F364 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     _lambda_8005b057a5d97ca351a0db5179b44427_::operator() @ 0x140012298 (_lambda_8005b057a5d97ca351a0db5179b44427_--operator().c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x1400122F4 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140012328 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     StringCopyWorkerW @ 0x140015680 (StringCopyWorkerW.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140015B90 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140015C94 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140019F10 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14002FDD4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140037E7C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::Initialize(
        CCrossProcessBaseServerEndpoint *this,
        struct tWAVEFORMATEX *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 *a5,
        const unsigned __int16 *pszSrc,
        _QWORD *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12)
{
  __int64 v13; // r12
  unsigned int v14; // esi
  char *v16; // rdi
  __int64 v17; // rax
  void (__fastcall *v18)(char *, _QWORD); // rax
  __int64 nBlockAlign; // rdx
  WORD wFormatTag; // ax
  int v21; // eax
  unsigned int v22; // ebx
  void *v23; // rax
  char v24; // r13
  void *v25; // rax
  unsigned int v26; // r8d
  int v27; // edx
  int v28; // ecx
  unsigned int v29; // r9d
  int cbSize; // eax
  unsigned int v31; // edx
  unsigned int v32; // ebx
  unsigned int v33; // r12d
  void *v34; // rcx
  _DWORD *v35; // rax
  void **v36; // rsi
  __int64 v37; // rax
  int SecurityDescriptor; // eax
  unsigned int LastError; // r12d
  int v40; // eax
  SIZE_T v41; // r12
  const char *v42; // r9
  char *v43; // rbx
  void *v44; // rax
  char v45; // r13
  int v46; // eax
  const char *v47; // r9
  _DWORD *v48; // rbx
  int v49; // ecx
  unsigned int v50; // ecx
  __int64 v51; // rax
  unsigned int v52; // ecx
  __int32 v53; // r12d
  __int64 v54; // rcx
  char *v55; // rdx
  unsigned __int64 v56; // rcx
  HANDLE v57; // rdx
  unsigned __int64 v58; // rcx
  char v59; // r14
  __int64 v61; // rax
  __int64 v62; // rdx
  void *v63; // rcx
  __int64 v64; // r9
  unsigned int v65; // eax
  void *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdx
  int dwMaximumSizeLow; // [rsp+20h] [rbp-E0h]
  size_t dwMaximumSizeLowa; // [rsp+20h] [rbp-E0h]
  int v71; // [rsp+30h] [rbp-D0h]
  unsigned int v72; // [rsp+34h] [rbp-CCh]
  int v73; // [rsp+38h] [rbp-C8h]
  PVOID pvAddress; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v75; // [rsp+48h] [rbp-B8h]
  unsigned int v76; // [rsp+4Ch] [rbp-B4h]
  unsigned int v77; // [rsp+50h] [rbp-B0h]
  __int64 v78; // [rsp+58h] [rbp-A8h]
  int v79; // [rsp+60h] [rbp-A0h]
  HANDLE hObject; // [rsp+68h] [rbp-98h]
  _SECURITY_ATTRIBUTES FileMappingAttributes; // [rsp+70h] [rbp-90h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+88h] [rbp-78h] BYREF
  size_t Size; // [rsp+A0h] [rbp-60h]
  char *v84; // [rsp+A8h] [rbp-58h]
  char *v85; // [rsp+B0h] [rbp-50h]
  __int128 v86; // [rsp+B8h] [rbp-48h]
  char *v87; // [rsp+C8h] [rbp-38h]
  __int128 v88; // [rsp+D0h] [rbp-30h] BYREF
  char *v89; // [rsp+E0h] [rbp-20h]
  char v90; // [rsp+E8h] [rbp-18h]
  __int64 v91; // [rsp+F0h] [rbp-10h]
  __int64 v92; // [rsp+F8h] [rbp-8h]
  char *v93; // [rsp+100h] [rbp+0h]
  void **v94; // [rsp+110h] [rbp+10h]
  PVOID *p_pvAddress; // [rsp+120h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]
  unsigned int v97; // [rsp+170h] [rbp+70h]
  unsigned int pcchNewDestLength; // [rsp+180h] [rbp+80h]

  pcchNewDestLength = a3;
  v13 = a4;
  v14 = a3;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 384));
  if ( *((_DWORD *)this - 86) != 1 )
  {
    memset(&FileMappingAttributes, 0, sizeof(FileMappingAttributes));
    memset(&EventAttributes, 0, sizeof(EventAttributes));
    *(_QWORD *)&v86 = &EventAttributes;
    *((_QWORD *)&v86 + 1) = &FileMappingAttributes;
    v16 = (char *)this - 400;
    v17 = *((_QWORD *)this - 50);
    v87 = (char *)this - 400;
    v88 = v86;
    v18 = *(void (__fastcall **)(char *, _QWORD))(v17 + 48);
    v89 = (char *)this - 400;
    v90 = 1;
    v18((char *)this - 400, a8);
    nBlockAlign = a2->nBlockAlign;
    *((_DWORD *)this - 80) = nBlockAlign;
    *((_DWORD *)this - 79) = a2->nChannels;
    *((_DWORD *)this - 75) = 1;
    if ( a2->wFormatTag == 3 )
      goto LABEL_58;
    if ( a2->wFormatTag == 0xFFFE )
    {
      v61 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( !v61 )
        v61 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( !v61 )
LABEL_58:
        *((_DWORD *)this - 75) = 3;
    }
    *((float *)this - 61) = (float)(int)a2->nSamplesPerSec;
    *((_DWORD *)this - 77) = a2->wBitsPerSample;
    if ( a2->wFormatTag == 0xFFFE )
      wFormatTag = a2[1].wFormatTag;
    else
      wFormatTag = a2->wBitsPerSample;
    *((_DWORD *)this - 76) = wFormatTag;
    if ( (unsigned __int64)(v13 * nBlockAlign) > 0xFFFFFFFF )
    {
      LastError = -2147024362;
      v62 = 632LL;
    }
    else
    {
      v21 = 0;
      v22 = v13 * nBlockAlign;
      if ( *((_DWORD *)this + 12) == 1 )
        v21 = v13 * nBlockAlign;
      v71 = v21;
      v23 = AERTCreateZoneHeap((unsigned int)(v13 * nBlockAlign));
      *((_QWORD *)this - 33) = v23;
      if ( v23 )
      {
        v93 = (char *)this - 400;
        v24 = 1;
        v91 = (1 * (unsigned __int128)v22) >> 64;
        if ( is_mul_ok(1uLL, v22) )
          v25 = AERTZoneAllocate(v22, v23);
        else
          v25 = 0LL;
        *((_QWORD *)this - 37) = v25;
        if ( !v25 )
        {
          LastError = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x288,
            (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
            (const char *)0x8007000ELL,
            dwMaximumSizeLow);
          goto LABEL_65;
        }
        v26 = *((_DWORD *)this - 80);
        if ( v26 == 4 )
          v27 = v14 & 3;
        else
          v27 = v14 % v26;
        if ( v27 )
        {
          v14 += v26 - v27;
          pcchNewDestLength = v14;
        }
        v28 = *((_DWORD *)this + 12);
        *((_DWORD *)this - 62) = v14;
        if ( v28 == 1 )
        {
          v29 = v14 / v26 / (unsigned int)v13 + 3;
          if ( v29 < 0x19 )
            v29 = 25;
        }
        else
        {
          v29 = 0;
        }
        cbSize = a2->cbSize;
        v75 = v29;
        v76 = 0;
        v31 = (cbSize + 519) & 0xFFFFFF80;
        v32 = cbSize + 192;
        v79 = cbSize + 192;
        v77 = v31;
        v33 = ((v29 << 6) + v31 + 1023) & 0xFFFFFC00;
        v97 = v33;
        if ( a9 )
        {
          v76 = ((v29 << 6) + v31 + 1023) & 0xFFFFFC00;
          v33 = ((v29 << 6) + v33 + 1023) & 0xFFFFFC00;
          v97 = v33;
        }
        LODWORD(v78) = 0;
        v72 = 0;
        v73 = 0;
        if ( a10 )
        {
          LODWORD(v64) = v26 * (int)((double)(int)a2->nSamplesPerSec * (double)(int)a10 / 10000000.0 + 0.5);
          v78 = (unsigned int)v64;
          if ( (unsigned int)v64 % v26 )
          {
            v64 = v26 - (unsigned int)v64 % v26 + (unsigned int)v64;
            v78 = v64;
          }
          if ( v28 == 1 )
          {
            v65 = (unsigned int)v64 / v26 / a4 + 3;
            if ( v65 < 0x19 )
              v65 = 25;
          }
          else
          {
            v65 = 0;
          }
          v72 = v65;
          v73 = v14 + v71 + v33 + (v65 << 6);
        }
        v34 = (void *)AERTGetDLLRTHeap();
        Size = v32;
        v92 = (1 * (unsigned __int128)v32) >> 64;
        if ( is_mul_ok(1uLL, v32) )
          v35 = AERTAllocate(v32, v34);
        else
          v35 = 0LL;
        *((_QWORD *)this - 41) = v35;
        if ( !v35 )
        {
          LastError = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2D2,
            (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
            (const char *)0x8007000ELL,
            dwMaximumSizeLow);
          goto LABEL_65;
        }
        v35[36] = -1;
        v36 = (void **)((char *)this - 400);
        v37 = *((_QWORD *)this - 41);
        v94 = (void **)((char *)this - 400);
        *(_DWORD *)(v37 + 164) = 0;
        *(_DWORD *)(*((_QWORD *)this - 41) + 168LL) = 0;
        *(_DWORD *)(*((_QWORD *)this - 41) + 136LL) = 0;
        *(_DWORD *)(*((_QWORD *)this - 41) + 140LL) = 0;
        FileMappingAttributes.nLength = 24;
        FileMappingAttributes.lpSecurityDescriptor = 0LL;
        FileMappingAttributes.bInheritHandle = 0;
        EventAttributes.nLength = 24;
        EventAttributes.lpSecurityDescriptor = 0LL;
        EventAttributes.bInheritHandle = 0;
        if ( a5 )
        {
          SecurityDescriptor = CreateSecurityDescriptor(a5, 0xF001Fu, &FileMappingAttributes.lpSecurityDescriptor);
          LastError = SecurityDescriptor;
          if ( SecurityDescriptor < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2F1,
              (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
              (const char *)(unsigned int)SecurityDescriptor,
              dwMaximumSizeLow);
            goto LABEL_81;
          }
          v40 = CreateSecurityDescriptor(a5, 0x1F0003u, &EventAttributes.lpSecurityDescriptor);
          LastError = v40;
          if ( v40 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2F3,
              (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
              (const char *)(unsigned int)v40,
              dwMaximumSizeLow);
            goto LABEL_81;
          }
          v33 = v97;
        }
        if ( a10 )
          v41 = (unsigned int)(v78 + v73);
        else
          v41 = pcchNewDestLength + v71 + v33;
        v85 = (char *)CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, &FileMappingAttributes, 4u, 0, v41, 0LL);
        v43 = v85;
        v84 = v85;
        if ( ((unsigned __int64)(v85 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        {
          if ( GetLastError() == 183 )
          {
            v67 = 793LL;
          }
          else
          {
            v44 = MapViewOfFile(v43, 0xF001Fu, 0, 0, v41);
            pvAddress = v44;
            if ( v44 )
            {
              p_pvAddress = &pvAddress;
              v45 = 1;
              v46 = AERTLockMemory(v44, v41);
              if ( v46 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x326,
                  (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
                  (const char *)(unsigned int)v46,
                  dwMaximumSizeLowa);
              hObject = CreateEventW(&EventAttributes, 1, 1, 0LL);
              if ( (((unsigned __int64)hObject + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              {
                if ( GetLastError() != 183 )
                {
                  v48 = pvAddress;
                  v49 = v79;
                  *((_DWORD *)this - 78) = a4;
                  **((_DWORD **)this - 41) = v49;
                  v50 = v75;
                  *(_DWORD *)(*((_QWORD *)this - 41) + 132LL) = v75;
                  v51 = *((_QWORD *)this - 41);
                  if ( a9 )
                  {
                    *(_DWORD *)(v51 + 136) = v50;
                    *(_DWORD *)(*((_QWORD *)this - 41) + 144LL) = v77;
                    v51 = *((_QWORD *)this - 41);
                    v52 = v76;
                  }
                  else
                  {
                    v52 = v77;
                  }
                  *(_DWORD *)(v51 + 148) = v52;
                  v53 = pcchNewDestLength + v97 + v71;
                  *(_DWORD *)(*((_QWORD *)this - 41) + 152LL) = v97;
                  *(_DWORD *)(*((_QWORD *)this - 41) + 156LL) = v97 + pcchNewDestLength;
                  *(_DWORD *)(*((_QWORD *)this - 41) + 160LL) = v53;
                  if ( a10 )
                  {
                    *(_DWORD *)(*((_QWORD *)this - 41) + 140LL) = v72;
                    *(_DWORD *)(*((_QWORD *)this - 41) + 164LL) = v73;
                    *(_DWORD *)(*((_QWORD *)this - 41) + 168LL) = v78 + v73;
                  }
                  if ( pszSrc )
                  {
                    StringCopyWorkerW(
                      (STRSAFE_LPWSTR)(*((_QWORD *)this - 41) + 4LL),
                      0x40uLL,
                      (size_t *)pcchNewDestLength,
                      pszSrc,
                      dwMaximumSizeLowa);
                    a7[4] = (char *)this + 24;
                  }
                  memcpy_0((void *)(*((_QWORD *)this - 41) + 172LL), a2, a2->cbSize + 18LL);
                  memcpy_0(v48 + 49, *((const void **)this - 41), Size);
                  memset_0(v48, 0, 0xC0uLL);
                  *((_QWORD *)this - 42) = v48;
                  WerRegisterMemoryBlock(v48, 0xC0u);
                  v54 = *((_QWORD *)this - 41);
                  v55 = (char *)pvAddress;
                  *((_QWORD *)this - 36) = (char *)pvAddress + *(unsigned int *)(v54 + 148);
                  if ( a9 )
                    *((_QWORD *)this - 34) = &v55[*(unsigned int *)(v54 + 144)];
                  *(_DWORD *)(*((_QWORD *)this - 42) + 180LL) = -1;
                  if ( a10 )
                  {
                    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 42) + 180LL), v53);
                    v16 = v93;
                    v36 = v94;
                    *((_QWORD *)this - 35) = (char *)pvAddress + *(unsigned int *)(*((_QWORD *)this - 42) + 180LL);
                  }
                  v56 = (unsigned __int64)v85;
                  v45 = 0;
                  v57 = hObject;
                  v48[48] = 1162888004;
                  v43 = 0LL;
                  *((_QWORD *)this + 1) = v56;
                  LastError = 0;
                  *((_QWORD *)this - 32) = v57;
                  *a11 = v56;
                  v58 = *((_QWORD *)this - 32);
                  v84 = 0LL;
                  *a12 = v58;
                  *((_DWORD *)this - 86) = 1;
                  goto LABEL_49;
                }
                v68 = 815LL;
              }
              else
              {
                v68 = 814LL;
              }
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)v68,
                            (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
                            v47);
              if ( (((unsigned __int64)hObject + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              {
                CloseHandle(hObject);
                v59 = 1;
LABEL_92:
                UnmapViewOfFile(pvAddress);
                pvAddress = 0LL;
LABEL_50:
                v24 = v59;
                if ( (unsigned __int64)(v43 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                  CloseHandle(v43);
                if ( !v59 )
                {
LABEL_53:
                  if ( !v24 )
                  {
LABEL_54:
                    v90 = 0;
                    lambda_8005b057a5d97ca351a0db5179b44427_::operator()(&v88);
                    return LastError;
                  }
LABEL_65:
                  v63 = (void *)*((_QWORD *)v16 + 17);
                  if ( v63 )
                  {
                    AERTDestroyZoneHeap(v63);
                    *((_QWORD *)v16 + 17) = 0LL;
                  }
                  goto LABEL_54;
                }
LABEL_81:
                v66 = (void *)AERTGetDLLRTHeap();
                AERTFree(v36[9], v66);
                v36[9] = 0LL;
                goto LABEL_53;
              }
LABEL_49:
              v59 = v45;
              if ( !v45 )
                goto LABEL_50;
              goto LABEL_92;
            }
            v67 = 797LL;
          }
        }
        else
        {
          v67 = 791LL;
        }
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)v67,
                      (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
                      v42);
        v59 = 1;
        goto LABEL_50;
      }
      LastError = -2147024882;
      v62 = 639LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v62,
      (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)LastError,
      dwMaximumSizeLow);
    goto LABEL_54;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x252,
    (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    (const char *)0x887C0010LL,
    dwMaximumSizeLow);
  return 2289827856LL;
}
