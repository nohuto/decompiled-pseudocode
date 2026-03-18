/*
 * XREFs of MiClearDriverHotPatchPtes @ 0x14088DD78
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 * Callees:
 *     MiInitializeTbFlushList @ 0x14001F414 (MiInitializeTbFlushList.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall MiClearDriverHotPatchPtes(__int64 a1)
{
  __int64 PteAddress; // rax
  unsigned int v3; // edx
  unsigned __int64 v4; // r11
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  unsigned int v7; // edi
  unsigned __int64 v8; // r11
  __int64 v9; // rdx
  int v10; // r8d
  _QWORD *v11; // r11
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16[48]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v16, 0, 0xB8uLL);
  PteAddress = MiGetPteAddress(*(_QWORD *)(a1 + 48));
  v4 = PteAddress + 8LL * ((v3 >> 12) + ((v3 & 0xFFF) != 0));
  v5 = 0;
  v6 = (__int64)(v4 << 25) >> 16;
  v7 = ((unsigned int)dword_1404648B0 >> 12) + ((dword_1404648B0 & 0xFFF) != 0);
  if ( v7 )
  {
    while ( 1 )
    {
      if ( (MI_READ_PTE_LOCK_FREE(v4) & 1) == 0 )
      {
LABEL_14:
        if ( v5 )
        {
          MiInitializeTbFlushList((__int64)v16, 0, 20);
          MiInsertTbFlushEntry((__int64)v16, v6, v5, 0);
          MiFlushTbList(v16, v13, v14, v15);
        }
        return;
      }
      if ( MiPteInShadowRange(v8) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v10 = 1;
          if ( !HIBYTE(word_140465BEC) )
          {
            v12 = (v9 & 1) == 0;
            goto LABEL_9;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
          v12 = (v9 & 1) == 0;
LABEL_9:
          if ( !v12 )
            v9 |= 0x8000000000000000uLL;
        }
      }
      *v11 = v9;
      if ( v10 )
        MiWritePteShadow((__int64)v11);
      v4 = (unsigned __int64)(v11 + 1);
      ++v5;
      if ( !--v7 )
        goto LABEL_14;
    }
  }
}
