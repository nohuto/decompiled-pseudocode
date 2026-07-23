/*
 * XREFs of MiFillHyperPtes @ 0x14011AEF4
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiMakeHyperPteDemandZero @ 0x14011B00C (MiMakeHyperPteDemandZero.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiFillHyperPtes(unsigned __int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  unsigned __int64 *v6; // r9
  __int64 v7; // r10
  __int64 result; // rax
  unsigned int v9; // esi
  ULONG_PTR *v10; // r14
  ULONG_PTR v11; // rbx
  ULONG_PTR v12; // rdi
  __int64 v13; // rdx
  char v14; // [rsp+38h] [rbp-70h] BYREF
  char v15; // [rsp+68h] [rbp-40h] BYREF

  v6 = (unsigned __int64 *)&v14;
  v7 = 4LL;
  do
  {
    *(v6 - 1) = a1;
    *v6 = a2;
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    result = 0xFFFFF68000000000uLL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 += 2;
    --v7;
  }
  while ( v7 );
  v9 = 0;
  v10 = (ULONG_PTR *)&v15;
  do
  {
    v11 = *(v10 - 1);
    v12 = *v10;
    if ( *(_DWORD *)a4 )
    {
      if ( v11 <= v12 )
      {
LABEL_9:
        if ( v9 )
        {
          LOBYTE(v6) = a3;
          MiMakeSystemAddressValid(v11, 0LL, 0, (__int64)v6, 1);
        }
        while ( 1 )
        {
          result = MI_READ_PTE_LOCK_FREE(v11);
          if ( !result )
            result = MiMakeHyperPteDemandZero(v11, v13, a4);
          v11 += 8LL;
          if ( v11 > v12 )
            break;
          if ( (v11 & 0xFFF) == 0 )
            goto LABEL_9;
        }
      }
    }
    else
    {
      *(_QWORD *)(a4 + 8) += ((__int64)(v12 - v11) >> 3) + 1;
    }
    ++v9;
    v10 -= 2;
  }
  while ( v9 < 4 );
  return result;
}
