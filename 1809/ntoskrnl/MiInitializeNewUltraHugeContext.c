/*
 * XREFs of MiInitializeNewUltraHugeContext @ 0x1401859FC
 * Callers:
 *     MiGetHugePageToZero @ 0x1401855A4 (MiGetHugePageToZero.c)
 * Callees:
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiInitializeNewUltraHugeContext(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rdi
  _DWORD *v6; // rax
  unsigned __int64 UltraMapping; // rdx
  __int64 *v9; // r8
  __int64 v10; // rax
  __int64 **v11; // rcx
  __int64 *v12; // r14
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v15; // rcx
  __int64 result; // rax
  int v17; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)(a2 + 88) = 512;
  *(_QWORD *)(a2 + 96) = a2 + 104;
  v3 = (volatile signed __int32 *)(a3 + 24);
  *(_DWORD *)(a2 + 184) = *(_QWORD *)(a3 + 40) >> 58;
  v6 = *(_DWORD **)(a2 + 96);
  *(_QWORD *)(a2 + 168) = a3;
  *(_DWORD *)(a2 + 188) = 1;
  *v6 |= 1u;
  v17 = 0;
  while ( _interlockedbittestandset64(v3, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v17, a2, a3);
    while ( *(__int64 *)v3 < 0 );
  }
  if ( *(_BYTE *)(a2 + 69) == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v3, 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a1 + 80), 0, 0x40000LL, 1);
  v9 = (__int64 *)(a2 + 72);
  v10 = *(_QWORD *)(a1 + 224) + 32LL;
  v11 = *(__int64 ***)(*(_QWORD *)(a1 + 224) + 40LL);
  if ( *v11 != (__int64 *)v10 )
    __fastfail(3u);
  *v9 = v10;
  *(_QWORD *)(a2 + 80) = v11;
  *v11 = v9;
  *(_QWORD *)(v10 + 8) = v9;
  *(_QWORD *)(a2 + 176) = UltraMapping;
  *(_QWORD *)(a2 + 40) = UltraMapping;
  v12 = (__int64 *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
  MiMakeValidPte((unsigned __int64)v12, (a3 + 0x58000000000LL) / 48, -1543503868);
  if ( MiPteInShadowRange((unsigned __int64)v12) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_6;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_6;
    }
    if ( (v13 & 1) != 0 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *v12 = v13;
  if ( v14 )
    MiWritePteShadow((__int64)v12, v13);
  v15 = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 64) = 0;
  *(_QWORD *)(a2 + 48) = v15 + 0x3FFFFFFF;
  *(_QWORD *)(a2 + 32) = v12;
  _InterlockedAnd64((volatile signed __int64 *)v3, 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a1 + 216) = a2;
  result = 1LL;
  *(_WORD *)(a1 + 208) = 0;
  return result;
}
