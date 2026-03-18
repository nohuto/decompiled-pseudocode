/*
 * XREFs of NVMeHwUnitControl @ 0x1C000B3A0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeLunCompleteAllIORequests @ 0x1C000E954 (NVMeLunCompleteAllIORequests.c)
 *     NVMeGetRichDeviceDescription @ 0x1C0012ABC (NVMeGetRichDeviceDescription.c)
 */

_BOOL8 __fastcall NVMeHwUnitControl(__int64 a1, int a2, __int64 a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax

  if ( !a2 )
  {
    v14 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 )
      *(_BYTE *)(a3 + 4) = 1;
    if ( v14 > 1 )
    {
      *(_BYTE *)(a3 + 5) = 1;
      v14 = *(_DWORD *)a3;
    }
    if ( v14 > 2 )
    {
      *(_BYTE *)(a3 + 6) = 1;
      v14 = *(_DWORD *)a3;
    }
    if ( v14 > 3 )
    {
      *(_BYTE *)(a3 + 7) = 1;
      v14 = *(_DWORD *)a3;
    }
    if ( v14 > 9 )
    {
      *(_BYTE *)(a3 + 13) = 1;
      v14 = *(_DWORD *)a3;
    }
    if ( v14 > 0xA )
    {
      *(_BYTE *)(a3 + 14) = 1;
      v14 = *(_DWORD *)a3;
    }
    if ( v14 > 0xB )
      *(_BYTE *)(a3 + 15) = 1;
    return 0;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    if ( *(_DWORD *)(a3 + 8) == 2 )
      *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFBF | (*(_BYTE *)(a3 + 12) != 0 ? 0x40 : 0);
    return 0;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v13 = *(unsigned __int8 *)(a3 + 10);
    return (unsigned int)v13 >= *(_DWORD *)(a1 + 184) || !*(_QWORD *)(a1 + 8 * v13 + 1640);
  }
  v6 = v5 - 1;
  if ( !v6 )
    return 0;
  v7 = v6 - 6;
  if ( !v7 )
  {
    v12 = *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a3 + 10) + 1640);
    if ( v12 )
      *(_DWORD *)(v12 + 20) |= 4u;
    return 0;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = *(unsigned __int8 *)(a3 + 10);
    v11 = *(_QWORD *)(a1 + 8 * v10 + 1640);
    if ( v11 )
    {
      *(_DWORD *)(v11 + 20) |= 4u;
      LOBYTE(v10) = *(_BYTE *)(a3 + 10);
    }
    NVMeLunCompleteAllIORequests(a1, (unsigned __int8)v10);
    return 0;
  }
  if ( v8 != 1 )
    return 1;
  return NVMeGetRichDeviceDescription(a1, a3) != 0;
}
