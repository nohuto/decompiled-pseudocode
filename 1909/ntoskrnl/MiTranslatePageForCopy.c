/*
 * XREFs of MiTranslatePageForCopy @ 0x1400C7C68
 * Callers:
 *     MmCopyMemory @ 0x1400C7740 (MmCopyMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiCheckVirtualAddress @ 0x14005DC90 (MiCheckVirtualAddress.c)
 *     MiSynchronizeSystemVa @ 0x140075BC0 (MiSynchronizeSystemVa.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MiGetPagingFileOffset @ 0x140076424 (MiGetPagingFileOffset.c)
 *     MiObtainProtoReference @ 0x140093DC0 (MiObtainProtoReference.c)
 *     MiInitializePageFaultPacket @ 0x14009561C (MiInitializePageFaultPacket.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockLeafPage @ 0x1400BC6F0 (MiLockLeafPage.c)
 *     MiLockTransitionLeafPage @ 0x1400BD5EC (MiLockTransitionLeafPage.c)
 *     MiUnlockSystemVa @ 0x1400C46E8 (MiUnlockSystemVa.c)
 *     MiVaIsUltra @ 0x1400C8420 (MiVaIsUltra.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiIsPrototypePteVadLookup @ 0x1400CBD20 (MiIsPrototypePteVadLookup.c)
 *     MiWaitForCollidedFaultComplete @ 0x140109964 (MiWaitForCollidedFaultComplete.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiTranslatePageForCopy(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v6; // r15
  unsigned __int64 v9; // rdi
  int SystemRegionType; // eax
  __int64 v11; // rcx
  unsigned __int64 SessionVm; // rax
  int v13; // r8d
  __int128 v14; // xmm0
  __int64 v15; // r9
  unsigned __int64 v16; // r15
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // xmm1_8
  int v23; // r9d
  unsigned __int64 v24; // rcx
  __int16 v25; // ax
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int16 *v28; // rbx
  char v29; // al
  unsigned __int64 valid; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  int v33; // r9d
  char v34; // al
  int v35; // r8d
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rsi
  __int64 v39; // r14
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // r15
  ULONG_PTR v43; // rcx
  unsigned __int8 v44; // dl
  char v45; // al
  int PagingFileOffset; // eax
  unsigned __int8 v47[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v48; // [rsp+34h] [rbp-CCh] BYREF
  int v49; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v52; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v53; // [rsp+58h] [rbp-A8h]
  int v54; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v55; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v57[18]; // [rsp+80h] [rbp-80h] BYREF

  v6 = a3;
  v53 = a3;
  v52 = a4;
  memset(v57, 0, 0x88uLL);
  memset((void *)a2, 0, 0x80uLL);
  v9 = -1LL;
  *v6 = -1LL;
  *a4 = 0LL;
  *a5 = 0LL;
  MiInitializePageFaultPacket(0LL, a1, 0, 0LL, (__int64)v57);
  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || a1 >= 0xFFFFFA8000000000uLL && a1 < 0xFFFFFD8000000000uLL
    || a1 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(a1) )
  {
    return 3221225711LL;
  }
  if ( a1 > qword_140465BE0 || a1 < qword_1404672B0 )
  {
    SystemRegionType = MiGetSystemRegionType(a1);
    switch ( SystemRegionType )
    {
      case 8:
        v11 = 0LL;
        break;
      case 1:
        SessionVm = MiGetSessionVm();
        if ( !SessionVm )
          return 3221225477LL;
        goto LABEL_12;
      case 6:
        v11 = 2LL;
        break;
      case 9:
        v11 = 3LL;
        break;
      default:
        v11 = 1LL;
        if ( SystemRegionType != 12 && SystemRegionType != 3 )
          v11 = 5LL;
        break;
    }
    SessionVm = MiGetAnyMultiplexedVm(v11);
LABEL_12:
    *(_DWORD *)(a2 + 4) |= 4u;
    if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, a1, v13, 0, a2) )
      return 3221225632LL;
    v14 = *(_OWORD *)(a2 + 24);
    v15 = *(int *)(a2 + 16);
    v57[9] = *(_QWORD *)(a2 + 40);
    *(_OWORD *)&v57[7] = v14;
    if ( (_DWORD)v15 )
    {
      v50 = MI_READ_PTE_LOCK_FREE(v57[v15 + 3]);
      v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v50) >> 12) & 0xFFFFFFFFFLL;
      v19 = 1LL;
      v24 = v57[0] >> 12;
      do
      {
        v25 = v24;
        v24 >>= 9;
        v26 = v19 * (v25 & 0x1FF);
        v19 <<= 9;
        v9 += v26;
        --v23;
      }
      while ( v23 );
      if ( v9 <= 0xFFFFFFFFFLL && (v27 = 48 * v9, ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0) )
      {
        v17 = 0;
        v51 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 - 0x57FFFFFFFE8LL), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v51);
          while ( *(__int64 *)(v27 - 0x57FFFFFFFE8LL) < 0 );
        }
      }
      else
      {
        v17 = -1073741503;
      }
      goto LABEL_20;
    }
    v16 = v57[3];
    goto LABEL_15;
  }
  v28 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v57[7] = v28;
  v29 = MiLockWorkingSetShared((__int64)v28);
  v16 = v57[3];
  BYTE4(v57[8]) = v29;
  valid = MiLockLowestValidPageTable((__int64)v28, v57[3], &v55);
  v57[9] = valid;
  if ( valid != ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
  {
    v17 = MI_READ_PTE_LOCK_FREE(v55) != 0 ? -1073741608 : -1073741819;
    goto LABEL_19;
  }
LABEL_15:
  v47[0] = 17;
  v17 = 0;
  v18 = MI_READ_PTE_LOCK_FREE(v16);
  v50 = v18;
  if ( (v18 & 1) != 0 )
  {
LABEL_16:
    v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v50) >> 12) & 0xFFFFFFFFFLL;
    v20 = 48 * v9;
    if ( ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
    {
      v49 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 - 0x57FFFFFFFE8LL), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v49);
        while ( *(__int64 *)(v20 - 0x57FFFFFFFE8LL) < 0 );
      }
    }
    else
    {
      v17 = -1073741503;
    }
    goto LABEL_19;
  }
  v31 = v18;
  while ( 1 )
  {
    if ( (v31 & 0x400) != 0 )
    {
      if ( (v31 & 2) != 0 )
      {
        v36 = v31;
        if ( qword_140465800 && (v31 & 0x10) == 0 )
          v36 = v31 & ~qword_140465800;
        v37 = v31 & 0xFFFFFFFFFFFFFBFFuLL;
        if ( (v36 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v37 = v31;
        *a5 = v37 & 0xFFFFFFFFFFFFFFFDuLL;
        goto LABEL_70;
      }
      if ( qword_140465800 && (v31 & 0x10) == 0 )
        v31 &= ~qword_140465800;
      v38 = v31 >> 16;
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v18) || (v38 = MiCheckVirtualAddress(a1, &v54, &v56)) != 0 )
      {
        v39 = MiLockProtoPoolPage(v38, v47);
        if ( !v39 )
          goto LABEL_82;
        v40 = MiLockLeafPage((unsigned __int64 *)v38, 0);
        v41 = MI_READ_PTE_LOCK_FREE(v38);
        v50 = v41;
        if ( (v41 & 1) != 0 )
        {
          v42 = v40 + 0x58000000000LL;
LABEL_84:
          v19 = (unsigned __int128)(v42 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v9 = v42 / 48;
          *v52 = v39;
          goto LABEL_19;
        }
        if ( v41 )
        {
          if ( (v41 & 0x400) != 0 )
          {
            v43 = v39;
          }
          else
          {
            if ( (v41 & 0x800) == 0 )
            {
              PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)&v50);
              v44 = v47[0];
              v43 = v39;
              if ( !PagingFileOffset )
              {
                MiUnlockProtoPoolPage(v39, v47[0]);
                goto LABEL_70;
              }
LABEL_89:
              MiUnlockProtoPoolPage(v43, v44);
              goto LABEL_82;
            }
            v45 = *(_BYTE *)(v40 + 34);
            if ( (v45 & 0x20) == 0 )
            {
              v42 = v40 + 0x58000000000LL;
              goto LABEL_84;
            }
            v43 = v39;
            if ( (v45 & 8) == 0 )
            {
              MiObtainProtoReference(v39, 1);
              v35 = v39;
              LODWORD(v19) = v40;
              goto LABEL_81;
            }
          }
          v44 = v47[0];
          goto LABEL_89;
        }
        MiUnlockProtoPoolPage(v39, v47[0]);
      }
LABEL_80:
      v17 = -1073741819;
      goto LABEL_19;
    }
    if ( (v31 & 0x3E0) == 0x300 || (v31 & 0x3E0) == 0 )
      goto LABEL_80;
    if ( (v31 & 0x800) == 0 )
    {
      if ( (unsigned int)MiGetPagingFileOffset((unsigned __int64)&v50) )
        goto LABEL_82;
LABEL_70:
      v17 = 273;
      goto LABEL_19;
    }
    v32 = MiLockTransitionLeafPage(v16, v47);
    v19 = v32;
    if ( v32 )
      break;
    v18 = MI_READ_PTE_LOCK_FREE(v16);
    v50 = v18;
    v31 = v18;
    if ( (v18 & 1) != 0 )
      goto LABEL_16;
  }
  v34 = *(_BYTE *)(v32 + 34);
  if ( (v34 & 0x20) == 0 )
  {
    v19 = (unsigned __int128)((v19 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v9 = ((unsigned __int64)v19 >> 63) + (v19 >> 3);
    goto LABEL_19;
  }
  if ( (v34 & 8) == 0 )
  {
    v35 = 0;
LABEL_81:
    LOBYTE(v33) = v47[0];
    v48 = 1;
    MiWaitForCollidedFaultComplete((unsigned int)v57, v19, v35, v33, (__int64)&v48);
  }
LABEL_82:
  v17 = -1073741608;
LABEL_19:
  v6 = v53;
LABEL_20:
  v21 = v57[9];
  *(_OWORD *)(a2 + 24) = *(_OWORD *)&v57[7];
  *(_QWORD *)(a2 + 40) = v21;
  if ( v17 < 0 )
    MiUnlockSystemVa(a2, v19);
  else
    *v6 = v9;
  return (unsigned int)v17;
}
