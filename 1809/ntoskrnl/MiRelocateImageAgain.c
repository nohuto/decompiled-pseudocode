/*
 * XREFs of MiRelocateImageAgain @ 0x140650760
 * Callers:
 *     MiValidateExistingImage @ 0x140650344 (MiValidateExistingImage.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1400D935C (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1400D955C (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiGetControlAreaLoadConfig @ 0x1400D9594 (MiGetControlAreaLoadConfig.c)
 *     MiImageUnused @ 0x1401278F0 (MiImageUnused.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MiReturnImageBase @ 0x1405F1514 (MiReturnImageBase.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x140650904 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x1406509BC (MiSelectImageBase.c)
 *     MiSwitchBaseAddress @ 0x140650E74 (MiSwitchBaseAddress.c)
 */

__int64 __fastcall MiRelocateImageAgain(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int v7; // r13d
  ULONG_PTR v8; // rsi
  int updated; // edi
  __int64 ControlAreaLoadConfig; // rax
  __int64 v12; // rbp
  __int64 v13; // rcx
  unsigned int SessionId; // eax
  _QWORD v15[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF
  __int64 v17; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 96);
  v5 = *(_QWORD *)(v2 + 32);
  if ( !v5 )
    return 0LL;
  v6 = *(_QWORD *)a1;
  v15[0] = 0xFFFFFFFFLL;
  v7 = -1;
  v15[1] = 0LL;
  v8 = 0LL;
  updated = 0;
  CurrentThread = KeGetCurrentThread();
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( (*(_DWORD *)(a1 + 92) & 0x1000000) == 0 )
  {
    v17 = *(_QWORD *)(v6 + 32);
    v8 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)1);
    if ( !v8 )
    {
      *(_DWORD *)(a1 + 92) |= 0x1000000u;
      goto LABEL_3;
    }
    updated = MiSelectImageBase(v5, v6, a2, 0, (__int64)&v16);
    if ( updated >= 0 )
    {
      *(_DWORD *)(a1 + 92) |= 0x1000000u;
      ControlAreaLoadConfig = MiGetControlAreaLoadConfig(a1);
      v12 = v16;
      updated = MiUpdateCfgSystemWideBitmap(v13, v16, ControlAreaLoadConfig);
      if ( updated >= 0 )
      {
        if ( v12 == v17 )
        {
LABEL_10:
          updated = 0;
          goto LABEL_3;
        }
        if ( (MiFlags & 0x4000) == 0 || (*(_DWORD *)(a1 + 92) & 0x180000) == 0 )
        {
LABEL_13:
          if ( !a2 )
          {
            SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            v12 = v16;
            v7 = SessionId;
          }
          MiSwitchBaseAddress(a1, v12, v8, v7);
          goto LABEL_10;
        }
        if ( qword_14040EE40 )
        {
          updated = qword_14040EE40(*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v12);
          if ( updated >= 0 )
            goto LABEL_13;
        }
        else
        {
          updated = -1073741637;
        }
      }
      MiImageUnused(a1, 0, (__int64)v15);
    }
  }
LABEL_3:
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( v8 )
    MiReleasePtes((__int64)&qword_14043C060, v8, 1u);
  MiReturnImageBase((unsigned int *)v15);
  return (unsigned int)updated;
}
