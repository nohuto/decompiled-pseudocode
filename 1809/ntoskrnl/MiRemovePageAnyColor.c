/*
 * XREFs of MiRemovePageAnyColor @ 0x1400EB1FC
 * Callers:
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x1400EB150 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiSlistGetFreePage @ 0x1400EB3E4 (MiSlistGetFreePage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400EE0C8 (MiGetPerfectColorHeadPage.c)
 */

__int64 __fastcall MiRemovePageAnyColor(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  __int16 v4; // r11
  unsigned int v5; // ebx
  _BOOL8 v6; // r14
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rcx
  unsigned int v9; // ebp
  unsigned __int64 v10; // r12
  unsigned int v11; // r15d
  unsigned __int64 v12; // r13
  unsigned int v13; // edi
  unsigned int v14; // esi
  unsigned __int64 v15; // rdx
  _DWORD *v16; // r8
  unsigned int v17; // r10d
  unsigned int v18; // ecx
  __int64 result; // rax
  unsigned int v20; // r10d
  int v21; // r9d
  unsigned int v22; // r8d
  char v23; // cl
  __int64 v24; // [rsp+30h] [rbp-48h]
  BOOL v27; // [rsp+98h] [rbp+20h] BYREF
  BOOL v28; // [rsp+9Ch] [rbp+24h]

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (a3 & 2) == 0;
  v7 = *(_QWORD *)(a1 + 16) + 1984 * ((unsigned __int64)a2 >> byte_14043B109);
  if ( (unsigned int)MmNumberOfChannels > 1 )
    v8 = (_QWORD *)(v7
                  + 8 * (v6 + 2 * ((unsigned __int8)(MiChannelMaximumPowerOf2Mask & (v5 >> byte_14043B10A)) + 114LL)));
  else
    v8 = (_QWORD *)(v7 + 1760 + 8 * v6);
  if ( !*v8 )
    return 0LL;
  v9 = dword_14043B148;
  v10 = 0LL;
  v11 = v5;
  v12 = v7 + 16 * (v6 + 104);
  v24 = *(_QWORD *)(v3 + 8 * v6 + 2112);
  v13 = 0;
  v14 = dword_14043B148 + 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = v5 & v9;
      v16 = (_DWORD *)(*(_QWORD *)(v12 + 8) + 4 * (v15 >> 5));
      if ( (_DWORD *)v10 != v16 )
      {
        v10 = *(_QWORD *)(v12 + 8) + 4 * ((unsigned __int64)(v5 & v9) >> 5);
        v13 = *v16 & (-1 << (v15 & 0x1F));
        if ( (v4 & 0x4000) != 0 )
        {
          v21 = 0;
          v22 = (unsigned __int8)v9 & (unsigned __int8)v11 & 0xF;
          do
          {
            v23 = v22 & 0x1F;
            v22 += 16;
            v21 |= 1 << v23;
          }
          while ( v22 < 0x20 && v22 <= v9 );
          v13 &= ~v21;
          v3 = a1;
        }
        else if ( ((v15 ^ v14) & 0xFFFFFFFFFFFFFFE0uLL) == 0 )
        {
          v13 &= (1 << (v14 & 0x1F)) - 1;
        }
      }
      v17 = v5 & v9 & 0xFFFFFFE0;
      if ( v13 )
        break;
      v20 = v17 + 32;
      if ( v20 >= v14 )
      {
        v10 = 0LL;
        if ( !v11 || v14 != v9 + 1 )
          return 0LL;
        v14 = v9 & v11;
        v5 = v11 & ~v9;
      }
      else
      {
        v5 = v20 + (~v9 & v5);
      }
    }
    _BitScanForward(&v18, v13);
    v27 = v6;
    v28 = v6;
    v5 = v18 + v17 + (~v9 & v5);
    v13 &= ~(1 << v18);
    result = MiSlistGetFreePage(v3, &v27, v5);
    if ( result )
      return result;
    result = MiGetPerfectColorHeadPage(a1, (unsigned int)v24 + 40 * v5, v5, v6, a3);
    if ( result == 1 )
      break;
    if ( result )
      return result;
    v3 = a1;
    v4 = a3;
  }
  return 1LL;
}
