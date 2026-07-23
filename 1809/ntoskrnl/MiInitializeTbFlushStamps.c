/*
 * XREFs of MiInitializeTbFlushStamps @ 0x1401118EC
 * Callers:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x140111620 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall MiInitializeTbFlushStamps(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r9
  struct _KTHREAD *result; // rax
  __int64 v4; // rcx
  unsigned __int64 *v5; // r9
  int v6; // r8d
  unsigned __int64 v7; // rdx
  int v8; // r10d
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // r11d
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( MiPteInShadowRange(a1)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    v9 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 8 * ((v2 >> 3) & 0x1FF));
      v11 = v1 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v11 = v1;
      v1 = v11;
      if ( (v10 & 0x42) != 0 )
        v1 = v11 | 0x42;
    }
  }
  _InterlockedOr(v13, 0);
  if ( v1 && qword_14043B180 )
  {
    if ( (v1 & 0x10) != 0 )
      LODWORD(v1) = v1 & 0xFFFFFFEF;
    else
      LODWORD(v1) = ~(_DWORD)qword_14043B180 & v1;
  }
  result = (struct _KTHREAD *)MiSwizzleInvalidPte(((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 32) | (unsigned int)v1);
  v6 = 0;
  v7 = (unsigned __int64)result;
  if ( v8 )
  {
    result = (struct _KTHREAD *)MiPteHasShadow(v4, result);
    if ( (_DWORD)result )
    {
      v6 = v12;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_4;
    }
    else
    {
      result = KeGetCurrentThread();
      if ( (result->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_4;
    }
    if ( ((unsigned __int8)v7 & (unsigned __int8)v12) != 0 )
    {
      result = (struct _KTHREAD *)0x8000000000000000LL;
      v7 |= 0x8000000000000000uLL;
    }
  }
LABEL_4:
  *v5 = v7;
  if ( v6 )
    return (struct _KTHREAD *)MiWritePteShadow(v5);
  return result;
}
