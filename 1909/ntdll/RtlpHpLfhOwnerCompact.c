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

void __fastcall RtlpHpLfhOwnerCompact(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // r15
  _QWORD *i; // r14
  char *v8; // rcx
  unsigned __int8 v9; // cl
  int v10; // r12d
  __int64 v11; // rbp
  char *v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int8 v14; // al
  __int64 v15; // rsi
  char *j; // rsi
  __int64 v17; // rsi
  char v18; // cl
  unsigned int v19; // edi
  unsigned int v20; // ebx
  _QWORD *v21; // [rsp+78h] [rbp+10h]
  unsigned int v22; // [rsp+80h] [rbp+18h]
  _RTL_SRWLOCK *SRWLock; // [rsp+88h] [rbp+20h]

  v22 = a3;
  v3 = 0LL;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v14 = *(_BYTE *)(a2 + 2);
    if ( v14 )
    {
      v15 = v14;
      do
      {
        RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(v3 + *(_QWORD *)(a2 + 96)), a3);
        a3 = v22;
        v3 += 8LL;
        --v15;
      }
      while ( v15 );
    }
  }
  v6 = (_QWORD *)(a2 + 24);
  v21 = v6;
  if ( (_QWORD *)*v6 != v6 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    SRWLock = (_RTL_SRWLOCK *)(a2 + 16);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 16));
    for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
    {
      v9 = *((_BYTE *)i + 45);
      v10 = 0;
      if ( v9 > 1u )
      {
        LODWORD(v11) = 1;
        do
        {
          v12 = (char *)i + *((unsigned __int16 *)i + 23);
          v13 = (unsigned __int64)&v12[2 * v9];
          v8 = &v12[2 * (unsigned int)v11];
          if ( *(_WORD *)v8 )
          {
            if ( (unsigned __int64)v8 >= v13 )
              break;
            do
            {
              if ( !*(_WORD *)v8 )
                break;
              v8 += 2;
            }
            while ( (unsigned __int64)v8 < v13 );
            if ( (unsigned __int64)v8 >= v13 )
              break;
            v11 = (v8 - v12) >> 1;
          }
          else
          {
            do
              v8 -= 2;
            while ( !*(_WORD *)v8 );
            v8 += 2;
          }
          for ( j = &v12[2 * (unsigned int)v11 + 2]; !*(_WORD *)j && (unsigned __int64)j < v13; j += 2 )
            ;
          v11 = (v8 - v12) >> 1;
          v17 = (j - v8) >> 1;
          if ( (_DWORD)v11 == -1 )
            break;
          if ( (_DWORD)v17 )
          {
            if ( v10 )
            {
              v18 = *((_BYTE *)i + 44);
              v19 = (_DWORD)v11 << v18;
              v20 = (_DWORD)v17 << v18;
              ((void (__fastcall *)(unsigned __int64, char *, _QWORD))((unsigned __int64)a1 ^ RtlpHpHeapGlobals ^ a1[4].Value))(
                a1->Value,
                (char *)i + (unsigned int)((_DWORD)v11 << v18),
                (unsigned int)((_DWORD)v17 << v18));
              RtlpHpLfhSubsegmentDecBlockCounts(a1, i, v19, v20);
              LODWORD(v11) = v17 + v11;
            }
            else
            {
              if ( (v22 & 1) == 0 )
                RtlAcquireSRWLockShared(a1 + 9);
              v10 = 2;
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)i + 3);
            }
          }
          v9 = *((_BYTE *)i + 45);
        }
        while ( (unsigned int)v11 < v9 );
        v6 = v21;
        if ( v10 )
        {
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)i + 3);
          if ( (v22 & 1) == 0 )
            RtlReleaseSRWLockShared(a1 + 9);
        }
      }
    }
    RtlReleaseSRWLockShared(SRWLock);
  }
}
