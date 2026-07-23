/*
 * XREFs of PopFxRegisterDeviceWorker @ 0x140725C58
 * Callers:
 *     PopFxRegisterDevice @ 0x140726430 (PopFxRegisterDevice.c)
 *     PoFxRegisterCoreDevice @ 0x140726B50 (PoFxRegisterCoreDevice.c)
 * Callees:
 *     IoAllocateIrp @ 0x14008E400 (IoAllocateIrp.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     PopFxActivateComponent @ 0x1400FE190 (PopFxActivateComponent.c)
 *     PopFxAddRefDevice @ 0x1400FE348 (PopFxAddRefDevice.c)
 *     PopFxRegisterDeviceWithPep @ 0x140179974 (PopFxRegisterDeviceWithPep.c)
 *     PopFxCreateDeviceCommon @ 0x140179A58 (PopFxCreateDeviceCommon.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140179CB4 (PopFxFindAcpiDeviceByUniqueId.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 *     PopFxReleaseAcpiRefDevice @ 0x1402D94C4 (PopFxReleaseAcpiRefDevice.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopFxVerifyDependencies @ 0x14086BC84 (PopFxVerifyDependencies.c)
 */

__int64 __fastcall PopFxRegisterDeviceWorker(
        ULONG_PTR a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  unsigned int v9; // ebp
  unsigned int v10; // r13d
  ULONG_PTR v13; // rsi
  PVOID PoolWithTag; // rax
  unsigned int v15; // edi
  unsigned int i; // r10d
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r14
  char *v27; // rbx
  int AcpiDeviceByUniqueId; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // eax
  ULONG_PTR v32; // rdi
  int v33; // ebx
  void *v34; // r15
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  ULONG_PTR v38; // rsi
  size_t v39; // r8
  PVOID v40; // rcx
  _OWORD *v41; // rax
  __int64 v42; // r9
  _OWORD *v43; // rcx
  _OWORD *v44; // rbx
  char *v45; // rax
  __int64 v46; // r8
  char *v47; // rax
  SIZE_T v48; // r10
  __int64 v49; // rdx
  __int64 *v50; // r12
  __int128 v51; // xmm0
  int v52; // eax
  int v53; // eax
  _DWORD *v54; // rdx
  char *v55; // r10
  SIZE_T v56; // r9
  __int64 v57; // r8
  SIZE_T v58; // rcx
  SIZE_T v59; // rax
  unsigned int v60; // ecx
  SIZE_T v61; // rdx
  __int64 v62; // r8
  __int64 v63; // rax
  _QWORD *v64; // rcx
  char *v65; // rcx
  char *v66; // r12
  unsigned int v67; // ebx
  _QWORD *v68; // r15
  __int64 v69; // rsi
  unsigned int v70; // r9d
  __int64 v71; // r10
  PIRP Irp; // rax
  int *v73; // rdx
  __int64 v74; // r8
  _DWORD *v75; // rcx
  int v76; // eax
  unsigned int v78; // ecx
  int v79; // eax
  unsigned int v80; // r9d
  __int64 v81; // r8
  __int64 v82; // rax
  _DWORD *v83; // r8
  unsigned int v84; // edx
  __int64 v85; // rcx
  char *v86; // rcx
  _QWORD *v87; // rbp
  __int64 v88; // r8
  __int64 v89; // rcx
  __int64 v90; // [rsp+30h] [rbp-118h]
  __int64 v91; // [rsp+30h] [rbp-118h]
  __int64 v92; // [rsp+38h] [rbp-110h]
  _DWORD *v93; // [rsp+38h] [rbp-110h]
  char *v94; // [rsp+40h] [rbp-108h]
  unsigned int v95; // [rsp+40h] [rbp-108h]
  int v96; // [rsp+48h] [rbp-100h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-F8h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-F0h]
  _QWORD *v99; // [rsp+60h] [rbp-E8h]
  char *v100; // [rsp+68h] [rbp-E0h]
  _QWORD *v101; // [rsp+70h] [rbp-D8h]
  ULONG_PTR v102; // [rsp+78h] [rbp-D0h] BYREF
  PVOID v103; // [rsp+80h] [rbp-C8h]
  char *v104; // [rsp+88h] [rbp-C0h]
  __int64 v105; // [rsp+90h] [rbp-B8h]
  PVOID P; // [rsp+98h] [rbp-B0h]
  signed __int32 v107; // [rsp+A0h] [rbp-A8h]
  int v108; // [rsp+A4h] [rbp-A4h]
  SIZE_T Size; // [rsp+A8h] [rbp-A0h]
  _DWORD *v110; // [rsp+B0h] [rbp-98h]
  char *v111; // [rsp+B8h] [rbp-90h]
  SIZE_T v112; // [rsp+C0h] [rbp-88h]
  __int64 v113; // [rsp+C8h] [rbp-80h]
  SIZE_T v114; // [rsp+D0h] [rbp-78h]
  char *v115; // [rsp+D8h] [rbp-70h]
  char *v116; // [rsp+E0h] [rbp-68h]
  __int64 v117; // [rsp+E8h] [rbp-60h]
  char *v118; // [rsp+F0h] [rbp-58h]
  __int64 v119; // [rsp+F8h] [rbp-50h]

  v9 = a5;
  v10 = 0;
  v102 = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  if ( a5 )
  {
    v119 = a5;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 12LL * a5, 0x4D584650u);
    v103 = PoolWithTag;
    if ( PoolWithTag )
    {
      v15 = 0;
      memset(PoolWithTag, 0, 12LL * a5);
      for ( i = 0; i < a5; ++i )
      {
        v17 = v10;
        v18 = v15;
        v19 = a4 + 56LL * i;
        v20 = *(_DWORD *)(v19 + 28);
        if ( !v20
          || v20 > 1
          && (!*(_QWORD *)a3 || !*(_QWORD *)(a3 + 8) || !*(_QWORD *)(a3 + 16) || *(_DWORD *)(v19 + 24) >= v20) )
        {
          goto LABEL_67;
        }
        v21 = v20 + v15;
        v22 = -1;
        if ( v21 >= v15 )
          v22 = v21;
        v15 = v22;
        if ( v21 < v18 )
          goto LABEL_67;
        v23 = *(_DWORD *)(v19 + 40);
        if ( v23 )
        {
          if ( v23 < a5 )
          {
            v78 = v23 + v10;
            v79 = -1;
            if ( v23 + v10 >= v10 )
              v79 = v23 + v10;
            v10 = v79;
            if ( v78 >= v17 )
            {
              v80 = 0;
              while ( 1 )
              {
                v81 = *(unsigned int *)(*(_QWORD *)(v19 + 48) + 4LL * v80);
                if ( (unsigned int)v81 >= a5 )
                  break;
                ++v80;
                ++*((_DWORD *)v103 + 3 * v81 + 2);
                if ( v80 >= *(_DWORD *)(v19 + 40) )
                  goto LABEL_10;
              }
            }
          }
LABEL_67:
          v33 = -1073741811;
          goto LABEL_60;
        }
LABEL_10:
        ;
      }
      v92 = 0LL;
      v105 = 8LL * a5;
      v90 = 0LL;
      v24 = 24LL * v15;
      v25 = v24 + 440LL * a5;
      v26 = v25 + 248;
      if ( a7 <= 0 )
      {
        v26 = v24 + 440LL * a5;
        v25 = 0LL;
      }
      v117 = v25;
      if ( v10 )
      {
        v92 = v26;
        v82 = 8LL * v10;
        v90 = v82 + v26;
        v26 += v82 + v82;
      }
      v108 = a5 * PopFxRuntimeLogNumberEntries;
      NumberOfBytes = v26 + 24LL * a5 * PopFxRuntimeLogNumberEntries;
      v27 = (char *)((int)(8 * a5) + 16LL);
      P = v27;
      v104 = &v27[40 * a5];
      Size = (SIZE_T)&v104[v24];
      AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a2, (__int64 **)&v102);
      v13 = v102;
      if ( AcpiDeviceByUniqueId >= 0 )
      {
        BugCheckParameter2 = v102;
        v32 = v102;
        PopFxAddRefDevice((struct _IO_REMOVE_LOCK *)v102);
LABEL_19:
        v116 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x4D584650u);
        v34 = v116;
        if ( !v116 || (P = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x4D584650u)) == 0LL )
        {
          v33 = -1073741670;
          goto LABEL_57;
        }
        memset(v34, 0, NumberOfBytes);
        *(_DWORD *)(v32 + 812) = a5;
        *(_QWORD *)(v32 + 816) = v34;
        v101 = (_QWORD *)(v32 + 816);
        v35 = *(_OWORD *)(a3 + 16);
        *(_OWORD *)(v32 + 112) = *(_OWORD *)a3;
        v36 = *(_OWORD *)(a3 + 32);
        *(_OWORD *)(v32 + 128) = v35;
        v37 = *(_OWORD *)(a3 + 48);
        *(_OWORD *)(v32 + 144) = v36;
        *(_QWORD *)&v36 = *(_QWORD *)(a3 + 64);
        *(_OWORD *)(v32 + 160) = v37;
        *(_QWORD *)(v32 + 176) = v36;
        *(_QWORD *)(v32 + 184) = a6;
        *(_QWORD *)(v32 + 584) = 0LL;
        v32 = BugCheckParameter2;
        v38 = (ULONG_PTR)P;
        v39 = Size;
        v40 = P;
        v107 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
        *(_DWORD *)(BugCheckParameter2 + 600) = v107;
        *(_DWORD *)(v32 + 596) = 5;
        memset(v40, 0, v39);
        v118 = (char *)v34 + v105;
        LODWORD(v42) = 0;
        v105 += (__int64)v34;
        v41 = (_OWORD *)v105;
        *(_QWORD *)v38 = a8;
        v43 = v41;
        *(_DWORD *)(v38 + 8) = a5;
        v99 = (char *)v34 + 440 * a5;
        v115 = &v27[v38];
        v94 = &v27[v38];
        v100 = &v104[v38];
        v96 = 0;
        v44 = v41 + 3;
        v45 = (char *)v34 + v92;
        v46 = 0LL;
        if ( !v10 )
          v45 = 0LL;
        v110 = v45;
        v47 = (char *)v34 + v90;
        v91 = 0LL;
        if ( !v10 )
          v47 = 0LL;
        v48 = NumberOfBytes - 432;
        v111 = v47;
        v49 = -48LL - (_QWORD)v34;
        v50 = (__int64 *)(a4 + 32);
        v114 = NumberOfBytes - 432;
        v93 = (char *)v103 + 8;
        v113 = -48LL - (_QWORD)v34;
        v104 = (char *)(-16LL - v38);
        while ( 1 )
        {
          *(_QWORD *)(v46 + *v101) = v43;
          if ( (unsigned __int64)v44 + v49 > v48 )
            goto LABEL_85;
          v51 = *((_OWORD *)v50 - 2);
          *((_DWORD *)v44 - 8) = v42;
          *((_QWORD *)v44 + 4) = v32;
          *v43 = v51;
          *(_QWORD *)v44 = v43;
          *((_QWORD *)v44 - 1) = PopFxComponentWork;
          *((_QWORD *)v44 - 3) = 0LL;
          KeInitializeEvent((PRKEVENT)((char *)v44 + 56), NotificationEvent, 1u);
          *((_QWORD *)v44 + 10) = 0LL;
          *((_DWORD *)v44 + 27) = *((_DWORD *)v50 - 1);
          *((_QWORD *)v44 + 14) = v99;
          v52 = *((_DWORD *)v50 - 2);
          *((_DWORD *)v44 + 41) = -1;
          *((_DWORD *)v44 + 30) = v52;
          *((_DWORD *)v44 + 42) = v107;
          *((_QWORD *)v44 + 19) = 0LL;
          v53 = *((_DWORD *)v50 + 2);
          if ( v53 )
          {
            v83 = v110;
            v84 = 0;
            *((_QWORD *)v44 + 16) = v110;
            *((_DWORD *)v44 + 31) = v53;
            do
            {
              v85 = v84++;
              *v83 = *(_DWORD *)(v50[2] + 4 * v85);
              v83 += 2;
            }
            while ( v84 < *((_DWORD *)v44 + 31) );
            v110 = v83;
          }
          v54 = v93;
          if ( *v93 )
          {
            v86 = v111;
            *((_QWORD *)v44 + 18) = v111;
            v111 = &v86[8 * *v93];
          }
          v55 = v94;
          v56 = Size;
          v57 = v91;
          v58 = (SIZE_T)&v104[(_QWORD)v94 + 16];
          v59 = Size - 40;
          *(_QWORD *)(v38 + v91 + 16) = v94;
          if ( v58 > v59 )
            goto LABEL_85;
          v60 = 0;
          v95 = 0;
          *(_OWORD *)v55 = *((_OWORD *)v50 - 2);
          *((_QWORD *)v55 + 2) = *(v50 - 2);
          *((_DWORD *)v55 + 7) = *((_DWORD *)v50 - 1);
          *((_QWORD *)v55 + 4) = v100;
          *((_DWORD *)v55 + 6) = *((_DWORD *)v50 - 2);
          if ( *((_DWORD *)v44 + 27) )
            break;
LABEL_38:
          v43 = (_OWORD *)(v105 + 432);
          v42 = (unsigned int)(v96 + 1);
          v105 += 432LL;
          v96 = v42;
          v46 = v57 + 8;
          v94 = v55 + 40;
          v91 = v46;
          v44 += 27;
          v93 = v54 + 3;
          v50 += 7;
          if ( (unsigned int)v42 >= a5 )
          {
            v66 = v115;
            *(_DWORD *)(v32 + 824) = v108;
            *(_QWORD *)(v32 + 832) = (char *)v34 + v26;
            if ( v10 )
            {
              v33 = PopFxVerifyDependencies(v103, v32, a5, v42);
              if ( v33 < 0 )
                goto LABEL_56;
            }
            v67 = 0;
            v68 = v101;
            v69 = 0LL;
            do
            {
              v70 = 0;
              v71 = *(_QWORD *)(v69 + *v68);
              if ( *(_DWORD *)(v71 + 172) )
              {
                v87 = v101;
                do
                {
                  v88 = *(_QWORD *)(*v87 + 8LL * *(unsigned int *)(*(_QWORD *)(v71 + 176) + 8LL * v70));
                  v89 = *(unsigned int *)(v88 + 188);
                  *(_DWORD *)(*(_QWORD *)(v88 + 192) + 8 * v89) = v67;
                  *(_DWORD *)(*(_QWORD *)(v88 + 192) + 8 * v89 + 4) = v70++;
                  ++*(_DWORD *)(v88 + 188);
                }
                while ( v70 < *(_DWORD *)(v71 + 172) );
                v9 = a5;
                v68 = v101;
              }
              PopFxActivateComponent(v32, v71, 0, 1u);
              ++v67;
              v69 += 8LL;
            }
            while ( v67 < v9 );
            v34 = v116;
            v38 = (ULONG_PTR)P;
            if ( a7 <= 0
              || (*(_QWORD *)(v32 + 24) = &v116[v117],
                  Irp = IoAllocateIrp(a7 + 2, 0),
                  (*(_QWORD *)(v32 + 16) = Irp) != 0LL) )
            {
              if ( !(unsigned __int8)PopFxRegisterDeviceWithPep(a1, (int)a2, v32, v38) )
                PopFxBugCheck(0x601uLL, v32, v38, 0LL);
              if ( v9 )
              {
                v73 = (int *)(v66 + 28);
                v74 = v119;
                v75 = v118 + 92;
                do
                {
                  if ( (*(_BYTE *)(v73 - 3) & 2) != 0 )
                    *v75 |= 2u;
                  v76 = *v73;
                  v73 += 10;
                  v75[16] = v76;
                  v75 += 108;
                  --v74;
                }
                while ( v74 );
                v32 = BugCheckParameter2;
              }
              v34 = 0LL;
              v33 = 0;
              *a9 = v32;
              v32 = 0LL;
LABEL_56:
              ExFreePoolWithTag((PVOID)v38, 0x4D584650u);
              v13 = v102;
LABEL_57:
              if ( v32 && !v13 )
                ExFreePoolWithTag((PVOID)v32, 0x4D584650u);
              if ( v34 )
                ExFreePoolWithTag(v34, 0x4D584650u);
              goto LABEL_60;
            }
LABEL_85:
            v33 = -1073741670;
            goto LABEL_56;
          }
          v49 = v113;
          v48 = v114;
        }
        v61 = NumberOfBytes - 24;
        v112 = NumberOfBytes - 24;
        while ( (char *)v99 - (_BYTE *)v34 <= v61 )
        {
          v62 = *v50;
          v63 = v60;
          v64 = v99;
          *((_DWORD *)v99 + 4) = *(_DWORD *)(*v50 + 24 * v63 + 16);
          *v64 = *(_QWORD *)(v62 + 24 * v63);
          v64[1] = *(_QWORD *)(v62 + 24 * v63 + 8);
          v99 = v64 + 3;
          if ( &v104[(_QWORD)(v100 + 16)] > (char *)(v56 - 24) )
            break;
          v65 = v100;
          *((_DWORD *)v100 + 4) = *(_DWORD *)(v62 + 24 * v63 + 16);
          *(_QWORD *)v65 = *(_QWORD *)(v62 + 24 * v63);
          v61 = v112;
          *((_QWORD *)v65 + 1) = *(_QWORD *)(v62 + 24 * v63 + 8);
          v100 = v65 + 24;
          v60 = v95 + 1;
          v95 = v60;
          if ( v60 >= *((_DWORD *)v44 + 27) )
          {
            v54 = v93;
            v57 = v91;
            goto LABEL_38;
          }
        }
        goto LABEL_85;
      }
      if ( AcpiDeviceByUniqueId == -1073741738 )
      {
        v13 = v102;
        v33 = -1073741661;
        goto LABEL_60;
      }
      v31 = PopFxCreateDeviceCommon((__int64)a2, v29, v30, 0, &BugCheckParameter2);
      v32 = BugCheckParameter2;
      v33 = v31;
      if ( BugCheckParameter2 )
      {
        v27 = (char *)P;
        goto LABEL_19;
      }
LABEL_60:
      ExFreePoolWithTag(v103, 0x4D584650u);
      if ( v13 )
        PopFxReleaseAcpiRefDevice(v13);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v33;
}
