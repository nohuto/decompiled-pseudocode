/*
 * XREFs of CmpFindSubkeyInHashByChildCell @ 0x1406F947C
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1405D40B0 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpHashUnicodeComponent @ 0x1405B02C4 (CmpHashUnicodeComponent.c)
 *     CmpUnlockHashEntry @ 0x1405D29F8 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x140693BFC (CmpReferenceKeyControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x1406BD8D8 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1406BD924 (CmpLockTwoKcbsShared.c)
 *     CmpLockHashEntryShared @ 0x1406F9610 (CmpLockHashEntryShared.c)
 *     CmpHashCompressedComponent @ 0x1406F967C (CmpHashCompressedComponent.c)
 *     CmpIsKcbLockAllowed @ 0x1406F96DC (CmpIsKcbLockAllowed.c)
 */

__int64 __fastcall CmpFindSubkeyInHashByChildCell(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR *a5)
{
  int v5; // ebx
  ULONG_PTR *v6; // r12
  ULONG_PTR v9; // rdi
  __int64 v10; // rax
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  int v14; // ebx
  int v15; // eax
  unsigned int v16; // r14d
  _QWORD **v17; // r13
  __int64 i; // rbx
  ULONG_PTR v19; // rbx
  ULONG_PTR v20; // rcx
  ULONG_PTR v22; // rcx
  __m128i v23; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+70h] [rbp+8h] BYREF
  int v25; // [rsp+74h] [rbp+Ch]
  __int64 v26; // [rsp+80h] [rbp+18h]

  v5 = *(_DWORD *)(a1 + 8);
  v6 = a5;
  v24 = -1;
  v25 = 0;
  v9 = a1;
  v10 = *(_QWORD *)(a3 + 1640);
  *a5 = 0LL;
  v26 = v10;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v24);
  if ( !v12 )
    return 3221225626LL;
  v13 = *(_WORD *)(v12 + 72);
  v14 = 37 * v5;
  if ( (*(_BYTE *)(v12 + 2) & 0x20) != 0 )
  {
    v15 = CmpHashCompressedComponent(v12 + 76, v13);
  }
  else
  {
    v23.m128i_i64[1] = v12 + 76;
    v23.m128i_i16[0] = v13;
    v23.m128i_i16[1] = v13;
    v15 = CmpHashUnicodeComponent(&v23);
  }
  v16 = v14 + v15;
  (*(void (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v24);
  CmpUnlockTwoKcbs(v9, a2);
  v17 = (_QWORD **)(v9 + 24);
  CmpLockHashEntryShared(*(_QWORD *)(v9 + 24), v16);
  CmpLockTwoKcbsShared(v9, a2);
  for ( i = *(_QWORD *)(v26
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a3 + 1648) - 1) & ((101027 * (v16 ^ (v16 >> 9))) ^ ((unsigned __int64)(101027 * (v16 ^ (v16 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( v16 == *(_DWORD *)i && a4 == *(_DWORD *)(i + 24) && a3 == *(_QWORD *)(i + 16) )
    {
      v19 = i - 8;
      if ( (unsigned __int8)CmpIsKcbLockAllowed(v9, v19, &a5) )
      {
        if ( !a2 || (unsigned __int8)CmpIsKcbLockAllowed(a2, v19, &a5) )
        {
          v9 = v19;
        }
        else
        {
          CmpUnlockKcb(v22);
          ExAcquirePushLockSharedEx(v19 + 40, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 48));
          v9 = a2;
        }
      }
      else
      {
        CmpUnlockKcb(v20);
        ExAcquirePushLockSharedEx(v19 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 48));
      }
      ExAcquirePushLockSharedEx(v9 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 48));
      if ( CmpReferenceKeyControlBlock(v19) )
        *v6 = v19;
      CmpUnlockKcb(v19);
      break;
    }
  }
  CmpUnlockHashEntry(*v17, v16);
  return 0LL;
}
