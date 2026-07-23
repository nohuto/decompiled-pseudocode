/*
 * XREFs of MiSetVadFlags @ 0x1400879D0
 * Callers:
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiRemoveSecureEntry @ 0x1400860B0 (MiRemoveSecureEntry.c)
 *     MiAddSecureEntry @ 0x1405F4490 (MiAddSecureEntry.c)
 *     MiSetImageHotPatchAllowed @ 0x140859224 (MiSetImageHotPatchAllowed.c)
 * Callees:
 *     MiLockVadCore @ 0x140087AC0 (MiLockVadCore.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetVadFlags(__int64 a1, char a2, char a3)
{
  unsigned __int8 v6; // al
  int v7; // r11d
  int v8; // r10d
  int v9; // r14d
  int v10; // edi
  unsigned __int8 v11; // bp
  int v12; // edx
  signed __int32 v13; // eax
  unsigned int v14; // ecx
  signed __int32 v15; // ett
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v6 = MiLockVadCore();
  v7 = a2 & 1;
  v8 = a2 & 4;
  v9 = a2 & 2;
  v10 = a2 & 8;
  v11 = v6;
  v12 = a3 & 1;
  v13 = *(_DWORD *)(a1 + 48);
  do
  {
    v14 = v13;
    if ( v7 )
    {
      v12 = a3 & 1;
      v14 = v13 & 0xF7FFFFFF | (v12 << 27);
    }
    if ( v9 )
      v14 = v14 & 0xEFFFFFFF | (v12 << 28);
    if ( v8 )
      v14 = (v12 << 29) | v14 & 0xDFFFFFFF;
    else
      v12 = a3 & 1;
    if ( v10 )
      v14 = v14 & 0xFBFFFFFF | (v12 << 26);
    v15 = v13;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v14, v13);
  }
  while ( v15 != v13 );
  _InterlockedAnd((volatile signed __int32 *)(a1 + 48), 0x3FFFFFFFu);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v11;
  __writecr8(v11);
  return result;
}
