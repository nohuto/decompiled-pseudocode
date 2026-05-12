/*
 * XREFs of RaidUnitClaimIrp @ 0x1C0003E50
 * Callers:
 *     RaUnitStartIo @ 0x1C0003430 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C00486F4 (RaUnitStartResetIo.c)
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C000617C (RaidUnitReenablePendingTimer.c)
 *     TranslateToExtendedSrb @ 0x1C00225E4 (TranslateToExtendedSrb.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0044BA8 (RaidSrbExGetBidirectionalData.c)
 *     RaidGetSystemAddressForMdl @ 0x1C0045F04 (RaidGetSystemAddressForMdl.c)
 *     McTemplateK0dud @ 0x1C0046468 (McTemplateK0dud.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1C004B6F0 (StorpDataInBufferAllocateMdlAndLockPages.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  ULONGLONG UnbiasedInterruptTime; // r12
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // r14
  __int64 v14; // r15
  unsigned int v15; // r11d
  unsigned int v16; // r9d
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // r8
  int v21; // ecx
  int v22; // ecx
  unsigned __int64 v23; // rcx
  unsigned int v24; // r11d
  unsigned int v25; // edx
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  __int64 v28; // r10
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rsi
  int v32; // eax
  __int64 v33; // r8
  unsigned __int8 v34; // dl
  __int64 v35; // rcx
  __int64 v36; // r9
  char v37; // dl
  int v38; // ecx
  __int64 result; // rax
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // r9
  char v43; // al
  __int64 v44; // r15
  char v45; // dl
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int v48; // ecx
  char *v49; // rcx
  char v50; // r14
  __int64 v51; // rsi
  unsigned __int8 v52; // al
  _QWORD *v53; // rdx
  unsigned int v54; // ebp
  int v55; // r15d
  __int64 v56; // r12
  unsigned int v57; // r11d
  __int64 v58; // r10
  __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  __int64 v61; // r9
  __int64 v62; // r8
  int v63; // ecx
  int v64; // ecx
  char *v65; // rcx
  unsigned __int64 v66; // rcx
  int v67; // eax
  char v68; // al
  __int64 v69; // rdi
  unsigned int v70; // r11d
  unsigned int v71; // edx
  __int64 v72; // rcx
  unsigned __int64 v73; // r9
  __int64 v74; // rbp
  unsigned int v75; // r15d
  __int64 v76; // r14
  char *v77; // rax
  __int64 v78; // r14
  char *v79; // rax
  __int64 v80; // rcx
  int SystemAddressForMdl; // ebp
  __int64 BidirectionalData; // rax
  struct _MDL *v83; // rcx
  unsigned __int8 v84; // r11
  __int64 v85; // rdx
  __int64 v86; // rdi
  unsigned int i; // r10d
  __int64 v88; // rcx
  unsigned __int64 v89; // r8
  __int64 v90; // r9
  int v91; // ecx
  int v92; // ecx
  unsigned __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rbx
  __int64 v96; // rax
  unsigned int v97; // edi
  __int64 v98; // rax
  __int64 v99; // r14
  __int64 v100; // rbx
  ULONG v101; // edx
  __int64 v102; // rsi
  int v103; // edi
  _QWORD *v104; // rax
  __int64 *v105; // r8
  __int64 v106; // rdx
  __int64 v107; // rcx
  _QWORD *v108; // rax
  __int64 v109; // rdx
  int v110; // ecx
  int v111; // r9d
  int v112; // eax
  unsigned __int8 v113; // [rsp+30h] [rbp-B8h]
  char v114; // [rsp+32h] [rbp-B6h]
  struct _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+40h] [rbp-A8h] BYREF
  char *v117; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD *v118; // [rsp+50h] [rbp-98h]
  __int64 v119; // [rsp+58h] [rbp-90h]
  __int64 v120; // [rsp+60h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v122[2]; // [rsp+80h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a4 + 16);
  UnbiasedInterruptTime = 0LL;
  *(_QWORD *)&ProcNumber[0].Group = a4;
  v119 = 0LL;
  v114 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(a2 + 184);
  v9 = 0LL;
  v122[0] = 0LL;
  v113 = 0;
  v10 = *(_QWORD *)(v8 + 8);
  v120 = 0LL;
  if ( *(_BYTE *)(v10 + 2) == 40 )
  {
    v11 = v10 + *(unsigned int *)(v10 + 52);
    v119 = v10;
    *(_WORD *)v11 = 1;
    *(_DWORD *)(v11 + 4) = 4;
    *(_BYTE *)(v11 + 8) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v11 + 9) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v11 + 10) = *(_BYTE *)(a1 + 98);
    v12 = *(_BYTE *)(v10 + 2);
    v13 = *(_QWORD *)(v10 + 80);
    v14 = *(_QWORD *)(v10 + 64);
    if ( v12 == 40 && !*(_DWORD *)(v10 + 20) )
    {
      v15 = *(_DWORD *)(v10 + 56);
      v16 = 0;
      if ( !v15 )
        goto LABEL_17;
      while ( 1 )
      {
        v17 = *(unsigned int *)(v10 + 4LL * v16 + 120);
        if ( (unsigned int)v17 < 0x80 )
          goto LABEL_12;
        v18 = *(unsigned int *)(v10 + 16);
        if ( (unsigned int)v17 > (unsigned int)v18 )
          goto LABEL_12;
        v19 = v17 + v10;
        v20 = (unsigned int)v17;
        v21 = *(_DWORD *)(v17 + v10) - 64;
        if ( !v21 )
          goto LABEL_10;
        v22 = v21 - 1;
        if ( v22 )
          break;
        v23 = v20 + 56;
LABEL_11:
        if ( v23 <= v18 )
        {
          v113 = *(_BYTE *)(v19 + 9);
          goto LABEL_17;
        }
LABEL_12:
        if ( ++v16 >= v15 )
          goto LABEL_17;
      }
      if ( v22 != 1 )
        goto LABEL_12;
LABEL_10:
      v23 = v20 + 40;
      goto LABEL_11;
    }
    v113 = 0;
    if ( v12 == 40 )
    {
LABEL_17:
      if ( (*(_BYTE *)(v10 + 24) & 0xC0) == 0xC0 )
      {
        v24 = *(_DWORD *)(v10 + 56);
        v25 = 0;
        if ( v24 )
        {
          while ( 1 )
          {
            v26 = *(unsigned int *)(v10 + 4LL * v25 + 120);
            if ( (unsigned int)v26 >= 0x80 )
            {
              v27 = *(unsigned int *)(v10 + 16);
              if ( (unsigned int)v26 <= (unsigned int)v27 )
              {
                v28 = v26 + v10;
                if ( *(_DWORD *)(v26 + v10) == 1 && v26 + 24 <= v27 )
                  break;
              }
            }
            if ( ++v25 >= v24 )
              goto LABEL_24;
          }
          if ( v28 )
          {
            v33 = *(_QWORD *)(v28 + 16);
            if ( v33 )
            {
              v34 = 0;
              while ( 1 )
              {
                v35 = *(unsigned int *)(v10 + 4LL * v34 + 120);
                if ( (unsigned int)v35 >= 0x80
                  && (unsigned int)v35 < *(_DWORD *)(v10 + 16)
                  && *(_DWORD *)(v35 + v10) == 160 )
                {
                  break;
                }
                if ( ++v34 >= v24 )
                  goto LABEL_37;
              }
              v9 = *(_QWORD *)(v35 + v10 + 8);
              if ( v9 )
              {
                v7 = *(_QWORD *)(v28 + 16);
                v120 = *(_QWORD *)(v35 + v10 + 8);
              }
              else
              {
LABEL_37:
                v36 = a2;
                v37 = 0;
                v38 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
                if ( v38 == 315412 || v38 == 315464 )
                  v37 = 1;
                v7 = *(_QWORD *)(v28 + 16);
                if ( v37 )
                  v36 = *(unsigned __int8 *)(a2 + 64);
                else
                  LOBYTE(v36) = 0;
                result = StorpDataInBufferAllocateMdlAndLockPages(&v120, *(unsigned int *)(v28 + 8), v33, v36);
                if ( (int)result < 0 )
                  return result;
                v9 = v120;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v13 = *(_QWORD *)(v10 + 48);
    v14 = *(_QWORD *)(v10 + 24);
    *(_BYTE *)(v10 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v10 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v10 + 7) = *(_BYTE *)(a1 + 98);
    v113 = *(_BYTE *)(v10 + 11);
    v40 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v40 + 418) == 1 )
    {
      v41 = *(_QWORD *)(v4 + 760);
      if ( !v41 )
      {
        *(_BYTE *)(v10 + 3) = 48;
        *(_DWORD *)(v10 + 64) = -1073741670;
        return 3221225626LL;
      }
      result = TranslateToExtendedSrb(
                 v41,
                 v10,
                 *(_DWORD *)(v4 + 744),
                 v41,
                 a3,
                 (*(_DWORD *)(*(_QWORD *)(v40 + 544) + 184LL) & 0x80) != 0);
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v10 + 3) = 48;
        *(_DWORD *)(v10 + 64) = result;
        return result;
      }
      v42 = *(_QWORD *)(v4 + 760);
      *(_BYTE *)(v4 + 16) |= 0x40u;
      *(_QWORD *)(v4 + 752) = v10;
      v122[0] = v10;
      v10 = v42;
      v119 = v42;
      v114 = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v42;
    }
  }
LABEL_24:
  v29 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(v4 + 160) = a2;
  *(_QWORD *)(v4 + 168) = v10;
  *(_QWORD *)(v4 + 224) = a1;
  v30 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v4 + 136) = v9;
  v31 = a2;
  *(_QWORD *)(v4 + 104) = v30;
  if ( !v29 )
    IoGetActivityIdIrp(a2, v4 + 728);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4804LL) & 1) != 0 )
  {
    if ( *(_BYTE *)(v10 + 2) == 40 )
      v32 = *(_DWORD *)(v119 + 96);
    else
      v32 = *(_DWORD *)(v10 + 56);
    *(_DWORD *)(v4 + 18) = v32;
  }
  else
  {
    *(_BYTE *)(v4 + 20) = -1;
    *(_WORD *)(v4 + 18) = -1;
  }
  v43 = *(_BYTE *)(v4 + 16);
  *(_QWORD *)(v4 + 184) = v14;
  v44 = *(_QWORD *)&ProcNumber[0].Group;
  *(_BYTE *)(v4 + 16) = v43 & 0xE3 | 4;
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 176) = v13;
  *(_QWORD *)(v4 + 192) = v7;
  v45 = *(_BYTE *)(v10 + 2);
  if ( v45 == 40 )
  {
    v46 = v119;
    *(_QWORD *)(v119 + 96) = v4;
    *(_DWORD *)(v46 + 32) = *(_DWORD *)v44;
    v45 = *(_BYTE *)(v10 + 2);
  }
  else
  {
    *(_QWORD *)(v10 + 48) = v4;
    *(_BYTE *)(v10 + 8) = *(_BYTE *)v44;
  }
  v47 = *(_QWORD *)(v44 + 8);
  v48 = (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 460LL) + 7) & 0xFFFFFFF8;
  if ( v45 == 40 )
  {
    if ( v48 )
      *(_QWORD *)(v10 + 104) = v47;
  }
  else if ( v48 )
  {
    *(_QWORD *)(v10 + 56) = v47;
  }
  v49 = *(char **)(a1 + 24);
  v50 = 0;
  v117 = v49;
  if ( !*(_QWORD *)(a2 + 8) )
    goto LABEL_140;
  v51 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  v52 = *(_BYTE *)(v51 + 2);
  if ( v52 != 40 )
  {
    v53 = *(_QWORD **)(v51 + 48);
    v55 = *(_DWORD *)(v51 + 12);
    v56 = *(_QWORD *)(v51 + 24);
    v118 = v53;
    v54 = v52;
    if ( !v52 )
      v50 = *(_BYTE *)(v51 + 72);
    goto LABEL_84;
  }
  v53 = *(_QWORD **)(v51 + 96);
  v54 = *(_DWORD *)(v51 + 20);
  v55 = *(_DWORD *)(v51 + 24);
  v56 = *(_QWORD *)(v51 + 64);
  v118 = v53;
  if ( v54 )
    goto LABEL_84;
  v57 = *(_DWORD *)(v51 + 56);
  v58 = 0LL;
  if ( !v57 )
    goto LABEL_84;
  while ( 1 )
  {
    v59 = *(unsigned int *)(v51 + 4 * v58 + 120);
    if ( (unsigned int)v59 < 0x80 )
      goto LABEL_81;
    v60 = *(unsigned int *)(v51 + 16);
    if ( (unsigned int)v59 > (unsigned int)v60 )
      goto LABEL_81;
    v61 = v59 + v51;
    v62 = (unsigned int)v59;
    v63 = *(_DWORD *)(v59 + v51) - 64;
    if ( !v63 )
      break;
    v64 = v63 - 1;
    if ( !v64 )
    {
      v66 = v62 + 56;
      goto LABEL_80;
    }
    if ( v64 == 1 && v62 + 40 <= v60 )
    {
      v65 = (char *)(v61 + 32);
      if ( !*(_DWORD *)(v61 + 12) )
        v65 = 0LL;
      goto LABEL_105;
    }
LABEL_81:
    v58 = (unsigned int)(v58 + 1);
    if ( (unsigned int)v58 >= v57 )
      goto LABEL_82;
  }
  v66 = v62 + 40;
LABEL_80:
  if ( v66 > v60 )
    goto LABEL_81;
  if ( !*(_BYTE *)(v61 + 10) )
  {
LABEL_82:
    v53 = v118;
    goto LABEL_83;
  }
  v65 = (char *)(v61 + 24);
LABEL_105:
  v53 = v118;
  if ( v65 )
    v50 = *v65;
LABEL_83:
  v49 = v117;
LABEL_84:
  if ( (v55 & 0xC0) == 0 || !v56 && !v53[13] )
  {
    UnbiasedInterruptTime = 0LL;
    goto LABEL_139;
  }
  if ( v54 <= 0x17 && (v67 = 8389124, _bittest(&v67, v54))
    || (v68 = v49[409], v68 == 3)
    || (unsigned __int8)(v68 - 1) <= 1u && (v54 || ((v50 - 8) & 0x5D) != 0) )
  {
    v74 = v53[13];
    v75 = 32;
    v76 = v53[23];
    if ( *(_BYTE *)(a2 + 64) )
      v75 = 16;
    UnbiasedInterruptTime = 0LL;
    if ( (*(_BYTE *)(v74 + 10) & 5) != 0 )
    {
      v77 = *(char **)(v74 + 24);
    }
    else
    {
      v77 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v74, 0, MmCached, 0LL, 0, v75 | 0x40000000);
      v53 = v118;
    }
    if ( v77 )
    {
      v78 = v76 ? v76 - *(unsigned int *)(v74 + 44) - *(_QWORD *)(v74 + 32) : 0LL;
      v79 = &v77[v78];
      v29 = *(_BYTE *)(v51 + 2) == 40;
      v117 = v79;
      if ( v29 )
        *(_QWORD *)(v51 + 64) = v79;
      else
        *(_QWORD *)(v51 + 24) = v79;
      v80 = v53[17];
      if ( !v80 )
        goto LABEL_139;
      SystemAddressForMdl = RaidGetSystemAddressForMdl(v80, v53[24], v75, &v117);
      if ( SystemAddressForMdl >= 0 )
      {
        BidirectionalData = RaidSrbExGetBidirectionalData(v51);
        *(_QWORD *)(BidirectionalData + 16) = v117;
      }
      if ( SystemAddressForMdl != -1073741670 )
        goto LABEL_139;
    }
    if ( *(_BYTE *)(v10 + 2) == 40 )
    {
      if ( !v114 )
      {
        *(_DWORD *)(v119 + 44) = -1073741670;
        goto LABEL_136;
      }
    }
    else if ( !v114 )
    {
      *(_QWORD *)(v10 + 48) = *(_QWORD *)(v4 + 176);
      goto LABEL_135;
    }
    v10 = v122[0];
    *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v122[0];
LABEL_135:
    *(_DWORD *)(v10 + 64) = -1073741670;
LABEL_136:
    v83 = *(struct _MDL **)(v4 + 136);
    if ( v83 )
    {
      MmUnlockPages(v83);
      IoFreeMdl(*(PMDL *)(v4 + 136));
      *(_QWORD *)(v4 + 136) = 0LL;
    }
    return 3221225626LL;
  }
  UnbiasedInterruptTime = 0LL;
  if ( !v49[4514] )
  {
LABEL_139:
    v44 = *(_QWORD *)&ProcNumber[0].Group;
    v31 = a2;
    goto LABEL_140;
  }
  if ( *(_BYTE *)(v51 + 2) != 40 )
  {
    *(_QWORD *)(v51 + 24) = 0LL;
    goto LABEL_139;
  }
  v69 = 0LL;
  if ( (*(_BYTE *)(v51 + 24) & 0xC0) == 0xC0 )
  {
    v70 = *(_DWORD *)(v51 + 56);
    v71 = 0;
    if ( v70 )
    {
      while ( 1 )
      {
        v72 = *(unsigned int *)(v51 + 4LL * v71 + 120);
        if ( (unsigned int)v72 >= 0x80 )
        {
          v73 = *(unsigned int *)(v51 + 16);
          if ( (unsigned int)v72 <= (unsigned int)v73
            && *(_DWORD *)(v51 + v72) == 1
            && (unsigned __int64)(unsigned int)v72 + 24 <= v73 )
          {
            break;
          }
        }
        if ( ++v71 >= v70 )
          goto LABEL_110;
      }
      v69 = v51 + v72;
    }
  }
LABEL_110:
  v44 = *(_QWORD *)&ProcNumber[0].Group;
  *(_QWORD *)(v51 + 64) = 0LL;
  v31 = a2;
  if ( v69 )
    *(_QWORD *)(v69 + 16) = 0LL;
LABEL_140:
  v84 = v113;
  if ( v113 <= *(_BYTE *)(a1 + 1732) )
    v84 = *(_BYTE *)(a1 + 1732);
  v85 = *(_QWORD *)(v4 + 168);
  v86 = *(_QWORD *)(v44 + 24);
  if ( *(_BYTE *)(v85 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v85 + 20) )
    {
      for ( i = 0; i < *(_DWORD *)(v85 + 56); ++i )
      {
        v88 = *(unsigned int *)(v85 + 4LL * i + 120);
        if ( (unsigned int)v88 < 0x80 )
          continue;
        v89 = *(unsigned int *)(v85 + 16);
        if ( (unsigned int)v88 > (unsigned int)v89 )
          continue;
        v90 = (unsigned int)v88;
        v91 = *(_DWORD *)(v88 + v85) - 64;
        if ( v91 )
        {
          v92 = v91 - 1;
          if ( v92 )
          {
            if ( v92 != 1 || v90 + 40 > v89 )
              continue;
            *(_QWORD *)(v4 + 200) = *(_QWORD *)(v90 + v85 + 24);
            *(_BYTE *)(v4 + 208) = *(_BYTE *)(v90 + v85 + 9);
            *(_QWORD *)(v90 + v85 + 24) = v86;
            goto LABEL_156;
          }
          v93 = v90 + 56;
        }
        else
        {
          v93 = v90 + 40;
        }
        if ( v93 <= v89 )
        {
          *(_QWORD *)(v4 + 200) = *(_QWORD *)(v90 + v85 + 16);
          *(_BYTE *)(v4 + 208) = *(_BYTE *)(v90 + v85 + 9);
          *(_QWORD *)(v90 + v85 + 16) = v86;
LABEL_156:
          *(_BYTE *)(v90 + v85 + 9) = v84;
          *(_BYTE *)(v4 + 16) |= 0x20u;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(v4 + 200) = *(_QWORD *)(v85 + 32);
    *(_BYTE *)(v4 + 208) = *(_BYTE *)(v85 + 11);
    *(_QWORD *)(v85 + 32) = v86;
    *(_BYTE *)(v85 + 11) = v84;
    *(_BYTE *)(v4 + 16) |= 0x20u;
  }
  v94 = *(_QWORD *)(*(_QWORD *)(v31 + 184) + 8LL);
  if ( *(_BYTE *)(v94 + 2) == 40 )
    v95 = *(_QWORD *)(v94 + 96);
  else
    v95 = *(_QWORD *)(v94 + 48);
  v96 = *(_QWORD *)(v95 + 168);
  if ( *(_BYTE *)(v96 + 2) == 40 )
    v97 = *(_DWORD *)(v96 + 40);
  else
    v97 = *(_DWORD *)(v96 + 20);
  if ( !*(_BYTE *)(a1 + 3192) && v97 <= 2 )
    v97 = 3;
  v98 = *(_QWORD *)(a1 + 24);
  if ( v98 && *(_QWORD *)(v98 + 5064) || (**(_BYTE **)(a1 + 504) & 1) != 0 )
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  *(_BYTE *)(v95 + 16) |= 2u;
  v99 = *(_QWORD *)(a1 + 504);
  v100 = v95 + 48;
  KeGetCurrentProcessorNumberEx(ProcNumber);
  v101 = KeGetProcessorIndexFromNumber(ProcNumber) % *(_DWORD *)(v99 + 8);
  *(_QWORD *)(v100 + 40) = UnbiasedInterruptTime;
  *(_DWORD *)(v100 + 36) = v101;
  v102 = v99 + ((v101 + 1LL) << 6);
  if ( v97 - 1 > 0xFFFFFFFC )
    v97 = 10;
  v103 = 2 * v97;
  *(_DWORD *)(v100 + 32) = v103;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v102 + 40), &LockHandle);
  v104 = *(_QWORD **)(v102 + 8);
  if ( *v104 != v102 )
    goto LABEL_200;
  *(_QWORD *)v100 = v102;
  *(_QWORD *)(v100 + 8) = v104;
  *v104 = v100;
  *(_QWORD *)(v102 + 8) = v100;
  if ( *(_DWORD *)(v102 + 48) >= 0xFFFFFFFE )
    *(_DWORD *)(v102 + 48) = v103;
  if ( (*(_BYTE *)v99 & 1) != 0 )
  {
    v105 = (__int64 *)(v102 + 16);
    v106 = *(_QWORD *)(v102 + 24);
    if ( v106 != v102 + 16 )
    {
      while ( *(_QWORD *)(v100 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v100 + 32)) < *(_QWORD *)(v106 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v106 + 16)) )
      {
        v106 = *(_QWORD *)(v106 + 8);
        if ( (__int64 *)v106 == v105 )
          goto LABEL_182;
      }
      *(_QWORD *)(v100 + 16) = *(_QWORD *)v106;
      *(_QWORD *)(*(_QWORD *)v106 + 8LL) = v100 + 16;
      *(_QWORD *)v106 = v100 + 16;
      *(_DWORD *)(v100 + 48) |= 1u;
      *(_QWORD *)(v100 + 24) = v106;
      goto LABEL_186;
    }
LABEL_182:
    v107 = *v105;
    v108 = (_QWORD *)(v100 + 16);
    if ( *(__int64 **)(*v105 + 8) == v105 )
    {
      *v108 = v107;
      *(_QWORD *)(v100 + 24) = v105;
      *(_QWORD *)(v107 + 8) = v108;
      *v105 = (__int64)v108;
      *(_DWORD *)(v100 + 48) |= 1u;
      goto LABEL_186;
    }
LABEL_200:
    __fastfail(3u);
  }
  *(_DWORD *)(v100 + 48) &= ~1u;
LABEL_186:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( StorEtwLoggingEnabled )
  {
    v122[0] = 0LL;
    v122[1] = 0LL;
    IoGetActivityIdIrp(a2, v122);
    if ( byte_1C00617E2 < 0 )
      McTemplateK0dud(v110, v109, (unsigned int)v122, v111, 3);
  }
  if ( *(char *)(a1 + 449) < 0 || *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5152LL) )
  {
    if ( (*(_DWORD *)(a1 + 456) & 4) != 0 )
      v112 = 1;
    else
      v112 = (unsigned __int8)_interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 2u);
    if ( *(_BYTE *)(a1 + 3220) )
      goto LABEL_192;
    if ( !v112 )
      RaidUnitReenablePendingTimer(a1, 0LL);
  }
  else if ( *(_BYTE *)(a1 + 3220) )
  {
LABEL_192:
    LOBYTE(v109) = 1;
    RaidUnitReenablePendingTimer(a1, v109);
    result = 0LL;
    *(_BYTE *)(a1 + 3220) = 0;
    return result;
  }
  return 0LL;
}
