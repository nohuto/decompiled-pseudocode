/*
 * XREFs of MiAddMappedPtes @ 0x1405E0500
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiMapSystemImage @ 0x1406832A4 (MiMapSystemImage.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x14001B7BC (MiGetSubsectionDriverProtos.c)
 *     MiMakePrototypePteDirect @ 0x140027BA0 (MiMakePrototypePteDirect.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiOffsetToProtos @ 0x1400AF770 (MiOffsetToProtos.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiGetSharedProtos @ 0x140177274 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiAddMappedPtes(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, unsigned int a5)
{
  unsigned __int64 v6; // rsi
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rcx
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rdi
  __int64 PrototypePteDirect; // rdx
  __int64 v14; // r11
  int v16; // edx
  __int64 SharedProtos; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r11
  __int64 v22; // r8
  unsigned __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned __int64)&a1[a2];
  v7 = a1;
  v8 = MiOffsetToProtos(a3, *a4, &v23);
  v9 = v8;
  if ( !v8 )
    return 3221225503LL;
  if ( (*(_BYTE *)(v8 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x4000000) != 0 )
  {
LABEL_19:
    SharedProtos = MiGetSharedProtos(a3, a5, v9);
  }
  else if ( (*(_DWORD *)(a3 + 56) & 0x20) == 0 || (SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)v8)) == 0 )
  {
    v10 = *(_QWORD *)(v9 + 8);
    v11 = v10 + 8 * v23;
    v12 = v10 + 8LL * *(unsigned int *)(v9 + 44);
    goto LABEL_5;
  }
  while ( 2 )
  {
    v11 = *(_QWORD *)(SharedProtos + 72);
LABEL_16:
    v12 = v11 + 8LL * *(unsigned int *)(v9 + 44);
    do
    {
      PrototypePteDirect = MiMakePrototypePteDirect(v11);
      if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_14043B26C) && (PrototypePteDirect & 1) != 0 )
            PrototypePteDirect |= v18;
          *v7 = PrototypePteDirect;
          MiWritePteShadow((__int64)v7, PrototypePteDirect);
          goto LABEL_10;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (PrototypePteDirect & 1) != 0 )
        {
          PrototypePteDirect |= v18;
        }
      }
      *v7 = PrototypePteDirect;
LABEL_10:
      ++v7;
      v11 = v14 + 8;
LABEL_5:
      if ( (unsigned __int64)v7 >= v6 )
        return 0LL;
    }
    while ( v11 < v12 );
    v9 = *(_QWORD *)(v9 + 16);
    if ( v9 )
    {
      v16 = *(_DWORD *)(a3 + 56);
      v11 = *(_QWORD *)(v9 + 8);
      if ( (*(_WORD *)(v9 + 34) & 2) != 0 && (v16 & 0x4000000) != 0 )
        goto LABEL_19;
      if ( (v16 & 0x20) != 0 )
      {
        SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)v9);
        if ( SharedProtos )
          continue;
      }
      goto LABEL_16;
    }
    break;
  }
  v19 = *(_QWORD *)(a3 + 136)
      + 8
      * (*(unsigned int *)(*(_QWORD *)a3 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a3 + 12LL) & 0x3FF) << 32));
  if ( v11 < v19 )
  {
    while ( 2 )
    {
      MiMakePrototypePteDirect(v11);
      if ( MiPteInShadowRange((unsigned __int64)v7) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_14043B26C) && (v20 & 1) != 0 )
            v20 |= v22;
          *v7 = v20;
          MiWritePteShadow((__int64)v7, v20);
LABEL_43:
          if ( (unsigned __int64)++v7 >= v6 )
            return 0LL;
          v11 = v21 + 8;
          if ( v11 >= v19 )
            return 0LL;
          continue;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v20 & 1) != 0 )
        {
          v20 |= v22;
        }
      }
      break;
    }
    *v7 = v20;
    goto LABEL_43;
  }
  return 0LL;
}
