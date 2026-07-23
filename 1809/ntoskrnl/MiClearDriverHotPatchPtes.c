/*
 * XREFs of MiClearDriverHotPatchPtes @ 0x140855B60
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1400EDC04 (MiInitializeTbFlushList.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiClearDriverHotPatchPtes(__int64 a1)
{
  __int64 PteAddress; // rax
  unsigned int v2; // edx
  unsigned __int64 v3; // r11
  unsigned int v4; // ebx
  unsigned __int64 v5; // rsi
  unsigned int v6; // edi
  unsigned __int64 v7; // r11
  __int64 v8; // rdx
  int v9; // r8d
  __int64 *v10; // r11
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15[48]; // [rsp+20h] [rbp-D8h] BYREF

  PteAddress = MiGetPteAddress(*(_QWORD *)(a1 + 48));
  v3 = PteAddress + 8LL * ((v2 >> 12) + ((v2 & 0xFFF) != 0));
  v4 = 0;
  v5 = (__int64)(v3 << 25) >> 16;
  v6 = ((unsigned int)dword_140439F34 >> 12) + ((dword_140439F34 & 0xFFF) != 0);
  if ( v6 )
  {
    while ( 1 )
    {
      if ( (MI_READ_PTE_LOCK_FREE(v3) & 1) == 0 )
      {
LABEL_14:
        if ( v4 )
        {
          MiInitializeTbFlushList((__int64)v15, 0, 20);
          MiInsertTbFlushEntry((__int64)v15, v5, v4, 0);
          MiFlushTbList(v15, v12, v13, v14);
        }
        return;
      }
      if ( MiPteInShadowRange(v7) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v9 = 1;
          if ( !HIBYTE(word_14043B26C) )
          {
            v11 = (v8 & 1) == 0;
            goto LABEL_9;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          v11 = (v8 & 1) == 0;
LABEL_9:
          if ( !v11 )
            v8 |= 0x8000000000000000uLL;
        }
      }
      *v10 = v8;
      if ( v9 )
        MiWritePteShadow((__int64)v10, v8);
      v3 = (unsigned __int64)(v10 + 1);
      ++v4;
      if ( !--v6 )
        goto LABEL_14;
    }
  }
}
