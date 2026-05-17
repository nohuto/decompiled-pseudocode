/*
 * XREFs of sub_18001BB70 @ 0x18001BB70
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToSection @ 0x18001EFD0 (RtlImageRvaToSection.c)
 *     sub_18002113C @ 0x18002113C (sub_18002113C.c)
 *     sub_180021EC0 @ 0x180021EC0 (sub_180021EC0.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005547C @ 0x18005547C (sub_18005547C.c)
 *     sub_18006F140 @ 0x18006F140 (sub_18006F140.c)
 *     sub_180072FEC @ 0x180072FEC (sub_180072FEC.c)
 *     RtlAddressInSectionTable @ 0x180075A80 (RtlAddressInSectionTable.c)
 *     sub_18007F45C @ 0x18007F45C (sub_18007F45C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800D89D0 @ 0x1800D89D0 (sub_1800D89D0.c)
 */

__int64 __fastcall sub_18001BB70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, int a6)
{
  int v7; // r12d
  __int64 v8; // r15
  __int64 v9; // rdi
  int v10; // eax
  int v11; // ebx
  __int64 v12; // r13
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r12
  _BYTE *Heap; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  const char *v21; // r15
  int v22; // esi
  __int64 v23; // rdi
  __int64 v24; // rbx
  unsigned __int64 v25; // r14
  bool v26; // bl
  unsigned __int64 v27; // rdi
  char *v28; // r13
  int v29; // eax
  __int16 v30; // ax
  __int64 v31; // rax
  int v32; // r11d
  int v33; // r10d
  int v34; // r11d
  int v35; // r9d
  const char *v36; // rax
  signed __int64 v37; // rdx
  unsigned __int8 v38; // cl
  int v39; // ecx
  int v40; // eax
  unsigned int v41; // esi
  char *v42; // rdi
  int v43; // ebx
  __int64 v44; // rsi
  unsigned int v45; // ecx
  __int64 v46; // r15
  unsigned int v48; // eax
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // r8
  int v52; // [rsp+40h] [rbp-578h]
  unsigned int v53; // [rsp+44h] [rbp-574h]
  int v54; // [rsp+48h] [rbp-570h] BYREF
  int v55; // [rsp+4Ch] [rbp-56Ch]
  __int64 v56; // [rsp+50h] [rbp-568h] BYREF
  unsigned int v57; // [rsp+58h] [rbp-560h]
  char *v58; // [rsp+60h] [rbp-558h]
  _BYTE *v59; // [rsp+68h] [rbp-550h]
  __int64 v60; // [rsp+70h] [rbp-548h] BYREF
  char *v61; // [rsp+78h] [rbp-540h] BYREF
  __int64 v62; // [rsp+80h] [rbp-538h]
  __int64 v63; // [rsp+88h] [rbp-530h] BYREF
  __int64 v64; // [rsp+90h] [rbp-528h]
  __int64 v65; // [rsp+98h] [rbp-520h] BYREF
  const char *v66; // [rsp+A0h] [rbp-518h] BYREF
  void (__fastcall *v67)(char **, __int64, char *, _QWORD, _QWORD); // [rsp+A8h] [rbp-510h]
  char *v68; // [rsp+B0h] [rbp-508h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-500h]
  __int64 v70; // [rsp+C0h] [rbp-4F8h]
  __int64 v71; // [rsp+C8h] [rbp-4F0h]
  _QWORD *v72; // [rsp+D0h] [rbp-4E8h]
  char **v73; // [rsp+D8h] [rbp-4E0h]
  __int64 v74; // [rsp+E0h] [rbp-4D8h]
  __int64 v75; // [rsp+E8h] [rbp-4D0h]
  _BYTE v76[16]; // [rsp+F0h] [rbp-4C8h] BYREF
  _QWORD v77[16]; // [rsp+100h] [rbp-4B8h] BYREF
  _BYTE v78[1024]; // [rsp+180h] [rbp-438h] BYREF

  v74 = a4;
  v7 = a3;
  v75 = a3;
  v8 = a2;
  v70 = a2;
  v9 = a1;
  v62 = a1;
  v72 = a5;
  v60 = 0LL;
  v10 = sub_18002113C(a1, a2, (unsigned int)&v56, a6, (__int64)a5);
  v11 = v10;
  v55 = v10;
  if ( v10 >= 0 )
  {
    v12 = v56;
    sub_180072FEC(*(_QWORD *)(v56 + 48), 0LL);
    v13 = (_QWORD *)(*(_QWORD *)(v9 + 48) + *(unsigned int *)(v8 + 12));
    v64 = (__int64)v13;
    v14 = a5 - v13;
    v69 = v14;
    LODWORD(v15) = 0;
    if ( *v13 )
    {
      do
        v15 = (unsigned int)(v15 + 1);
      while ( v13[v15] );
    }
    if ( (unsigned int)v15 > 0x80 )
    {
      Heap = (_BYTE *)RtlAllocateHeap(
                        qword_180165420,
                        (unsigned int)(dword_18016542C + 0x40000),
                        8LL * (unsigned int)v15);
      v59 = Heap;
      if ( !Heap )
      {
        Heap = v78;
        v59 = v78;
        v13 = v72;
        v64 = (__int64)v72;
        LODWORD(v15) = v15 - v14;
        if ( (unsigned int)v15 > 0x80 )
          LODWORD(v15) = 128;
        LODWORD(v14) = 0;
        v69 = 0LL;
      }
    }
    else
    {
      Heap = v78;
      v59 = v78;
    }
    if ( byte_180166014 )
      v67 = (void (__fastcall *)(char **, __int64, char *, _QWORD, _QWORD))(__ROR8__(
                                                                              qword_18017A1F0,
                                                                              64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v67 = 0LL;
    v17 = 0LL;
    v53 = 0;
    if ( !(_DWORD)v15 )
      goto LABEL_57;
    v18 = 0LL;
    v71 = 0LL;
    v52 = v54;
    while ( 1 )
    {
      v73 = (char **)&Heap[8 * v18];
      *v73 = 0LL;
      if ( (_DWORD)v17 != (_DWORD)v14 )
      {
        if ( v13[v18] - *(_QWORD *)(v9 + 48) >= (unsigned __int64)*(unsigned int *)(v9 + 64) )
        {
          v45 = v53;
          goto LABEL_56;
        }
        v17 = v53;
      }
      v58 = 0LL;
      v61 = 0LL;
      v19 = *(_QWORD *)(v9 + 48);
      v20 = *(_QWORD *)(v19
                      + *(unsigned int *)(v8 + 16)
                      + 8 * (((__int64)v13 + 8 * v17 - (v19 + *(unsigned int *)(v8 + 12))) >> 3));
      if ( v20 < 0 )
      {
        v21 = 0LL;
        v22 = (unsigned __int16)v20;
      }
      else
      {
        v21 = (const char *)(v20 + v19 + 2);
        v22 = 0;
      }
      v66 = v21;
      v54 = v22;
      v23 = v12;
      v63 = v12;
      v57 = 0;
      v24 = *(_QWORD *)(v12 + 80);
      memset(v77, 0, sizeof(v77));
      v77[4] = v24;
      while ( 1 )
      {
        v25 = *(_QWORD *)(v23 + 48);
        v26 = 1;
        v27 = v25;
        v65 = 0LL;
        v28 = 0LL;
        if ( (v25 & 3) != 0 )
        {
          v27 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
          v26 = (v25 & 1) == 0;
        }
        v29 = RtlImageNtHeaderEx(1LL, v27, 0LL, &v65);
        if ( !v65 )
          goto LABEL_103;
        v30 = *(_WORD *)(v65 + 24);
        if ( v30 == 267 )
        {
          if ( *(_DWORD *)(v65 + 116) )
          {
            v49 = *(unsigned int *)(v65 + 120);
            if ( (_DWORD)v49 )
            {
              v32 = *(_DWORD *)(v65 + 124);
              v52 = v32;
              if ( v26 || (unsigned int)v49 < *(_DWORD *)(v65 + 84) )
              {
                v28 = (char *)(v27 + v49);
                goto LABEL_25;
              }
              v50 = RtlImageRvaToSection();
              if ( v50 )
                v28 = (char *)(v51 + v27 + *(unsigned int *)(v50 + 20) - (unsigned __int64)*(unsigned int *)(v50 + 12));
              if ( v28 )
              {
                v29 = 0;
                goto LABEL_104;
              }
            }
          }
        }
        else if ( v30 == 523 )
        {
          if ( *(_DWORD *)(v65 + 132) )
          {
            v31 = *(unsigned int *)(v65 + 136);
            if ( (_DWORD)v31 )
            {
              v32 = *(_DWORD *)(v65 + 140);
              v52 = v32;
              if ( v26 || (unsigned int)v31 < *(_DWORD *)(v65 + 84) )
              {
                v28 = (char *)(v27 + v31);
                goto LABEL_25;
              }
              v28 = (char *)RtlAddressInSectionTable(v65, v27, (unsigned int)v31);
              if ( v28 )
              {
                v29 = 0;
LABEL_103:
                v32 = v52;
LABEL_104:
                if ( v29 >= 0 )
                  goto LABEL_25;
              }
            }
          }
        }
        v28 = 0LL;
        v32 = v52;
LABEL_25:
        if ( !v28 )
          goto LABEL_110;
        if ( v21 )
        {
          if ( (dword_18015FAB0 & 5) != 0 )
            sub_1800CE318(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              812,
              (unsigned int)"LdrpGetProcedureAddress",
              2,
              (__int64)"Locating procedure \"%s\" by name\n",
              v21);
          v33 = 0;
          v34 = *((_DWORD *)v28 + 6) - 1;
          v35 = v34 / 2;
          if ( v34 < 0 )
          {
LABEL_106:
            if ( (dword_18015FAB0 & 3) != 0 )
              sub_1800CE318(
                (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
                1559,
                (unsigned int)"LdrpNameToOrdinal",
                1,
                (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
                v21,
                (const void *)v25);
            if ( (dword_18015FAB0 & 0x40) != 0 )
              __debugbreak();
LABEL_110:
            v43 = -1073741702;
LABEL_111:
            v42 = v58;
            goto LABEL_45;
          }
          while ( 1 )
          {
            v36 = v21;
            v37 = v25 + *(unsigned int *)(v25 + *((unsigned int *)v28 + 8) + 4LL * v35) - (_QWORD)v21;
            while ( 1 )
            {
              v38 = *v36;
              if ( *v36 != v36[v37] )
                break;
              ++v36;
              if ( !v38 )
              {
                v39 = 0;
                goto LABEL_34;
              }
            }
            v39 = v38 < (unsigned int)v36[v37] ? -1 : 1;
LABEL_34:
            if ( !v39 )
              break;
            v40 = v35 - 1;
            if ( v39 >= 0 )
              v40 = v34;
            v34 = v40;
            if ( v39 >= 0 )
              v33 = v35 + 1;
            v35 = (v33 + v40) / 2;
            if ( v40 < v33 )
              goto LABEL_106;
          }
          v41 = *(unsigned __int16 *)(v25 + *((unsigned int *)v28 + 9) + 2LL * v35);
          v32 = v52;
        }
        else
        {
          if ( (dword_18015FAB0 & 5) != 0 )
          {
            sub_1800CE318(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              830,
              (unsigned int)"LdrpGetProcedureAddress",
              2,
              (__int64)"Loading procedure 0x%lx by ordinal\n",
              v22);
            v32 = v52;
          }
          if ( !v22 )
          {
            v43 = -1073741811;
            goto LABEL_111;
          }
          v41 = v22 - *((_DWORD *)v28 + 4);
        }
        if ( v41 >= *((_DWORD *)v28 + 5) )
        {
          v43 = (v21 != 0LL) - 1073741512;
          goto LABEL_111;
        }
        v42 = (char *)(v25 + *(unsigned int *)(v25 + *((unsigned int *)v28 + 7) + 4LL * (int)v41));
        v58 = v42;
        v61 = v42;
        if ( v42 < v28 || v42 >= &v28[v32] )
        {
          v43 = 0;
          goto LABEL_45;
        }
        v48 = v57++;
        if ( v48 >= 0x20 )
          break;
        v43 = sub_18006F140(v42, v76, &v66, &v54);
        if ( v43 < 0 )
          goto LABEL_45;
        LODWORD(v77[3]) = *(_DWORD *)(v63 + 272);
        v43 = sub_180021EC0((unsigned int)v76, (unsigned int)v77, v56, v63, 2, (__int64)&v63);
        if ( v43 < 0 )
          goto LABEL_45;
        v23 = v63;
        sub_18001B678(v63);
        v21 = v66;
        v22 = v54;
      }
      v43 = -1073741701;
LABEL_45:
      if ( BYTE4(v77[15]) )
        RtlReleasePath(v77[0]);
      if ( v43 < 0 )
      {
        v42 = 0LL;
        v61 = 0LL;
      }
      v54 = v43;
      if ( v43 >= 0 )
      {
        v44 = v62;
        if ( byte_18017A298 )
        {
          sub_1800D89D0(*(_QWORD *)(v62 + 48), *(_QWORD *)(v56 + 48), (_DWORD)v42, 1, (__int64)&v61);
          v42 = v61;
        }
        if ( v67 )
        {
          v68 = 0LL;
          v67(&v68, v56, v42, *(_QWORD *)(v44 + 48), 0LL);
          if ( v68 )
            v42 = v68;
        }
      }
      *v73 = v42;
      v45 = v53;
      LODWORD(v14) = v69;
      Heap = v59;
      v9 = v62;
      v12 = v56;
      v8 = v70;
      if ( v53 == (_DWORD)v69 )
      {
        v55 = v43;
        v60 = *(_QWORD *)&v59[8 * (unsigned int)v69];
      }
      v13 = (_QWORD *)v64;
LABEL_56:
      v17 = v45 + 1;
      v53 = v17;
      v18 = ++v71;
      if ( (unsigned int)v17 >= (unsigned int)v15 )
      {
LABEL_57:
        if ( v55 < 0 )
        {
          v46 = sub_18007F45C(v9, v12, v8, v75, v74, (__int64)v72, v55);
          v60 = v46;
          if ( v46 && ((unsigned int)(v55 + 1073741512) <= 1 || v55 == -1073741702 || v55 == -1073740671) )
            *(_QWORD *)&Heap[8 * (unsigned int)v14] = v46;
        }
        else
        {
          v46 = v60;
        }
        sub_18005547C(v9, (_DWORD)v13, (_DWORD)Heap, v15, v14);
        if ( v78 != Heap )
          RtlFreeHeap(qword_180165420, 0LL, Heap);
        sub_18001B678(v12);
        return v46;
      }
    }
  }
  v46 = sub_18007F45C(v9, 0, v8, v7, a4, (__int64)a5, v10);
  v60 = v46;
  if ( v46 && v11 == -1073741515 )
    sub_18005547C(v9, (_DWORD)a5, (unsigned int)&v60, 1, 0);
  return v46;
}
