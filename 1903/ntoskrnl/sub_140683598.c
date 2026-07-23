/*
 * XREFs of sub_140683598 @ 0x140683598
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     KeQueryTimeIncrement @ 0x14007D0E0 (KeQueryTimeIncrement.c)
 *     StringCbLengthW @ 0x1401078A0 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     KeClearEvent @ 0x1402A9B4C (KeClearEvent.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140683598(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  void *v7; // r12
  signed int v8; // ebx
  unsigned int *v9; // rcx
  unsigned int *v10; // rax
  unsigned int i; // edx
  __int64 v12; // r9
  unsigned int *v13; // r8
  unsigned int v14; // r8d
  unsigned int *v15; // rdx
  unsigned int *v16; // rax
  unsigned int j; // edx
  __int64 v18; // rax
  unsigned int *v19; // r8
  size_t v20; // rdx
  const wchar_t *v21; // r11
  unsigned int *v22; // rcx
  __int64 v23; // r14
  void *v24; // r11
  unsigned int v25; // eax
  size_t v26; // r14
  WCHAR *PoolWithTag; // rax
  const WCHAR *v28; // rbx
  unsigned int *v29; // rax
  unsigned int k; // edx
  __int64 v31; // r9
  unsigned int *v32; // r8
  unsigned int v33; // r8d
  unsigned int *v34; // rdx
  unsigned int *v35; // rax
  unsigned int m; // edx
  __int64 v37; // rax
  unsigned int *v38; // r8
  unsigned int v39; // r8d
  unsigned int *v40; // rax
  unsigned int v41; // esi
  int v42; // ebx
  int v43; // eax
  int v44; // r12d
  unsigned int v45; // eax
  int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // ecx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  int v52; // r8d
  unsigned int v53; // ecx
  int v54; // edx
  unsigned int v55; // eax
  unsigned int v56; // ecx
  unsigned int v57; // eax
  __int64 v58; // rbx
  __int64 v59; // r13
  int v60; // r14d
  int v61; // eax
  double v62; // xmm0_8
  int v63; // ebx
  int v64; // eax
  NTSTATUS v65; // eax
  __int64 v66; // rbx
  unsigned __int64 v67; // r13
  int v68; // ebx
  NTSTATUS v69; // eax
  unsigned int v70; // r8d
  unsigned int *v71; // rdx
  unsigned int v72; // eax
  unsigned int v73; // r13d
  SIZE_T v74; // rax
  _DWORD *v75; // rax
  int v76; // r12d
  unsigned int v77; // r8d
  int v78; // r14d
  unsigned __int64 v79; // r9
  unsigned int v80; // edx
  int v81; // eax
  unsigned int v82; // ecx
  unsigned __int64 v83; // rdx
  unsigned int v84; // ecx
  unsigned int v85; // eax
  __int64 v86; // xmm0_8
  __int64 v87; // r8
  int v88; // r11d
  unsigned int v89; // edx
  int v90; // eax
  unsigned int v91; // ecx
  _DWORD *v92; // rdx
  unsigned int v93; // ecx
  unsigned int v94; // eax
  __int64 v95; // r8
  unsigned int v96; // r11d
  unsigned int v97; // edx
  int v98; // eax
  unsigned int v99; // ecx
  __int64 v100; // r8
  unsigned int v101; // edx
  unsigned int v102; // ecx
  int v103; // eax
  unsigned int *v104; // rdx
  unsigned int v105; // ecx
  unsigned int v106; // eax
  _DWORD *v107; // rdx
  unsigned int v108; // ecx
  unsigned int v109; // eax
  __int64 v110; // r8
  unsigned int v111; // ecx
  unsigned int v112; // eax
  _DWORD *v113; // rdx
  unsigned int v114; // ecx
  unsigned int v115; // eax
  PVOID v116; // [rsp+48h] [rbp-C0h]
  unsigned int v117; // [rsp+54h] [rbp-B4h] BYREF
  int v118; // [rsp+58h] [rbp-B0h]
  unsigned int v119; // [rsp+5Ch] [rbp-ACh]
  unsigned int v120; // [rsp+60h] [rbp-A8h]
  int v121; // [rsp+64h] [rbp-A4h] BYREF
  int v122; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v123; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v124; // [rsp+70h] [rbp-98h]
  int v125; // [rsp+74h] [rbp-94h] BYREF
  int v126; // [rsp+78h] [rbp-90h] BYREF
  int v127; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int NumberOfBytes; // [rsp+80h] [rbp-88h]
  int NumberOfBytes_4; // [rsp+84h] [rbp-84h] BYREF
  int v130; // [rsp+88h] [rbp-80h] BYREF
  int v131; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v132; // [rsp+90h] [rbp-78h]
  PCWSTR SourceString; // [rsp+98h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp-58h] BYREF
  char v136[8]; // [rsp+B8h] [rbp-50h] BYREF
  size_t pcbLength; // [rsp+C0h] [rbp-48h] BYREF
  void *Src; // [rsp+C8h] [rbp-40h]
  LARGE_INTEGER Timeout; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v140; // [rsp+D8h] [rbp-30h]
  __int64 v141; // [rsp+E0h] [rbp-28h]
  UNICODE_STRING v142; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v143; // [rsp+F8h] [rbp-10h] BYREF
  int v144; // [rsp+100h] [rbp-8h]

  v120 = a3;
  SourceString = 0LL;
  v122 = 0;
  v117 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v7 = 0LL;
  v116 = 0LL;
  Timeout.QuadPart = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v9 = *(unsigned int **)(a1 + 8);
  if ( v9 && *(_DWORD *)a1 > 3u )
  {
    v10 = v9;
    for ( i = 0; i < 3; ++i )
    {
      v12 = *v10;
      v13 = v10 + 1;
      if ( v10 + 1 < v10 )
        goto LABEL_18;
      v10 = (unsigned int *)((char *)v13 + v12);
      if ( (unsigned int *)((char *)v13 + v12) < v13 )
        goto LABEL_18;
    }
    v14 = *v10;
    v15 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
LABEL_18:
      v8 = -1073741675;
      goto LABEL_19;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = v15;
    v8 = 0;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v140 = *(_QWORD *)v16;
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_19:
  if ( v8 >= 0 )
  {
    if ( v9 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v18 = *v9;
        v19 = v9 + 1;
        if ( v9 + 1 < v9 )
          goto LABEL_41;
        v9 = (unsigned int *)((char *)v19 + v18);
        if ( (unsigned int *)((char *)v19 + v18) < v19 )
          goto LABEL_41;
      }
      v20 = *v9;
      if ( v9 + 1 < v9 )
      {
LABEL_41:
        v8 = -1073741675;
        goto LABEL_42;
      }
      v21 = 0LL;
      if ( (_DWORD)v20 )
        v21 = (const wchar_t *)(v9 + 1);
      v8 = 0;
      if ( !(_DWORD)v20 || (v20 & 1) != 0 )
        return (unsigned int)-1073741762;
      v23 = *v9;
      if ( v21[(v20 >> 1) - 1] )
        return (unsigned int)-1073741762;
      if ( StringCbLengthW(v21, v20, &pcbLength) < 0 || pcbLength + 2 != v23 )
        return (unsigned int)-1073741762;
      v123 = pcbLength >> 1;
      Src = v24;
    }
    else
    {
      v8 = -1073741811;
    }
LABEL_42:
    if ( v8 < 0 )
      return (unsigned int)v8;
    v25 = 2 * v123 + 2;
    if ( 2 * v123 != -2 )
    {
      v26 = v25;
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v25, 0x20534C53u);
      v28 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, Src, v26);
      SourceString = v28;
      v22 = *(unsigned int **)(a1 + 8);
      if ( v22 && *(_DWORD *)a1 > 5u )
      {
        v29 = *(unsigned int **)(a1 + 8);
        for ( k = 0; k < 5; ++k )
        {
          v31 = *v29;
          v32 = v29 + 1;
          if ( v29 + 1 < v29 )
            goto LABEL_58;
          v29 = (unsigned int *)((char *)v32 + v31);
          if ( (unsigned int *)((char *)v32 + v31) < v32 )
            goto LABEL_58;
        }
        v33 = *v29;
        v34 = v29 + 1;
        if ( v29 + 1 < v29 )
        {
LABEL_58:
          v8 = -1073741675;
          goto LABEL_59;
        }
        v35 = 0LL;
        if ( v33 )
          v35 = v34;
        v8 = 0;
        if ( v33 == 4 )
        {
          v132 = *v35;
          goto LABEL_59;
        }
        goto LABEL_56;
      }
      v8 = -1073741811;
LABEL_59:
      if ( v8 < 0 )
        goto LABEL_84;
      if ( v22 && *(_DWORD *)a1 > 6u )
      {
        for ( m = 0; m < 6; ++m )
        {
          v37 = *v22;
          v38 = v22 + 1;
          if ( v22 + 1 < v22 )
            goto LABEL_72;
          v22 = (unsigned int *)((char *)v38 + v37);
          if ( (unsigned int *)((char *)v38 + v37) < v38 )
            goto LABEL_72;
        }
        v39 = *v22;
        if ( v22 + 1 < v22 )
        {
LABEL_72:
          v8 = -1073741675;
          goto LABEL_73;
        }
        v40 = 0LL;
        if ( v39 )
          v40 = v22 + 1;
        v8 = 0;
        if ( v39 == 4 )
        {
          v41 = *v40;
          goto LABEL_74;
        }
LABEL_56:
        v8 = -1073741789;
LABEL_84:
        if ( SourceString )
          ExFreePoolWithTag((PVOID)SourceString, 0x20534C53u);
        if ( v7 )
          ExFreePoolWithTag(v7, 0x20534C53u);
        return (unsigned int)v8;
      }
      v8 = -1073741811;
LABEL_73:
      v41 = v119;
LABEL_74:
      if ( v8 < 0 )
        goto LABEL_84;
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( v41 )
      {
        v42 = 1;
        if ( v41 <= 0x100000 )
        {
LABEL_95:
          v116 = ExAllocatePoolWithTag(PagedPool, v41, 0x20534C53u);
          v7 = v116;
          if ( !v116 )
          {
            v8 = -1073741801;
            goto LABEL_84;
          }
          v47 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, PVOID, _QWORD, unsigned int *))qword_1409AD4D0)(
                  &DestinationString,
                  &v122,
                  v116,
                  v41,
                  &v117);
          v44 = v47;
          if ( v47 != -1073741789 )
          {
            v8 = v47;
            if ( v47 < 0 )
              goto LABEL_83;
          }
          if ( v41 >= v117 )
            v41 = v117;
LABEL_101:
          v124 = v41 + 4;
          if ( v41 >= 0xFFFFFFFC )
          {
            v48 = v124;
            v8 = -1073741675;
            NumberOfBytes = v124;
          }
          else
          {
            if ( v41 + 32 < 0x1C
              || v41 + 40 < v41 + 32
              || (v48 = v41 + 48, NumberOfBytes = v41 + 48, v41 + 48 < v41 + 40) )
            {
LABEL_106:
              v8 = -1073741675;
              goto LABEL_83;
            }
            v8 = 0;
          }
          if ( v8 < 0 )
            goto LABEL_83;
          v49 = v48 + 8;
          if ( v48 >= 0xFFFFFFF8 )
          {
            v8 = -1073741675;
            goto LABEL_83;
          }
          v50 = (v48 + 15) & 0xFFFFFFF8;
          if ( v50 >= v49 )
          {
            v51 = v50 + 8;
            if ( v50 + 8 < v50 )
              goto LABEL_122;
            v8 = 0;
          }
          else
          {
            v51 = v124;
            v8 = -1073741675;
          }
          if ( v8 < 0 )
            goto LABEL_83;
          v52 = *(_DWORD *)(a2 + 32);
          v53 = v51 + 4;
          v54 = *(_DWORD *)(a2 + 16);
          if ( v53 >= 4 )
          {
            v55 = v53 + 4;
            if ( v53 + 4 >= v53 )
            {
              v56 = v55 + v54;
              if ( v55 + v54 >= v55 )
              {
                v57 = v56 + 4;
                if ( v56 + 4 >= v56 && v57 + v52 >= v57 )
                {
                  v8 = 0;
                  v123 = v57 + v52;
                  goto LABEL_123;
                }
              }
            }
          }
LABEL_122:
          v8 = -1073741675;
LABEL_123:
          if ( v8 < 0 )
            goto LABEL_83;
          if ( v120 >= v123 && v44 >= 0 )
          {
            v120 = 0;
            if ( DestinationString.Length == stru_1409AD268.Length
              && !memcmp(DestinationString.Buffer, stru_1409AD268.Buffer, stru_1409AD268.Length) )
            {
              v120 = dword_1409AD10C;
              v118 = 1;
            }
            else
            {
              v118 = 0;
            }
            v58 = MEMORY[0xFFFFF78000000320];
            v59 = v58 * KeQueryTimeIncrement() / 10000;
            *(_QWORD *)&v142.Length = 0LL;
            v142.Buffer = 0LL;
            v60 = 1;
            RtlInitUnicodeString(&v142, L"Security-SPP-GenuineLocalStatus");
            v61 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, int *, __int64, char *))qword_1409AD4D0)(
                    &v142,
                    &NumberOfBytes_4,
                    &v130,
                    4LL,
                    v136);
            if ( v61 == -1073741772 || v61 >= 0 && (NumberOfBytes_4 != 4 || !v130) )
              v60 = 0;
            if ( g_ulOldGenuineStateForWnf != v60 )
            {
              g_qwSystemInitTime = v59;
              g_ulOldGenuineStateForWnf = v60;
            }
            v62 = (double)((int)v59 - (int)g_qwSystemInitTime);
            if ( v59 - g_qwSystemInitTime < 0 )
              v62 = v62 + 1.844674407370955e19;
            v63 = v118;
            v64 = 0;
            if ( !v60 && !g_bWNFEventFired )
            {
              LOBYTE(v64) = v62 >= 9000000.0;
              if ( v64 || v118 )
              {
                if ( dword_1409AD148 )
                {
                  g_bWNFEventFired = 1;
                  ZwUpdateWnfStateData(&WNF_OLIC_OS_LICENSE_NON_GENUINE, 0LL, 0, 0LL, 0LL, 0, 0);
                }
              }
            }
            if ( (unsigned __int64)(v59 - g_qwSystemInitTime) >= 0xA4CBFB || v63 )
            {
              v65 = KeWaitForSingleObject(&stru_14042C9C0, UserRequest, 1, 0, &Timeout);
              if ( v65 >= 0 && v65 != 192 && v65 != 258 )
              {
                if ( g_ulOldGenuineState != v60 )
                {
                  if ( v60 )
                  {
                    KeClearEvent(&stru_14042C9A0);
                  }
                  else
                  {
                    v66 = MEMORY[0xFFFFF78000000320];
                    qword_1409AD180 = v66 * KeQueryTimeIncrement() / 10000;
                  }
                }
                v67 = v59 - qword_1409AD180;
                g_ulOldGenuineState = v60;
                if ( !v60 && (v67 >= 0xADF4FC || v118) && dword_1409AD148 )
                {
                  KeSetEvent(&stru_14042C9A0, 1, 0);
                  v68 = dword_1409AD0F0;
                  if ( !dword_1409AD0F0 )
                  {
                    v125 = 4;
                    v131 = 0;
                    KeyHandle = 0LL;
                    v69 = ZwOpenKey(&KeyHandle, 1u, &stru_1409AD878);
                    if ( v69 < 0 )
                    {
                      v69 = ((__int64 (__fastcall *)(wchar_t *, int *, int *, __int64, int *))qword_1409AD4D0)(
                              aBd,
                              &v125,
                              &v121,
                              4LL,
                              &v131);
                      v68 = v121;
                    }
                    else
                    {
                      v68 = 3;
                      v121 = 3;
                    }
                    if ( v69 < 0 || v125 != 4 || (unsigned int)(v68 - 1) > 2 )
                    {
                      v68 = 1;
                      v121 = 1;
                    }
                    if ( KeyHandle )
                      ZwClose(KeyHandle);
                  }
                  v126 = 0;
                  v143 = 0LL;
                  v144 = 0;
                  v127 = 0;
                  if ( (int)((__int64 (__fastcall *)(wchar_t *, int *, __int64 *, __int64, int *))qword_1409AD4D0)(
                              aLn,
                              &v126,
                              &v143,
                              12LL,
                              &v127) >= 0
                    && v126 == 3
                    && v127 == 12 )
                  {
                    v70 = 0;
                    v71 = (unsigned int *)&v143;
                    while ( 1 )
                    {
                      v72 = *v71;
                      if ( (*v71 & 0xF) == v68 )
                        break;
                      ++v70;
                      ++v71;
                      if ( v70 >= 3 )
                        goto LABEL_174;
                    }
                  }
                  else
                  {
LABEL_174:
                    v72 = dword_1409AD06C & 0xFFFF0000 | 0x3211;
                  }
                  dword_1409AD06C = v72;
                  if ( v132 || v120 )
                  {
                    v73 = v72;
                    goto LABEL_181;
                  }
                }
                KeReleaseMutex(&stru_14042C9C0, 0);
              }
            }
          }
          v73 = 0;
LABEL_181:
          v74 = NumberOfBytes;
          *(_DWORD *)(a4 + 4) = NumberOfBytes;
          if ( !(_DWORD)v74 )
          {
            v8 = -1073741762;
            goto LABEL_83;
          }
          v75 = ExAllocatePoolWithTag(PagedPool, v74, 0x20534C53u);
          if ( !v75 )
          {
            v8 = -1073741801;
            goto LABEL_83;
          }
          *(_QWORD *)(a4 + 8) = v75;
          *(_DWORD *)a4 = 0;
          v76 = v44 | 0x10000000;
          if ( v75 + 1 >= v75 )
          {
            if ( v75 + 2 > (_DWORD *)((char *)v75 + *(unsigned int *)(a4 + 4)) )
            {
LABEL_187:
              v8 = -1073741789;
              goto LABEL_83;
            }
            *v75 = 4;
            v75[1] = v76;
            v77 = ++*(_DWORD *)a4;
            v78 = -1;
            v79 = *(_QWORD *)(a4 + 8);
            v141 = v140;
            if ( !v79 )
            {
              v80 = *(_DWORD *)(a4 + 4);
              v81 = -1;
              v82 = v80 + 12;
              if ( v80 + 12 >= v80 )
                v81 = v80 + 12;
              v8 = v82 < v80 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v81;
              if ( v82 >= v80 )
              {
                *(_DWORD *)a4 = v77 + 1;
                goto LABEL_201;
              }
LABEL_200:
              LODWORD(v79) = 0;
              if ( v8 < 0 )
                goto LABEL_83;
LABEL_201:
              v87 = *(_QWORD *)(a4 + 8);
              v88 = v122;
              if ( v87 )
              {
                v92 = *(_DWORD **)(a4 + 8);
                v93 = v79;
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v94 = *v92 + 4;
                    if ( *v92 >= 0xFFFFFFFC )
                      break;
                    if ( (_DWORD *)((char *)v92 + v94) < v92 )
                      goto LABEL_225;
                    ++v93;
                    v92 = (_DWORD *)((char *)v92 + v94);
                    if ( v93 >= *(_DWORD *)a4 )
                      goto LABEL_211;
                  }
                  v8 = -1073741675;
                }
                else
                {
LABEL_211:
                  if ( v92 + 1 < v92 )
                  {
LABEL_225:
                    v8 = -1073741675;
                    goto LABEL_83;
                  }
                  v8 = 0;
                  if ( (unsigned __int64)(v92 + 2) > v87 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_187;
                  *v92 = 4;
                  v92[1] = v88;
                  ++*(_DWORD *)a4;
                }
                LODWORD(v79) = 0;
              }
              else
              {
                v89 = *(_DWORD *)(a4 + 4);
                v90 = -1;
                v91 = v89 + 8;
                if ( v89 + 8 >= v89 )
                  v90 = v89 + 8;
                v8 = v91 < v89 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v90;
                if ( v91 >= v89 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_216;
                }
              }
              if ( v8 < 0 )
                goto LABEL_83;
LABEL_216:
              v7 = v116;
              if ( v116 )
              {
                if ( !v41 )
                  goto LABEL_218;
              }
              else if ( v41 )
              {
LABEL_218:
                v8 = -1073741811;
                goto LABEL_219;
              }
              v100 = *(_QWORD *)(a4 + 8);
              if ( v100 )
              {
                v104 = *(unsigned int **)(a4 + 8);
                v105 = v79;
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v106 = *v104 + 4;
                    if ( *v104 >= 0xFFFFFFFC )
                      break;
                    if ( (unsigned int *)((char *)v104 + v106) < v104 )
                      goto LABEL_242;
                    ++v105;
                    v104 = (unsigned int *)((char *)v104 + v106);
                    if ( v105 >= *(_DWORD *)a4 )
                      goto LABEL_239;
                  }
                  LODWORD(v79) = 0;
                  v8 = -1073741675;
                }
                else
                {
LABEL_239:
                  if ( v104 + 1 < v104 )
                  {
LABEL_242:
                    v8 = -1073741675;
                    goto LABEL_84;
                  }
                  v8 = 0;
                  if ( (unsigned __int64)v104 + v41 + 4 > v100 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_241;
                  *v104 = v41;
                  if ( v116 )
                    memmove(v104 + 1, v116, v41);
                  ++*(_DWORD *)a4;
                  LODWORD(v79) = 0;
                }
              }
              else if ( v124 < 4 )
              {
                v8 = -1073741675;
              }
              else
              {
                v101 = *(_DWORD *)(a4 + 4);
                v102 = v101 + v124;
                v103 = -1;
                if ( v101 + v124 >= v101 )
                  v103 = v101 + v124;
                v8 = v102 < v101 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v103;
                if ( v102 >= v101 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_220;
                }
              }
LABEL_219:
              if ( v8 < 0 )
                goto LABEL_84;
LABEL_220:
              v95 = *(_QWORD *)(a4 + 8);
              v96 = v117;
              if ( v95 )
              {
                v107 = *(_DWORD **)(a4 + 8);
                v108 = v79;
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v109 = *v107 + 4;
                    if ( *v107 >= 0xFFFFFFFC )
                      break;
                    if ( (_DWORD *)((char *)v107 + v109) < v107 )
                      goto LABEL_260;
                    ++v108;
                    v107 = (_DWORD *)((char *)v107 + v109);
                    if ( v108 >= *(_DWORD *)a4 )
                      goto LABEL_251;
                  }
                  v8 = -1073741675;
                }
                else
                {
LABEL_251:
                  if ( v107 + 1 < v107 )
                    goto LABEL_260;
                  v8 = 0;
                  if ( (unsigned __int64)(v107 + 2) > v95 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_241;
                  *v107 = 4;
                  v107[1] = v96;
                  ++*(_DWORD *)a4;
                }
              }
              else
              {
                v97 = *(_DWORD *)(a4 + 4);
                v98 = -1;
                v99 = v97 + 8;
                if ( v97 + 8 >= v97 )
                  v98 = v97 + 8;
                v8 = v99 < v97 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v98;
                if ( v99 >= v97 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_255;
                }
              }
              if ( v8 < 0 )
                goto LABEL_84;
LABEL_255:
              v110 = *(_QWORD *)(a4 + 8);
              if ( !v110 )
              {
                v111 = *(_DWORD *)(a4 + 4);
                v112 = v111 + 8;
                if ( v111 + 8 >= v111 )
                  v78 = v111 + 8;
                v8 = v112 < v111 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v78;
                if ( v112 >= v111 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_271;
                }
LABEL_270:
                if ( v8 < 0 )
                  goto LABEL_84;
LABEL_271:
                v8 = 0;
                goto LABEL_84;
              }
              v113 = *(_DWORD **)(a4 + 8);
              v114 = 0;
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v115 = *v113 + 4;
                  if ( *v113 >= 0xFFFFFFFC )
                    break;
                  if ( (_DWORD *)((char *)v113 + v115) < v113 )
                    goto LABEL_260;
                  ++v114;
                  v113 = (_DWORD *)((char *)v113 + v115);
                  if ( v114 >= *(_DWORD *)a4 )
                    goto LABEL_266;
                }
                v8 = -1073741675;
                goto LABEL_270;
              }
LABEL_266:
              if ( v113 + 1 >= v113 )
              {
                v8 = 0;
                if ( (unsigned __int64)(v113 + 2) <= v110 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *v113 = 4;
                  v113[1] = v73;
                  ++*(_DWORD *)a4;
                  goto LABEL_270;
                }
LABEL_241:
                v8 = -1073741789;
                goto LABEL_84;
              }
LABEL_260:
              v8 = -1073741675;
              goto LABEL_84;
            }
            v83 = v79;
            v84 = 0;
            if ( v77 )
            {
              while ( 1 )
              {
                v85 = *(_DWORD *)v83 + 4;
                if ( *(_DWORD *)v83 >= 0xFFFFFFFC )
                  break;
                if ( v83 + v85 < v83 )
                  goto LABEL_106;
                ++v84;
                v83 += v85;
                if ( v84 >= v77 )
                  goto LABEL_197;
              }
              v8 = -1073741675;
              goto LABEL_200;
            }
LABEL_197:
            if ( v83 + 4 >= v83 )
            {
              v8 = 0;
              if ( v83 + 12 > v79 + *(unsigned int *)(a4 + 4) )
                goto LABEL_187;
              v86 = v141;
              *(_DWORD *)v83 = 8;
              *(_QWORD *)(v83 + 4) = v86;
              ++*(_DWORD *)a4;
              goto LABEL_200;
            }
          }
          goto LABEL_106;
        }
      }
      else
      {
        v42 = 0;
      }
      v43 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, _QWORD, _QWORD, unsigned int *))qword_1409AD4D0)(
              &DestinationString,
              &v122,
              0LL,
              0LL,
              &v117);
      v44 = v43;
      if ( v43 == -1073741789 )
      {
        v45 = v117;
        if ( v41 < v117 )
        {
          v42 = 0;
          if ( v41 )
            goto LABEL_101;
LABEL_94:
          v44 = 0;
          if ( !v42 )
            goto LABEL_101;
          goto LABEL_95;
        }
      }
      else
      {
        if ( v43 < 0 )
        {
          v8 = v43;
          goto LABEL_83;
        }
        v45 = v117;
        if ( v117 )
        {
          v8 = -2147418113;
LABEL_83:
          v7 = v116;
          goto LABEL_84;
        }
        v42 = 0;
      }
      v41 = v45;
      goto LABEL_94;
    }
    return (unsigned int)-1073741762;
  }
  return (unsigned int)v8;
}
