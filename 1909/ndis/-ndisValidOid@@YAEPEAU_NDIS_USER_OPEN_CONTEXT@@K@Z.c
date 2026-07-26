/*
 * XREFs of ?ndisValidOid@@YAEPEAU_NDIS_USER_OPEN_CONTEXT@@K@Z @ 0x1C001203C
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 *     ?ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E3@Z @ 0x1C000A244 (-ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisValidOid(struct _NDIS_USER_OPEN_CONTEXT *a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // edx

  v2 = *((_QWORD *)a1 + 1);
  if ( *(_BYTE *)(v2 + 32) < 6u && (a2 & 0xFF000000) == 0xFF000000 || (*(_DWORD *)(v2 + 120) & 0x80u) != 0 )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v4 = *((_QWORD *)a1 + 2);
    v5 = 0;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v4 + 4);
      if ( v6 )
      {
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4LL * v5) == a2 )
            break;
          ++v5;
        }
        while ( v5 < v6 );
      }
      LOBYTE(v4) = v5 < v6;
    }
  }
  return v4;
}
