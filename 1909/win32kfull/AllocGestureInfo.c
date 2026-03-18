/*
 * XREFs of AllocGestureInfo @ 0x1C0213814
 * Callers:
 *     SendGestureMessage @ 0x1C0213BEC (SendGestureMessage.c)
 *     NtUserInjectGesture @ 0x1C0230070 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall AllocGestureInfo(__int64 a1, __int64 a2, __int64 a3, const void *a4)
{
  __int64 v5; // rdi
  int v6; // r13d
  __int64 v7; // r12
  unsigned int v8; // ebx
  unsigned int v9; // r14d
  int v10; // r15d
  int v11; // r9d
  __int64 v13; // rax
  __int64 v14; // rbx

  v5 = a3;
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a3 + 48);
  v9 = v8 + 96;
  v10 = -1;
  if ( v8 + 96 >= v8 )
    v10 = v8 + 96;
  if ( v9 < v8 )
    UserSetLastError(534LL, a2, a3, (__int64)a4);
  v11 = 0;
  if ( v9 >= v8 )
    v11 = v10;
  if ( !v11 )
    return 0LL;
  LOBYTE(a3) = 21;
  v13 = HMAllocObject(v7, 0LL, a3);
  v14 = v13;
  if ( !v13 )
    return 0LL;
  *(_DWORD *)(v13 + 24) = v6;
  *(_OWORD *)(v13 + 32) = *(_OWORD *)v5;
  *(_OWORD *)(v13 + 48) = *(_OWORD *)(v5 + 16);
  *(_OWORD *)(v13 + 64) = *(_OWORD *)(v5 + 32);
  *(_QWORD *)(v13 + 80) = *(_QWORD *)(v5 + 48);
  if ( a4 )
    memmove((void *)(v13 + 88), a4, *(unsigned int *)(v5 + 48));
  return *(_QWORD *)v14;
}
