/*
 * XREFs of sub_18010BD2C @ 0x18010BD2C
 * Callers:
 *     sub_18010BEF4 @ 0x18010BEF4 (sub_18010BEF4.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800685E0 @ 0x1800685E0 (sub_1800685E0.c)
 *     sub_180084C44 @ 0x180084C44 (sub_180084C44.c)
 */

__int64 __fastcall sub_18010BD2C(PRTL_SRWLOCK SRWLock, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v9; // r12d
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  int v12; // r13d
  unsigned int v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-24h]
  unsigned __int64 v16[4]; // [rsp+38h] [rbp-20h] BYREF

  v9 = 0;
  sub_1800685E0(a3, a2, &v14, v16);
  if ( v14 )
  {
    if ( v16[0] )
    {
      v10 = (0x101010101010101LL
           * ((((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v16[0] - ((v16[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      if ( *(__int16 *)(a2 + 34) >= 0 )
      {
        if ( ((__int64)SRWLock[22].Ptr & 2) != 0 )
          goto LABEL_8;
        v11 = (unsigned __int64)SRWLock[6].Ptr >> 7;
        if ( v11 <= 8 )
          v11 = 8LL;
        if ( (char *)SRWLock[7].Ptr + (unsigned int)v10 > (PVOID)v11 )
        {
LABEL_8:
          v9 = 1;
          v15 = v15 & 0xFF00FFFF | 0x10000;
          *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE2(v15) ^ BYTE6(qword_180163540);
          *(_DWORD *)(a3 + 8) = (unsigned __int8)(qword_180163540 ^ a3 ^ ((unsigned int)(a3 - a2) >> 12)) | 0x200;
          v12 = a4 & 1;
          if ( !v12 )
          {
            RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
            *(_QWORD *)(a5 + 8) = 0LL;
          }
          sub_180084C44((__int64)SRWLock, (_RTL_SRWLOCK *)a2, v16[0], v10, 0);
          if ( !v12 )
          {
            *(_QWORD *)a5 = 0LL;
            *(_QWORD *)(a5 + 16) = 0LL;
            *(_QWORD *)(a5 + 8) = SRWLock;
            RtlAcquireSRWLockExclusive(SRWLock);
          }
          *(_DWORD *)(a3 + 8) &= ~0x200u;
        }
      }
    }
  }
  return v9;
}
