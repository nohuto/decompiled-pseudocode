/*
 * XREFs of CmpFindSubkeyInHashByChildCell @ 0x1407131F4
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x140650460 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpHashUnicodeComponent @ 0x140632D10 (CmpHashUnicodeComponent.c)
 *     CmpUnlockHashEntry @ 0x14064EB24 (CmpUnlockHashEntry.c)
 *     CmpUnlockTwoKcbs @ 0x140650340 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1406503DC (CmpLockTwoKcbsShared.c)
 *     CmpReferenceKeyControlBlock @ 0x14069B5DC (CmpReferenceKeyControlBlock.c)
 *     CmpLockHashEntryShared @ 0x140713384 (CmpLockHashEntryShared.c)
 *     CmpHashCompressedComponent @ 0x1407133F0 (CmpHashCompressedComponent.c)
 *     CmpIsKcbLockAllowed @ 0x140713440 (CmpIsKcbLockAllowed.c)
 */

__int64 __fastcall CmpFindSubkeyInHashByChildCell(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR *a5)
{
  int v5; // ebx
  ULONG_PTR *v6; // r13
  ULONG_PTR v9; // rdi
  __int64 v11; // rax
  unsigned __int16 v12; // dx
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // r15d
  __int64 i; // rbx
  ULONG_PTR v17; // rbx
  ULONG_PTR v18; // rcx
  ULONG_PTR v20; // rcx
  PVOID *v21; // [rsp+20h] [rbp-20h]
  __m128i v22; // [rsp+28h] [rbp-18h] BYREF
  int v23; // [rsp+80h] [rbp+40h] BYREF
  int v24; // [rsp+84h] [rbp+44h]
  __int64 v25; // [rsp+90h] [rbp+50h]

  v5 = *(_DWORD *)(a1 + 16);
  v6 = a5;
  v23 = -1;
  v24 = 0;
  v9 = a1;
  v22.m128i_i64[0] = 0LL;
  *a5 = 0LL;
  v22.m128i_i64[1] = 0LL;
  v25 = *(_QWORD *)(a3 + 1640);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v23);
  if ( !v11 )
    return 3221225626LL;
  v12 = *(_WORD *)(v11 + 72);
  v13 = 37 * v5;
  if ( (*(_BYTE *)(v11 + 2) & 0x20) != 0 )
  {
    v14 = CmpHashCompressedComponent(v11 + 76, v12);
  }
  else
  {
    v22.m128i_i64[1] = v11 + 76;
    v22.m128i_i16[0] = v12;
    v22.m128i_i16[1] = v12;
    v14 = CmpHashUnicodeComponent(&v22);
  }
  v15 = v13 + v14;
  (*(void (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v23);
  CmpUnlockTwoKcbs(v9, a2);
  v21 = (PVOID *)(v9 + 32);
  CmpLockHashEntryShared(*(_QWORD *)(v9 + 32), v15);
  CmpLockTwoKcbsShared(v9, a2);
  for ( i = *(_QWORD *)(v25
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a3 + 1648) - 1) & ((101027 * (v15 ^ (v15 >> 9))) ^ ((unsigned __int64)(101027 * (v15 ^ (v15 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( v15 == *(_DWORD *)i && a4 == *(_DWORD *)(i + 24) && a3 == *(_QWORD *)(i + 16) )
    {
      v17 = i - 16;
      if ( (unsigned __int8)CmpIsKcbLockAllowed(v9, v17, &a5) )
      {
        if ( !a2 || (unsigned __int8)CmpIsKcbLockAllowed(a2, v17, &a5) )
        {
          v9 = v17;
        }
        else
        {
          CmpUnlockKcb(v20);
          ExAcquirePushLockSharedEx(v17 + 48, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 56));
          v9 = a2;
        }
      }
      else
      {
        CmpUnlockKcb(v18);
        ExAcquirePushLockSharedEx(v17 + 48, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 56));
      }
      ExAcquirePushLockSharedEx(v9 + 48, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 56));
      CmpReferenceKeyControlBlock(v17);
      *v6 = v17;
      CmpUnlockKcb(v17);
      break;
    }
  }
  CmpUnlockHashEntry(*v21, v15);
  return 0LL;
}
