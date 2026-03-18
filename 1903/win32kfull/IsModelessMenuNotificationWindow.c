/*
 * XREFs of IsModelessMenuNotificationWindow @ 0x1C000CAEC
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C000C8BC (xxxDWP_DoNCActivate.c)
 *     GetActiveTrackPwnd @ 0x1C01E3604 (GetActiveTrackPwnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsModelessMenuNotificationWindow(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 600LL);
  if ( v2 )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) == a1 )
        break;
      v2 = *(_QWORD *)(v2 + 48);
    }
    while ( v2 );
    if ( v2 && (*(_DWORD *)(v2 + 8) & 0x100) != 0 )
      return 1;
  }
  return v1;
}
