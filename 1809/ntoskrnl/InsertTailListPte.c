/*
 * XREFs of InsertTailListPte @ 0x140079CF0
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400795A0 (MiReleaseSystemCacheView.c)
 *     MiExpandSystemCache @ 0x1400F624C (MiExpandSystemCache.c)
 *     MiExpandSpecialPool @ 0x1402AC64C (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x1402ACAC0 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall InsertTailListPte(struct _KTHREAD **a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  unsigned __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r11
  struct _KTHREAD *v8; // rdi
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r11
  struct _KTHREAD *v13; // r8
  __int64 v14; // rsi
  struct _KTHREAD *result; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // r8
  struct _KTHREAD *v20; // r11

  v2 = ((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL;
  v3 = MiSwizzleInvalidPte((v2 - (__int64)a1[2] - 0x98000000000LL) >> 3 << 28);
  if ( !MiPteInShadowRange(v4) )
  {
LABEL_2:
    *v7 = v5;
    goto LABEL_3;
  }
  if ( !(unsigned int)MiPteHasShadow(v6, v5) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 && (v3 & 1) != 0 )
      v5 |= 0x8000000000000000uLL;
    goto LABEL_2;
  }
  if ( !HIBYTE(word_14043B26C) && (v3 & 1) != 0 )
    v5 |= 0x8000000000000000uLL;
  *v7 = v5;
  MiWritePteShadow(v7);
LABEL_3:
  v8 = a1[1];
  if ( v8 )
  {
    if ( qword_14043B180 && ((unsigned __int8)v8 & 0x10) == 0 )
      v8 = (struct _KTHREAD *)(~qword_14043B180 & (unsigned __int64)v8);
    v8 = (struct _KTHREAD *)((unsigned __int64)v8 >> 28);
  }
  if ( qword_14043B180 )
  {
    if ( (v3 & 0x10) != 0 )
      v3 &= ~0x10u;
    else
      v3 &= ~(_DWORD)qword_14043B180;
  }
  MiSwizzleInvalidPte(v3 & 0xFFFFFFF | ((_QWORD)v8 << 28));
  if ( !MiPteInShadowRange(v9 + 8) )
    goto LABEL_12;
  if ( !(unsigned int)MiPteHasShadow(v11, v10) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v10 & 1) != 0 )
    {
      v10 |= 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)(v12 + 8) = v10;
    goto LABEL_13;
  }
  if ( !HIBYTE(word_14043B26C) && (v10 & 1) != 0 )
    v10 |= 0x8000000000000000uLL;
  *(_QWORD *)(v12 + 8) = v10;
  MiWritePteShadow(v12 + 8);
LABEL_13:
  v13 = a1[2];
  v14 = (v2 - (__int64)v13 - 0x98000000000LL) >> 3;
  result = (struct _KTHREAD *)MiSwizzleInvalidPte((v12 - (__int64)v13) >> 3 << 28);
  if ( v8 != (struct _KTHREAD *)v14 )
  {
    result = (struct _KTHREAD *)MiPteInShadowRange(v16 + 8LL * (_QWORD)v8);
    if ( (_DWORD)result )
    {
      if ( (unsigned int)MiPteHasShadow(v18, v17) )
      {
        if ( !HIBYTE(word_14043B26C) && ((unsigned __int8)v20 & 1) != 0 )
          v17 |= 0x8000000000000000uLL;
        *v19 = v17;
        result = (struct _KTHREAD *)MiWritePteShadow(v19);
        goto LABEL_16;
      }
      result = KeGetCurrentThread();
      if ( (result->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && ((unsigned __int8)v20 & 1) != 0 )
      {
        v17 |= 0x8000000000000000uLL;
      }
    }
    *v19 = v17;
LABEL_16:
    a1[1] = v20;
    return result;
  }
  *a1 = result;
  a1[1] = result;
  return result;
}
