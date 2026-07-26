/*
 * XREFs of ndisPnPIrpQueryPnPDeviceState @ 0x1C00D1C4C
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C8490 (ndisPnPDispatch.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 */

__int64 __fastcall ndisPnPIrpQueryPnPDeviceState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  int v5; // eax

  v5 = *(_DWORD *)(a2 + 124);
  if ( (v5 & 0x1000) != 0 )
  {
    *(_QWORD *)(a3 + 56) |= 2uLL;
    v5 = *(_DWORD *)(a2 + 124);
  }
  if ( (v5 & 0x100) != 0 && (*(_DWORD *)(a2 + 4460) & 4) == 0 )
  {
    if ( (unsigned __int8)byte_1C00A025C >= 2u )
      WPP_SF_q(0x2Fu, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a2);
    if ( (byte_1C00A2082 & 0x20) != 0 )
      McTemplateK0jqxq(
        a1,
        &QueryPnPDeviceStateFailed,
        (const GUID *)(a2 + 4040),
        a2 + 4040,
        *(_DWORD *)(a2 + 4088),
        *(_QWORD *)(a2 + 4056),
        51);
    *(_QWORD *)(a3 + 56) |= 4uLL;
  }
  if ( *(_DWORD *)(a2 + 3480) )
    *(_QWORD *)(a3 + 56) |= 0x20uLL;
  *(_DWORD *)(a3 + 48) = 0;
  *a5 = 1;
  return 0LL;
}
