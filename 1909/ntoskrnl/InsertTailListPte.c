/*
 * XREFs of InsertTailListPte @ 0x140076480
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400700C0 (MiReleaseSystemCacheView.c)
 *     MiExpandSystemCache @ 0x14012BF4C (MiExpandSystemCache.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiGetPteLink @ 0x140076E80 (MiGetPteLink.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall InsertTailListPte(struct _KTHREAD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  int v6; // ebx
  unsigned __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r11
  __int64 PteLink; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r11
  struct _KTHREAD *v21; // r8
  __int64 v22; // rdi
  struct _KTHREAD *result; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // r8
  struct _KTHREAD *v28; // r11

  v5 = ((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL;
  v6 = MiSwizzleInvalidPte((v5 - (__int64)a1[2] - 0x98000000000LL) >> 3 << 28, a2, a3, a4);
  if ( !MiPteInShadowRange(v7) )
  {
LABEL_2:
    *v10 = v8;
    goto LABEL_3;
  }
  if ( !(unsigned int)MiPteHasShadow(v9) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 && (v6 & 1) != 0 )
      v8 |= 0x8000000000000000uLL;
    goto LABEL_2;
  }
  if ( !HIBYTE(word_1404658EC) && (v6 & 1) != 0 )
    v8 |= 0x8000000000000000uLL;
  *v10 = v8;
  MiWritePteShadow(v10, v8);
LABEL_3:
  PteLink = MiGetPteLink(a1[1]);
  v15 = PteLink;
  if ( qword_140465800 )
  {
    if ( (v6 & 0x10) != 0 )
      v6 &= ~0x10u;
    else
      v6 &= ~(_DWORD)qword_140465800;
  }
  MiSwizzleInvalidPte(v6 & 0xFFFFFFF | (unsigned __int64)(PteLink << 28), v12, v13, v14);
  if ( !MiPteInShadowRange(v16 + 8) )
    goto LABEL_7;
  if ( !(unsigned int)MiPteHasShadow(v18) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v17 & 1) != 0 )
    {
      v17 |= 0x8000000000000000uLL;
    }
LABEL_7:
    *(_QWORD *)(v20 + 8) = v17;
    goto LABEL_8;
  }
  if ( !HIBYTE(word_1404658EC) && (v17 & 1) != 0 )
    v17 |= 0x8000000000000000uLL;
  *(_QWORD *)(v20 + 8) = v17;
  MiWritePteShadow(v20 + 8, v17);
LABEL_8:
  v21 = a1[2];
  v22 = (v5 - (__int64)v21 - 0x98000000000LL) >> 3;
  result = (struct _KTHREAD *)MiSwizzleInvalidPte((v20 - (__int64)v21) >> 3 << 28, v17, v21, v19);
  if ( v15 != v22 )
  {
    result = (struct _KTHREAD *)MiPteInShadowRange(v24 + 8 * v15);
    if ( (_DWORD)result )
    {
      if ( (unsigned int)MiPteHasShadow(v26) )
      {
        if ( !HIBYTE(word_1404658EC) && ((unsigned __int8)v28 & 1) != 0 )
          v25 |= 0x8000000000000000uLL;
        *v27 = v25;
        result = (struct _KTHREAD *)MiWritePteShadow(v27, v25);
        goto LABEL_11;
      }
      result = KeGetCurrentThread();
      if ( (result->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && ((unsigned __int8)v28 & 1) != 0 )
      {
        v25 |= 0x8000000000000000uLL;
      }
    }
    *v27 = v25;
LABEL_11:
    a1[1] = v28;
    return result;
  }
  *a1 = result;
  a1[1] = result;
  return result;
}
