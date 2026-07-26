/*
 * XREFs of ndisGetRdmaCapabilities @ 0x1C00F7604
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00B5800 (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisNDKWmiGetAdapterCapabilities @ 0x1C00F7B20 (ndisNDKWmiGetAdapterCapabilities.c)
 */

__int64 __fastcall ndisGetRdmaCapabilities(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  unsigned int v3; // edi
  unsigned int v5; // eax
  __int64 v6; // rbx

  v2 = a2[23];
  v3 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 48) + 24LL) + 24LL) )
  {
    if ( *(_QWORD *)(a1 + 4136) )
    {
      v5 = *(_DWORD *)(v2 + 8);
      if ( v5 < 0x88 || *(_DWORD *)(v2 + 16) )
      {
        return (unsigned int)-1073741811;
      }
      else
      {
        v6 = v5 < 0x90 ? 136 : 144;
        ndisNDKWmiGetAdapterCapabilities(a1, v6, a2[3]);
        a2[7] = v6;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
