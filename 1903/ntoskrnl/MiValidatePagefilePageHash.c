/*
 * XREFs of MiValidatePagefilePageHash @ 0x14016524C
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006BE0 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiComputePageHash @ 0x14016569C (MiComputePageHash.c)
 *     MiObtainPagefileHashes @ 0x14016574C (MiObtainPagefileHashes.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiComparePageHash @ 0x1402E6844 (MiComparePageHash.c)
 */

__int64 __fastcall MiValidatePagefilePageHash(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r13
  __int64 *v3; // r14
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  char *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  char *v9; // rsi
  __int64 v10; // rbx
  unsigned __int8 v11; // r12
  unsigned int v12; // edx
  ULONG_PTR v13; // rbp
  unsigned int PagingFileOffset; // eax
  __int64 v15; // r10
  ULONG_PTR v16; // rsi
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 v19; // rax
  int v20; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  char *v22; // [rsp+30h] [rbp-A8h]
  __int64 v23; // [rsp+38h] [rbp-A0h]
  __int64 v24; // [rsp+40h] [rbp-98h]
  unsigned __int64 v25; // [rsp+48h] [rbp-90h]
  unsigned int v26; // [rsp+50h] [rbp-88h]
  unsigned int v27[16]; // [rsp+60h] [rbp-78h] BYREF

  v1 = a1 + 272;
  if ( *(_QWORD *)(a1 + 256) )
    v1 = *(_QWORD *)(a1 + 256);
  v2 = 0LL;
  v26 = 0;
  v24 = 0LL;
  v3 = (__int64 *)(v1 + 48);
  v4 = 8
     * (((unsigned __int64)((*(_DWORD *)(v1 + 32) + *(_DWORD *)(v1 + 44)) & 0xFFF) + *(_QWORD *)(a1 + 88) + 4095LL) >> 12);
  v5 = v4 + v1 + 48;
  v23 = v4;
  v25 = v5;
  if ( (*(_BYTE *)(v1 + 10) & 5) != 0 )
    v6 = *(char **)(v1 + 24);
  else
    v6 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v1, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( (unsigned __int64)v3 < v5 )
  {
    v7 = v5;
    while ( 1 )
    {
      v8 = *v3;
      v9 = v6;
      v22 = v6;
      v10 = 48 * *v3 - 0x58000000000LL;
      if ( v10 != qword_140466850 )
        break;
LABEL_24:
      v4 -= 8LL;
      v6 = v9 + 4096;
      v2 = (unsigned int)(v2 + 1);
      v23 = v4;
      ++v3;
      if ( !v9 )
        v6 = 0LL;
      if ( (unsigned __int64)v3 >= v7 )
        return 0LL;
    }
    v11 = MiLockPageInline(48 * v8 - 0x58000000000LL);
    if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
    {
LABEL_20:
      if ( v11 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v11);
      }
      v7 = v25;
      goto LABEL_24;
    }
    v12 = (*(_DWORD *)(v10 + 16) >> 5) & 0x1F;
    if ( (dword_140571190 & 1) == 0
      && v12 != 31
      && (v12 >> 3 == 3 && ((*(_DWORD *)(v10 + 16) >> 5) & 7) != 0 || v12 >> 3 == 1) )
    {
      v9 = v6;
      goto LABEL_20;
    }
    v13 = (unsigned int)MiComputePageHash(48 * v8 - 0x58000000000LL, v6);
    if ( !v24 )
      v24 = *(_QWORD *)(*(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL))
                      + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v10 + 16)) >> 4)
                      + 7904);
    PagingFileOffset = MiGetPagingFileOffset(v10 + 16);
    v16 = PagingFileOffset;
    if ( !PagingFileOffset )
    {
      v9 = v6;
      v24 = 0LL;
      goto LABEL_19;
    }
    if ( (unsigned int)v2 >= v26 )
    {
      v19 = v23 >> 3;
      if ( (unsigned int)(v23 >> 3) > 0x10 )
        LODWORD(v19) = 16;
      v26 = v19;
      MiObtainPagefileHashes(v15, (unsigned int)v16, (unsigned int)v19, v27);
      v2 = 0LL;
    }
    BugCheckParameter4 = v27[v2];
    if ( (_DWORD)v13 != (_DWORD)BugCheckParameter4
      && (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0
      && (_DWORD)BugCheckParameter4 != 2 )
    {
      if ( !(_DWORD)BugCheckParameter4 )
      {
        v20 = MiComparePageHash(v24, (unsigned int)v16, (unsigned int)v13);
        goto LABEL_41;
      }
      if ( byte_1404663C0 != 1 )
      {
        v20 = -1073741761;
LABEL_41:
        if ( v20 < 0 )
        {
          ++dword_140466308;
          qword_1404662B0 = v8;
          KeBugCheckEx(0x1Au, 0x3FuLL, v16, v13, BugCheckParameter4);
        }
      }
    }
    v9 = v22;
LABEL_19:
    v4 = v23;
    goto LABEL_20;
  }
  return 0LL;
}
