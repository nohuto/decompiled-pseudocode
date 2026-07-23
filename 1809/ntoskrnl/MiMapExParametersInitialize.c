/*
 * XREFs of MiMapExParametersInitialize @ 0x14067802C
 * Callers:
 *     MiMapViewOfSectionExCommon @ 0x140677DD0 (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiGetUserReservationHighestAddress @ 0x14069740C (MiGetUserReservationHighestAddress.c)
 */

__int64 __fastcall MiMapExParametersInitialize(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // r8
  __int64 v7; // r11
  unsigned int v8; // r10d
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 UserReservationHighestAddress; // rcx
  unsigned __int64 v12; // rax
  int v13; // edx
  unsigned int v14; // ecx

  v5 = MiSectionControlArea(a2[4]);
  v8 = 0;
  v9 = v5;
  if ( v6[2] )
    return (unsigned int)-1073741811;
  if ( (*(_DWORD *)(v7 + 40) & 0x4000) != 0 )
  {
    if ( *v6 || v6[1] )
      return (unsigned int)-1073741811;
    *(_DWORD *)(v7 + 52) |= 0x4000000u;
    *(_DWORD *)(v7 + 64) |= 2u;
    *(_QWORD *)(v7 + 16) = 4096LL;
  }
  v10 = *v6;
  if ( ((*(_QWORD *)(v7 + 16) - 1LL) & *v6) != 0 || *a2 && (v10 || v6[1] || v6[2]) )
    return (unsigned int)-1073741811;
  UserReservationHighestAddress = v6[1];
  if ( UserReservationHighestAddress )
  {
    if ( UserReservationHighestAddress <= 0x7FFFFFFEFFFFLL && (((_WORD)UserReservationHighestAddress + 1) & 0xFFF) == 0 )
      goto LABEL_8;
    return (unsigned int)-1073741811;
  }
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(a2[5], 0LL);
  *(_QWORD *)(a3 + 8) = UserReservationHighestAddress;
LABEL_8:
  if ( v10 >= UserReservationHighestAddress )
    return (unsigned int)-1073741811;
  v12 = a2[1];
  if ( v12 )
  {
    if ( UserReservationHighestAddress - v10 + 1 < v12 )
      return (unsigned int)-1073741811;
  }
  v13 = *(_DWORD *)(v7 + 40);
  if ( (v13 & 0x7F) != 0 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)(v7 + 48) != v8 )
    return (unsigned int)-1073741811;
  v14 = *(_DWORD *)(a3 + 32);
  if ( v14 > (unsigned __int16)KeNumberNodes || (v13 & 0x40000000) != 0 && (*(_DWORD *)(v9 + 56) & 0x420) != 0 )
    return (unsigned int)-1073741811;
  if ( (v13 & 0x20000000) != 0 && (*(_DWORD *)(v9 + 56) & 0x20) != 0 && (*(_DWORD *)(v7 + 64) & 1) != 0 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(v7 + 48) = v14;
  *(_QWORD *)v7 = *(_QWORD *)a3;
  *(_QWORD *)(v7 + 8) = *(_QWORD *)(a3 + 8);
  *(_DWORD *)(v7 + 40) = v13 & 0xFFFFBFFF;
  return v8;
}
