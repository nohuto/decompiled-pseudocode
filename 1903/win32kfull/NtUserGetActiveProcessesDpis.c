/*
 * XREFs of NtUserGetActiveProcessesDpis @ 0x1C0137320
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00A9364 (GetDpiCacheSlot.c)
 */

__int64 NtUserGetActiveProcessesDpis()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  __int64 i; // r11
  unsigned int DpiCacheSlot; // eax
  __int64 v4; // r11

  EnterCrit(0LL, 1LL);
  v1 = 0;
  for ( i = gppiList; i; i = *(_QWORD *)(v4 + 376) )
  {
    DpiCacheSlot = GetDpiCacheSlot(*(unsigned __int16 *)(i + 284));
    if ( DpiCacheSlot != -1 )
    {
      v0 = DpiCacheSlot;
      v1 |= 1 << DpiCacheSlot;
    }
  }
  UserSessionSwitchLeaveCrit(v0);
  return v1;
}
