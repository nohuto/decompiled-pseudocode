/*
 * XREFs of sub_18006C688 @ 0x18006C688
 * Callers:
 *     sub_18006C654 @ 0x18006C654 (sub_18006C654.c)
 *     sub_18006C688 @ 0x18006C688 (sub_18006C688.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_18006C688 @ 0x18006C688 (sub_18006C688.c)
 *     sub_18006C7D4 @ 0x18006C7D4 (sub_18006C7D4.c)
 *     sub_18006C828 @ 0x18006C828 (sub_18006C828.c)
 */

void __fastcall sub_18006C688(__int64 a1, int *a2, _QWORD *a3)
{
  _QWORD *v3; // r15
  int v4; // eax
  _QWORD *v8; // r14
  __int64 v9; // rsi
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  unsigned int v12; // eax
  _QWORD *v13; // r8
  _QWORD *v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // rcx
  _QWORD *v17; // [rsp+40h] [rbp+8h] BYREF

  ++*a2;
  v3 = (_QWORD *)(a1 + 64);
  v4 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 64) = *a3;
  v8 = *(_QWORD **)(a1 + 40);
  *a3 = a1 + 64;
  if ( v8 )
  {
    while ( 1 )
    {
      v8 = (_QWORD *)*v8;
      v9 = v8[1];
      if ( *(int *)(v9 + 56) <= 5 )
        break;
LABEL_3:
      if ( v8 == *(_QWORD **)(a1 + 40) )
        goto LABEL_4;
    }
    v12 = *(_DWORD *)(v9 + 72);
    if ( v12 )
    {
      if ( !*(_QWORD *)(v9 + 64) )
      {
LABEL_15:
        if ( *(_DWORD *)(v9 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_3;
      }
    }
    else
    {
      sub_18006C688(v8[1], a2, a3);
      v12 = *(_DWORD *)(v9 + 32);
    }
    if ( *(_DWORD *)(a1 + 32) > v12 )
      *(_DWORD *)(a1 + 32) = v12;
    goto LABEL_15;
  }
LABEL_4:
  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(a1 + 72) )
  {
    v10 = (_QWORD *)*a3;
    if ( *a3 )
      *a3 = *v10;
    v11 = 0LL;
    if ( v3 != v10 )
    {
      do
      {
        v13 = (_QWORD *)*a3;
        *v10 = v11;
        v11 = v10;
        if ( v13 )
          *a3 = *v13;
        v14 = v10;
        v10 = v13;
      }
      while ( v3 != v13 );
      v17 = v11;
      if ( v14 )
      {
        RtlAcquireSRWLockExclusive(&stru_1801660B0);
        sub_18006C828(a1, &v17);
        RtlReleaseSRWLockExclusive(&stru_1801660B0);
        v15 = v17;
        while ( v15 )
        {
          v16 = v15;
          v15 = (_QWORD *)*v15;
          sub_18006C7D4(v16 - 8);
        }
      }
    }
    *v3 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
  }
}
