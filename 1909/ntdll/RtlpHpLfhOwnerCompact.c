/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x18004F448
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x18004F3B8 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18004F448 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhOwnerCompact @ 0x18004F448 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18004F670 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerCompact(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *v7; // r15
  unsigned __int64 v8; // r9
  _QWORD *i; // r14
  _WORD *v10; // rcx
  unsigned __int8 v11; // cl
  int v12; // r12d
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  _QWORD *result; // rax
  unsigned __int8 v17; // al
  __int64 v18; // rsi
  _WORD *j; // rsi
  __int64 v20; // rsi
  char v21; // cl
  unsigned int v22; // edi
  unsigned int v23; // ebx
  _QWORD *v24; // [rsp+78h] [rbp+10h]
  unsigned int v25; // [rsp+80h] [rbp+18h]
  volatile signed __int64 *v26; // [rsp+88h] [rbp+20h]

  v25 = a3;
  v4 = 0LL;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v17 = *(_BYTE *)(a2 + 2);
    if ( v17 )
    {
      v18 = v17;
      do
      {
        RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v4 + *(_QWORD *)(a2 + 96)), a3);
        a3 = v25;
        v4 += 8LL;
        --v18;
      }
      while ( v18 );
    }
  }
  v7 = (_QWORD *)(a2 + 24);
  v24 = v7;
  if ( (_QWORD *)*v7 != v7 || (result = (_QWORD *)(a2 + 40), (_QWORD *)*result != result) )
  {
    v26 = (volatile signed __int64 *)(a2 + 16);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a2 + 16), a2, a3, a4);
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
    {
      v11 = *((_BYTE *)i + 45);
      v12 = 0;
      if ( v11 > 1u )
      {
        LODWORD(v13) = 1;
        do
        {
          v14 = (unsigned __int64)i + *((unsigned __int16 *)i + 23);
          v15 = v14 + 2LL * v11;
          v10 = (_WORD *)(v14 + 2LL * (unsigned int)v13);
          if ( *v10 )
          {
            if ( (unsigned __int64)v10 >= v15 )
              break;
            do
            {
              if ( !*v10 )
                break;
              ++v10;
            }
            while ( (unsigned __int64)v10 < v15 );
            if ( (unsigned __int64)v10 >= v15 )
              break;
            v13 = (__int64)((__int64)v10 - v14) >> 1;
          }
          else
          {
            do
              --v10;
            while ( !*v10 );
            ++v10;
          }
          for ( j = (_WORD *)(v14 + 2 * ((unsigned int)v13 + 1LL)); !*j && (unsigned __int64)j < v15; ++j )
            ;
          v13 = (__int64)((__int64)v10 - v14) >> 1;
          v20 = j - v10;
          if ( (_DWORD)v13 == -1 )
            break;
          if ( (_DWORD)v20 )
          {
            if ( v12 )
            {
              v21 = *((_BYTE *)i + 44);
              v22 = (_DWORD)v13 << v21;
              v23 = (_DWORD)v20 << v21;
              ((void (__fastcall *)(_QWORD, char *, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
                *(_QWORD *)a1,
                (char *)i + (unsigned int)((_DWORD)v13 << v21),
                (unsigned int)((_DWORD)v20 << v21));
              RtlpHpLfhSubsegmentDecBlockCounts(a1, i, v22, v23);
              LODWORD(v13) = v20 + v13;
            }
            else
            {
              if ( (v25 & 1) == 0 )
                RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 72), v14, v15, v8);
              v12 = 2;
              RtlAcquireSRWLockExclusive(i + 3);
            }
          }
          v11 = *((_BYTE *)i + 45);
        }
        while ( (unsigned int)v13 < v11 );
        v7 = v24;
        if ( v12 )
        {
          RtlReleaseSRWLockExclusive(i + 3);
          if ( (v25 & 1) == 0 )
            RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
        }
      }
    }
    return (_QWORD *)RtlReleaseSRWLockShared(v26);
  }
  return result;
}
