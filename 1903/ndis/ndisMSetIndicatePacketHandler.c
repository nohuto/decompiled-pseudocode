/*
 * XREFs of ndisMSetIndicatePacketHandler @ 0x1C002CE3C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMSetIndicatePacketHandler(__int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(struct _NDIS_MINIPORT_BLOCK *); // rdx
  bool v3; // cf

  result = *(unsigned int *)(a1 + 464);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 3 )
    {
      v2 = *(__int64 (__fastcall **)(struct _NDIS_MINIPORT_BLOCK *))(a1 + 1896);
      goto LABEL_4;
    }
    v2 = ndisMIndicatePacket;
  }
  else
  {
    v2 = ethFilterDprIndicateReceivePacket;
  }
  *(_QWORD *)(a1 + 1896) = v2;
LABEL_4:
  v3 = *(_BYTE *)(a1 + 32) < 6u;
  *(_QWORD *)(a1 + 2152) = v2;
  *(_QWORD *)(a1 + 3392) = v2;
  *(_BYTE *)(a1 + 2676) = 1;
  if ( v3 && *(_DWORD *)(a1 + 2240) == 1 )
  {
    v2 = (__int64 (__fastcall *)(struct _NDIS_MINIPORT_BLOCK *))ndisMIndicatePacketsToNetBufferLists;
    *(_QWORD *)(a1 + 1896) = ndisMIndicatePacketsToNetBufferLists;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x20000000) != 0 )
  {
    *(_QWORD *)(a1 + 432) = v2;
    *(_BYTE *)(a1 + 2664) = 1;
  }
  return result;
}
