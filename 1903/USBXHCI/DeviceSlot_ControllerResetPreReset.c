/*
 * XREFs of DeviceSlot_ControllerResetPreReset @ 0x1C0015A8C
 * Callers:
 *     Controller_InternalReset @ 0x1C000EF9C (Controller_InternalReset.c)
 * Callees:
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall DeviceSlot_ControllerResetPreReset(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rbp

  for ( i = 1; i <= *(_DWORD *)(a1 + 96); ++i )
  {
    if ( *(_BYTE *)(a1 + 80) )
      v3 = *(_QWORD *)(a1 + 24);
    else
      v3 = *(_QWORD *)(a1 + 72);
    result = i;
    v5 = *(_QWORD *)(v3 + 8LL * i);
    if ( v5 )
    {
      v6 = v5 + 176;
      v7 = 31LL;
      do
      {
        if ( *(_QWORD *)v6 )
          result = ESM_AddEvent((PVOID)(*(_QWORD *)v6 + 288LL));
        v6 += 8LL;
        --v7;
      }
      while ( v7 );
    }
  }
  return result;
}
