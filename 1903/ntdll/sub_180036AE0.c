/*
 * XREFs of sub_180036AE0 @ 0x180036AE0
 * Callers:
 *     sub_180036D88 @ 0x180036D88 (sub_180036D88.c)
 *     sub_180040830 @ 0x180040830 (sub_180040830.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180044D74 @ 0x180044D74 (sub_180044D74.c)
 *     sub_180045D7C @ 0x180045D7C (sub_180045D7C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_1800367E0 @ 0x1800367E0 (sub_1800367E0.c)
 *     RtlRbInsertNodeEx @ 0x1800380E0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_18004FDA8 @ 0x18004FDA8 (sub_18004FDA8.c)
 *     sub_1801072F0 @ 0x1801072F0 (sub_1801072F0.c)
 *     sub_18010B808 @ 0x18010B808 (sub_18010B808.c)
 */

signed __int64 __fastcall sub_180036AE0(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // edi
  __int64 v7; // rbx
  unsigned int v10; // edx
  unsigned int v11; // eax
  __int16 v12; // dx
  int v13; // esi
  __int64 v14; // rax
  char v15; // dl
  __int64 v16; // rbx
  char v17; // al
  __int64 v18; // rdx
  signed __int64 *v19; // rdi
  unsigned __int8 v20; // cl
  __int64 v21; // rcx
  signed __int64 result; // rax
  char *v23; // rax
  __int64 v24; // rdx
  char v25; // cl
  signed __int64 *v26; // rcx
  char v27; // [rsp+70h] [rbp+18h] BYREF

  v5 = *(unsigned __int8 *)(a2 + 31) - a3;
  v7 = a2 + 32LL * a3;
  if ( v5 - 1 > 1 )
  {
    v23 = (char *)(v7 + 56);
    v24 = v5 - 2;
    do
    {
      v25 = *v23;
      v23 += 32;
      *(v23 - 32) = v25 & 0xFE;
      --v24;
    }
    while ( v24 );
  }
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 64);
  v10 = *(_DWORD *)(a2 + 28);
  v11 = HIBYTE(v10);
  v12 = ~(_WORD)v10;
  v27 = -1;
  if ( v11 == v5 )
  {
    LOWORD(v13) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 31) = a3;
    v13 = a3 << *(_BYTE *)(a1 + 9);
    *(_WORD *)(a2 + 28) = ~(_WORD)v13;
  }
  *(_BYTE *)(v7 + 24) |= 2u;
  *(_BYTE *)(32LL * (v5 - 1) + v7 + 31) = v5 - 1;
  *(_WORD *)(v7 + 28) = ~(v12 - v13);
  *(_BYTE *)(v7 + 31) = v5;
  *(_DWORD *)v7 = -857879331;
  *(_BYTE *)(v7 + 24) &= 0xF3u;
  v14 = sub_1800367E0(a1, v7, a4, 0, &v27);
  v15 = *(_BYTE *)(a1 + 13);
  v16 = v14;
  if ( (v15 & 0x10) != 0 )
  {
    result = *(unsigned __int8 *)(v14 + 31);
    if ( (_DWORD)result == 256 - *(unsigned __int8 *)(a1 + 10) )
    {
      v19 = (signed __int64 *)(v16 & *(_QWORD *)a1);
      *(_DWORD *)v16 = -857879297;
      if ( v19 )
      {
        result = *v19;
        if ( *(signed __int64 **)(*v19 + 8) != v19 || (v26 = (signed __int64 *)v19[1], (signed __int64 *)*v26 != v19) )
          __fastfail(3u);
        *v26 = result;
        *(_QWORD *)(result + 8) = v26;
        --*(_QWORD *)(a1 + 88);
      }
      goto LABEL_29;
    }
  }
  if ( (v15 & 7) != 0 )
    v17 = sub_18010B808(
            a1,
            (v16 & *(_QWORD *)a1) + ((v16 - (v16 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)),
            *(unsigned __int8 *)(v16 + 31) << *(_BYTE *)(a1 + 8));
  else
    v17 = 4;
  *(_BYTE *)(v16 + 30) = v17;
  v18 = *(_QWORD *)(a1 + 96);
  if ( (*(_QWORD *)(a1 + 104) & 1) == 0 )
    goto LABEL_13;
  if ( v18 )
  {
    v18 ^= a1 + 96;
LABEL_13:
    v19 = 0LL;
    goto LABEL_14;
  }
  v19 = 0LL;
  v18 = 0LL;
LABEL_14:
  v20 = 0;
  if ( v18 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v16 + 28) < *(_DWORD *)(v18 + 28) )
      {
        v21 = *(_QWORD *)v18;
        if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_25;
          v21 ^= v18;
        }
        if ( !v21 )
        {
LABEL_25:
          v20 = 0;
          break;
        }
      }
      else
      {
        v21 = *(_QWORD *)(v18 + 8);
        if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_26;
          v21 ^= v18;
        }
        if ( !v21 )
        {
LABEL_26:
          v20 = 1;
          break;
        }
      }
      v18 = v21;
    }
  }
  RtlRbInsertNodeEx(a1 + 96, v18, v20, v16);
  result = *(__int16 *)(a1 + 22);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(result + a1 + 16), (unsigned __int16)~*(_WORD *)(v16 + 28));
  if ( (byte_180166058 & 8) != 0 )
    result = sub_1801072F0(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
LABEL_29:
  if ( (a4 & 1) == 0 )
    result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  if ( v19 )
    return sub_18004FDA8(a1, v19, 0x7FFFFFFFLL, 1LL);
  return result;
}
