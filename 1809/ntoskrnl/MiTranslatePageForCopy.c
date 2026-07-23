/*
 * XREFs of MiTranslatePageForCopy @ 0x1400E9CB0
 * Callers:
 *     MmCopyMemory @ 0x1400EA8F0 (MmCopyMemory.c)
 * Callees:
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiObtainProtoReference @ 0x14002DD34 (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiInitializePageFaultPacket @ 0x140096158 (MiInitializePageFaultPacket.c)
 *     MiCheckVirtualAddress @ 0x140098C30 (MiCheckVirtualAddress.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiSynchronizeSystemVa @ 0x1400E9FE8 (MiSynchronizeSystemVa.c)
 *     MiVaIsUltra @ 0x1400EA674 (MiVaIsUltra.c)
 *     MiUnlockSystemVa @ 0x1400ECE44 (MiUnlockSystemVa.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiTranslatePageForCopy(
        unsigned __int64 a1,
        char *a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v7; // r15
  unsigned __int64 v9; // rdi
  int SystemRegionType; // eax
  int v11; // ecx
  unsigned __int64 SessionVm; // rax
  int v13; // r8d
  __int128 v14; // xmm0
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // ebx
  unsigned __int64 v25; // xmm1_8
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rsi
  unsigned __int16 *v33; // rbx
  char v34; // al
  __int64 v35; // r9
  unsigned __int64 valid; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  char v40; // al
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rsi
  __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // rcx
  unsigned __int8 v51; // dl
  char v52; // al
  int PagingFileOffset; // eax
  unsigned __int8 v54[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v55; // [rsp+34h] [rbp-CCh] BYREF
  int v56; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+40h] [rbp-C0h] BYREF
  int v58; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v59; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v60; // [rsp+58h] [rbp-A8h]
  int v61; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v62; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v63; // [rsp+70h] [rbp-90h] BYREF
  char v64[24]; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+98h] [rbp-68h]
  __int128 v66; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v67; // [rsp+C8h] [rbp-38h]

  v60 = a3;
  v7 = a3;
  v59 = a4;
  memset(a2, 0, 0x80uLL);
  v9 = -1LL;
  *v7 = -1LL;
  *a4 = 0LL;
  *a5 = 0LL;
  MiInitializePageFaultPacket(0LL, a1, 0, 0LL, v64);
  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= MmPfnDatabase && a1 < MmPfnDatabase + 0x30000000000LL
    || a1 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(a1) )
  {
    return 3221225711LL;
  }
  if ( a1 < qword_14043CB80 || a1 > qword_14043B5F0 )
  {
    SystemRegionType = MiGetSystemRegionType(a1);
    if ( SystemRegionType == 8 )
    {
      v11 = 0;
    }
    else
    {
      if ( SystemRegionType == 1 )
      {
        SessionVm = MiGetSessionVm();
        if ( !SessionVm )
          return 3221225477LL;
        goto LABEL_14;
      }
      if ( (unsigned int)(SystemRegionType - 6) <= 1 )
      {
        v11 = 2;
      }
      else if ( SystemRegionType == 9 )
      {
        v11 = 3;
      }
      else if ( SystemRegionType == 3 || SystemRegionType == 12 )
      {
        v11 = 1;
      }
      else
      {
        v11 = 5;
      }
    }
    LODWORD(SessionVm) = (unsigned int)MiGetAnyMultiplexedVm(v11);
LABEL_14:
    *((_DWORD *)a2 + 1) |= 4u;
    if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, a1, v13, 0, (__int64)a2) )
      return 3221225632LL;
    v14 = *(_OWORD *)(a2 + 24);
    v15 = *((int *)a2 + 4);
    v67 = *((_QWORD *)a2 + 5);
    v66 = v14;
    if ( (_DWORD)v15 )
    {
      v57 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2[v15]);
      v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v57);
      v18 = 0xFFFFFFFFFLL;
      v9 = (v16 >> 12) & 0xFFFFFFFFFLL;
      v19 = 1LL;
      v20 = *(_QWORD *)v64 >> 12;
      do
      {
        v21 = v20;
        v20 >>= 9;
        v22 = v19 * (v21 & 0x1FF);
        v19 <<= 9;
        v9 += v22;
        --v17;
      }
      while ( v17 );
      if ( v9 <= 0xFFFFFFFFFLL && (v23 = 48 * v9, ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0) )
      {
        v24 = 0;
        v58 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 - 0x57FFFFFFFE8LL), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v58, v19, v18);
          while ( *(__int64 *)(v23 - 0x57FFFFFFFE8LL) < 0 );
        }
      }
      else
      {
        v24 = -1073741503;
      }
      goto LABEL_22;
    }
    v27 = BugCheckParameter2[0];
    goto LABEL_26;
  }
  v33 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  *(_QWORD *)&v66 = v33;
  v34 = MiLockWorkingSetShared((__int64)v33);
  v27 = BugCheckParameter2[0];
  BYTE12(v66) = v34;
  valid = MiLockLowestValidPageTable((__int64)v33, BugCheckParameter2[0], &v62, v35);
  v67 = valid;
  if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
  {
    v24 = MI_READ_PTE_LOCK_FREE(v62) != 0 ? -1073741608 : -1073741819;
    goto LABEL_30;
  }
LABEL_26:
  v54[0] = 17;
  v24 = 0;
  v28 = MI_READ_PTE_LOCK_FREE(v27);
  v57 = v28;
  if ( (v28 & 1) != 0 )
  {
LABEL_27:
    v29 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v57);
    v31 = 0xFFFFFFFFFLL;
    v9 = (v29 >> 12) & 0xFFFFFFFFFLL;
    v32 = 48 * v9;
    if ( ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
    {
      v56 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 - 0x57FFFFFFFE8LL), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v56, v30, v31);
        while ( *(__int64 *)(v32 - 0x57FFFFFFFE8LL) < 0 );
      }
    }
    else
    {
      v24 = -1073741503;
    }
    goto LABEL_30;
  }
  v37 = v28;
  while ( 1 )
  {
    if ( (v37 & 0x400) != 0 )
    {
      if ( (v37 & 2) != 0 )
      {
        v43 = v37;
        if ( qword_14043B180 && (v37 & 0x10) == 0 )
          v43 = v37 & ~qword_14043B180;
        v44 = v37 & 0xFFFFFFFFFFFFFBFFuLL;
        if ( (v43 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v44 = v37;
        *a5 = v44 & 0xFFFFFFFFFFFFFFFDuLL;
        goto LABEL_71;
      }
      if ( qword_14043B180 && (v37 & 0x10) == 0 )
        v37 &= ~qword_14043B180;
      v45 = v37 >> 16;
      if ( !MiIsPrototypePteVadLookup(v28) || (v45 = MiCheckVirtualAddress(a1, &v61, &v63)) != 0 )
      {
        v46 = MiLockProtoPoolPage(v45, v54);
        if ( !v46 )
          goto LABEL_83;
        v47 = MiLockLeafPage((__int64 *)v45, 0);
        v48 = MI_READ_PTE_LOCK_FREE(v45);
        v57 = v48;
        if ( (v48 & 1) != 0 )
        {
          v49 = v47 + 0x58000000000LL;
LABEL_85:
          v9 = v49 / 48;
          *v59 = v46;
          goto LABEL_30;
        }
        if ( v48 )
        {
          if ( (v48 & 0x400) != 0 )
          {
            v50 = v46;
          }
          else
          {
            if ( (v48 & 0x800) == 0 )
            {
              PagingFileOffset = MiGetPagingFileOffset(&v57);
              v51 = v54[0];
              v50 = v46;
              if ( !PagingFileOffset )
              {
                MiUnlockProtoPoolPage(v46, v54[0]);
                goto LABEL_71;
              }
LABEL_90:
              MiUnlockProtoPoolPage(v50, v51);
              goto LABEL_83;
            }
            v52 = *(_BYTE *)(v47 + 34);
            if ( (v52 & 0x20) == 0 )
            {
              v49 = v47 + 0x58000000000LL;
              goto LABEL_85;
            }
            v50 = v46;
            if ( (v52 & 8) == 0 )
            {
              MiObtainProtoReference(v46, 1);
              v42 = v46;
              v39 = v47;
              goto LABEL_82;
            }
          }
          v51 = v54[0];
          goto LABEL_90;
        }
        MiUnlockProtoPoolPage(v46, v54[0]);
      }
LABEL_81:
      v24 = -1073741819;
      goto LABEL_30;
    }
    if ( (v37 & 0x3E0) == 0x300 || (v37 & 0x3E0) == 0 )
      goto LABEL_81;
    if ( (v37 & 0x800) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset(&v57) )
        goto LABEL_83;
LABEL_71:
      v24 = 273;
      goto LABEL_30;
    }
    v38 = MiLockTransitionLeafPage(v27, v54);
    v39 = v38;
    if ( v38 )
      break;
    v28 = MI_READ_PTE_LOCK_FREE(v27);
    v57 = v28;
    v37 = v28;
    if ( (v28 & 1) != 0 )
      goto LABEL_27;
  }
  v40 = *(_BYTE *)(v38 + 34);
  if ( (v40 & 0x20) == 0 )
  {
    v41 = (unsigned __int128)((v39 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v9 = ((unsigned __int64)v41 >> 63) + (v41 >> 3);
    goto LABEL_30;
  }
  if ( (v40 & 8) == 0 )
  {
    v42 = 0LL;
LABEL_82:
    v55 = 1;
    MiWaitForCollidedFaultComplete(v64, v39, v42, v54[0], &v55);
  }
LABEL_83:
  v24 = -1073741608;
LABEL_30:
  v7 = v60;
LABEL_22:
  v25 = v67;
  *(_OWORD *)(a2 + 24) = v66;
  *((_QWORD *)a2 + 5) = v25;
  if ( v24 < 0 )
    MiUnlockSystemVa(a2);
  else
    *v7 = v9;
  return (unsigned int)v24;
}
