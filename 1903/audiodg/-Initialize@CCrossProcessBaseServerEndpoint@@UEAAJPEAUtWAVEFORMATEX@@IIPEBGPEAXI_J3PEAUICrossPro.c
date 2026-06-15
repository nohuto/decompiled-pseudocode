/*
 * XREFs of ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140004120
 * Callers:
 *     ?Initialize@CCrossProcessServerInputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBGPEAXI_J3PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140001A10 (-Initialize@CCrossProcessServerInputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBGPEAXI_J3PEAUICrossPr.c)
 * Callees:
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140001CCC (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ??$copy_to@UICrossProcessMemory@@@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessMemory@@@Z @ 0x140001D28 (--$copy_to@UICrossProcessMemory@@@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x140001D7C (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x140003A88 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140008CEC (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140011FE8 (-AERTFree@@YAXPEAX0@Z.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     memcpy_0 @ 0x140017D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400287A8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140040A90 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::Initialize(
        CCrossProcessBaseServerEndpoint *this,
        struct tWAVEFORMATEX *a2,
        int a3,
        unsigned int a4,
        unsigned __int16 *a5,
        _QWORD *a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        struct ICrossProcessMemoryManager *a10,
        struct ICrossProcessEventManager *a11,
        struct ICrossProcessMemory **a12,
        struct ICrossProcessEvent **a13)
{
  __int64 v14; // rdi
  unsigned int v15; // r15d
  char *v17; // rsi
  __int64 v18; // rax
  __int64 nBlockAlign; // rcx
  __int64 v20; // rax
  WORD wFormatTag; // ax
  unsigned __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // r13d
  void *v25; // rax
  __int64 v26; // rcx
  char *v27; // rdi
  __int64 v28; // rax
  int v29; // r13d
  unsigned int v30; // ecx
  unsigned int v31; // edx
  int cbSize; // eax
  unsigned int v33; // r8d
  unsigned int v34; // r9d
  unsigned int v35; // r15d
  unsigned int v36; // ebx
  void *v37; // rax
  __int64 v38; // rcx
  void *v39; // rax
  __int64 v40; // rax
  void **v41; // rbx
  __int64 v42; // rdx
  int v43; // eax
  unsigned int v44; // r15d
  __int64 v45; // rax
  unsigned int v46; // ecx
  _DWORD *v47; // r15
  __int64 v48; // rcx
  struct ICrossProcessEvent *v49; // rcx
  char v50; // r12
  unsigned int v52; // ebx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // r8
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // r9
  int v59; // ecx
  __int64 v60; // rcx
  void *v61; // rax
  void *v62; // rcx
  int v63; // [rsp+28h] [rbp-79h]
  int v64; // [rsp+28h] [rbp-79h]
  int v65; // [rsp+2Ch] [rbp-75h]
  unsigned int v66; // [rsp+30h] [rbp-71h]
  unsigned int v67; // [rsp+34h] [rbp-6Dh]
  unsigned int v68; // [rsp+38h] [rbp-69h]
  unsigned int v69; // [rsp+3Ch] [rbp-65h]
  __int64 v70; // [rsp+40h] [rbp-61h] BYREF
  PVOID pvAddress; // [rsp+48h] [rbp-59h]
  __int64 v72; // [rsp+50h] [rbp-51h]
  char *v73; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v74; // [rsp+60h] [rbp-41h] BYREF
  size_t Size; // [rsp+68h] [rbp-39h]
  char *v76; // [rsp+70h] [rbp-31h]
  char *v77; // [rsp+80h] [rbp-21h]
  void **v78; // [rsp+90h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+3Fh]
  int v80; // [rsp+E8h] [rbp+47h]
  __int32 v81; // [rsp+E8h] [rbp+47h]
  int v82; // [rsp+F8h] [rbp+57h]

  v82 = a3;
  v14 = a4;
  v15 = a3;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 384));
  if ( *((_DWORD *)this - 86) == 1 )
  {
    v52 = -2005139440;
    v53 = 595LL;
  }
  else
  {
    if ( a12 )
    {
      v17 = (char *)this - 400;
      *a12 = 0LL;
      v18 = *((_QWORD *)this - 50);
      v76 = (char *)this - 400;
      (*(void (__fastcall **)(char *, _QWORD))(v18 + 48))((char *)this - 400, a7);
      nBlockAlign = a2->nBlockAlign;
      *((_DWORD *)this - 78) = nBlockAlign;
      *((_DWORD *)this - 77) = a2->nChannels;
      *((_DWORD *)this - 73) = 1;
      if ( a2->wFormatTag == 3 )
        goto LABEL_8;
      if ( a2->wFormatTag == 0xFFFE )
      {
        v20 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2)
            - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v20 )
          v20 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( !v20 )
LABEL_8:
          *((_DWORD *)this - 73) = 3;
      }
      *((float *)this - 61) = (float)(int)a2->nSamplesPerSec;
      *((_DWORD *)this - 75) = a2->wBitsPerSample;
      if ( a2->wFormatTag == 0xFFFE )
        wFormatTag = a2[1].wFormatTag;
      else
        wFormatTag = a2->wBitsPerSample;
      v22 = v14 * nBlockAlign;
      *((_DWORD *)this - 74) = wFormatTag;
      if ( v22 > 0xFFFFFFFF )
      {
        v44 = -2147024362;
        v54 = 631LL;
      }
      else
      {
        v23 = v22;
        if ( *((_DWORD *)this + 12) != 1 )
          v23 = 0;
        v24 = v22;
        v80 = v23;
        v25 = (void *)AERTCreateZoneHeap((unsigned int)v22);
        *((_QWORD *)this - 32) = v25;
        if ( v25 )
        {
          v77 = (char *)this - 400;
          v27 = (char *)this - 400;
          v28 = AE_ALLOCATE_SAFEMULT(v26, v24, v25, (__int64 (__fastcall *)(unsigned __int64, void *))AERTZoneAllocate);
          v29 = 0;
          *((_QWORD *)this - 36) = v28;
          if ( !v28 )
          {
            v44 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x287,
              (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
              (const char *)0x8007000ELL,
              v63);
            goto LABEL_77;
          }
          v30 = *((_DWORD *)this - 78);
          if ( v15 % v30 )
          {
            v15 += v30 - v15 % v30;
            v82 = v15;
          }
          *((_DWORD *)this - 62) = v15;
          if ( *((_DWORD *)this + 12) == 1 )
          {
            v31 = v15 / v30 / a4 + 3;
            if ( v31 < 0x19 )
              v31 = 25;
          }
          else
          {
            v31 = 0;
          }
          cbSize = a2->cbSize;
          v66 = v31;
          v67 = 0;
          v33 = (cbSize + 519) & 0xFFFFFF80;
          v34 = cbSize + 192;
          v65 = cbSize + 192;
          v68 = v33;
          v35 = ((v31 << 6) + v33 + 1023) & 0xFFFFFC00;
          v69 = v35;
          if ( a8 )
          {
            v67 = ((v31 << 6) + v33 + 1023) & 0xFFFFFC00;
            v35 = ((v31 << 6) + v35 + 1023) & 0xFFFFFC00;
            v69 = v35;
          }
          LODWORD(v72) = 0;
          v64 = 0;
          if ( a9 )
          {
            LODWORD(v55) = v30 * (int)((double)(int)a2->nSamplesPerSec * (double)(int)a9 / 10000000.0 + 0.5);
            v72 = (unsigned int)v55;
            if ( (unsigned int)v55 % v30 )
            {
              v55 = v30 - (unsigned int)v55 % v30 + (unsigned int)v55;
              v72 = v55;
            }
            if ( *((_DWORD *)this + 12) == 1 )
            {
              v56 = (unsigned int)v55 / v30 / a4 + 3;
              if ( v56 < 0x19 )
                v56 = 25;
            }
            else
            {
              v56 = 0;
            }
            v64 = v56;
            v29 = v82 + v35 + v80 + (v56 << 6);
          }
          v36 = v34;
          Size = v34;
          v37 = AERTGetDLLRTHeap();
          v39 = (void *)AE_ALLOCATE_SAFEMULT(
                          v38,
                          v36,
                          v37,
                          (__int64 (__fastcall *)(unsigned __int64, void *))AERTAllocate);
          *((_QWORD *)this - 40) = v39;
          if ( !v39 )
          {
            v44 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2D1,
              (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
              (const char *)0x8007000ELL,
              v64);
            goto LABEL_77;
          }
          memset_0(v39, 0, v36);
          v40 = *((_QWORD *)this - 40);
          v41 = (void **)((char *)this - 400);
          v78 = (void **)((char *)this - 400);
          *(_DWORD *)(v40 + 144) = -1;
          *(_DWORD *)(*((_QWORD *)this - 40) + 164LL) = 0;
          *(_DWORD *)(*((_QWORD *)this - 40) + 168LL) = 0;
          *(_DWORD *)(*((_QWORD *)this - 40) + 136LL) = 0;
          *(_DWORD *)(*((_QWORD *)this - 40) + 140LL) = 0;
          if ( a9 )
            v42 = (unsigned int)(v29 + v72);
          else
            v42 = v82 + v35 + v80;
          v70 = 0LL;
          LODWORD(pvAddress) = v42;
          v43 = (*(__int64 (__fastcall **)(struct ICrossProcessMemoryManager *, __int64, __int64 *))(*(_QWORD *)a10 + 32LL))(
                  a10,
                  v42,
                  &v70);
          v44 = v43;
          if ( v43 < 0 )
          {
            v57 = 770LL;
          }
          else
          {
            v43 = (*(__int64 (__fastcall **)(__int64, unsigned int *, char **))(*(_QWORD *)v70 + 32LL))(v70, &v74, &v73);
            v44 = v43;
            if ( v43 < 0 )
            {
              v57 = 775LL;
            }
            else
            {
              if ( v74 < (unsigned int)pvAddress )
              {
                v44 = -2147024882;
                v57 = 777LL;
                v58 = 2147942414LL;
LABEL_73:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v57,
                  (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
                  (const char *)v58,
                  v64);
                v50 = 1;
LABEL_43:
                wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v70);
                if ( !v50 )
                {
LABEL_44:
                  LeaveCriticalSection((LPCRITICAL_SECTION)(v17 + 16));
                  return v44;
                }
                v61 = AERTGetDLLRTHeap();
                AERTFree(v41[10], v61);
                v41[10] = 0LL;
LABEL_77:
                v62 = (void *)*((_QWORD *)v27 + 18);
                if ( v62 )
                {
                  AERTDestroyZoneHeap(v62);
                  *((_QWORD *)v27 + 18) = 0LL;
                }
                goto LABEL_44;
              }
              *((_DWORD *)this - 76) = a4;
              pvAddress = v73;
              **((_DWORD **)this - 40) = v65;
              *(_DWORD *)(*((_QWORD *)this - 40) + 132LL) = v66;
              v45 = *((_QWORD *)this - 40);
              if ( a8 )
              {
                *(_DWORD *)(v45 + 136) = v66;
                *(_DWORD *)(*((_QWORD *)this - 40) + 144LL) = v68;
                v45 = *((_QWORD *)this - 40);
                v46 = v67;
              }
              else
              {
                v46 = v68;
              }
              *(_DWORD *)(v45 + 148) = v46;
              *(_DWORD *)(*((_QWORD *)this - 40) + 152LL) = v69;
              *(_DWORD *)(*((_QWORD *)this - 40) + 156LL) = v69 + v82;
              v81 = v82 + v69 + v80;
              *(_DWORD *)(*((_QWORD *)this - 40) + 160LL) = v81;
              if ( a9 )
              {
                *(_DWORD *)(*((_QWORD *)this - 40) + 140LL) = v64;
                v59 = v29 + v72;
                *(_DWORD *)(*((_QWORD *)this - 40) + 164LL) = v29;
                *(_DWORD *)(*((_QWORD *)this - 40) + 168LL) = v59;
              }
              if ( !a11 )
              {
                if ( a5 )
                {
                  StringCchCopyW((unsigned __int16 *)(*((_QWORD *)this - 40) + 4LL), 0x40uLL, a5);
                  a6[4] = (char *)this + 24;
                }
                goto LABEL_36;
              }
              v60 = *((_QWORD *)this + 1);
              *((_QWORD *)this + 1) = 0LL;
              if ( v60 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
              v43 = (*(__int64 (__fastcall **)(struct ICrossProcessEventManager *, char *))(*(_QWORD *)a11 + 32LL))(
                      a11,
                      (char *)this + 8);
              v44 = v43;
              if ( v43 >= 0 )
              {
                *((_QWORD *)this + 2) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 24LL))(*((_QWORD *)this + 1));
LABEL_36:
                memcpy_0((void *)(*((_QWORD *)this - 40) + 172LL), a2, a2->cbSize + 18LL);
                v47 = pvAddress;
                memcpy_0((char *)pvAddress + 196, *((const void **)this - 40), Size);
                memset_0(v47, 0, 0xC0uLL);
                *((_QWORD *)this - 41) = v47;
                WerRegisterMemoryBlock(v47, 0xC0u);
                v48 = *((_QWORD *)this - 40);
                *((_QWORD *)this - 35) = &v73[*(unsigned int *)(v48 + 148)];
                if ( a8 )
                  *((_QWORD *)this - 33) = &v73[*(unsigned int *)(v48 + 144)];
                *(_DWORD *)(*((_QWORD *)this - 41) + 180LL) = -1;
                if ( a9 )
                {
                  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 41) + 180LL), v81);
                  v17 = v76;
                  v27 = v77;
                  v41 = v78;
                  *((_QWORD *)this - 34) = &v73[*(unsigned int *)(*((_QWORD *)this - 41) + 180LL)];
                }
                v47[48] = 1162888004;
                wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this - 42, v70);
                wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::copy_to<ICrossProcessMemory>(&v70, a12);
                v49 = (struct ICrossProcessEvent *)*((_QWORD *)this + 1);
                if ( v49 )
                {
                  *a13 = v49;
                  (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v49 + 8LL))(v49);
                }
                else
                {
                  *a13 = 0LL;
                }
                v50 = 0;
                v44 = 0;
                *((_DWORD *)this - 86) = 1;
                goto LABEL_43;
              }
              v57 = 810LL;
            }
          }
          v58 = (unsigned int)v43;
          goto LABEL_73;
        }
        v44 = -2147024882;
        v54 = 638LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v54,
        (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        (const char *)v44,
        v63);
      goto LABEL_44;
    }
    v52 = -2147024809;
    v53 = 597LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v53,
    (unsigned int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    (const char *)v52,
    v63);
  return v52;
}
