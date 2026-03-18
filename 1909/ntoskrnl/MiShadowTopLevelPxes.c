/*
 * XREFs of MiShadowTopLevelPxes @ 0x14008F250
 * Callers:
 *     MiCopyTopLevelMappings @ 0x14008F178 (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChangeToProcess @ 0x14017EA94 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiTransformValidPteInPlace @ 0x140174574 (MiTransformValidPteInPlace.c)
 */

PEPROCESS __fastcall MiShadowTopLevelPxes(__int64 a1, __int64 a2, int a3)
{
  PEPROCESS result; // rax
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 DeepFreezeStartTime; // r15
  __int64 v8; // rbx
  struct _KPROCESS *v9; // r10
  _BYTE *v10; // r11
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r10
  _QWORD *v14; // r11
  bool v15; // zf
  __int64 v16; // [rsp+20h] [rbp-28h]
  int *v17; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (PEPROCESS)&retaddr;
  HIDWORD(v16) = 0;
  v4 = a3;
  v5 = a2;
  if ( (MiFlags & 0xC00000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 1544);
    if ( v6 )
    {
      result = PsInitialSystemProcess;
      if ( PsInitialSystemProcess )
      {
        DeepFreezeStartTime = PsInitialSystemProcess[2].DeepFreezeStartTime;
        LODWORD(v16) = 256;
        v8 = ((unsigned int)a2 >> 3) & 0x1FF;
        v17 = (int *)dword_140465AF4;
        if ( a3 )
        {
          while ( 1 )
          {
            if ( !_bittest64(dword_140465AF4, (unsigned int)(v8 - 256)) )
              goto LABEL_6;
            MI_READ_PTE_LOCK_FREE(DeepFreezeStartTime + 8 * v8);
            result = (PEPROCESS)MI_READ_PTE_LOCK_FREE(v6 + 8 * v8);
            if ( v9 == result )
              goto LABEL_6;
            if ( (*v10 & 1) == 0 )
              break;
            result = (PEPROCESS)MiTransformValidPteInPlace(v10, v5, v9, 3LL, v16, v17);
LABEL_6:
            v5 += 8LL;
            v8 = (unsigned int)(v8 + 1);
            if ( !--v4 )
              return result;
          }
          result = (PEPROCESS)MiPteInShadowRange((unsigned __int64)v10);
          if ( !(_DWORD)result )
          {
LABEL_11:
            *v14 = v13;
            if ( v11 )
              result = (PEPROCESS)MiWritePteShadow(v14, v13);
            goto LABEL_6;
          }
          result = (PEPROCESS)MiPteHasShadow(v12);
          if ( (_DWORD)result )
          {
            v11 = 1;
            if ( HIBYTE(word_1404658EC) )
              goto LABEL_11;
            v15 = (v13 & 1) == 0;
          }
          else
          {
            result = (PEPROCESS)KeGetCurrentThread();
            if ( (*(_DWORD *)(result->Affinity.Bitmap[12] + 1788) & 0x1000) == 0 )
              goto LABEL_11;
            v15 = (v13 & 1) == 0;
          }
          if ( !v15 )
            v13 |= 0x8000000000000000uLL;
          goto LABEL_11;
        }
      }
    }
  }
  return result;
}
