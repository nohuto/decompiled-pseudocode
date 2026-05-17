/*
 * XREFs of sub_180050744 @ 0x180050744
 * Callers:
 *     sub_180040830 @ 0x180040830 (sub_180040830.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180048170 @ 0x180048170 (sub_180048170.c)
 *     sub_18004F690 @ 0x18004F690 (sub_18004F690.c)
 *     sub_180101554 @ 0x180101554 (sub_180101554.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

unsigned __int64 __fastcall sub_180050744(__int64 a1, unsigned __int64 a2, char a3)
{
  int v4; // esi
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+28h] BYREF

  v19 = a2;
  v4 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    a2 = v19;
  }
  v5 = (unsigned __int64 *)(a1 + 72);
  v6 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v6 )
    v6 ^= (unsigned __int64)v5;
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v7 )
    {
      if ( a2 <= v7 )
        break;
      v8 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v6;
    }
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v8 )
      v6 ^= v8;
    else
      v6 = v8;
  }
  if ( v6 )
  {
    RtlRbRemoveNode(v5, v6);
    if ( !v4 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    v9 = *(_QWORD *)(v6 + 32);
    v10 = (unsigned __int8)v9 >> 2;
    v16 = *(_OWORD *)a1;
    v11 = (((v9 >> 12) + ((v9 >> 1) & 1)) << 12) - 1;
    v18 = (1LL << v10) - (((1LL << v10) - 1) & ((1LL << v10) + v11)) + v11;
    sub_180048170(&v19, &v18, 0x8000, &v16);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -(*(_QWORD *)(v6 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)(v18 >> 12));
    v17 = *(_OWORD *)a1;
    sub_18004F690(v6, &v17);
    v12 = v18;
    v13 = v18;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v12 = v18;
      v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
    }
    else
    {
      v14 = 2147353480LL;
    }
    if ( *(_BYTE *)v14 )
      sub_180101554(a1, v19, v12);
  }
  else
  {
    if ( !v4 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
      LODWORD(a2) = v19;
    }
    sub_18010A694(8, a1, a2, 0, 0LL, 0LL);
    return 0LL;
  }
  return v13;
}
