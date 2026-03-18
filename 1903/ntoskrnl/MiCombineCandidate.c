/*
 * XREFs of MiCombineCandidate @ 0x1401400F0
 * Callers:
 *     MiCrcStillIntact @ 0x14013E6D0 (MiCrcStillIntact.c)
 *     MiCapturePfnVm @ 0x14013ECA0 (MiCapturePfnVm.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiMapArbitraryPage @ 0x140140480 (MiMapArbitraryPage.c)
 *     MiRecheckCombineVm @ 0x1401411C8 (MiRecheckCombineVm.c)
 *     MiCombinePte @ 0x1402E5F10 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F4120 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MI_IS_RESET_PTE @ 0x140023DF0 (MI_IS_RESET_PTE.c)
 *     MiGetPagePrivilege @ 0x140024900 (MiGetPagePrivilege.c)
 *     MiIsSessionMetadata @ 0x140142800 (MiIsSessionMetadata.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140157D18 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 */

__int64 __fastcall MiCombineCandidate(__int64 *a1, char a2, __int64 a3)
{
  __m128i v3; // xmm1
  __int64 v4; // rcx
  __int128 v5; // xmm0
  unsigned __int64 v6; // xmm2_8
  unsigned __int64 v7; // xmm1_8
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edx
  unsigned __int64 v13; // rax
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v16; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __m128i v19; // [rsp+40h] [rbp-18h]
  unsigned __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(__m128i *)a3;
  v4 = *a1;
  v5 = *(_OWORD *)(a3 + 16);
  v19 = *(__m128i *)(a3 + 32);
  *(__m128i *)BugCheckParameter2 = v3;
  v6 = _mm_srli_si128(v19, 8).m128i_u64[0];
  v7 = _mm_srli_si128(v3, 8).m128i_u64[0];
  v18 = v5;
  if ( *(_QWORD *)(qword_140466188 + 8 * ((v6 >> 40) & 0x3FF)) != v4 && (a2 & 1) == 0
    || (v6 & 0x200000000000000LL) != 0
    || (v19.m128i_i8[3] & 8) != 0
    || v7 < 0xFFFFF68000000000uLL
    || v7 > 0xFFFFF6FFFFFFFFFFuLL
    || (*((_QWORD *)&v18 + 1) & 0x4000000000000000LL) != 0
    || ((v6 >> 54) & 7) == 4
    || (v7 | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
    && (v7 | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
    && (v19.m128i_i8[3] & 0x20) != 0
    || byte_14046971E
    && _bittest64((const signed __int64 *)qword_14046A040, (unsigned __int64)((a3 + 0x58000000000LL) / 48) >> 9) )
  {
    return 0LL;
  }
  v8 = v18;
  if ( (unsigned __int64)&v18 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v18 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    v8 = v18;
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v8 = v18 | 0x20;
      v16 = *(_QWORD *)(DeepFreezeStartTime + 8 * (((unsigned __int64)&v18 >> 3) & 0x1FF));
      if ( (v16 & 0x20) == 0 )
        v8 = v18;
      if ( (v16 & 0x42) != 0 )
        v8 |= 0x42uLL;
    }
  }
  v20 = v8;
  if ( (v8 & 1) != 0 || v8 && qword_140465B00 && (qword_140465B00 & v8) == 0 )
    return 0LL;
  v9 = (v8 >> 5) & 0x1F;
  if ( (_DWORD)v9 == 31
    || (_DWORD)v9 == 24
    || ((v8 >> 5) & 0x18) == 0x10
    || (unsigned int)v9 >= 0x1E
    || (unsigned int)MiGetPagePrivilege((ULONG_PTR)BugCheckParameter2, 0, 0LL) )
  {
    return 0LL;
  }
  v10 = (__int64)(v7 << 25) >> 16;
  if ( v10 >= 0xFFFF800000000000uLL )
    v11 = byte_140467440[((v10 >> 39) & 0x1FF) - 256];
  else
    v11 = 0;
  if ( v7 > 0xFFFFF6BFFFFFFF78uLL )
  {
    if ( v11 == 6 )
    {
      v12 = 2;
    }
    else
    {
      if ( v11 != 1 || (unsigned int)MiIsSessionMetadata() )
        return 0LL;
      v12 = 3;
    }
  }
  else
  {
    v12 = 1;
  }
  if ( (unsigned __int8)((v19.m128i_i8[2] & 7) - 2) > 1u || v19.m128i_i16[0] )
  {
    if ( (v19.m128i_i8[2] & 7) != 6
      || (BugCheckParameter2[0] & 1) == 0
      || v19.m128i_i16[0] != 1
      || (v19.m128i_i64[1] & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
      || (*((_QWORD *)&v18 + 1) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    {
      return 0LL;
    }
    if ( v12 == 1 && (v8 & 0x400) == 0 )
    {
      if ( (v8 & 0x800) == 0
        && (((unsigned __int8)v8 >> 2) & v19.m128i_i8[0]) == 0
        && (((unsigned __int8)v8 >> 1) & v19.m128i_i8[0]) == 0 )
      {
        v13 = v8;
        if ( qword_140465B00 && (v8 & 0x10) == 0 )
          v13 = v8 & ~qword_140465B00;
        if ( HIDWORD(v13) == 1 )
          return 0LL;
      }
      if ( (v8 & 0x400) == 0 && (v8 & 0x4000000) != 0 )
        return 0LL;
    }
    return v12;
  }
  if ( v12 != 1 || !MI_IS_RESET_PTE(v8) && !(unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(&v20) )
    return v12;
  return 0LL;
}
