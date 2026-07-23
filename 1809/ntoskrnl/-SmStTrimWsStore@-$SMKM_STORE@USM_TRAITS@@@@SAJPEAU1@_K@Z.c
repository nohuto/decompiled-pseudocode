/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140303124
 * Callers:
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x14030381C (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     RtlFindNextForwardRunClearCapped @ 0x14002B750 (RtlFindNextForwardRunClearCapped.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140146008 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14030343C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi
  _QWORD *v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // r12d
  signed __int64 *v8; // r13
  _QWORD *v9; // rdx
  unsigned int v10; // r14d
  __int64 v11; // r15
  int NextForwardRunClearCapped; // eax
  __int64 v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // r15d
  __int64 v16; // r13
  __int64 v17; // rbx
  unsigned int v18; // r14d
  unsigned int v19; // eax
  __int64 v20; // rbx
  int v22; // [rsp+20h] [rbp-B9h]
  unsigned int v23; // [rsp+30h] [rbp-A9h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-A1h]
  __int64 v25; // [rsp+40h] [rbp-99h] BYREF
  __int64 v26; // [rsp+48h] [rbp-91h]
  _QWORD *v27; // [rsp+50h] [rbp-89h]
  _BYTE v28[48]; // [rsp+58h] [rbp-81h] BYREF
  _DWORD v29[10]; // [rsp+88h] [rbp-51h] BYREF
  _QWORD v30[8]; // [rsp+B0h] [rbp-29h] BYREF

  v2 = a2;
  v26 = a2;
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6568), 0LL, (__int64)v28);
  if ( (*(_BYTE *)(a1 + 6021) & 8) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 6552), -1LL);
    v27 = v5;
    if ( v5 == (_QWORD *)-1LL )
    {
      v4 = -1073740682;
    }
    else
    {
      v4 = 0;
      if ( v5 && *v5 && !v2 )
        v24 = v5 + 1;
      else
        v24 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v7 = 0;
      --CurrentThread->SpecialApcDisable;
      v8 = (signed __int64 *)(a1 + 6024);
      ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
      v9 = v24;
      if ( v24 )
      {
        v10 = 0;
        v23 = 0;
        v11 = (__int64)v24;
        while ( 1 )
        {
          NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v11, v10, 0xFFFFFFFF, &v23);
          if ( !NextForwardRunClearCapped )
            break;
          v10 = v23;
          v14 = v23 + NextForwardRunClearCapped;
          if ( v23 < v14 )
          {
            v15 = v14;
            v16 = 8LL * v23;
            do
            {
              if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + v16) & 0x7FFFFFFFFFFF0000LL) != 0 )
              {
                v17 = v7;
                v29[v7++] = v10;
                v30[v17] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v10, 0, v13, 4u);
                if ( v7 == 8 )
                {
                  SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, (unsigned int)v29, (unsigned int)v30, 8, v22, 0LL);
                  v7 = 0;
                }
              }
              ++v10;
              v16 += 8LL;
            }
            while ( v10 < v15 );
            v11 = (__int64)v24;
            v23 = v10;
          }
        }
        v5 = v27;
        v8 = (signed __int64 *)(a1 + 6024);
        v2 = v26;
        v9 = v24;
      }
      v18 = 0;
      v25 = v2;
      v23 = 0;
      if ( *(_DWORD *)(a1 + 6212) )
      {
        v19 = 0;
        while ( 1 )
        {
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v19) & 0x7FFFFFFFFFFF0000LL) != 0
            && (!v9 || _bittest64((const signed __int64 *)v9[1], v19)) )
          {
            v20 = v7;
            v29[v7++] = v18;
            v30[v20] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v18, 0, 0x7FFFFFFFFFFF0000LL, 4u);
            v2 = v26;
            if ( v7 == 8 )
            {
              SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
                a1,
                (unsigned int)v29,
                (unsigned int)v30,
                8,
                v22,
                (unsigned __int64)&v25 & -(__int64)(v26 != 0));
              v7 = 0;
              if ( v2 )
              {
                if ( !v25 )
                  break;
              }
            }
          }
          v9 = v24;
          v19 = ++v18;
          v23 = v18;
          if ( v18 >= *(_DWORD *)(a1 + 6212) )
            goto LABEL_30;
        }
      }
      else
      {
LABEL_30:
        if ( v7 )
          SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
            a1,
            (unsigned int)v29,
            (unsigned int)v30,
            v7,
            v22,
            (unsigned __int64)&v25 & -(__int64)(v2 != 0));
      }
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      _InterlockedExchange64((volatile __int64 *)(a1 + 6552), (__int64)v5);
    }
  }
  KiUnstackDetachProcess((__int64)v28, 0LL);
  return v4;
}
