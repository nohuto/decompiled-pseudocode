/*
 * XREFs of KiMceDispatch @ 0x140346990
 * Callers:
 *     KiMceLinkage @ 0x14034BAB0 (KiMceLinkage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiMceDispatch(_QWORD *a1, unsigned int a2)
{
  __m128i *IdtBase; // r8
  unsigned int Number; // ecx
  char *StackBase; // r14
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // r10
  __m128i v9; // xmm0
  int v10; // eax
  int v11; // edx
  unsigned int v12; // r11d
  unsigned __int64 *v13; // r14
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  _QWORD *v17; // rax
  int v18; // ecx
  _BYTE *v19; // rax
  char *v20; // rcx
  __int64 v21; // r11
  char v22; // al
  signed __int32 v24[6]; // [rsp+0h] [rbp-18h] BYREF
  __int64 v25; // [rsp+30h] [rbp+18h]
  __int64 v26; // [rsp+30h] [rbp+18h]

  IdtBase = (__m128i *)KeGetPcr()->IdtBase;
  Number = KeGetPcr()->Prcb.Number;
  StackBase = (char *)KeGetPcr()->NtTib.StackBase;
  LODWORD(v25) = IdtBase[4];
  HIDWORD(v25) = _mm_cvtsi128_si32(_mm_srli_si128(IdtBase[4], 8));
  v6 = v25;
  v7 = *(_QWORD *)(v25 + 5120);
  v8 = *(_QWORD **)(v25 + 5128);
  v9 = _mm_srli_si128(*(__m128i *)(v25 + 16 * (a2 + 32LL)), 8);
  LODWORD(v26) = *(_OWORD *)(v25 + 16 * (a2 + 32LL));
  HIDWORD(v26) = _mm_cvtsi128_si32(v9);
  _InterlockedOr((volatile signed __int32 *)(v6 + 5168), 1u);
  v10 = *(_DWORD *)(v6 + 5172);
  if ( Number != v10 )
  {
    while ( (*(_DWORD *)(v6 + 5168) & 2) != 0 )
      _mm_pause();
    _InterlockedOr(v24, 0);
    v10 = *(_DWORD *)(v6 + 5172);
  }
  v11 = 4096;
  if ( Number == v10 )
  {
    if ( (*(_DWORD *)(v7 + 2420) & 0x20000) == 0 )
    {
      **(_QWORD **)(v7 + 1200) = 0xA3A03F5891C8B4E8uLL;
      **(_QWORD **)(v7 + 1208) = 0LL;
      **(_QWORD **)(v7 + 1216) = 0LL;
      **(_QWORD **)(v7 + 1224) = 0LL;
    }
    v12 = 1;
    v13 = (unsigned __int64 *)(StackBase + 36);
    do
    {
      v14 = *v13;
      if ( *v13 )
      {
        v15 = a1[3];
        if ( v15 <= v14 && v15 > v14 - ((-(__int64)((*(_BYTE *)(v7 + 2147) & 8) != 0) & 0xFFFFFFFFFFFFE1E0uLL) + 0x2000) )
          break;
        if ( (*(_BYTE *)(v7 + 2147) & 8) != 0 )
        {
          v16 = *(_QWORD *)(v14 + 8);
          if ( v15 <= v16 && v15 > v16 - 8160 )
            break;
        }
      }
      ++v12;
      ++v13;
    }
    while ( v12 < 8 );
    if ( v12 == 8 && *a1 - (_QWORD)v8 < 0x1000uLL )
    {
      v17 = (_QWORD *)a1[3];
      if ( *v17 == v7 + 2177 )
      {
        *a1 = *v17;
        a1[3] = v17 + 1;
      }
    }
    v18 = 4;
    *(_QWORD *)(v7 + 2182) = 0xC3C3C3C3C3C3C3C3uLL;
    v19 = (_BYTE *)(v7 + 2190);
    do
    {
      *v19++ = -61;
      --v18;
    }
    while ( v18 );
    _InterlockedAnd((volatile signed __int32 *)(v6 + 5168), 0xFFFFFFFD);
  }
  if ( (*(_DWORD *)(v6 + 5168) & 4) == 0 )
  {
    v20 = (char *)(v6 + 1024);
    v21 = 512LL;
    do
    {
      v11 -= 8;
      *v8 = *(_QWORD *)v20;
      v20 += 8;
      ++v8;
      --v21;
    }
    while ( v21 );
    for ( ; v11; --v11 )
    {
      v22 = *v20++;
      *(_BYTE *)v8 = v22;
      v8 = (_QWORD *)((char *)v8 + 1);
    }
  }
  *(_QWORD *)(v6 + 5136) = v7 + 2146;
  return v26;
}
