/*
 * XREFs of RaidUnitClaimIrp @ 0x1C0003AB0
 * Callers:
 *     RaUnitStartIo @ 0x1C00035B0 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C0045A1C (RaUnitStartResetIo.c)
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C0004FC4 (RaidUnitReenablePendingTimer.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004159C (RaidSrbExGetBidirectionalData.c)
 *     TranslateToExtendedSrb @ 0x1C0041B70 (TranslateToExtendedSrb.c)
 *     RaidGetSystemAddressForMdl @ 0x1C004319C (RaidGetSystemAddressForMdl.c)
 *     McTemplateK0dud @ 0x1C00437E8 (McTemplateK0dud.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1C0048F58 (StorpDataInBufferAllocateMdlAndLockPages.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r12
  unsigned int v14; // r11d
  unsigned int v15; // r9d
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r10
  __int64 v19; // r8
  int v20; // ecx
  int v21; // ecx
  unsigned __int64 v22; // rcx
  unsigned int v23; // r11d
  unsigned int v24; // edx
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // r10
  bool v28; // zf
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  char v33; // dl
  int v34; // ecx
  __int64 result; // rax
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // r9
  char v39; // al
  char v40; // dl
  _DWORD *v41; // rax
  _DWORD *v42; // rsi
  __int64 v43; // r8
  __int64 v44; // r12
  char v45; // r14
  char *v46; // rcx
  __int64 v47; // rsi
  unsigned __int8 v48; // al
  _QWORD *v49; // rdx
  unsigned int v50; // ebp
  int v51; // r15d
  __int64 v52; // r12
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
  __int64 v79; // rbp
  unsigned int v80; // r15d
  __int64 v81; // r14
  char *v82; // rax
  char *v83; // rax
  __int64 v84; // rcx
  int SystemAddressForMdl; // ebp
  __int64 BidirectionalData; // rax
  struct _MDL *v87; // rcx
  unsigned __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // rax
  unsigned int v92; // edi
  __int64 v93; // rax
  ULONGLONG UnbiasedInterruptTime; // rbp
  __int64 v95; // r14
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
  unsigned __int8 v109; // [rsp+30h] [rbp-B8h]
  char v110; // [rsp+32h] [rbp-B6h]
  struct _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+38h] [rbp-B0h] BYREF
  _DWORD *v112; // [rsp+40h] [rbp-A8h]
  __int64 v113; // [rsp+48h] [rbp-A0h]
  char *v114; // [rsp+50h] [rbp-98h] BYREF
  _QWORD *v115; // [rsp+58h] [rbp-90h]
  __int64 v116; // [rsp+60h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v118[2]; // [rsp+80h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)&ProcNumber[0].Group = a2;
  v112 = (_DWORD *)a4;
  v5 = 0LL;
  v109 = 0;
  v7 = *(_QWORD *)(a2 + 184);
  v113 = 0LL;
  v8 = 0LL;
  v110 = 0;
  v9 = 0LL;
  v118[0] = 0LL;
  v10 = *(_QWORD *)(v7 + 8);
  v116 = 0LL;
  if ( *(_BYTE *)(v10 + 2) != 40 )
  {
    v12 = *(_QWORD *)(v10 + 48);
    v13 = *(_QWORD *)(v10 + 24);
    *(_BYTE *)(v10 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v10 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v10 + 7) = *(_BYTE *)(a1 + 98);
    v109 = *(_BYTE *)(v10 + 11);
    v36 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v36 + 402) == 1 )
    {
      v37 = *(_QWORD *)(v4 + 760);
      if ( !v37 )
      {
        *(_BYTE *)(v10 + 3) = 48;
        *(_DWORD *)(v10 + 64) = -1073741670;
        return 3221225626LL;
      }
      result = TranslateToExtendedSrb(
                 v37,
                 v10,
                 *(_DWORD *)(v4 + 744),
                 v37,
                 a3,
                 (*(_DWORD *)(*(_QWORD *)(v36 + 528) + 184LL) & 0x80) != 0);
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v10 + 3) = 48;
        *(_DWORD *)(v10 + 64) = result;
        return result;
      }
      v5 = *(_QWORD *)(v4 + 760);
      *(_BYTE *)(v4 + 16) |= 0x40u;
      v38 = *(_QWORD *)&ProcNumber[0].Group;
      *(_QWORD *)(v4 + 752) = v10;
      v118[0] = v10;
      v10 = v5;
      v113 = v5;
      v110 = 1;
      *(_QWORD *)(*(_QWORD *)(v38 + 184) + 8LL) = v5;
    }
LABEL_24:
    v28 = StorEtwLoggingEnabled == 0;
    v29 = *(_QWORD *)&ProcNumber[0].Group;
    *(_QWORD *)(v4 + 160) = *(_QWORD *)&ProcNumber[0].Group;
    *(_QWORD *)(v4 + 168) = v10;
    *(_QWORD *)(v4 + 224) = a1;
    *(_QWORD *)(v4 + 104) = *(_QWORD *)(v29 + 8);
    *(_QWORD *)(v4 + 136) = v9;
    if ( !v28 )
      IoGetActivityIdIrp(*(_QWORD *)&ProcNumber[0].Group, v4 + 728);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) != 0 )
    {
      if ( *(_BYTE *)(v10 + 2) == 40 )
        v30 = *(_DWORD *)(v5 + 96);
      else
        v30 = *(_DWORD *)(v10 + 56);
      *(_DWORD *)(v4 + 18) = v30;
    }
    else
    {
      *(_BYTE *)(v4 + 20) = -1;
      *(_WORD *)(v4 + 18) = -1;
    }
    v39 = *(_BYTE *)(v4 + 16);
    *(_DWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 176) = v12;
    *(_BYTE *)(v4 + 16) = v39 & 0xE3 | 4;
    *(_QWORD *)(v4 + 184) = v13;
    *(_QWORD *)(v4 + 192) = v8;
    v40 = *(_BYTE *)(v10 + 2);
    if ( v40 == 40 )
    {
      v41 = v112;
      *(_QWORD *)(v5 + 96) = v4;
      *(_DWORD *)(v5 + 32) = *v41;
      v40 = *(_BYTE *)(v10 + 2);
      v42 = v112;
    }
    else
    {
      v42 = v112;
      *(_QWORD *)(v10 + 48) = v4;
      *(_BYTE *)(v10 + 8) = *(_BYTE *)v42;
    }
    v43 = *((_QWORD *)v42 + 1);
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7) & 0xFFFFFFF8) != 0 )
    {
      if ( v40 == 40 )
        *(_QWORD *)(v10 + 104) = v43;
      else
        *(_QWORD *)(v10 + 56) = v43;
    }
    v44 = *(_QWORD *)&ProcNumber[0].Group;
    v45 = 0;
    v46 = *(char **)(a1 + 24);
    v114 = v46;
    if ( !*(_QWORD *)(*(_QWORD *)&ProcNumber[0].Group + 8LL) )
      goto LABEL_107;
    v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&ProcNumber[0].Group + 184LL) + 8LL);
    v48 = *(_BYTE *)(v47 + 2);
    if ( v48 != 40 )
    {
      v49 = *(_QWORD **)(v47 + 48);
      v51 = *(_DWORD *)(v47 + 12);
      v52 = *(_QWORD *)(v47 + 24);
      v115 = v49;
      v50 = v48;
      if ( !v48 )
        v45 = *(_BYTE *)(v47 + 72);
      goto LABEL_76;
    }
    v49 = *(_QWORD **)(v47 + 96);
    v50 = *(_DWORD *)(v47 + 20);
    v51 = *(_DWORD *)(v47 + 24);
    v52 = *(_QWORD *)(v47 + 64);
    v115 = v49;
    if ( v50 )
      goto LABEL_76;
    v53 = *(_DWORD *)(v47 + 56);
    v54 = 0;
    if ( !v53 )
      goto LABEL_76;
    while ( 1 )
    {
      v55 = *(unsigned int *)(v47 + 4LL * v54 + 120);
      if ( (unsigned int)v55 < 0x80 )
        goto LABEL_73;
      v56 = *(unsigned int *)(v47 + 16);
      if ( (unsigned int)v55 > (unsigned int)v56 )
        goto LABEL_73;
      v57 = v47 + v55;
      v58 = (unsigned int)v55;
      v59 = *(_DWORD *)(v47 + v55);
      if ( v59 == 64 )
        break;
      v60 = v59 - 65;
      if ( !v60 )
      {
        v62 = v58 + 56;
        goto LABEL_72;
      }
      if ( v60 == 1 && v58 + 40 <= v56 )
      {
        v61 = (char *)(v57 + 32);
        if ( !*(_DWORD *)(v57 + 12) )
          v61 = 0LL;
        goto LABEL_97;
      }
LABEL_73:
      if ( ++v54 >= v53 )
        goto LABEL_74;
    }
    v62 = v58 + 40;
LABEL_72:
    if ( v62 > v56 )
      goto LABEL_73;
    if ( !*(_BYTE *)(v57 + 10) )
    {
LABEL_74:
      v49 = v115;
      goto LABEL_75;
    }
    v61 = (char *)(v57 + 24);
LABEL_97:
    v49 = v115;
    if ( v61 )
      v45 = *v61;
LABEL_75:
    v46 = v114;
LABEL_76:
    if ( (v51 & 0xC0) == 0 || !v52 && !v49[13] )
    {
LABEL_105:
      v44 = *(_QWORD *)&ProcNumber[0].Group;
LABEL_106:
      v42 = v112;
      goto LABEL_107;
    }
    if ( v50 > 0x17 || (v63 = 8389124, !_bittest(&v63, v50)) )
    {
      v64 = v46[393];
      if ( v64 != 3 && ((unsigned __int8)(v64 - 1) > 1u || !v50 && ((v45 - 8) & 0x5D) == 0) )
      {
        if ( v46[4450] )
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
                    goto LABEL_102;
                }
                v65 = v47 + v68;
              }
            }
LABEL_102:
            v44 = *(_QWORD *)&ProcNumber[0].Group;
            *(_QWORD *)(v47 + 64) = 0LL;
            v42 = v112;
            if ( v65 )
              *(_QWORD *)(v65 + 16) = 0LL;
LABEL_107:
            v70 = v109;
            if ( v109 <= *(_BYTE *)(a1 + 1476) )
              v70 = *(_BYTE *)(a1 + 1476);
            v71 = *(_QWORD *)(v4 + 168);
            v72 = *((_QWORD *)v42 + 3);
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
                  v77 = *(_DWORD *)(v71 + v74);
                  if ( v77 == 64 )
                  {
                    v88 = v76 + 40;
                  }
                  else
                  {
                    v78 = v77 - 65;
                    if ( v78 )
                    {
                      if ( v78 != 1 || v76 + 40 > v75 )
                        continue;
                      *(_QWORD *)(v4 + 200) = *(_QWORD *)(v71 + v76 + 24);
                      *(_BYTE *)(v4 + 208) = *(_BYTE *)(v71 + v76 + 9);
                      *(_QWORD *)(v71 + v76 + 24) = v72;
                      goto LABEL_147;
                    }
                    v88 = v76 + 56;
                  }
                  if ( v88 <= v75 )
                  {
                    *(_QWORD *)(v4 + 200) = *(_QWORD *)(v71 + v76 + 16);
                    *(_BYTE *)(v4 + 208) = *(_BYTE *)(v71 + v76 + 9);
                    *(_QWORD *)(v71 + v76 + 16) = v72;
LABEL_147:
                    *(_BYTE *)(v71 + v76 + 9) = v70;
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
            v89 = *(_QWORD *)(*(_QWORD *)(v44 + 184) + 8LL);
            if ( *(_BYTE *)(v89 + 2) == 40 )
              v90 = *(_QWORD *)(v89 + 96);
            else
              v90 = *(_QWORD *)(v89 + 48);
            v91 = *(_QWORD *)(v90 + 168);
            if ( *(_BYTE *)(v91 + 2) == 40 )
              v92 = *(_DWORD *)(v91 + 40);
            else
              v92 = *(_DWORD *)(v91 + 20);
            if ( !*(_BYTE *)(a1 + 2720) && v92 <= 2 )
              v92 = 3;
            v93 = *(_QWORD *)(a1 + 24);
            if ( v93 && *(_QWORD *)(v93 + 4984) || (**(_BYTE **)(a1 + 216) & 1) != 0 )
              UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
            else
              UnbiasedInterruptTime = 0LL;
            *(_BYTE *)(v90 + 16) |= 2u;
            v95 = *(_QWORD *)(a1 + 216);
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
                goto LABEL_178;
              }
              v101 = (__int64 *)(v98 + 16);
              v102 = *(_QWORD *)(v98 + 24);
              if ( v102 != v98 + 16 )
              {
                while ( *(_QWORD *)(v96 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v96 + 32)) < *(_QWORD *)(v102 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v102 + 16)) )
                {
                  v102 = *(_QWORD *)(v102 + 8);
                  if ( (__int64 *)v102 == v101 )
                    goto LABEL_174;
                }
                *(_QWORD *)(v96 + 16) = *(_QWORD *)v102;
                *(_QWORD *)(*(_QWORD *)v102 + 8LL) = v96 + 16;
                *(_QWORD *)v102 = v96 + 16;
                *(_DWORD *)(v96 + 48) |= 1u;
                *(_QWORD *)(v96 + 24) = v102;
LABEL_178:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                if ( StorEtwLoggingEnabled )
                {
                  v118[0] = 0LL;
                  v118[1] = 0LL;
                  IoGetActivityIdIrp(v44, v118);
                  if ( byte_1C0061742 < 0 )
                    McTemplateK0dud(v106, v105, (unsigned int)v118, v107, 3);
                }
                if ( *(char *)(a1 + 161) < 0 || *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5024LL) )
                {
                  if ( (*(_DWORD *)(a1 + 168) & 4) != 0 )
                    v108 = 1;
                  else
                    v108 = (unsigned __int8)_interlockedbittestandset((volatile signed __int32 *)(a1 + 168), 2u);
                  if ( *(_BYTE *)(a1 + 2748) )
                    goto LABEL_184;
                  if ( !v108 )
                    RaidUnitReenablePendingTimer(a1, 0LL);
                }
                else if ( *(_BYTE *)(a1 + 2748) )
                {
LABEL_184:
                  LOBYTE(v105) = 1;
                  RaidUnitReenablePendingTimer(a1, v105);
                  result = 0LL;
                  *(_BYTE *)(a1 + 2748) = 0;
                  return result;
                }
                return 0LL;
              }
LABEL_174:
              v103 = *v101;
              v104 = (_QWORD *)(v96 + 16);
              if ( *(__int64 **)(*v101 + 8) == v101 )
              {
                *v104 = v103;
                *(_QWORD *)(v96 + 24) = v101;
                *(_QWORD *)(v103 + 8) = v104;
                *v101 = (__int64)v104;
                *(_DWORD *)(v96 + 48) |= 1u;
                goto LABEL_178;
              }
            }
            __fastfail(3u);
          }
          *(_QWORD *)(v47 + 24) = 0LL;
        }
        goto LABEL_105;
      }
    }
    v44 = *(_QWORD *)&ProcNumber[0].Group;
    v79 = v49[13];
    v80 = 32;
    v81 = v49[23];
    if ( *(_BYTE *)(*(_QWORD *)&ProcNumber[0].Group + 64LL) )
      v80 = 16;
    if ( (*(_BYTE *)(v79 + 10) & 5) != 0 )
    {
      v82 = *(char **)(v79 + 24);
    }
    else
    {
      v82 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v79, 0, MmCached, 0LL, 0, v80 | 0x40000000);
      v49 = v115;
    }
    if ( v82 )
    {
      if ( v81 )
        v81 = v81 - *(unsigned int *)(v79 + 44) - *(_QWORD *)(v79 + 32);
      v83 = &v82[v81];
      v28 = *(_BYTE *)(v47 + 2) == 40;
      v114 = v83;
      if ( v28 )
        *(_QWORD *)(v47 + 64) = v83;
      else
        *(_QWORD *)(v47 + 24) = v83;
      v84 = v49[17];
      if ( !v84 )
        goto LABEL_106;
      SystemAddressForMdl = RaidGetSystemAddressForMdl(v84, v49[24], v80, &v114);
      if ( SystemAddressForMdl >= 0 )
      {
        BidirectionalData = RaidSrbExGetBidirectionalData(v47);
        *(_QWORD *)(BidirectionalData + 16) = v114;
      }
      if ( SystemAddressForMdl != -1073741670 )
        goto LABEL_106;
    }
    if ( *(_BYTE *)(v10 + 2) == 40 )
    {
      if ( !v110 )
      {
        *(_DWORD *)(v113 + 44) = -1073741670;
        goto LABEL_141;
      }
    }
    else if ( !v110 )
    {
      *(_QWORD *)(v10 + 48) = *(_QWORD *)(v4 + 176);
      goto LABEL_140;
    }
    v10 = v118[0];
    *(_QWORD *)(*(_QWORD *)(v44 + 184) + 8LL) = v118[0];
LABEL_140:
    *(_DWORD *)(v10 + 64) = -1073741670;
LABEL_141:
    v87 = *(struct _MDL **)(v4 + 136);
    if ( v87 )
    {
      MmUnlockPages(v87);
      IoFreeMdl(*(PMDL *)(v4 + 136));
      *(_QWORD *)(v4 + 136) = 0LL;
    }
    return 3221225626LL;
  }
  v11 = v10 + *(unsigned int *)(v10 + 52);
  v113 = v10;
  *(_WORD *)v11 = 1;
  *(_DWORD *)(v11 + 4) = 4;
  *(_BYTE *)(v11 + 8) = *(_BYTE *)(a1 + 96);
  *(_BYTE *)(v11 + 9) = *(_BYTE *)(a1 + 97);
  *(_BYTE *)(v11 + 10) = *(_BYTE *)(a1 + 98);
  v12 = *(_QWORD *)(v10 + 80);
  v13 = *(_QWORD *)(v10 + 64);
  if ( *(_BYTE *)(v10 + 2) != 40 )
    goto LABEL_23;
  if ( *(_DWORD *)(v10 + 20) )
    goto LABEL_16;
  v14 = *(_DWORD *)(v10 + 56);
  v15 = 0;
  if ( !v14 )
    goto LABEL_16;
  while ( 1 )
  {
    v16 = *(unsigned int *)(v10 + 4LL * v15 + 120);
    if ( (unsigned int)v16 < 0x80 )
      goto LABEL_12;
    v17 = *(unsigned int *)(v10 + 16);
    if ( (unsigned int)v16 > (unsigned int)v17 )
      goto LABEL_12;
    v18 = v16 + v10;
    v19 = (unsigned int)v16;
    v20 = *(_DWORD *)(v16 + v10);
    if ( v20 == 64 )
    {
LABEL_10:
      v22 = v19 + 40;
      goto LABEL_11;
    }
    v21 = v20 - 65;
    if ( !v21 )
      break;
    if ( v21 == 1 )
      goto LABEL_10;
LABEL_12:
    if ( ++v15 >= v14 )
      goto LABEL_16;
  }
  v22 = v19 + 56;
LABEL_11:
  if ( v22 > v17 )
    goto LABEL_12;
  v109 = *(_BYTE *)(v18 + 9);
LABEL_16:
  if ( (*(_BYTE *)(v10 + 24) & 0xC0) != 0xC0 )
    goto LABEL_23;
  v23 = *(_DWORD *)(v10 + 56);
  v24 = 0;
  if ( !v23 )
    goto LABEL_23;
  while ( 1 )
  {
    v25 = *(unsigned int *)(v10 + 4LL * v24 + 120);
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(v10 + 16);
      if ( (unsigned int)v25 <= (unsigned int)v26 )
      {
        v27 = v25 + v10;
        if ( *(_DWORD *)(v25 + v10) == 1 && v25 + 24 <= v26 )
          break;
      }
    }
    if ( ++v24 >= v23 )
      goto LABEL_23;
  }
  if ( !v27 || (v31 = *(_QWORD *)(v27 + 16)) == 0 )
  {
LABEL_23:
    v5 = v10;
    goto LABEL_24;
  }
  v32 = *(_QWORD *)&ProcNumber[0].Group;
  v33 = 0;
  v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&ProcNumber[0].Group + 184LL) + 24LL);
  if ( v34 == 315412 || v34 == 315464 )
    v33 = 1;
  v8 = *(_QWORD *)(v27 + 16);
  if ( v33 )
    v32 = *(unsigned __int8 *)(*(_QWORD *)&ProcNumber[0].Group + 64LL);
  else
    LOBYTE(v32) = 0;
  result = StorpDataInBufferAllocateMdlAndLockPages(&v116, *(unsigned int *)(v27 + 8), v31, v32);
  if ( (int)result >= 0 )
  {
    v9 = v116;
    goto LABEL_23;
  }
  return result;
}
