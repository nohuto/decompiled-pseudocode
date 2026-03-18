/*
 * XREFs of MiShadowTopLevelPxes @ 0x1400E301C
 * Callers:
 *     MiCopyTopLevelMappings @ 0x1400E2F44 (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChangeToProcess @ 0x14017E3A4 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiTransformValidPteInPlace @ 0x140173E44 (MiTransformValidPteInPlace.c)
 */

struct _KTHREAD *__fastcall MiShadowTopLevelPxes(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 DeepFreezeStartTime; // r15
  __int64 v8; // rbx
  struct _KTHREAD *v9; // r10
  _BYTE *v10; // r11
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r10
  _QWORD *v14; // r11
  bool v15; // zf
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (struct _KTHREAD *)&retaddr;
  v4 = a3;
  v5 = a2;
  if ( (MiFlags & 0xC00000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 1544);
    if ( v6 )
    {
      result = (struct _KTHREAD *)PsInitialSystemProcess;
      if ( PsInitialSystemProcess )
      {
        DeepFreezeStartTime = PsInitialSystemProcess[2].DeepFreezeStartTime;
        v8 = ((unsigned int)a2 >> 3) & 0x1FF;
        if ( a3 )
        {
          while ( 1 )
          {
            if ( !_bittest64(dword_140465DF4, (unsigned int)(v8 - 256)) )
              goto LABEL_6;
            MI_READ_PTE_LOCK_FREE(DeepFreezeStartTime + 8 * v8);
            result = (struct _KTHREAD *)MI_READ_PTE_LOCK_FREE(v6 + 8 * v8);
            if ( v9 == result )
              goto LABEL_6;
            if ( (*v10 & 1) == 0 )
              break;
            result = (struct _KTHREAD *)MiTransformValidPteInPlace(v10, v5, v9, 3LL);
LABEL_6:
            v5 += 8LL;
            v8 = (unsigned int)(v8 + 1);
            if ( !--v4 )
              return result;
          }
          result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)v10);
          if ( !(_DWORD)result )
          {
LABEL_11:
            *v14 = v13;
            if ( v11 )
              result = (struct _KTHREAD *)MiWritePteShadow(v14, v13);
            goto LABEL_6;
          }
          result = (struct _KTHREAD *)MiPteHasShadow(v12);
          if ( (_DWORD)result )
          {
            v11 = 1;
            if ( HIBYTE(word_140465BEC) )
              goto LABEL_11;
            v15 = (v13 & 1) == 0;
          }
          else
          {
            result = KeGetCurrentThread();
            if ( (result->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
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
