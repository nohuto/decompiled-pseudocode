/*
 * XREFs of MiReadyStandbyPageForActive @ 0x1400B9A40
 * Callers:
 *     MiUnlinkStandbyBatch @ 0x1400B9840 (MiUnlinkStandbyBatch.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiReadyStandbyPageForActive(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rdi
  char v4; // al
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v14; // rax
  char v15; // r8

  v2 = a1 + 16;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_BYTE *)(a1 + 34) & 0xFE;
  ++*(_WORD *)(a1 + 32);
  *(_BYTE *)(a1 + 34) = v4 | 6;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = (_QWORD *)(v3 | 0x8000000000000000uLL);
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v14 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v2 >> 3) & 0x1FF));
      v15 = v6 | 0x20;
      if ( (v14 & 0x20) == 0 )
        v15 = v6;
      LOBYTE(v6) = v15;
      if ( (v14 & 0x42) != 0 )
        LOBYTE(v6) = v15 | 0x42;
    }
  }
  v8 = (unsigned __int8)v6 >> 5;
  v9 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( v9 != 1 )
  {
    if ( v9 )
    {
      if ( v9 == 2 )
        v8 |= 0x18u;
    }
    else
    {
      v8 |= 8u;
    }
  }
  MiMakeValidPte(a2, (a1 + 0x58000000000LL) / 48, v8 | 0x20000000);
  if ( !MiPteInShadowRange((unsigned __int64)v7) )
    goto LABEL_5;
  if ( !(unsigned int)MiPteHasShadow(v11) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v10 & 1) != 0 )
    {
      v10 |= 0x8000000000000000uLL;
    }
LABEL_5:
    *v7 = v10;
    goto LABEL_6;
  }
  if ( !HIBYTE(word_1404658EC) && (v10 & 1) != 0 )
    v10 |= 0x8000000000000000uLL;
  *v7 = v10;
  MiWritePteShadow(v7, v10);
LABEL_6:
  result = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
