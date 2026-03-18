/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140320348
 * Callers:
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x140320A2C (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14014867C (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140320728 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // r15
  bool v6; // zf
  _QWORD *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // r13d
  signed __int64 *v10; // r12
  __int64 v11; // r9
  unsigned int v12; // r14d
  unsigned int v13; // r10d
  __int64 v14; // rdx
  _DWORD *v15; // r11
  _DWORD *v16; // r8
  int v17; // edx
  int v18; // r10d
  _DWORD *v19; // r8
  unsigned int i; // eax
  unsigned int v21; // r15d
  __int64 v22; // r12
  __int64 v23; // rbx
  unsigned int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // rbx
  int v28; // [rsp+20h] [rbp-A9h]
  __int64 j; // [rsp+30h] [rbp-99h] BYREF
  __int64 v30; // [rsp+38h] [rbp-91h]
  _QWORD *v31; // [rsp+40h] [rbp-89h]
  _QWORD *v32; // [rsp+48h] [rbp-81h]
  _BYTE v33[48]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v34[8]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v35[8]; // [rsp+A0h] [rbp-29h] BYREF

  v30 = a2;
  memset(v33, 0, sizeof(v33));
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6568), 0, (__int64)v33);
  if ( (*(_BYTE *)(a1 + 6021) & 8) != 0 )
  {
    v4 = 0;
    goto LABEL_56;
  }
  v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 6552), -1LL);
  v32 = v5;
  if ( v5 == (_QWORD *)-1LL )
  {
    v4 = -1073740682;
    goto LABEL_56;
  }
  v4 = 0;
  if ( !v5 || !*v5 || (v6 = a2 == 0, v7 = v5 + 1, !v6) )
    v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v31 = v7;
  --CurrentThread->SpecialApcDisable;
  v10 = (signed __int64 *)(a1 + 6024);
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  if ( v7 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 <= v12 )
      {
LABEL_40:
        v5 = v32;
        v10 = (signed __int64 *)(a1 + 6024);
        break;
      }
      v14 = v7[1];
      v11 = v12;
      v15 = (_DWORD *)(v14 + 4 * ((unsigned __int64)(v13 - 1) >> 5));
      v16 = (_DWORD *)(v14 + 4 * ((unsigned __int64)v12 >> 5));
      if ( v16 != v15 && (*v16 | dword_14037C900[v12 & 0x1F]) == -1 )
      {
        v11 = v12 - (v12 & 0x1F) + 32;
        for ( ++v16; v16 < v15 && *v16 == -1; ++v16 )
          v11 = (unsigned int)(v11 + 32);
      }
      for ( ; (unsigned int)v11 < v13; v11 = (unsigned int)(v11 + 1) )
      {
        if ( !_bittest((const signed __int32 *)v7[1], v11) )
          break;
      }
      v17 = 0;
      if ( v16 != v15 )
      {
        v18 = v11 & 0x1F;
        if ( (*v16 & ~dword_14037C900[v11 & 0x1F]) == 0 )
        {
          v17 = 32 - v18;
          if ( v18 == 33 )
            goto LABEL_32;
          v19 = v16 + 1;
          while ( v19 < v15 && !*v19 )
          {
            ++v19;
            v17 += 32;
            if ( v17 == -1 )
              goto LABEL_32;
          }
        }
      }
      for ( i = v17 + v11; i < *(_DWORD *)v7; ++v17 )
      {
        if ( _bittest((const signed __int32 *)v7[1], i) )
          break;
        if ( v17 == -1 )
          break;
        ++i;
      }
LABEL_32:
      v12 = v11;
      if ( !v17 )
        goto LABEL_40;
      if ( (unsigned int)v11 < v17 + (int)v11 )
      {
        v21 = v17 + v11;
        v22 = 8LL * (unsigned int)v11;
        do
        {
          if ( (*(_QWORD *)(v22 + *(_QWORD *)(a1 + 6216)) & 0x7FFFFFFFFFFF0000LL) != 0 )
          {
            v23 = v9;
            v34[v9++] = v12;
            v35[v23] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v12, 0, v11, 4u);
            if ( v9 == 8 )
            {
              SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, (unsigned int)v34, (unsigned int)v35, 8, v28, 0LL);
              v9 = 0;
            }
          }
          ++v12;
          v22 += 8LL;
        }
        while ( v12 < v21 );
        v7 = v31;
      }
    }
  }
  v24 = 0;
  v25 = v30;
  for ( j = v30; v24 < *(_DWORD *)(a1 + 6212); ++v24 )
  {
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v24) & 0x7FFFFFFFFFFF0000LL) != 0
      && (!v7 || _bittest64((const signed __int64 *)v7[1], v24)) )
    {
      v26 = v9;
      v34[v9++] = v24;
      v35[v26] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v24, 0, v11, 4u);
      v25 = v30;
      if ( v9 == 8 )
      {
        SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
          a1,
          (unsigned int)v34,
          (unsigned int)v35,
          8,
          v28,
          (unsigned __int64)&j & -(__int64)(v30 != 0));
        v25 = v30;
        v9 = 0;
        if ( v30 )
        {
          if ( !j )
            goto LABEL_53;
        }
      }
      v7 = v31;
    }
    else
    {
      v25 = v30;
    }
  }
  if ( v9 )
    SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
      a1,
      (unsigned int)v34,
      (unsigned int)v35,
      v9,
      v28,
      (unsigned __int64)&j & -(__int64)(v25 != 0));
LABEL_53:
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  _InterlockedExchange64((volatile __int64 *)(a1 + 6552), (__int64)v5);
LABEL_56:
  KiUnstackDetachProcess((struct _KTHREAD *)v33, 0);
  return v4;
}
