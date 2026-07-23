/*
 * XREFs of MiUnmapRetpolineStubs @ 0x140855070
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1400EDC04 (MiInitializeTbFlushList.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiUnmapRetpolineStubs(__int64 a1, int a2)
{
  unsigned int v3; // r11d
  unsigned __int64 v4; // rbx
  unsigned __int64 PteAddress; // rax
  __int64 v6; // rdx
  __int64 *v7; // r8
  int v8; // r9d
  int v9; // r11d
  bool v10; // zf
  unsigned int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15[48]; // [rsp+20h] [rbp-D8h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 48)
     + (((unsigned int)dword_140439F34 + 4095LL) & 0xFFFFFFFFFFFFF000uLL)
     + ((*(unsigned int *)(a1 + 64) + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
  while ( v3 < dword_140439F20 )
  {
    PteAddress = MiGetPteAddress(v4 + (v3 << 12));
    if ( MiPteInShadowRange(PteAddress) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v8 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v10 = (v6 & 1) == 0;
          goto LABEL_8;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v10 = (v6 & 1) == 0;
LABEL_8:
        if ( !v10 )
          v6 |= 0x8000000000000000uLL;
      }
    }
    *v7 = v6;
    if ( v8 )
      MiWritePteShadow((__int64)v7, v6);
    v3 = v9 + 1;
  }
  MiInitializeTbFlushList((__int64)v15, a2 == 0 ? 2 : 0, 20);
  MiInsertTbFlushEntry((__int64)v15, v4, v11, 0);
  MiFlushTbList(v15, v12, v13, v14);
}
