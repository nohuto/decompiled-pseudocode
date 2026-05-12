/*
 * XREFs of RaidBusEnumeratorProcessBlockDeviceCharacteristics @ 0x1C003BD70
 * Callers:
 *     <none>
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x1C000DC5C (RaidSrbStatusToNtStatus.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessBlockDeviceCharacteristics(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  _BYTE *v4; // rax
  int v5; // r9d
  unsigned int v7; // ecx

  v4 = *(_BYTE **)(a1 + 40);
  *a4 = 0;
  v5 = *(_BYTE *)(a2 + 3) & 0x3F;
  if ( v5 != 1 && v5 != 18 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_DWORD *)(a2 + 60);
  else
    v7 = *(_DWORD *)(a2 + 16);
  if ( v7 < 9 || v4[3] != 60 || v4[1] != 0xB1 )
    return 3221225473LL;
  if ( (v4[8] & 0x30) == 0x10 )
    *(_BYTE *)(a3 + 57) = 1;
  return 0LL;
}
