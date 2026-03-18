/*
 * XREFs of MiSetVadFlags @ 0x1400726E0
 * Callers:
 *     MiRemoveSecureEntry @ 0x1400739F0 (MiRemoveSecureEntry.c)
 *     MiAddSecureEntry @ 0x140609DB0 (MiAddSecureEntry.c)
 *     MiSetImageHotPatchAllowed @ 0x140891BE0 (MiSetImageHotPatchAllowed.c)
 * Callees:
 *     MiLockVadCore @ 0x1400727A0 (MiLockVadCore.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetVadFlags(__int64 a1, char a2, char a3)
{
  unsigned __int8 v6; // al
  int v7; // r10d
  int v8; // r11d
  int v9; // esi
  unsigned __int8 v10; // bp
  int v11; // edx
  signed __int32 v12; // eax
  unsigned int v13; // ecx
  signed __int32 v14; // ett
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v6 = MiLockVadCore();
  v7 = a2 & 1;
  v8 = a2 & 2;
  v9 = a2 & 4;
  v10 = v6;
  v11 = a3 & 1;
  v12 = *(_DWORD *)(a1 + 48);
  do
  {
    v13 = v12;
    if ( v7 )
    {
      v11 = a3 & 1;
      v13 = v12 & 0xFFFFFFF7 | (8 * v11);
    }
    if ( v8 )
      v13 = (4 * v11) | v13 & 0xFFFFFFFB;
    else
      v11 = a3 & 1;
    if ( v9 )
      v13 = v13 & 0xFFBFFFFF | (v11 << 22);
    v14 = v12;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v13, v12);
  }
  while ( v14 != v12 );
  _InterlockedAnd((volatile signed __int32 *)(a1 + 48), 0xFFFFFFFC);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v10;
  __writecr8(v10);
  return result;
}
