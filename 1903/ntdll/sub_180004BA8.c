/*
 * XREFs of sub_180004BA8 @ 0x180004BA8
 * Callers:
 *     sub_1800059B8 @ 0x1800059B8 (sub_1800059B8.c)
 *     sub_18006CF40 @ 0x18006CF40 (sub_18006CF40.c)
 *     sub_18010D034 @ 0x18010D034 (sub_18010D034.c)
 * Callees:
 *     sub_180002740 @ 0x180002740 (sub_180002740.c)
 *     sub_180002940 @ 0x180002940 (sub_180002940.c)
 *     sub_180004020 @ 0x180004020 (sub_180004020.c)
 *     EtwpGetCpuSpeed_0 @ 0x18000434C (EtwpGetCpuSpeed_0.c)
 *     sub_180005210 @ 0x180005210 (sub_180005210.c)
 *     sub_180005268 @ 0x180005268 (sub_180005268.c)
 *     RtlQueryPerformanceCounter @ 0x18000BBB0 (RtlQueryPerformanceCounter.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x18009C7A0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x18009C7E0 (ZwWriteFile.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 *     ZwSetInformationFile @ 0x18009CBC0 (ZwSetInformationFile.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 *     ZwQueryVolumeInformationFile @ 0x18009D000 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180004BA8(__int64 a1, void *a2, int a3, char a4)
{
  bool v7; // zf
  _DWORD *v8; // r13
  __int64 v9; // r15
  int SystemInformation; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // r12d
  __int64 Heap; // rax
  __int64 v15; // rsi
  _DWORD *v16; // r14
  char *v17; // rbx
  unsigned __int64 v18; // rax
  struct _PEB *v19; // rcx
  char v20; // r9
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  int v25; // eax
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rdx
  size_t v30; // rdx
  unsigned int v31; // r8d
  char *v32; // rcx
  char v33; // al
  char v34; // r10
  int v35; // eax
  __int64 v36; // r13
  int v37; // r15d
  int v38; // eax
  int v39; // ecx
  int v40; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+58h] [rbp-A8h]
  int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  size_t Size; // [rsp+68h] [rbp-98h]
  void *Src; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v50[16]; // [rsp+90h] [rbp-70h] BYREF
  PCWSTR SourceString; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-58h] BYREF
  char v53[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C8h] [rbp-38h]
  _QWORD v56[4]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v57[16]; // [rsp+100h] [rbp+0h] BYREF
  char v58[20]; // [rsp+140h] [rbp+40h] BYREF
  int v59; // [rsp+154h] [rbp+54h]
  _QWORD v60[6]; // [rsp+158h] [rbp+58h] BYREF

  Src = a2;
  LODWORD(Size) = a3;
  v43 = 0;
  memset(v57, 0, sizeof(v57));
  memset(v60, 0, sizeof(v60));
  memset(v56, 0, sizeof(v56));
  v7 = (*(_BYTE *)(a1 + 324) & 8) == 0;
  v8 = 0LL;
  v44 = 0LL;
  if ( !v7 )
    sub_180002740((const wchar_t **)(a1 + 184), (volatile signed __int32 *)(a1 + 200), (UNICODE_STRING *)(a1 + 168));
  v9 = *(unsigned int *)(a1 + 208);
  SourceString = *(PCWSTR *)(a1 + 176);
  if ( a2 )
  {
    v42 = a3;
    v13 = a3 + 79;
LABEL_10:
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v9);
    v15 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v16 = (_DWORD *)(Heap + 72);
    SystemInformation = sub_180005268(SourceString, v40, (__int64)&v44);
    if ( SystemInformation < 0 )
    {
      v26 = v44;
    }
    else if ( a4 )
    {
      v26 = v44;
      v47 = 0LL;
      SystemInformation = ZwReadFile(v44, 0LL, 0LL, 0LL, v50, v15, v9, &v47, 0LL);
      if ( SystemInformation >= 0 )
      {
        if ( (*(_BYTE *)(v15 + 136) & 2) == 0
          && *(_BYTE *)(v15 + 108) == MEMORY[0x7FFE026C]
          && *(_BYTE *)(v15 + 109) == MEMORY[0x7FFE0270]
          && *(_DWORD *)(v15 + 148) == 8 )
        {
          v36 = *(unsigned int *)(v15 + 104);
          if ( (unsigned int)(v36 - 1024) <= 0xFFFC00 )
          {
            v37 = *(_DWORD *)(v15 + 140);
            if ( v37 )
            {
              if ( *(_QWORD *)(v15 + 120) && *(_DWORD *)(v15 + 116) == *(_DWORD *)(a1 + 204) )
              {
                *(_QWORD *)(v15 + 120) = 0LL;
                v38 = ZwWriteFile(v26, 0LL, 0LL, 0LL, v50, v15, *(_DWORD *)(a1 + 208), &v47, 0LL);
                *(_DWORD *)(a1 + 392) = v37;
                SystemInformation = v38;
                *(_DWORD *)(a1 + 336) = v37;
                *(_DWORD *)(a1 + 208) = v36;
                *(_QWORD *)(a1 + 352) = v36;
                *(_QWORD *)(a1 + 144) = v26;
                *(_QWORD *)(a1 + 360) = (unsigned int)(v36 * v37);
LABEL_39:
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v15);
                return (unsigned int)SystemInformation;
              }
            }
          }
        }
        SystemInformation = -1073741811;
      }
    }
    else
    {
      v17 = (char *)Src;
      *(_DWORD *)v15 = v9;
      *(_DWORD *)(v15 + 52) = 262145;
      *(_DWORD *)(v15 + 48) = v13 & 0xFFFFFFF8;
      if ( v17 )
      {
        v30 = (unsigned int)Size;
        v31 = 0;
        if ( (_DWORD)Size )
        {
          do
          {
            v32 = &v17[v31];
            *((_DWORD *)v32 + 16) = *(_DWORD *)(a1 + 324) & 0x4101000 | 0x10001;
            v8 = v32 + 32;
            *((_DWORD *)v32 + 17) = 1;
            *((_DWORD *)v32 + 8) = *(_DWORD *)(a1 + 208);
            if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
              || *(_DWORD *)(a1 + 208) > 0x100000u
              || *((_DWORD *)v32 + 11) > 0x100u )
            {
              v33 = 0;
              v34 = 2;
            }
            else
            {
              v33 = 5;
              v34 = 1;
            }
            v32[38] = v34;
            v32[39] = v33;
            v31 += (*((unsigned __int16 *)v32 + 2) + 7) & 0xFFFFFFF8;
          }
          while ( v31 < (unsigned int)v30 );
          v16 = (_DWORD *)(v15 + 72);
        }
        if ( v8[11] == 4 )
          v35 = v8[66];
        else
          v35 = v8[68];
        *(_DWORD *)(a1 + 16) = v35;
        memmove(v16, v17, v30);
      }
      else
      {
        v16[1] = v42;
        *v16 = -1073610752;
        if ( *(_DWORD *)(a1 + 16) == 2 )
        {
          v18 = MEMORY[0x7FFE0014];
        }
        else if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          v18 = __rdtsc();
        }
        else
        {
          v48 = 0LL;
          RtlQueryPerformanceCounter(&v48);
          v18 = v48;
        }
        *((_QWORD *)v16 + 2) = v18;
        v16[3] = v54;
        v16[2] = v55;
        v16[6] = v56[2] / (__int64)v57[1];
        v16[7] = v56[3] / (__int64)v57[1];
        v19 = NtCurrentPeb();
        *(_BYTE *)(v15 + 108) = v19->OSMajorVersion;
        *(_BYTE *)(v15 + 109) = v19->OSMinorVersion;
        if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0
          || *(_DWORD *)(a1 + 208) > 0x100000u
          || *(_DWORD *)(a1 + 204) > 0x100u )
        {
          v20 = 0;
          v21 = 2;
        }
        else
        {
          v20 = 5;
          v21 = 1;
        }
        *(_BYTE *)(v15 + 110) = v21;
        *(_BYTE *)(v15 + 111) = v20;
        *(_DWORD *)(v15 + 112) = v19->OSBuildNumber;
        *(_DWORD *)(v15 + 376) = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(v15 + 116) = *(_DWORD *)(a1 + 204);
        *(_DWORD *)(v15 + 144) = 1;
        *(_DWORD *)(v15 + 140) = 1;
        *(_DWORD *)(v15 + 148) = 8;
        *(_DWORD *)(v15 + 104) = v9;
        *(_DWORD *)(v15 + 132) = *(_DWORD *)(a1 + 320);
        *(_DWORD *)(v15 + 136) = *(_DWORD *)(a1 + 324);
        *(_DWORD *)(v15 + 128) = v57[1];
        *(_QWORD *)(v15 + 352) = v60[0] - v60[4];
        *(_DWORD *)(v15 + 156) = v43;
        *(_QWORD *)(v15 + 160) = 0LL;
        *(_QWORD *)(v15 + 168) = 0LL;
        memmove((void *)(v15 + 384), *(const void **)(a1 + 160), *(unsigned __int16 *)(a1 + 152) + 2LL);
        memmove(
          (void *)(v15 + *(unsigned __int16 *)(a1 + 152) + 386LL),
          *(const void **)(a1 + 176),
          *(unsigned __int16 *)(a1 + 168) + 2LL);
        sub_180002940((char *)(v15 + 176));
        *(_QWORD *)(v15 + 360) = MEMORY[0x7FFE0300];
        *(_QWORD *)(v15 + 368) = *(_QWORD *)a1;
        *((_QWORD *)v16 + 2) = *(_QWORD *)(a1 + 8);
        v22 = *(unsigned int *)(v15 + 48);
        if ( (unsigned int)(v22 + 80) <= *(_DWORD *)v15 )
        {
          v23 = v15 + v22;
          *(_DWORD *)(v23 + 4) = 5242960;
          *(_DWORD *)v23 = -1073610750;
          *(_DWORD *)(v23 + 8) = v55;
          *(_DWORD *)(v23 + 12) = v54;
          *(_DWORD *)(v23 + 24) = v56[2] / (__int64)v57[1];
          *(_DWORD *)(v23 + 28) = v56[3] / (__int64)v57[1];
          if ( *(_DWORD *)(a1 + 16) == 2 )
          {
            v24 = MEMORY[0x7FFE0014];
          }
          else if ( *(_DWORD *)(a1 + 16) == 3 )
          {
            v24 = __rdtsc();
          }
          else
          {
            v49 = 0LL;
            RtlQueryPerformanceCounter(&v49);
            v24 = v49;
          }
          *(_QWORD *)(v23 + 16) = v24;
          *(_DWORD *)(v23 + 32) = 0;
          v25 = sub_180004020((_OWORD *)(v23 + 48), (_DWORD *)(v23 + 36), (_QWORD *)(v23 + 40), (_OWORD *)(v23 + 64));
          v17 = (char *)Src;
          if ( !v25 )
            *(_DWORD *)(v15 + 48) += 80;
        }
      }
      v26 = v44;
      if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
      {
        *(_DWORD *)(v15 + 44) = 3;
        if ( (int)ZwQueryVolumeInformationFile(v26, v50, v58, 24LL, 3) >= 0 )
        {
          v39 = *(_DWORD *)(v15 + 48) + 80;
          if ( !v17 )
            v39 = *(_DWORD *)(v15 + 48);
          LODWORD(v9) = -v59 & (v39 + v59 - 1);
          *(_DWORD *)v15 = v9;
        }
      }
      *(_DWORD *)(v15 + 4) = *(_DWORD *)(v15 + 48);
      sub_180005210(a1, v15, (unsigned int)v9);
      v27 = *(unsigned int *)(v15 + 48);
      if ( (unsigned int)v27 < (unsigned int)v9 && (unsigned int)v27 > 0x48 )
        memset((void *)(v15 + v27), 255, (unsigned int)(v9 - v27));
      SystemInformation = ZwWriteFile(v26, 0LL, 0LL, 0LL, v50, v15, v9, 0LL, 0LL);
      if ( SystemInformation >= 0 )
      {
        v28 = *(unsigned int *)(a1 + 320);
        if ( !(_DWORD)v28
          || (*(_DWORD *)(a1 + 324) & 0x20) == 0
          || (v52 = v28 * ((-(__int64)((*(_DWORD *)(a1 + 324) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000),
              SystemInformation = ZwSetInformationFile(v26, v50, &v52, 8LL, 20),
              SystemInformation >= 0) )
        {
          *(_QWORD *)(a1 + 144) = v26;
          *(_DWORD *)(a1 + 392) = 1;
          *(_DWORD *)(a1 + 336) = 1;
          *(_QWORD *)(a1 + 360) = (unsigned int)v9;
          *(_QWORD *)(a1 + 352) = (unsigned int)v9;
          if ( (*(_DWORD *)(a1 + 324) & 0x4000000) != 0 )
          {
            *(_QWORD *)(a1 + 456) = 0LL;
            *(_DWORD *)(a1 + 452) = 0;
          }
          v26 = 0LL;
        }
      }
    }
    if ( v26 )
      ZwClose(v26);
    goto LABEL_39;
  }
  SystemInformation = ZwQuerySystemInformation(0LL, v57, 64LL, 0LL);
  if ( SystemInformation >= 0 )
  {
    SystemInformation = ZwQueryInformationThread(-2LL, 0LL, v53, 48LL, 0LL);
    if ( SystemInformation >= 0 )
    {
      SystemInformation = ZwQueryInformationThread(-2LL, 1LL, v56, 32LL, 0LL);
      if ( SystemInformation >= 0 )
      {
        SystemInformation = ZwQuerySystemInformation(3LL, v60, 48LL, 0LL);
        if ( SystemInformation >= 0 )
        {
          SystemInformation = EtwpGetCpuSpeed_0(&v43);
          if ( SystemInformation >= 0 )
          {
            v11 = *(unsigned __int16 *)(a1 + 152);
            v12 = *(unsigned __int16 *)(a1 + 168);
            v42 = v12 + v11 + 316;
            v13 = v12 + v11 + 395;
            goto LABEL_10;
          }
        }
      }
    }
  }
  return (unsigned int)SystemInformation;
}
