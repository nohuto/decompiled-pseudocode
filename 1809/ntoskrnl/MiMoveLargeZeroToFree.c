/*
 * XREFs of MiMoveLargeZeroToFree @ 0x140151DC8
 * Callers:
 *     MiPurgeLargeZeroNodePages @ 0x140151BF8 (MiPurgeLargeZeroNodePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMoveLargeZeroToFree(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // r10d
  __int64 v8; // rbp
  unsigned __int64 v9; // r14
  __int64 v10; // rbx
  volatile signed __int32 **v11; // rdi
  __int64 v12; // r9
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 **v14; // r11
  volatile signed __int32 **v15; // r8
  volatile signed __int32 **v16; // rax
  volatile signed __int32 **v17; // rax
  __int64 v18; // rax
  __int64 result; // rax
  signed __int32 v20; // [rsp+0h] [rbp-8h] BYREF

  v6 = 1;
  *(_BYTE *)(a2 + 1912) = 1;
  _InterlockedOr(&v20, 0);
  v8 = a3;
  v9 = MiLargePageSizes[a3];
  v10 = a6 + 34LL * a3 + 8LL * a4;
  v11 = (volatile signed __int32 **)(*(_QWORD *)(a2 + 8 * v10 + 144) + 24LL * a5);
  v12 = *(_QWORD *)(a2 + 8 * v10 + 176) + 24LL * a5;
  v13 = *v11;
  if ( *v11 != (volatile signed __int32 *)v11 )
  {
    while ( 1 )
    {
      v14 = *(volatile signed __int32 ***)v13;
      if ( _interlockedbittestandset64(v13 + 6, 0x3FuLL) )
        break;
      *((_BYTE *)v13 + 34) = *((_BYTE *)v13 + 34) & 0xF8 | 1;
      _InterlockedAnd64((volatile signed __int64 *)v13 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      v15 = *(volatile signed __int32 ***)v13;
      if ( *(volatile signed __int32 **)(*(_QWORD *)v13 + 8LL) != v13
        || (v16 = (volatile signed __int32 **)*((_QWORD *)v13 + 1), *v16 != v13)
        || (*v16 = (volatile signed __int32 *)v15,
            v15[1] = (volatile signed __int32 *)v16,
            v17 = *(volatile signed __int32 ***)(v12 + 8),
            *v17 != (volatile signed __int32 *)v12) )
      {
        __fastfail(3u);
      }
      *((_QWORD *)v13 + 1) = v17;
      *(_QWORD *)v13 = v12;
      *v17 = v13;
      *(_QWORD *)(v12 + 8) = v13;
      v18 = 272 * v8;
      ++*(_QWORD *)(v18 + a2 + 8);
      --*(_QWORD *)(v18 + a2);
      ++*(_QWORD *)(v12 + 16);
      v11[2] = (volatile signed __int32 *)((char *)v11[2] - 1);
      ++*(_QWORD *)(a2 + 8 * v10 + 48);
      --*(_QWORD *)(a2 + 8 * v10 + 16);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2176), -(__int64)v9);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2240), v9);
      v13 = (volatile signed __int32 *)v14;
      if ( v14 == v11 )
        goto LABEL_7;
    }
    v6 = 0;
  }
LABEL_7:
  result = v6;
  *(_BYTE *)(a2 + 1912) = 0;
  return result;
}
