/*
 * XREFs of CcInitializeBcbProfiler @ 0x1409D0324
 * Callers:
 *     CcInitializeCacheManager @ 0x140A040E4 (CcInitializeCacheManager.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     KeInitializeTimer @ 0x140083580 (KeInitializeTimer.c)
 *     KeSetCoalescableTimer @ 0x1400E29F0 (KeSetCoalescableTimer.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400E8BC0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlLookupFunctionTable @ 0x14013B260 (RtlLookupFunctionTable.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x14018F170 (RtlpLookupPrimaryFunctionEntry.c)
 *     RtlpConvertFunctionEntry @ 0x14018F1E0 (RtlpConvertFunctionEntry.c)
 *     strstr @ 0x14019FD30 (strstr.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     KiAreCodePatchesAllowed @ 0x140A0AD70 (KiAreCodePatchesAllowed.c)
 *     KiGetLoadOptions @ 0x140A230AC (KiGetLoadOptions.c)
 */

char CcInitializeBcbProfiler()
{
  struct _KTIMER *PoolWithTag; // rax
  const char *LoadOptions; // rax
  _IMAGE_NT_HEADERS64 *v2; // r9
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(__int64, __int64); // r8
  unsigned __int128 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rsi
  int v8; // eax
  PIMAGE_SECTION_HEADER v9; // rbx
  unsigned int *v10; // r8
  unsigned int *v11; // rdi
  int v12; // r14d
  unsigned int VirtualAddress; // edx
  unsigned int *v14; // r11
  unsigned int SizeOfRawData; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int *v18; // r9
  ULONG_PTR v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int128 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int128 v24; // rax
  unsigned __int64 v25; // rcx
  int v26; // ecx
  int v27; // ecx
  ULONG v28; // r10d
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // r10d
  struct _KTIMER *Dpc; // rbx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int128 v41; // rax
  _BYTE *v42; // rax
  unsigned int *v43; // rax
  unsigned int Blink_low; // r12d
  _QWORD *v45; // rdi
  struct _LIST_ENTRY *Flink; // r15
  int v47; // r10d
  _QWORD *v48; // r13
  unsigned int v49; // r14d
  _QWORD *v50; // r9
  unsigned __int64 v51; // rcx
  const char *v52; // rax
  _ULARGE_INTEGER v53; // r8
  unsigned int v54; // r11d
  __int64 v55; // rax
  __int64 v56; // r8
  unsigned __int128 v57; // rax
  unsigned int v58; // edx
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  const char *v61; // rax
  _ULARGE_INTEGER v62; // r8
  __int64 v63; // rdx
  unsigned __int8 *v64; // rdi
  __int64 v65; // rax
  bool v66; // zf
  unsigned __int64 v67; // rax
  __int64 v68; // rcx
  LARGE_INTEGER v69; // r10
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rdx
  char SubStr[16]; // [rsp+30h] [rbp-69h] BYREF
  int v74; // [rsp+40h] [rbp-59h]
  int v75; // [rsp+44h] [rbp-55h]
  int v76; // [rsp+48h] [rbp-51h]
  int v77; // [rsp+4Ch] [rbp-4Dh]
  int v78; // [rsp+50h] [rbp-49h]
  int v79; // [rsp+54h] [rbp-45h]
  int v80; // [rsp+58h] [rbp-41h]
  int v81; // [rsp+5Ch] [rbp-3Dh]
  int v82; // [rsp+60h] [rbp-39h]
  int v83; // [rsp+64h] [rbp-35h]
  int v84; // [rsp+68h] [rbp-31h]
  int v85; // [rsp+6Ch] [rbp-2Dh]
  int v86; // [rsp+70h] [rbp-29h]
  int v87; // [rsp+74h] [rbp-25h]
  int v88; // [rsp+78h] [rbp-21h]
  int v89; // [rsp+7Ch] [rbp-1Dh]
  int v90; // [rsp+80h] [rbp-19h]
  int v91; // [rsp+84h] [rbp-15h]
  unsigned __int64 v92; // [rsp+88h] [rbp-11h]
  __int64 v93; // [rsp+90h] [rbp-9h]
  _QWORD v94[11]; // [rsp+98h] [rbp-1h] BYREF
  unsigned int v95; // [rsp+100h] [rbp+67h] BYREF
  int v96; // [rsp+108h] [rbp+6Fh]
  int v97; // [rsp+110h] [rbp+77h]
  int v98; // [rsp+118h] [rbp+7Fh]

  LOBYTE(PoolWithTag) = -44;
  if ( MEMORY[0xFFFFF780000002D4] < 2u )
  {
    v96 = 58497;
    SubStr[0] = __ROR4__(42496, 137);
    v97 = 1073741840;
    SubStr[1] = __ROL4__(1073741840, 130);
    v98 = 560;
    SubStr[2] = __ROR4__(560, 131);
    v74 = 18104964;
    SubStr[3] = __ROR4__(18087936, 146);
    v75 = 268435458;
    SubStr[4] = __ROL4__(268435458, 133);
    v76 = 5056;
    SubStr[5] = __ROR4__(5056, 134);
    v77 = 2013282949;
    SubStr[6] = __ROR4__(2013265922, 155);
    v78 = 1409286144;
    SubStr[7] = __ROL4__(1409286144, 136);
    v79 = 29696;
    SubStr[8] = __ROR4__(29696, 137);
    SubStr[9] = 0;
    LoadOptions = (const char *)KiGetLoadOptions();
    PoolWithTag = (struct _KTIMER *)strstr(LoadOptions, SubStr);
    if ( !PoolWithTag )
    {
      v2 = RtlImageNtHeader((PVOID)0x140000000LL);
      v3 = __rdtsc();
      v4 = CcBcbProfiler;
      v5 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
      v93 = *((_QWORD *)&v5 + 1);
      v6 = v5 ^ *((_QWORD *)&v5 + 1);
      *((_QWORD *)&v5 + 1) = (((unsigned __int64)v5 ^ *((_QWORD *)&v5 + 1)) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      v7 = v6 - 100 * ((*((_QWORD *)&v5 + 1) + ((unsigned __int64)(v6 - *((_QWORD *)&v5 + 1)) >> 1)) >> 6);
      v8 = 0;
      v92 = v7;
      if ( v7 >= 0x32 )
        LODWORD(v4) = (unsigned int)sub_1405B0010;
      LOBYTE(v8) = v7 >= 0x32;
      v90 = v8;
      v9 = RtlSectionTableFromVirtualAddress(v2, (PVOID)0x140000000LL, (unsigned int)v4 - 0x40000000);
      v10 = (unsigned int *)RtlLookupFunctionTable((unsigned __int64)v9, v94, &v95);
      if ( !v10 || v95 < 0xC )
      {
        v19 = -1073741701LL;
LABEL_64:
        v91 = 1073753351;
        KeBugCheckEx(__ROR4__(1073741903, 222), 6uLL, (ULONG_PTR)v9, v19, 0LL);
      }
      v11 = 0LL;
      v12 = 0;
      VirtualAddress = v9->VirtualAddress;
      v14 = &v10[3 * (v95 / 0xC)];
      SizeOfRawData = v9->SizeOfRawData;
      if ( SizeOfRawData <= v9->Misc.PhysicalAddress )
        SizeOfRawData = v9->Misc.PhysicalAddress;
      v16 = VirtualAddress + SizeOfRawData;
      do
      {
        v17 = *v10;
        v18 = v11;
        if ( *v10 >= VirtualAddress )
        {
          if ( v17 >= v16 )
            break;
          v11 = v10;
          v12 = (int)v10;
          if ( v18 )
            v11 = v18;
        }
        if ( v17 >= v16 )
          break;
        v10 += 3;
      }
      while ( v10 != v14 );
      if ( !v11 )
      {
        v19 = -1073741569LL;
        goto LABEL_64;
      }
      v20 = __rdtsc();
      v21 = (__ROR8__(v20, 3) ^ v20) * (unsigned __int128)0x7010008004002001uLL;
      v94[1] = *((_QWORD *)&v21 + 1);
      v22 = v21 ^ *((_QWORD *)&v21 + 1);
      PoolWithTag = (struct _KTIMER *)(10 * (((unsigned __int64)v21 ^ *((_QWORD *)&v21 + 1)) / 0xA));
      if ( (unsigned __int64)(v22 - (_QWORD)PoolWithTag) < 5 )
      {
        v23 = __rdtsc();
        v24 = (__ROR8__(v23, 3) ^ v23) * (unsigned __int128)0x7010008004002001uLL;
        v94[2] = *((_QWORD *)&v24 + 1);
        v25 = ((unsigned __int64)v24 ^ *((_QWORD *)&v24 + 1)) % 0xB;
        if ( (unsigned int)v25 > 5 )
        {
          v29 = v25 - 6;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( v31 )
              {
                if ( v31 == 1 )
                {
                  v86 = -1333354875;
                  v28 = __ROR4__(-1333354868, 33);
                }
                else
                {
                  v32 = __rdtsc();
                  v33 = __ROR8__(v32, 3);
                  v34 = (67117057 * (v33 ^ v32)) ^ (((v33 ^ v32) * (unsigned __int128)0x7010008004002001uLL) >> 64);
                  v28 = ((((((v34 % 0x1A + 97) << 8) | ((v34 >> 5)
                                                      - 26
                                                      * ((unsigned int)((1321528399 * (unsigned __int64)(v34 >> 5)) >> 32) >> 3)
                                                      + 65)) << 8) | ((v34 >> 10)
                                                                    - 26
                                                                    * ((unsigned int)((1321528399
                                                                                     * (unsigned __int64)(v34 >> 10)) >> 32) >> 3)
                                                                    + 97)) << 8) | ((v34 >> 15) % 0x1A + 65);
                }
              }
              else
              {
                v87 = 1684422978;
                v28 = __ROR4__(1684422978, 8);
              }
            }
            else
            {
              v88 = -2100910376;
              v28 = __ROL4__(-2100910376, 7);
            }
          }
          else
          {
            v89 = 1314342514;
            v28 = __ROR4__(1314342516, 24);
          }
        }
        else if ( (_DWORD)v25 == 5 )
        {
          v85 = 680282605;
          v28 = __ROR4__(680282605, 5);
        }
        else if ( (_DWORD)v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              if ( v27 == 1 )
              {
                v81 = -1474152136;
                v28 = __ROR4__(-1474152133, 15);
              }
              else
              {
                v80 = 1728537748;
                v28 = __ROL4__(1728537748, 4);
              }
            }
            else
            {
              v82 = -2051698419;
              v28 = __ROR4__(-2051698419, 2);
            }
          }
          else
          {
            v83 = -1297272415;
            v28 = __ROL4__(-1297272415, 1);
          }
        }
        else
        {
          v84 = -795291432;
          v28 = __ROR4__(-795291432, 6);
        }
        PoolWithTag = (struct _KTIMER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, v28);
        Dpc = PoolWithTag;
        if ( PoolWithTag )
        {
          KeInitializeTimer(PoolWithTag + 1);
          Dpc->Header.LockNV = 275;
          Dpc->DueTime.QuadPart = (unsigned __int64)CcBcbProfiler;
          Dpc->TimerListEntry.Flink = (struct _LIST_ENTRY *)Dpc;
          *(_QWORD *)&Dpc->Processor = 0LL;
          Dpc->Header.WaitListHead.Blink = 0LL;
          v36 = __rdtsc();
          v37 = __ROR8__(v36, 3);
          Dpc[2].TimerListEntry.Flink = (struct _LIST_ENTRY *)((0x7010008004002001LL * (v37 ^ v36)) ^ (((v37 ^ v36) * (unsigned __int128)0x7010008004002001uLL) >> 64));
          v38 = __rdtsc();
          v39 = __ROR8__(v38, 3);
          LOBYTE(Dpc[2].TimerListEntry.Blink) = ((0x7010008004002001LL * (v39 ^ v38)) ^ (((v39 ^ v38)
                                                                                        * (unsigned __int128)0x7010008004002001uLL) >> 64))
                                              % 0x3F
                                              + 1;
          v40 = __rdtsc();
          Dpc[2].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)0x140000000LL;
          v41 = (__ROR8__(v40, 3) ^ v40) * (unsigned __int128)0x7010008004002001uLL;
          v42 = (_BYTE *)RtlpConvertFunctionEntry(
                           (__int64)&v11[3
                                       * (((unsigned __int64)v41 ^ *((_QWORD *)&v41 + 1))
                                        % (unsigned int)((v12 - (int)v11) / 12))],
                           0x140000000uLL);
          v43 = (unsigned int *)RtlpLookupPrimaryFunctionEntry(
                                  v42,
                                  (__int64)Dpc[2].Header.WaitListHead.Flink,
                                  (unsigned __int64)Dpc[2].Header.WaitListHead.Flink + *(unsigned int *)v42);
          Blink_low = LOBYTE(Dpc[2].TimerListEntry.Blink);
          v45 = v43;
          Flink = Dpc[2].TimerListEntry.Flink;
          LOBYTE(v47) = Dpc[2].TimerListEntry.Blink;
          *(_QWORD *)&Dpc[2].Header.Lock = v43;
          v48 = (struct _LIST_ENTRY **)((char *)&Dpc[2].Header.WaitListHead.Flink->Flink + *v43);
          v49 = v43[1] - *v43;
          v50 = v48;
          v51 = (unsigned __int64)v48 + v49;
          v95 = Blink_low;
          v52 = (const char *)v48;
          if ( (unsigned __int64)v48 < v51 )
          {
            do
            {
              _mm_prefetch(v52, 0);
              v52 += 64;
            }
            while ( (unsigned __int64)v52 < v51 );
          }
          v53.QuadPart = (unsigned __int64)Flink;
          v54 = v49 >> 7;
          if ( v49 >> 7 )
          {
            do
            {
              v55 = 8LL;
              do
              {
                v56 = v50[1] ^ __ROL8__(*v50 ^ v53.QuadPart, v47);
                v50 += 2;
                v53.QuadPart = __ROL8__(v56, v47);
                --v55;
              }
              while ( v55 );
              v57 = (__ROL8__((unsigned __int64)Flink ^ ((char *)v50 - (char *)v48), 17) ^ (unsigned __int64)Flink ^ ((char *)v50 - (char *)v48))
                  * (unsigned __int128)0x7010008004002001uLL;
              v47 = ((unsigned __int8)v57 ^ (unsigned __int8)(BYTE8(v57) ^ v47)) & 0x3F;
              if ( !v47 )
                LOBYTE(v47) = 1;
              --v54;
            }
            while ( v54 );
            v7 = v92;
            Blink_low = v95;
          }
          v58 = v49 & 0x7F;
          if ( v58 >= 8 )
          {
            v59 = (unsigned __int64)(v49 & 0x7F) >> 3;
            do
            {
              v53.QuadPart = __ROL8__(*v50++ ^ v53.QuadPart, v47);
              v58 -= 8;
              --v59;
            }
            while ( v59 );
          }
          for ( ; v58; --v58 )
          {
            v60 = *(unsigned __int8 *)v50;
            v50 = (_QWORD *)((char *)v50 + 1);
            v53.QuadPart = __ROL8__(v60 ^ v53.QuadPart, v47);
          }
          Dpc[2].DueTime = v53;
          v61 = (const char *)v45;
          if ( v45 < (_QWORD *)((char *)v45 + 12) )
          {
            do
            {
              _mm_prefetch(v61, 0);
              v61 += 64;
            }
            while ( v61 < (const char *)v45 + 12 );
          }
          v62.QuadPart = __ROL8__(*v45 ^ v53.QuadPart, Blink_low);
          LODWORD(v63) = 4;
          v64 = (unsigned __int8 *)(v45 + 1);
          do
          {
            v65 = *v64++;
            v62.QuadPart = __ROL8__(v65 ^ v62.QuadPart, Blink_low);
            v66 = (_DWORD)v63 == 1;
            v63 = (unsigned int)(v63 - 1);
          }
          while ( !v66 );
          HIDWORD(Dpc[2].TimerListEntry.Blink) = v90;
          Dpc[2].DueTime = v62;
          LODWORD(Dpc[2].Header.WaitListHead.Blink) = v49;
          LODWORD(Dpc[2].Dpc) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiAreCodePatchesAllowed)(
                                  Blink_low,
                                  v63,
                                  (_ULARGE_INTEGER)v62.QuadPart,
                                  v50) != 0;
          if ( v7 >= 0x32 )
          {
            *(_QWORD *)&Dpc[2].Processor = 0LL;
            Dpc[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)sub_1405B0010;
            Dpc[3].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)Dpc;
          }
          v67 = __rdtsc();
          v68 = __ROR8__(v67, 3);
          v69.QuadPart = -1200000000LL
                       - ((0x7010008004002001LL * (v68 ^ v67)) ^ (((v68 ^ v67) * (unsigned __int128)0x7010008004002001uLL) >> 64))
                       % 0x5F5E100;
          v70 = __rdtsc();
          v71 = __ROR8__(v70, 3) ^ v70;
          LOBYTE(PoolWithTag) = KeSetCoalescableTimer(
                                  Dpc + 1,
                                  v69,
                                  0,
                                  ((0x7010008004002001LL * v71) ^ ((v71 * (unsigned __int128)0x7010008004002001uLL) >> 64))
                                % 0x2710,
                                  (PKDPC)Dpc);
        }
      }
    }
  }
  return (char)PoolWithTag;
}
