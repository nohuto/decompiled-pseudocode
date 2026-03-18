/*
 * XREFs of MiAddMappedPtes @ 0x14066E540
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400A82A0 (MiInsertInSystemSpace.c)
 *     MiMapSystemImage @ 0x14070F5A4 (MiMapSystemImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakePrototypePteDirect @ 0x1400A8A80 (MiMakePrototypePteDirect.c)
 *     MiGetSubsectionDriverProtos @ 0x1400A8B4C (MiGetSubsectionDriverProtos.c)
 *     MiOffsetToProtos @ 0x1400D5DB0 (MiOffsetToProtos.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiGetSharedProtos @ 0x14015C5CC (MiGetSharedProtos.c)
 */

__int64 __fastcall MiAddMappedPtes(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rbx
  unsigned int *v7; // rax
  unsigned int *v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r11
  int v15; // edx
  __int64 SharedProtos; // rax
  unsigned __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r11
  unsigned __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v5 = (unsigned __int64)&a1[a2];
  v6 = a1;
  v7 = MiOffsetToProtos((_DWORD *)a3, *a4, &v20);
  v8 = v7;
  if ( !v7 )
    return 3221225503LL;
  if ( (*((_BYTE *)v7 + 34) & 2) != 0 && (*(_DWORD *)(a3 + 56) & 0x4000000) != 0 )
  {
LABEL_18:
    SharedProtos = MiGetSharedProtos(a3);
  }
  else if ( (*(_DWORD *)(a3 + 56) & 0x20) == 0 || (SharedProtos = MiGetSubsectionDriverProtos(v7)) == 0 )
  {
    v9 = *((_QWORD *)v8 + 1);
    v10 = v9 + 8 * v20;
    v11 = v9 + 8LL * v8[11];
    goto LABEL_5;
  }
  while ( 2 )
  {
    v10 = *(_QWORD *)(SharedProtos + 72);
LABEL_15:
    v11 = v10 + 8LL * v8[11];
    do
    {
      MiMakePrototypePteDirect(v10);
      if ( MiPteInShadowRange((unsigned __int64)v6) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140465BEC) && (v12 & 1) != 0 )
            v12 |= 0x8000000000000000uLL;
          *v6 = v12;
          MiWritePteShadow((__int64)v6);
          goto LABEL_9;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v12 & 1) != 0 )
        {
          v12 |= 0x8000000000000000uLL;
        }
      }
      *v6 = v12;
LABEL_9:
      ++v6;
      v10 = v13 + 8;
LABEL_5:
      if ( (unsigned __int64)v6 >= v5 )
        return 0LL;
    }
    while ( v10 < v11 );
    v8 = (unsigned int *)*((_QWORD *)v8 + 2);
    if ( v8 )
    {
      v15 = *(_DWORD *)(a3 + 56);
      v10 = *((_QWORD *)v8 + 1);
      if ( (*((_WORD *)v8 + 17) & 2) != 0 && (v15 & 0x4000000) != 0 )
        goto LABEL_18;
      if ( (v15 & 0x20) != 0 )
      {
        SharedProtos = MiGetSubsectionDriverProtos(v8);
        if ( SharedProtos )
          continue;
      }
      goto LABEL_15;
    }
    break;
  }
  v17 = *(_QWORD *)(a3 + 136)
      + 8
      * (*(unsigned int *)(*(_QWORD *)a3 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a3 + 12LL) & 0x3FF) << 32));
  if ( v10 < v17 )
  {
    while ( 2 )
    {
      MiMakePrototypePteDirect(v10);
      if ( MiPteInShadowRange((unsigned __int64)v6) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140465BEC) && (v18 & 1) != 0 )
            v18 |= 0x8000000000000000uLL;
          *v6 = v18;
          MiWritePteShadow((__int64)v6);
LABEL_42:
          if ( (unsigned __int64)++v6 >= v5 )
            return 0LL;
          v10 = v19 + 8;
          if ( v10 >= v17 )
            return 0LL;
          continue;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v18 & 1) != 0 )
        {
          v18 |= 0x8000000000000000uLL;
        }
      }
      break;
    }
    *v6 = v18;
    goto LABEL_42;
  }
  return 0LL;
}
