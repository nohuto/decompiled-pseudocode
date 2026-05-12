/*
 * XREFs of RaidUnitClaimIrp @ 0x1C0003AA0
 * Callers:
 *     RaUnitStartIo @ 0x1C00035A0 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C0046E0C (RaUnitStartResetIo.c)
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C0005014 (RaidUnitReenablePendingTimer.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004298C (RaidSrbExGetBidirectionalData.c)
 *     TranslateToExtendedSrb @ 0x1C0042F60 (TranslateToExtendedSrb.c)
 *     RaidGetSystemAddressForMdl @ 0x1C004458C (RaidGetSystemAddressForMdl.c)
 *     McTemplateK0dud @ 0x1C0044BD8 (McTemplateK0dud.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1C004A0C8 (StorpDataInBufferAllocateMdlAndLockPages.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // r12
  unsigned int v13; // r11d
  unsigned int v14; // r9d
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // r8
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // r11d
  unsigned int v22; // edx
  __int64 v23; // rcx
  unsigned __int64 v24; // r8
  __int64 v25; // r10
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rsi
  int v29; // eax
  __int64 v30; // r8
  unsigned __int8 v31; // dl
  __int64 v32; // rcx
  __int64 v33; // r9
  char v34; // dl
  int v35; // ecx
  __int64 result; // rax
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // r9
  char v40; // al
  __int64 v41; // r14
  char v42; // dl
  __int64 v43; // rcx
  __int64 v44; // r8
  char *v45; // r8
  char v46; // r15
  __int64 v47; // rsi
  unsigned __int8 v48; // al
  _QWORD *v49; // rdx
  unsigned int v50; // r14d
  __int64 v51; // rcx
  int v52; // r12d
  unsigned int v53; // r11d
  unsigned int v54; // r10d
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // r8
  int v59; // ecx
  int v60; // ecx
  char *v61; // rcx
  unsigned __int64 v62; // rcx
  int v63; // eax
  char v64; // al
  __int64 v65; // rdi
  unsigned int v66; // r11d
  unsigned int v67; // edx
  __int64 v68; // rcx
  unsigned __int64 v69; // r9
  unsigned __int8 v70; // r11
  __int64 v71; // rdx
  __int64 v72; // rdi
  __int64 i; // r10
  __int64 v74; // rcx
  unsigned __int64 v75; // r8
  __int64 v76; // r9
  int v77; // ecx
  int v78; // ecx
  __int64 v79; // r15
  unsigned int v80; // r12d
  __int64 v81; // r14
  char *v82; // rax
  char *v83; // rax
  __int64 v84; // rcx
  int SystemAddressForMdl; // r14d
  __int64 BidirectionalData; // rax
  struct _MDL *v87; // rcx
  unsigned __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // rax
  unsigned int v92; // edi
  __int64 v93; // rax
  ULONGLONG UnbiasedInterruptTime; // r14
  __int64 v95; // r15
  __int64 v96; // rbx
  ULONG v97; // edx
  __int64 v98; // rsi
  int v99; // edi
  _QWORD *v100; // rax
  __int64 *v101; // r8
  __int64 v102; // rdx
  __int64 v103; // rcx
  _QWORD *v104; // rax
  __int64 v105; // rdx
  int v106; // ecx
  int v107; // r9d
  int v108; // eax
  unsigned __int8 v109; // [rsp+30h] [rbp-59h]
  char v110; // [rsp+32h] [rbp-57h]
  struct _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+40h] [rbp-49h] BYREF
  char *v113; // [rsp+48h] [rbp-41h] BYREF
  _QWORD *v114; // [rsp+50h] [rbp-39h]
  __int64 v115; // [rsp+58h] [rbp-31h]
  __int64 v116; // [rsp+60h] [rbp-29h]
  __int64 v117; // [rsp+68h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v119[2]; // [rsp+88h] [rbp-1h] BYREF

  v4 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)&ProcNumber[0].Group = a4;
  v116 = 0LL;
  v110 = 0;
  v6 = 0LL;
  v7 = *(_QWORD *)(a2 + 184);
  v8 = 0LL;
  v119[0] = 0LL;
  v109 = 0;
  v9 = *(_QWORD *)(v7 + 8);
  v117 = 0LL;
  if ( *(_BYTE *)(v9 + 2) != 40 )
  {
    v11 = *(_QWORD *)(v9 + 48);
    v12 = *(_QWORD *)(v9 + 24);
    *(_BYTE *)(v9 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v9 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v9 + 7) = *(_BYTE *)(a1 + 98);
    v109 = *(_BYTE *)(v9 + 11);
    v37 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v37 + 402) == 1 )
    {
      v38 = *(_QWORD *)(v4 + 760);
      if ( !v38 )
      {
        *(_BYTE *)(v9 + 3) = 48;
        *(_DWORD *)(v9 + 64) = -1073741670;
        return 3221225626LL;
      }
      result = TranslateToExtendedSrb(
                 v38,
                 v9,
                 *(_DWORD *)(v4 + 744),
                 v38,
                 a3,
                 (*(_DWORD *)(*(_QWORD *)(v37 + 528) + 184LL) & 0x80) != 0);
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v9 + 3) = 48;
        *(_DWORD *)(v9 + 64) = result;
        return result;
      }
      v39 = *(_QWORD *)(v4 + 760);
      *(_BYTE *)(v4 + 16) |= 0x40u;
      *(_QWORD *)(v4 + 752) = v9;
      v119[0] = v9;
      v9 = v39;
      v116 = v39;
      v110 = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v39;
    }
LABEL_19:
    v26 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(v4 + 160) = a2;
    *(_QWORD *)(v4 + 168) = v9;
    *(_QWORD *)(v4 + 224) = a1;
    v27 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v4 + 136) = v8;
    v28 = a2;
    *(_QWORD *)(v4 + 104) = v27;
    if ( !v26 )
      IoGetActivityIdIrp(a2, v4 + 728);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) != 0 )
    {
      if ( *(_BYTE *)(v9 + 2) == 40 )
        v29 = *(_DWORD *)(v116 + 96);
      else
        v29 = *(_DWORD *)(v9 + 56);
      *(_DWORD *)(v4 + 18) = v29;
    }
    else
    {
      *(_BYTE *)(v4 + 20) = -1;
      *(_WORD *)(v4 + 18) = -1;
    }
    v40 = *(_BYTE *)(v4 + 16);
    *(_QWORD *)(v4 + 192) = v6;
    v41 = *(_QWORD *)&ProcNumber[0].Group;
    *(_BYTE *)(v4 + 16) = v40 & 0xE3 | 4;
    *(_DWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 176) = v11;
    *(_QWORD *)(v4 + 184) = v12;
    v42 = *(_BYTE *)(v9 + 2);
    if ( v42 == 40 )
    {
      v43 = v116;
      *(_QWORD *)(v116 + 96) = v4;
      *(_DWORD *)(v43 + 32) = *(_DWORD *)v41;
      v42 = *(_BYTE *)(v9 + 2);
    }
    else
    {
      *(_QWORD *)(v9 + 48) = v4;
      *(_BYTE *)(v9 + 8) = *(_BYTE *)v41;
    }
    v44 = *(_QWORD *)(v41 + 8);
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7) & 0xFFFFFFF8) != 0 )
    {
      if ( v42 == 40 )
        *(_QWORD *)(v9 + 104) = v44;
      else
        *(_QWORD *)(v9 + 56) = v44;
    }
    v45 = *(char **)(a1 + 24);
    v46 = 0;
    v113 = v45;
    if ( !*(_QWORD *)(a2 + 8) )
      goto LABEL_115;
    v47 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v48 = *(_BYTE *)(v47 + 2);
    if ( v48 != 40 )
    {
      v49 = *(_QWORD **)(v47 + 48);
      v52 = *(_DWORD *)(v47 + 12);
      v51 = *(_QWORD *)(v47 + 24);
      v114 = v49;
      v50 = v48;
      if ( !v48 )
        v46 = *(_BYTE *)(v47 + 72);
      goto LABEL_85;
    }
    v49 = *(_QWORD **)(v47 + 96);
    v50 = *(_DWORD *)(v47 + 20);
    v51 = *(_QWORD *)(v47 + 64);
    v52 = *(_DWORD *)(v47 + 24);
    v114 = v49;
    v115 = v51;
    if ( v50 )
      goto LABEL_85;
    v53 = *(_DWORD *)(v47 + 56);
    v54 = 0;
    if ( !v53 )
      goto LABEL_85;
    while ( 1 )
    {
      v55 = *(unsigned int *)(v47 + 4LL * v54 + 120);
      if ( (unsigned int)v55 < 0x80 )
        goto LABEL_82;
      v56 = *(unsigned int *)(v47 + 16);
      if ( (unsigned int)v55 > (unsigned int)v56 )
        goto LABEL_82;
      v57 = v55 + v47;
      v58 = (unsigned int)v55;
      v59 = *(_DWORD *)(v55 + v47) - 64;
      if ( !v59 )
        break;
      v60 = v59 - 1;
      if ( !v60 )
      {
        v62 = v58 + 56;
        goto LABEL_81;
      }
      if ( v60 == 1 && v58 + 40 <= v56 )
      {
        v61 = (char *)(v57 + 32);
        if ( !*(_DWORD *)(v57 + 12) )
          v61 = 0LL;
        goto LABEL_106;
      }
LABEL_82:
      if ( ++v54 >= v53 )
        goto LABEL_83;
    }
    v62 = v58 + 40;
LABEL_81:
    if ( v62 > v56 )
      goto LABEL_82;
    if ( !*(_BYTE *)(v57 + 10) )
    {
LABEL_83:
      v45 = v113;
      v49 = v114;
      goto LABEL_84;
    }
    v61 = (char *)(v57 + 24);
LABEL_106:
    v49 = v114;
    v45 = v113;
    if ( v61 )
      v46 = *v61;
LABEL_84:
    v51 = v115;
LABEL_85:
    if ( (v52 & 0xC0) == 0 || !v51 && !v49[13] )
      goto LABEL_114;
    if ( v50 > 0x17 || (v63 = 8389124, !_bittest(&v63, v50)) )
    {
      v64 = v45[393];
      if ( v64 != 3 && ((unsigned __int8)(v64 - 1) > 1u || !v50 && ((v46 - 8) & 0x5D) == 0) )
      {
        if ( v45[4450] )
        {
          if ( *(_BYTE *)(v47 + 2) == 40 )
          {
            v65 = 0LL;
            if ( (*(_BYTE *)(v47 + 24) & 0xC0) == 0xC0 )
            {
              v66 = *(_DWORD *)(v47 + 56);
              v67 = 0;
              if ( v66 )
              {
                while ( 1 )
                {
                  v68 = *(unsigned int *)(v47 + 4LL * v67 + 120);
                  if ( (unsigned int)v68 >= 0x80 )
                  {
                    v69 = *(unsigned int *)(v47 + 16);
                    if ( (unsigned int)v68 <= (unsigned int)v69
                      && *(_DWORD *)(v47 + v68) == 1
                      && (unsigned __int64)(unsigned int)v68 + 24 <= v69 )
                    {
                      break;
                    }
                  }
                  if ( ++v67 >= v66 )
                    goto LABEL_111;
                }
                v65 = v47 + v68;
              }
            }
LABEL_111:
            v41 = *(_QWORD *)&ProcNumber[0].Group;
            *(_QWORD *)(v47 + 64) = 0LL;
            v28 = a2;
            if ( v65 )
              *(_QWORD *)(v65 + 16) = 0LL;
LABEL_115:
            v70 = v109;
            if ( v109 <= *(_BYTE *)(a1 + 1732) )
              v70 = *(_BYTE *)(a1 + 1732);
            v71 = *(_QWORD *)(v4 + 168);
            v72 = *(_QWORD *)(v41 + 24);
            if ( *(_BYTE *)(v71 + 2) == 40 )
            {
              if ( !*(_DWORD *)(v71 + 20) )
              {
                for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v71 + 56); i = (unsigned int)(i + 1) )
                {
                  v74 = *(unsigned int *)(v71 + 4 * i + 120);
                  if ( (unsigned int)v74 < 0x80 )
                    continue;
                  v75 = *(unsigned int *)(v71 + 16);
                  if ( (unsigned int)v74 > (unsigned int)v75 )
                    continue;
                  v76 = (unsigned int)v74;
                  v77 = *(_DWORD *)(v74 + v71) - 64;
                  if ( v77 )
                  {
                    v78 = v77 - 1;
                    if ( v78 )
                    {
                      if ( v78 != 1 || v76 + 40 > v75 )
                        continue;
                      *(_QWORD *)(v4 + 200) = *(_QWORD *)(v76 + v71 + 24);
                      *(_BYTE *)(v4 + 208) = *(_BYTE *)(v76 + v71 + 9);
                      *(_QWORD *)(v76 + v71 + 24) = v72;
                      goto LABEL_155;
                    }
                    v88 = v76 + 56;
                  }
                  else
                  {
                    v88 = v76 + 40;
                  }
                  if ( v88 <= v75 )
                  {
                    *(_QWORD *)(v4 + 200) = *(_QWORD *)(v76 + v71 + 16);
                    *(_BYTE *)(v4 + 208) = *(_BYTE *)(v76 + v71 + 9);
                    *(_QWORD *)(v76 + v71 + 16) = v72;
LABEL_155:
                    *(_BYTE *)(v76 + v71 + 9) = v70;
                    *(_BYTE *)(v4 + 16) |= 0x20u;
                  }
                }
              }
            }
            else
            {
              *(_QWORD *)(v4 + 200) = *(_QWORD *)(v71 + 32);
              *(_BYTE *)(v4 + 208) = *(_BYTE *)(v71 + 11);
              *(_QWORD *)(v71 + 32) = v72;
              *(_BYTE *)(v71 + 11) = v70;
              *(_BYTE *)(v4 + 16) |= 0x20u;
            }
            v89 = *(_QWORD *)(*(_QWORD *)(v28 + 184) + 8LL);
            if ( *(_BYTE *)(v89 + 2) == 40 )
              v90 = *(_QWORD *)(v89 + 96);
            else
              v90 = *(_QWORD *)(v89 + 48);
            v91 = *(_QWORD *)(v90 + 168);
            if ( *(_BYTE *)(v91 + 2) == 40 )
              v92 = *(_DWORD *)(v91 + 40);
            else
              v92 = *(_DWORD *)(v91 + 20);
            if ( !*(_BYTE *)(a1 + 2976) && v92 <= 2 )
              v92 = 3;
            v93 = *(_QWORD *)(a1 + 24);
            if ( v93 && *(_QWORD *)(v93 + 4984) || (**(_BYTE **)(a1 + 504) & 1) != 0 )
              UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
            else
              UnbiasedInterruptTime = 0LL;
            *(_BYTE *)(v90 + 16) |= 2u;
            v95 = *(_QWORD *)(a1 + 504);
            memset(&LockHandle, 0, sizeof(LockHandle));
            v96 = v90 + 48;
            ProcNumber[0] = 0;
            KeGetCurrentProcessorNumberEx(ProcNumber);
            v97 = KeGetProcessorIndexFromNumber(ProcNumber) % *(_DWORD *)(v95 + 8);
            *(_QWORD *)(v96 + 40) = UnbiasedInterruptTime;
            *(_DWORD *)(v96 + 36) = v97;
            v98 = v95 + ((v97 + 1LL) << 6);
            if ( v92 - 1 > 0xFFFFFFFC )
              v92 = 10;
            v99 = 2 * v92;
            *(_DWORD *)(v96 + 32) = v99;
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v98 + 40), &LockHandle);
            v100 = *(_QWORD **)(v98 + 8);
            if ( *v100 == v98 )
            {
              *(_QWORD *)v96 = v98;
              *(_QWORD *)(v96 + 8) = v100;
              *v100 = v96;
              *(_QWORD *)(v98 + 8) = v96;
              if ( *(_DWORD *)(v98 + 48) >= 0xFFFFFFFE )
                *(_DWORD *)(v98 + 48) = v99;
              if ( (*(_BYTE *)v95 & 1) == 0 )
              {
                *(_DWORD *)(v96 + 48) &= ~1u;
                goto LABEL_186;
              }
              v101 = (__int64 *)(v98 + 16);
              v102 = *(_QWORD *)(v98 + 24);
              if ( v102 != v98 + 16 )
              {
                while ( *(_QWORD *)(v96 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v96 + 32)) < *(_QWORD *)(v102 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v102 + 16)) )
                {
                  v102 = *(_QWORD *)(v102 + 8);
                  if ( (__int64 *)v102 == v101 )
                    goto LABEL_182;
                }
                *(_QWORD *)(v96 + 16) = *(_QWORD *)v102;
                *(_QWORD *)(*(_QWORD *)v102 + 8LL) = v96 + 16;
                *(_QWORD *)v102 = v96 + 16;
                *(_DWORD *)(v96 + 48) |= 1u;
                *(_QWORD *)(v96 + 24) = v102;
LABEL_186:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                if ( StorEtwLoggingEnabled )
                {
                  v119[0] = 0LL;
                  v119[1] = 0LL;
                  IoGetActivityIdIrp(a2, v119);
                  if ( byte_1C0062742 < 0 )
                    McTemplateK0dud(v106, v105, (unsigned int)v119, v107, 3);
                }
                if ( *(char *)(a1 + 449) < 0 || *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5024LL) )
                {
                  if ( (*(_DWORD *)(a1 + 456) & 4) != 0 )
                    v108 = 1;
                  else
                    v108 = (unsigned __int8)_interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 2u);
                  if ( *(_BYTE *)(a1 + 3004) )
                    goto LABEL_192;
                  if ( !v108 )
                    RaidUnitReenablePendingTimer(a1, 0LL);
                }
                else if ( *(_BYTE *)(a1 + 3004) )
                {
LABEL_192:
                  LOBYTE(v105) = 1;
                  RaidUnitReenablePendingTimer(a1, v105);
                  result = 0LL;
                  *(_BYTE *)(a1 + 3004) = 0;
                  return result;
                }
                return 0LL;
              }
LABEL_182:
              v103 = *v101;
              v104 = (_QWORD *)(v96 + 16);
              if ( *(__int64 **)(*v101 + 8) == v101 )
              {
                *v104 = v103;
                *(_QWORD *)(v96 + 24) = v101;
                *(_QWORD *)(v103 + 8) = v104;
                *v101 = (__int64)v104;
                *(_DWORD *)(v96 + 48) |= 1u;
                goto LABEL_186;
              }
            }
            __fastfail(3u);
          }
          *(_QWORD *)(v47 + 24) = 0LL;
        }
LABEL_114:
        v41 = *(_QWORD *)&ProcNumber[0].Group;
        v28 = a2;
        goto LABEL_115;
      }
    }
    v79 = v49[13];
    v80 = 32;
    v81 = v49[23];
    if ( *(_BYTE *)(a2 + 64) )
      v80 = 16;
    if ( (*(_BYTE *)(v79 + 10) & 5) != 0 )
    {
      v82 = *(char **)(v79 + 24);
    }
    else
    {
      v82 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v79, 0, MmCached, 0LL, 0, v80 | 0x40000000);
      v49 = v114;
    }
    if ( v82 )
    {
      if ( v81 )
        v81 = v81 - *(unsigned int *)(v79 + 44) - *(_QWORD *)(v79 + 32);
      v83 = &v82[v81];
      v26 = *(_BYTE *)(v47 + 2) == 40;
      v113 = v83;
      if ( v26 )
        *(_QWORD *)(v47 + 64) = v83;
      else
        *(_QWORD *)(v47 + 24) = v83;
      v84 = v49[17];
      if ( !v84 )
        goto LABEL_114;
      SystemAddressForMdl = RaidGetSystemAddressForMdl(v84, v49[24], v80, &v113);
      if ( SystemAddressForMdl >= 0 )
      {
        BidirectionalData = RaidSrbExGetBidirectionalData(v47);
        *(_QWORD *)(BidirectionalData + 16) = v113;
      }
      if ( SystemAddressForMdl != -1073741670 )
        goto LABEL_114;
    }
    if ( *(_BYTE *)(v9 + 2) == 40 )
    {
      if ( !v110 )
      {
        *(_DWORD *)(v116 + 44) = -1073741670;
        goto LABEL_149;
      }
    }
    else if ( !v110 )
    {
      *(_QWORD *)(v9 + 48) = *(_QWORD *)(v4 + 176);
      goto LABEL_148;
    }
    v9 = v119[0];
    *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v119[0];
LABEL_148:
    *(_DWORD *)(v9 + 64) = -1073741670;
LABEL_149:
    v87 = *(struct _MDL **)(v4 + 136);
    if ( v87 )
    {
      MmUnlockPages(v87);
      IoFreeMdl(*(PMDL *)(v4 + 136));
      *(_QWORD *)(v4 + 136) = 0LL;
    }
    return 3221225626LL;
  }
  v10 = v9 + *(unsigned int *)(v9 + 52);
  v116 = v9;
  *(_WORD *)v10 = 1;
  *(_DWORD *)(v10 + 4) = 4;
  *(_BYTE *)(v10 + 8) = *(_BYTE *)(a1 + 96);
  *(_BYTE *)(v10 + 9) = *(_BYTE *)(a1 + 97);
  *(_BYTE *)(v10 + 10) = *(_BYTE *)(a1 + 98);
  v11 = *(_QWORD *)(v9 + 80);
  v12 = *(_QWORD *)(v9 + 64);
  if ( *(_BYTE *)(v9 + 2) != 40 )
    goto LABEL_19;
  if ( *(_DWORD *)(v9 + 20) )
    goto LABEL_12;
  v13 = *(_DWORD *)(v9 + 56);
  v14 = 0;
  if ( !v13 )
    goto LABEL_12;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v9 + 4LL * v14 + 120);
    if ( (unsigned int)v15 < 0x80 )
      goto LABEL_28;
    v16 = *(unsigned int *)(v9 + 16);
    if ( (unsigned int)v15 > (unsigned int)v16 )
      goto LABEL_28;
    v17 = v15 + v9;
    v18 = (unsigned int)v15;
    v19 = *(_DWORD *)(v15 + v9) - 64;
    if ( !v19 )
      break;
    v20 = v19 - 1;
    if ( v20 )
    {
      if ( v20 == 1 && v18 + 40 <= v16 )
      {
LABEL_11:
        v109 = *(_BYTE *)(v17 + 9);
        goto LABEL_12;
      }
    }
    else if ( v18 + 56 <= v16 )
    {
      goto LABEL_11;
    }
LABEL_28:
    if ( ++v14 >= v13 )
      goto LABEL_12;
  }
  if ( v18 + 40 > v16 )
    goto LABEL_28;
  v109 = *(_BYTE *)(v17 + 9);
LABEL_12:
  if ( (*(_BYTE *)(v9 + 24) & 0xC0) != 0xC0 )
    goto LABEL_19;
  v21 = *(_DWORD *)(v9 + 56);
  v22 = 0;
  if ( !v21 )
    goto LABEL_19;
  while ( 1 )
  {
    v23 = *(unsigned int *)(v9 + 4LL * v22 + 120);
    if ( (unsigned int)v23 >= 0x80 )
    {
      v24 = *(unsigned int *)(v9 + 16);
      if ( (unsigned int)v23 <= (unsigned int)v24 )
      {
        v25 = v23 + v9;
        if ( *(_DWORD *)(v23 + v9) == 1 && v23 + 24 <= v24 )
          break;
      }
    }
    if ( ++v22 >= v21 )
      goto LABEL_19;
  }
  if ( !v25 )
    goto LABEL_19;
  v30 = *(_QWORD *)(v25 + 16);
  if ( !v30 )
    goto LABEL_19;
  v31 = 0;
  while ( 1 )
  {
    v32 = *(unsigned int *)(v9 + 4LL * v31 + 120);
    if ( (unsigned int)v32 >= 0x80 && (unsigned int)v32 < *(_DWORD *)(v9 + 16) && *(_DWORD *)(v32 + v9) == 160 )
      break;
    if ( ++v31 >= v21 )
      goto LABEL_39;
  }
  v8 = *(_QWORD *)(v32 + v9 + 8);
  if ( v8 )
  {
    v6 = *(_QWORD *)(v25 + 16);
    v117 = *(_QWORD *)(v32 + v9 + 8);
    goto LABEL_19;
  }
LABEL_39:
  v33 = a2;
  v34 = 0;
  v35 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( v35 == 315412 || v35 == 315464 )
    v34 = 1;
  v6 = *(_QWORD *)(v25 + 16);
  if ( v34 )
    v33 = *(unsigned __int8 *)(a2 + 64);
  else
    LOBYTE(v33) = 0;
  result = StorpDataInBufferAllocateMdlAndLockPages(&v117, *(unsigned int *)(v25 + 8), v30, v33);
  if ( (int)result >= 0 )
  {
    v8 = v117;
    goto LABEL_19;
  }
  return result;
}
