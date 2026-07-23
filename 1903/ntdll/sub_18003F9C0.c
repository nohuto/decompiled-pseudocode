/*
 * XREFs of sub_18003F9C0 @ 0x18003F9C0
 * Callers:
 *     sub_18003F020 @ 0x18003F020 (sub_18003F020.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180045AF0 @ 0x180045AF0 (sub_180045AF0.c)
 *     sub_180046B74 @ 0x180046B74 (sub_180046B74.c)
 *     sub_180047014 @ 0x180047014 (sub_180047014.c)
 *     sub_18004733C @ 0x18004733C (sub_18004733C.c)
 *     sub_180047C74 @ 0x180047C74 (sub_180047C74.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_180101024 @ 0x180101024 (sub_180101024.c)
 *     sub_180101400 @ 0x180101400 (sub_180101400.c)
 *     sub_18010313C @ 0x18010313C (sub_18010313C.c)
 *     sub_1801033C4 @ 0x1801033C4 (sub_1801033C4.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

unsigned __int64 __fastcall sub_18003F9C0(unsigned __int64 a1, PSIZE_T RegionSize)
{
  PSIZE_T v2; // r12
  unsigned __int64 v3; // rsi
  __int64 *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // r15
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  NTSTATUS v12; // eax
  __int64 v13; // r14
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 *v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  ULONG_PTR v29; // r8
  ULONG_PTR v30; // rcx
  _QWORD *v31; // r14
  ULONG_PTR v32; // rdi
  __int64 v33; // rdx
  unsigned __int64 v34; // r12
  int v35; // ecx
  bool v36; // zf
  unsigned __int64 v37; // r13
  __int64 *v38; // rdx
  _QWORD *v39; // rax
  __int64 *v40; // rcx
  __int64 *v41; // rdx
  unsigned __int8 v42; // al
  unsigned __int64 v43; // r8
  __int64 v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // r8
  _QWORD *v47; // r9
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdi
  __int64 v50; // rdx
  unsigned __int64 v51; // rdi
  PSILO_USER_SHARED_DATA v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rdi
  PSILO_USER_SHARED_DATA v55; // rcx
  __int64 v56; // rcx
  ULONG_PTR v58; // rdx
  ULONG Protect; // r14d
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // r8
  __int64 *v62; // rax
  unsigned __int64 v63; // rcx
  __int64 *v64; // rax
  unsigned __int64 v65; // rcx
  __int64 *v66; // rax
  __int64 *v67; // rax
  PVOID BaseAddress; // [rsp+70h] [rbp+8h] BYREF
  PSIZE_T v69; // [rsp+78h] [rbp+10h]

  v69 = RegionSize;
  v2 = RegionSize;
  v3 = *RegionSize;
  if ( dword_180166578 >= 1 && ((v3 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v3 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
    sub_180101400(1LL);
  }
  v5 = *(__int64 **)(a1 + 320);
  if ( v5 )
  {
    v60 = v3 >> 12;
    if ( v3 >> 12 >= *((unsigned int *)v5 + 2) )
    {
      while ( 1 )
      {
        v67 = (__int64 *)*v5;
        if ( !*v5 )
          break;
        v5 = (__int64 *)*v5;
        if ( v60 < *((unsigned int *)v67 + 2) )
          goto LABEL_73;
      }
      LODWORD(v60) = *((_DWORD *)v5 + 2) - 1;
    }
LABEL_73:
    v6 = sub_180045AF0(a1, (_DWORD)v5, 0, v60, v3);
    goto LABEL_74;
  }
  v6 = a1 + 240;
  v7 = *(_QWORD *)(a1 + 240);
  if ( a1 + 240 == v7 )
  {
LABEL_74:
    v7 = v6;
    goto LABEL_5;
  }
  while ( *(_QWORD *)(v7 + 40) < v3 )
  {
    v7 = *(_QWORD *)v7;
    if ( v6 == v7 )
      goto LABEL_74;
  }
LABEL_5:
  v8 = (_QWORD *)(a1 + 240);
  if ( v7 == a1 + 240 )
    return 0LL;
  if ( dword_180166578 >= 1 && *(_QWORD *)(v7 + 40) < *v2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    sub_180101400(1LL);
  }
  v9 = *(_BYTE *)(v7 - 2);
  v10 = v7 - 16;
  if ( v9 )
    v11 = (v10 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v9 << 16) + 0x10000;
  else
    v11 = a1;
  BaseAddress = *(PVOID *)(v7 + 32);
  if ( qword_180166970 != *(_QWORD *)(a1 + 360) )
  {
    v12 = ((__int64 (__fastcall *)(unsigned __int64, PVOID *, PSIZE_T))(qword_180166970 ^ *(_QWORD *)(a1 + 360)))(
            a1,
            &BaseAddress,
            v2);
  }
  else
  {
    v58 = *v2;
    if ( *(_QWORD *)(v7 + 40) - *v2 <= 16LL * *(_QWORD *)(a1 + 176)
      && *(_QWORD *)(v7 + 40) < 16 * (unsigned __int64)*(unsigned int *)(a1 + 148) )
    {
      v58 = *(_QWORD *)(v7 + 40);
    }
    *v2 = (v58 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    Protect = sub_18004733C(a1, 1LL);
    if ( (unsigned int)sub_180047C74(*v2, *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664), a1, a1 + 376) )
      v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v2, 0x1000u, Protect);
    else
      v12 = -1073741523;
    ++*(_DWORD *)(a1 + 624);
  }
  if ( v12 < 0 )
  {
    ++*(_DWORD *)(a1 + 632);
    return 0LL;
  }
  v13 = 2147353472LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_18010313C(a1, BaseAddress, *v2, 2LL);
  if ( *(_DWORD *)(a1 + 124) )
  {
    v16 = *(_DWORD *)(v10 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v10 + 8) = v16;
    if ( HIBYTE(v16) != ((unsigned __int8)v16 ^ (unsigned __int8)(BYTE1(v16) ^ BYTE2(v16))) )
      sub_180101024(a1, v7 - 16);
  }
  *(_BYTE *)(v10 + 10) = 0;
  v17 = v7 + 16;
  *(_BYTE *)(v10 + 15) = 0;
  v18 = *(_QWORD *)(v7 + 16);
  v19 = *(__int64 **)(v7 + 24);
  v20 = *(_QWORD *)(v18 + 8);
  v21 = *v19;
  if ( *v19 == v20 && v21 == v17 )
  {
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
  }
  else
  {
    sub_18010A694(13, 0, v17, v20, v21, 0LL);
  }
  v22 = *(_QWORD *)(v7 + 40);
  if ( v22 )
  {
    v23 = *(__int64 **)(a1 + 320);
    if ( v23 )
    {
      v61 = v22 >> 12;
      if ( v22 >> 12 >= *((unsigned int *)v23 + 2) )
      {
        while ( 1 )
        {
          v62 = (__int64 *)*v23;
          if ( !*v23 )
            break;
          v23 = (__int64 *)*v23;
          if ( v61 < *((unsigned int *)v62 + 2) )
            goto LABEL_81;
        }
        LODWORD(v61) = *((_DWORD *)v23 + 2) - 1;
      }
LABEL_81:
      sub_180047014(a1, (_DWORD)v23, 0, v7, v61, *(_QWORD *)(v7 + 40));
    }
    v24 = *(_QWORD *)v7;
    v25 = *(__int64 **)(v7 + 8);
    v26 = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
    v27 = *v25;
    if ( *v25 == v26 && v27 == v7 )
    {
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
    }
    else
    {
      sub_18010A694(13, 0, v7, v26, v27, 0LL);
    }
  }
  --*(_DWORD *)(v11 + 84);
  *(_DWORD *)(v11 + 80) -= *(_QWORD *)(v7 + 40) >> 12;
  *(_QWORD *)(a1 + 576) += *(_QWORD *)(v7 + 40);
  ++*(_DWORD *)(a1 + 608);
  --*(_DWORD *)(a1 + 604);
  v28 = *(_QWORD *)(v7 + 40);
  if ( v28 >= 0xFF000 )
  {
    *(_QWORD *)(a1 + 584) -= v28;
    v28 = *(_QWORD *)(v7 + 40);
  }
  v29 = *v2;
  if ( v28 > *v2 || v28 + *(_QWORD *)(v7 + 32) == *(_QWORD *)(v11 + 72) )
  {
    v30 = v29 + *(_QWORD *)(v7 + 32);
    v31 = (_QWORD *)(v30 - 48);
    v31[4] = v30;
    v32 = v30 - 64;
    v31[5] = v28 - v29;
    *(_DWORD *)(v32 + 8) = 65540;
    *(_BYTE *)(v32 + 15) = 3;
    v33 = *(_QWORD *)(v11 + 40);
    if ( v33 == v11 )
    {
      LOBYTE(v34) = 0;
    }
    else
    {
      v34 = ((v32 - v11) >> 16) + 1;
      if ( v34 >= 0xFE )
        sub_18010A694(3, v33, v30 - 64, v11, 0LL, 0LL);
    }
    v35 = dword_180166578;
    *(_BYTE *)(v32 + 14) = v34;
    if ( v35 >= 1 )
    {
      v36 = v10 == v32;
      if ( v10 <= v32 )
        goto LABEL_33;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("((PHEAP_ENTRY)LastKnownEntry <= Entry)");
      sub_180101400(1LL);
      v35 = dword_180166578;
    }
    v36 = v10 == v32;
LABEL_33:
    if ( !v36 )
      *(_WORD *)(v32 + 12) = *(_WORD *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v32 + 11) = *(_BYTE *)(v32 + 8) ^ *(_BYTE *)(v32 + 9) ^ *(_BYTE *)(v32 + 10);
      *(_DWORD *)(v32 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    v37 = v31[5];
    if ( v37 )
    {
      if ( v35 >= 1 && ((v37 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v37 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
        sub_180101400(1LL);
      }
      v38 = *(__int64 **)(a1 + 320);
      if ( v38 )
      {
        v63 = v37 >> 12;
        if ( v37 >> 12 >= *((unsigned int *)v38 + 2) )
        {
          while ( 1 )
          {
            v64 = (__int64 *)*v38;
            if ( !*v38 )
              break;
            v38 = (__int64 *)*v38;
            if ( v63 < *((unsigned int *)v64 + 2) )
              goto LABEL_85;
          }
          LODWORD(v63) = *((_DWORD *)v38 + 2) - 1;
        }
LABEL_85:
        v39 = (_QWORD *)sub_180045AF0(a1, (_DWORD)v38, 0, v63, v37);
      }
      else
      {
        v39 = (_QWORD *)*v8;
        if ( v8 == (_QWORD *)*v8 )
        {
LABEL_41:
          v39 = (_QWORD *)(a1 + 240);
        }
        else
        {
          while ( v39[5] < v37 )
          {
            v39 = (_QWORD *)*v39;
            if ( v8 == v39 )
              goto LABEL_41;
          }
        }
      }
      v40 = (__int64 *)v39[1];
      if ( (_QWORD *)*v40 == v39 )
      {
        *v31 = v39;
        v31[1] = v40;
        *v40 = (__int64)v31;
        v39[1] = v31;
      }
      else
      {
        sub_18010A694(13, 0, (_DWORD)v39, 0, *v40, 0LL);
      }
      v41 = *(__int64 **)(a1 + 320);
      if ( v41 )
      {
        v65 = v31[5] >> 12;
        if ( v65 >= *((unsigned int *)v41 + 2) )
        {
          while ( 1 )
          {
            v66 = (__int64 *)*v41;
            if ( !*v41 )
              break;
            v41 = (__int64 *)*v41;
            if ( v65 < *((unsigned int *)v66 + 2) )
              goto LABEL_89;
          }
          LODWORD(v65) = *((_DWORD *)v41 + 2) - 1;
        }
LABEL_89:
        sub_180046B74(a1, (_DWORD)v41, 0, (_DWORD)v31, v65, v31[5]);
      }
    }
    v42 = *(_BYTE *)(v32 + 14);
    if ( v42 )
      v43 = (v32 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v42 << 16) + 0x10000;
    else
      v43 = a1;
    v44 = *(_QWORD *)(v43 + 96);
    v45 = v31 + 2;
    v46 = (_QWORD *)(v43 + 96);
    v47 = *(_QWORD **)(v44 + 8);
    if ( v47 == v46 )
    {
      *v45 = v44;
      v31[3] = v46;
      *(_QWORD *)(v44 + 8) = v45;
      *v46 = v45;
    }
    else
    {
      sub_18010A694(13, 0, (_DWORD)v46, (_DWORD)v47, 0LL, 0LL);
    }
    ++*(_DWORD *)(v11 + 84);
    *(_DWORD *)(v11 + 80) += v31[5] >> 12;
    *(_QWORD *)(a1 + 576) -= v31[5];
    if ( ++*(_DWORD *)(a1 + 604) > 0xAu
      && !*(_QWORD *)(a1 + 320)
      && (*(_DWORD *)(a1 + 112) & 3) == 2
      && (dword_180166554 & 1) == 0 )
    {
      *(_DWORD *)(a1 + 120) |= 0x10000000u;
    }
    v48 = v31[5];
    if ( v48 >= 0xFF000 )
      *(_QWORD *)(a1 + 584) += v48;
    v2 = v69;
    v49 = (v32 - v10) & 0xFFFFFFFFFFFFFFF0uLL;
    v13 = 2147353472LL;
    goto LABEL_53;
  }
  v49 = v29 + 16LL * *(unsigned __int16 *)(v10 + 8);
LABEL_53:
  *v2 = v49;
  *(_BYTE *)(v10 + 11) = 0;
  v50 = *(_QWORD *)(v11 + 40);
  if ( v50 == v11 )
  {
    LOBYTE(v51) = 0;
  }
  else
  {
    v51 = ((v10 - v11) >> 16) + 1;
    if ( v51 >= 0xFE )
      sub_18010A694(3, v50, v10, v11, 0LL, 0LL);
  }
  *(_BYTE *)(v10 + 14) = v51;
  v52 = NtCurrentPeb()->SharedData;
  if ( v52 && v52->ServiceSessionId )
    v53 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v53 = 2147353472LL;
  if ( *(_BYTE *)v53 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    sub_1801033C4(a1, v10, *v2, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v13);
  }
  v54 = 2147353482LL;
  v55 = NtCurrentPeb()->SharedData;
  if ( v55 && v55->ServiceSessionId )
    v56 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
  else
    v56 = 2147353482LL;
  if ( *(_BYTE *)v56 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v54 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
    sub_1801033C4(a1, v10, *v2, 16 * *(_QWORD *)(a1 + 192), (HANDLE)*(unsigned __int8 *)v54);
  }
  return v10;
}
