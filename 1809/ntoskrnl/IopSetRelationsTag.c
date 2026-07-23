/*
 * XREFs of IopSetRelationsTag @ 0x1406EDCB8
 * Callers:
 *     PnpChainDereferenceComplete @ 0x1406EDEA8 (PnpChainDereferenceComplete.c)
 *     PnpInvalidateRelationsInList @ 0x1406EEF50 (PnpInvalidateRelationsInList.c)
 * Callees:
 *     PipIsDeviceInDeviceObjectList @ 0x1406EDD04 (PipIsDeviceInDeviceObjectList.c)
 */

__int64 __fastcall IopSetRelationsTag(_QWORD *a1, __int64 a2)
{
  char IsDeviceInDeviceObjectList; // al
  __int64 v3; // r11
  unsigned int v4; // edx
  __int64 v5; // r8
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  IsDeviceInDeviceObjectList = PipIsDeviceInDeviceObjectList(*a1, a2, &v8);
  v4 = 0;
  if ( IsDeviceInDeviceObjectList )
  {
    v5 = v8;
    v6 = *(_DWORD *)(v8 + 16);
    if ( (v6 & 1) != 0 )
    {
      --*(_DWORD *)(*(_QWORD *)v3 + 8LL);
      v6 = *(_DWORD *)(v5 + 16);
    }
    *(_DWORD *)(v5 + 16) = v6 | 1;
    ++*(_DWORD *)(*(_QWORD *)v3 + 8LL);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return v4;
}
