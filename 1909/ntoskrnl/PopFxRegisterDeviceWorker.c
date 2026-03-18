/*
 * XREFs of PopFxRegisterDeviceWorker @ 0x1407722C0
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x140771B40 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x140771EE0 (PopFxRegisterDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     PopFxActivateComponent @ 0x1400E0A8C (PopFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400E0C44 (PopFxAddRefDevice.c)
 *     IoAllocateIrp @ 0x1400ED860 (IoAllocateIrp.c)
 *     PopPlRegisterComponent @ 0x140191EE8 (PopPlRegisterComponent.c)
 *     PopPlRegisterDevice @ 0x140191FF8 (PopPlRegisterDevice.c)
 *     PopFxRegisterDeviceWithPep @ 0x14019210C (PopFxRegisterDeviceWithPep.c)
 *     PopFxCreateDeviceCommon @ 0x1401924B0 (PopFxCreateDeviceCommon.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14019277C (PopFxFindAcpiDeviceByUniqueId.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1402F45F8 (PopFxReleaseAcpiRefDevice.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopFxVerifyDependencies @ 0x1408A6544 (PopFxVerifyDependencies.c)
 */

__int64 __fastcall PopFxRegisterDeviceWorker(
        ULONG_PTR a1,
        const UNICODE_STRING *a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  __int64 v9; // rbp
  unsigned int v10; // r15d
  ULONG_PTR v13; // rsi
  PVOID PoolWithTag; // rax
  unsigned int v15; // edi
  unsigned int v16; // r9d
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r14
  size_t v24; // r15
  __int64 v25; // rbx
  int AcpiDeviceByUniqueId; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  ULONG_PTR v30; // rdi
  int v31; // ebx
  char *v32; // r15
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  _DWORD *v38; // r13
  size_t v39; // r8
  PVOID v40; // rcx
  unsigned int v41; // r12d
  __int64 v42; // rsi
  unsigned int v43; // r10d
  char *v44; // rcx
  char *v45; // rax
  __int64 v46; // rbx
  char *v47; // rax
  __int64 v48; // r9
  char *v49; // rax
  size_t v50; // r11
  __int64 *v51; // rdx
  __int64 v52; // r8
  __int128 v53; // xmm0
  int v54; // eax
  int v55; // eax
  _DWORD *v56; // r8
  size_t v57; // r11
  SIZE_T v58; // r10
  __int64 v59; // r9
  SIZE_T v60; // rcx
  SIZE_T v61; // rax
  unsigned int v62; // ecx
  size_t v63; // r8
  __int64 v64; // rax
  __int64 v65; // r9
  __int64 v66; // rax
  char *v67; // rcx
  _QWORD *v68; // rcx
  unsigned int v69; // ebx
  _QWORD *v70; // r13
  __int64 v71; // r14
  unsigned int v72; // r9d
  __int64 v73; // r10
  PIRP Irp; // rax
  __int64 v75; // rdx
  ULONG64 v76; // r8
  ULONG v77; // r9d
  __int64 v78; // rdx
  __int64 v79; // r8
  ULONG v80; // r9d
  __int64 v81; // r13
  _DWORD *v82; // rbx
  unsigned int v84; // r8d
  __int64 v85; // r10
  __int64 v86; // rax
  char *v87; // r9
  unsigned int v88; // r8d
  __int64 v89; // rcx
  char *v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rcx
  __int64 v93; // [rsp+30h] [rbp-F8h]
  __int64 v94; // [rsp+30h] [rbp-F8h]
  __int64 v95; // [rsp+38h] [rbp-F0h]
  _DWORD *v96; // [rsp+38h] [rbp-F0h]
  __int64 v97; // [rsp+40h] [rbp-E8h]
  __int64 *v98; // [rsp+40h] [rbp-E8h]
  unsigned int v99; // [rsp+48h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-D8h] BYREF
  char *v101; // [rsp+58h] [rbp-D0h]
  _QWORD *v102; // [rsp+60h] [rbp-C8h]
  ULONG_PTR v103; // [rsp+68h] [rbp-C0h] BYREF
  PVOID v104; // [rsp+70h] [rbp-B8h]
  __int64 v105; // [rsp+78h] [rbp-B0h]
  size_t v106; // [rsp+80h] [rbp-A8h]
  _QWORD *v107; // [rsp+88h] [rbp-A0h]
  signed __int32 v108; // [rsp+90h] [rbp-98h]
  int v109; // [rsp+94h] [rbp-94h]
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp-90h]
  size_t Size; // [rsp+A0h] [rbp-88h]
  PVOID P; // [rsp+A8h] [rbp-80h]
  char *v113; // [rsp+B0h] [rbp-78h]
  char *v114; // [rsp+B8h] [rbp-70h]
  char *v115; // [rsp+C0h] [rbp-68h]
  __int64 v116; // [rsp+C8h] [rbp-60h]
  size_t v117; // [rsp+D0h] [rbp-58h]
  __int64 v118; // [rsp+D8h] [rbp-50h]
  char *v119; // [rsp+E0h] [rbp-48h]
  unsigned int v123; // [rsp+150h] [rbp+28h]
  unsigned int v124; // [rsp+150h] [rbp+28h]

  v9 = a5;
  v10 = 0;
  v103 = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  if ( !a5 )
    return (unsigned int)-1073741811;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 12LL * a5, 0x4D584650u);
  v104 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v123 = 0;
  v15 = 0;
  memset(PoolWithTag, 0, 12 * v9);
  v16 = 0;
  if ( (_DWORD)v9 )
  {
    while ( 1 )
    {
      v17 = a4 + 56LL * v16;
      v18 = *(_DWORD *)(v17 + 28);
      if ( !v18
        || v18 > 1 && (!*(_QWORD *)a3 || !*((_QWORD *)a3 + 1) || !*((_QWORD *)a3 + 2) || *(_DWORD *)(v17 + 24) >= v18) )
      {
        break;
      }
      v19 = v18 + v15;
      if ( v18 + v15 < v15 )
        break;
      v20 = *(_DWORD *)(v17 + 40);
      v15 = v19;
      if ( v20 )
      {
        if ( v20 < (unsigned int)v9 && v20 + v10 >= v10 )
        {
          v123 = v20 + v10;
          v10 += v20;
          v84 = 0;
          while ( 1 )
          {
            v85 = *(unsigned int *)(*(_QWORD *)(v17 + 48) + 4LL * v84);
            if ( (unsigned int)v85 >= (unsigned int)v9 )
              break;
            ++v84;
            ++*((_DWORD *)v104 + 3 * v85 + 2);
            if ( v84 >= *(_DWORD *)(v17 + 40) )
              goto LABEL_8;
          }
        }
        break;
      }
LABEL_8:
      if ( ++v16 >= (unsigned int)v9 )
        goto LABEL_9;
    }
    v31 = -1073741811;
    goto LABEL_57;
  }
