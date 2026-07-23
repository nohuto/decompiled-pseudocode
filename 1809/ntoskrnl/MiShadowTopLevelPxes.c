/*
 * XREFs of MiShadowTopLevelPxes @ 0x14013CF0C
 * Callers:
 *     MiCopyTopLevelMappings @ 0x14013CE34 (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChangeToProcess @ 0x140175178 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiTransformValidPteInPlace @ 0x14016A80C (MiTransformValidPteInPlace.c)
 */

void __fastcall MiShadowTopLevelPxes(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  __int64 v4; // rsi
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r10
  _BYTE *v10; // r11
  int v11; // edx
  __int64 v12; // r10
  __int64 *v13; // r11
  bool v14; // zf

  v3 = a3;
  v4 = a2;
  if ( (MiFlags & 0xC00000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 1544);
    if ( v5 )
    {
      if ( PsInitialSystemProcess )
      {
        v6 = PsInitialSystemProcess[2].Affinity.Bitmap[0];
        v7 = ((unsigned int)a2 >> 3) & 0x1FF;
        if ( a3 )
        {
          while ( 1 )
          {
            if ( !_bittest64(qword_14043B504, (unsigned int)(v7 - 256)) )
              goto LABEL_6;
            MI_READ_PTE_LOCK_FREE(v6 + 8 * v7);
            v8 = MI_READ_PTE_LOCK_FREE(v5 + 8 * v7);
            if ( v9 == v8 )
              goto LABEL_6;
            if ( (*v10 & 1) == 0 )
              break;
            MiTransformValidPteInPlace(v10, v4, v9, 3LL);
LABEL_6:
            v4 += 8LL;
            v7 = (unsigned int)(v7 + 1);
            if ( !--v3 )
              return;
          }
          if ( !MiPteInShadowRange((unsigned __int64)v10) )
          {
LABEL_11:
            *v13 = v12;
            if ( v11 )
              MiWritePteShadow((__int64)v13, v12);
            goto LABEL_6;
          }
          if ( (unsigned int)MiPteHasShadow() )
          {
            v11 = 1;
            if ( HIBYTE(word_14043B26C) )
              goto LABEL_11;
            v14 = (v12 & 1) == 0;
          }
          else
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
              goto LABEL_11;
            v14 = (v12 & 1) == 0;
          }
          if ( !v14 )
            v12 |= 0x8000000000000000uLL;
          goto LABEL_11;
        }
      }
    }
  }
}
