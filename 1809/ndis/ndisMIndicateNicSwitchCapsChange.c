/*
 * XREFs of ndisMIndicateNicSwitchCapsChange @ 0x1C0014404
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

char __fastcall ndisMIndicateNicSwitchCapsChange(_QWORD *a1, int a2, _BYTE *a3, unsigned int a4, char a5)
{
  char result; // al
  unsigned __int16 v7; // r9
  void *v8; // rcx
  size_t v9; // r8

  result = 0;
  if ( a4 >= 0x20 && *a3 == 0x80 )
  {
    v7 = *((_WORD *)a3 + 1);
    if ( v7 >= 0x20u )
    {
      if ( a3[1] )
      {
        if ( a5 )
          v8 = (void *)a1[450];
        else
          v8 = (void *)(a2 == 1073872960 ? a1[449] : a1[448]);
        if ( v8 )
        {
          v9 = 132LL;
          if ( v7 < 0x84u )
            v9 = v7;
          memmove(v8, a3, v9);
          return 1;
        }
      }
    }
  }
  return result;
}