LABEL_9:
  v95 = 0LL;
  v97 = 8LL * (unsigned int)v9;
  v93 = 0LL;
  v21 = 24LL * v15;
  v22 = v21 + 448LL * (unsigned int)v9;
  v23 = v22 + 256;
  if ( a7 <= 0 )
  {
    v23 = v21 + 448LL * (unsigned int)v9;
    v22 = 0LL;
  }
  v118 = v22;
  if ( v10 )
  {
    v95 = v23;
    v86 = 8LL * v10;
    v93 = v86 + v23;
    v23 += v86 + v86;
  }
  v109 = v9 * PopFxRuntimeLogNumberEntries;
  v24 = v23 + 24LL * (unsigned int)(v9 * PopFxRuntimeLogNumberEntries);
  v25 = 8 * (int)v9 + 16LL;
  Size = v24;
  v107 = (_QWORD *)v25;
  v105 = v25 + 40 * v9;
  NumberOfBytes = v21 + v105;
  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a2, (__int64 **)&v103);
  v13 = v103;
  if ( AcpiDeviceByUniqueId >= 0 )
  {
    BugCheckParameter2 = v103;
    v30 = v103;
    PopFxAddRefDevice(v103);
    goto LABEL_17;
  }
  if ( AcpiDeviceByUniqueId == -1073741738 )
  {
    v13 = v103;
    v31 = -1073741661;
  }
  else
  {
    v29 = PopFxCreateDeviceCommon((__int64)a2, v27, v28, 0, &BugCheckParameter2);
    v30 = BugCheckParameter2;
    v31 = v29;
    if ( BugCheckParameter2 )
    {
      v25 = (__int64)v107;
LABEL_17:
      v32 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x4D584650u);
      if ( !v32 || (P = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x4D584650u)) == 0LL )
      {
        v31 = -1073741670;
LABEL_54:
        if ( v30 && !v13 )
          ExFreePoolWithTag((PVOID)v30, 0x4D584650u);
        if ( v32 )
          ExFreePoolWithTag(v32, 0x4D584650u);
        goto LABEL_57;
      }
      memset(v32, 0, Size);
      v33 = *a3;
      v34 = a3[1];
      *(_DWORD *)(v30 + 820) = v9;
      *(_QWORD *)(v30 + 824) = v32;
      *(_OWORD *)(v30 + 112) = v33;
      v107 = (_QWORD *)(v30 + 824);
      v35 = a3[2];
      *(_OWORD *)(v30 + 128) = v34;
      v36 = a3[3];
      *(_OWORD *)(v30 + 144) = v35;
      v37 = a3[4];
      *(_OWORD *)(v30 + 160) = v36;
      *(_OWORD *)(v30 + 176) = v37;
      *(_QWORD *)(v30 + 192) = a6;
      *(_QWORD *)(v30 + 592) = 0LL;
      v30 = BugCheckParameter2;
      v38 = P;
      v39 = NumberOfBytes;
      v40 = P;
      v108 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
      *(_DWORD *)(BugCheckParameter2 + 608) = v108;
      *(_DWORD *)(v30 + 604) = 5;
      memset(v40, 0, v39);
      v41 = v123;
      v42 = (__int64)&v32[v97];
      v101 = &v32[448 * (unsigned int)v9];
      v43 = 0;
      *(_QWORD *)v38 = a8;
      v119 = (char *)v38 + v25;
      v44 = &v32[v97];
      v106 = (size_t)v38 + v25;
      v45 = (char *)v38 + v105;
      v38[2] = v9;
      v115 = &v32[v97];
      v102 = v45;
      v99 = 0;
      if ( (_DWORD)v9 )
      {
        v46 = v42 + 48;
        v47 = &v32[v95];
        v48 = 0LL;
        if ( !v123 )
          v47 = 0LL;
        v113 = v47;
        v49 = &v32[v93];
        v94 = 0LL;
        if ( !v123 )
          v49 = 0LL;
        v114 = v49;
        v50 = Size - 440;
        v51 = (__int64 *)(a4 + 32);
        v117 = Size - 440;
        v96 = (char *)v104 + 8;
        v52 = -48LL - (_QWORD)v32;
        v98 = (__int64 *)(a4 + 32);
        v116 = -48LL - (_QWORD)v32;
        v105 = -16LL - (_QWORD)v38;
        while ( 1 )
        {
          *(_QWORD *)(v48 + *v107) = v44;
          if ( v52 + v46 > v50 )
            break;
          v53 = *((_OWORD *)v51 - 2);
          *(_DWORD *)(v46 - 32) = v43;
          *(_QWORD *)(v46 + 32) = v30;
          *(_OWORD *)v44 = v53;
          *(_QWORD *)(v46 - 8) = PopFxComponentWork;
          *(_QWORD *)v46 = v44;
          *(_QWORD *)(v46 - 24) = 0LL;
          KeInitializeEvent((PRKEVENT)(v46 + 56), NotificationEvent, 1u);
          *(_QWORD *)(v46 + 80) = 0LL;
          *(_DWORD *)(v46 + 108) = *((_DWORD *)v98 - 1);
          *(_QWORD *)(v46 + 112) = v101;
          v54 = *((_DWORD *)v98 - 2);
          *(_DWORD *)(v46 + 164) = -1;
          *(_DWORD *)(v46 + 120) = v54;
          *(_DWORD *)(v46 + 168) = v108;
          *(_QWORD *)(v46 + 152) = 0LL;
          v55 = *((_DWORD *)v98 + 2);
          if ( v55 )
          {
            v87 = v113;
            v88 = 0;
            *(_QWORD *)(v46 + 128) = v113;
            *(_DWORD *)(v46 + 124) = v55;
            do
            {
              v89 = v88++;
              *(_DWORD *)v87 = *(_DWORD *)(v98[2] + 4 * v89);
              v87 += 8;
            }
            while ( v88 < *(_DWORD *)(v46 + 124) );
            v113 = v87;
          }
          v56 = v96;
          if ( *v96 )
          {
            v90 = v114;
            *(_QWORD *)(v46 + 144) = v114;
            v114 = &v90[8 * *v96];
          }
          v57 = v106;
          v58 = NumberOfBytes;
          v59 = v94;
          v60 = v106 + v105 + 16;
          v61 = NumberOfBytes - 40;
          *(_QWORD *)((char *)v38 + v94 + 16) = v106;
          if ( v60 > v61 )
            break;
          *(_OWORD *)v57 = *((_OWORD *)v98 - 2);
          *(_QWORD *)(v57 + 16) = *(v98 - 2);
          *(_DWORD *)(v57 + 28) = *((_DWORD *)v98 - 1);
          *(_QWORD *)(v57 + 32) = v102;
          *(_DWORD *)(v57 + 24) = *((_DWORD *)v98 - 2);
          v62 = 0;
          v124 = 0;
          if ( *(_DWORD *)(v46 + 108) )
          {
            v63 = Size - 24;
            v64 = -16LL - (_QWORD)v32;
            v106 = Size - 24;
            while ( (unsigned __int64)&v101[v64 + 16] <= v63 )
            {
              v65 = *v98;
              v66 = v62;
              v67 = v101;
              *((_DWORD *)v101 + 4) = *(_DWORD *)(*v98 + 24 * v66 + 16);
              *(_QWORD *)v67 = *(_QWORD *)(v65 + 24 * v66);
              *((_QWORD *)v67 + 1) = *(_QWORD *)(v65 + 24 * v66 + 8);
              v101 = v67 + 24;
              if ( (unsigned __int64)v102 + v105 + 16 > v58 - 24 )
                break;
              v68 = v102;
              *((_DWORD *)v102 + 4) = *(_DWORD *)(v65 + 24 * v66 + 16);
              *v68 = *(_QWORD *)(v65 + 24 * v66);
              v63 = v106;
              v68[1] = *(_QWORD *)(v65 + 24 * v66 + 8);
              v64 = -16LL - (_QWORD)v32;
              v102 = v68 + 3;
              v62 = v124 + 1;
              v124 = v62;
              if ( v62 >= *(_DWORD *)(v46 + 108) )
              {
                v56 = v96;
                v59 = v94;
                goto LABEL_36;
              }
            }
            break;
          }
LABEL_36:
          v44 = v115 + 440;
          v43 = v99 + 1;
          v115 += 440;
          v99 = v43;
          v48 = v59 + 8;
          v106 = v57 + 40;
          v51 = v98 + 7;
          v94 = v48;
          v98 += 7;
          v46 += 440LL;
          v96 = v56 + 3;
          if ( v43 >= (unsigned int)v9 )
            goto LABEL_37;
          v52 = v116;
          v50 = v117;
        }
      }
      else
      {
LABEL_37:
        *(_DWORD *)(v30 + 832) = v109;
        *(_QWORD *)(v30 + 840) = &v32[v23];
        if ( v41 )
        {
          v31 = PopFxVerifyDependencies(v104, v30, (unsigned int)v9);
          if ( v31 < 0 )
            goto LABEL_53;
        }
        v69 = 0;
        if ( (_DWORD)v9 )
        {
          v70 = v107;
          v71 = 0LL;
          do
          {
            v72 = 0;
            v73 = *(_QWORD *)(v71 + *v70);
            if ( *(_DWORD *)(v73 + 172) )
            {
              do
              {
                v91 = *(_QWORD *)(*v70 + 8LL * *(unsigned int *)(*(_QWORD *)(v73 + 176) + 8LL * v72));
                v92 = *(unsigned int *)(v91 + 188);
                *(_DWORD *)(*(_QWORD *)(v91 + 192) + 8 * v92) = v69;
                *(_DWORD *)(*(_QWORD *)(v91 + 192) + 8 * v92 + 4) = v72++;
                ++*(_DWORD *)(v91 + 188);
              }
              while ( v72 < *(_DWORD *)(v73 + 172) );
            }
            PopFxActivateComponent(v30, v73, 0, 1);
            ++v69;
            v71 += 8LL;
          }
          while ( v69 < (unsigned int)v9 );
          v38 = P;
        }
        if ( a7 <= 0
          || (*(_QWORD *)(v30 + 24) = &v32[v118], Irp = IoAllocateIrp(a7 + 2, 0), (*(_QWORD *)(v30 + 16) = Irp) != 0LL) )
        {
          if ( !(unsigned __int8)PopFxRegisterDeviceWithPep(a1, (int)a2, v30, (int)v38) )
            PopFxBugCheck(0x601uLL, v30, (ULONG_PTR)v38, 0LL);
          PopPlRegisterDevice(v30, v75, v76, v77);
          if ( (_DWORD)v9 )
          {
            v81 = v9;
            v82 = v119 + 28;
            do
            {
              if ( (*(_BYTE *)(v82 - 3) & 2) != 0 )
                *(_DWORD *)(v42 + 92) |= 2u;
              *(_DWORD *)(v42 + 156) = *v82;
              PopPlRegisterComponent(v42, v78, v79, v80);
              v42 += 440LL;
              v82 += 10;
              --v81;
            }
            while ( v81 );
            v30 = BugCheckParameter2;
            v38 = P;
          }
          v32 = 0LL;
          v31 = 0;
          *a9 = v30;
          v30 = 0LL;
          goto LABEL_53;
        }
      }
      v31 = -1073741670;
LABEL_53:
      ExFreePoolWithTag(v38, 0x4D584650u);
      v13 = v103;
      goto LABEL_54;
    }
  }
LABEL_57:
  ExFreePoolWithTag(v104, 0x4D584650u);
  if ( v13 )
    PopFxReleaseAcpiRefDevice(v13);
  return (unsigned int)v31;
}
