/*
 * XREFs of Crashdump_Endpoint_EventRingCallback @ 0x1C003D420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_Endpoint_EventRingCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned __int8 v5; // al
  int v6; // r8d
  unsigned int v7; // ecx

  *a3 = 1;
  v5 = *(_BYTE *)(a2 + 11);
  if ( v5 != 1 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Event Data Trb was not successful Error=%x\n", v5);
    return (unsigned int)-1073741823;
  }
  v6 = *(_DWORD *)(a2 + 12);
  v7 = 0;
  if ( (v6 & 0xFC00) == 0x8000 && (v6 & 4) != 0 )
  {
    if ( *(_QWORD *)a2 != *(_QWORD *)(a1 + 168) )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Event Data Trb was not the one we were looking for.\n");
      return (unsigned int)-1073741823;
    }
    *(_OWORD *)(a1 + 184) = *(_OWORD *)a2;
    *a3 = 0;
  }
  return v7;
}
