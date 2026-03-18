/*
 * XREFs of MiRelocateImageAgain @ 0x14066F490
 * Callers:
 *     MiValidateExistingImage @ 0x14066EF50 (MiValidateExistingImage.c)
 * Callees:
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1400A9194 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1400A9390 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiGetControlAreaLoadConfig @ 0x1400A93C8 (MiGetControlAreaLoadConfig.c)
 *     MiImageUnused @ 0x140128D2C (MiImageUnused.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     MiReturnImageBase @ 0x140607A44 (MiReturnImageBase.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x14066F624 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x14066F6E8 (MiSelectImageBase.c)
 *     MiSwitchBaseAddress @ 0x140670184 (MiSwitchBaseAddress.c)
 */

__int64 __fastcall MiRelocateImageAgain(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  ULONG_PTR v8; // rbp
  int updated; // edi
  __int64 v11; // r13
  __int64 ControlAreaLoadConfig; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned int SessionId; // eax
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+38h] [rbp-50h]
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 96);
  v5 = *(_QWORD *)(v2 + 32);
  if ( !v5 )
    return 0LL;
  v6 = *(_QWORD *)a1;
  v7 = *(_QWORD *)(v2 + 32);
  v16 = -1LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  updated = 0;
  v17 = 0LL;
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v7);
  if ( (*(_DWORD *)(a1 + 92) & 0x400000) == 0 )
  {
    v11 = *(_QWORD *)(v6 + 32);
    v8 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)1);
    if ( !v8 )
    {
      *(_DWORD *)(a1 + 92) |= 0x400000u;
      goto LABEL_3;
    }
    updated = MiSelectImageBase(v6, v5, a2, 0, (__int64)&v18);
    if ( updated >= 0 )
    {
      *(_DWORD *)(a1 + 92) |= 0x400000u;
      ControlAreaLoadConfig = MiGetControlAreaLoadConfig(a1);
      v13 = v18;
      updated = MiUpdateCfgSystemWideBitmap(v14, v18, ControlAreaLoadConfig);
      if ( updated >= 0 )
      {
        if ( v13 == v11 )
        {
LABEL_10:
          updated = 0;
          goto LABEL_3;
        }
        if ( (MiFlags & 0x4000) == 0 || (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 )
        {
LABEL_13:
          if ( a2 )
          {
            SessionId = -1;
          }
          else
          {
            SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
            v13 = v18;
          }
          MiSwitchBaseAddress(a1, v13, v8, SessionId);
          goto LABEL_10;
        }
        if ( qword_140436500 )
        {
          updated = qword_140436500(*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v13);
          if ( updated >= 0 )
            goto LABEL_13;
        }
        else
        {
          updated = -1073741637;
        }
      }
      MiImageUnused(a1, 0, (__int64)&v16);
    }
  }
LABEL_3:
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v5);
  if ( v8 )
    MiReleasePtes((__int64)&qword_1404669C0, v8, 1u);
  MiReturnImageBase((__int64)&v16);
  return (unsigned int)updated;
}
