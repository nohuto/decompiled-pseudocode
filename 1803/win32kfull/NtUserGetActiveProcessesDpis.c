/*
 * XREFs of NtUserGetActiveProcessesDpis @ 0x1C0108D70
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiCacheSlot @ 0x1C0039D4C (GetDpiCacheSlot.c)
 */

__int64 NtUserGetActiveProcessesDpis()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 i; // r11
  unsigned int DpiCacheSlot; // eax
  __int64 v7; // r11

  EnterCrit(0LL, 1LL);
  v4 = 0;
  for ( i = gppiList; i; i = *(_QWORD *)(v7 + 376) )
  {
    DpiCacheSlot = GetDpiCacheSlot(*(unsigned __int16 *)(i + 284));
    if ( DpiCacheSlot != -1 )
    {
      v1 = DpiCacheSlot;
      v0 = (unsigned int)(1 << DpiCacheSlot);
      v4 |= v0;
    }
  }
  UserSessionSwitchLeaveCrit(v1, v0, v2, v3);
  return v4;
}
