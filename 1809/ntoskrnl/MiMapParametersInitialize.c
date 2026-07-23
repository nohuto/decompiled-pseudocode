/*
 * XREFs of MiMapParametersInitialize @ 0x1405F1080
 * Callers:
 *     MmMapSecureViewOfSection @ 0x140619574 (MmMapSecureViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x140677DD0 (MiMapViewOfSectionExCommon.c)
 *     NtMapViewOfSection @ 0x140678170 (NtMapViewOfSection.c)
 *     MmMapViewOfSection @ 0x140679D20 (MmMapViewOfSection.c)
 * Callees:
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiGetUserReservationHighestAddress @ 0x14069740C (MiGetUserReservationHighestAddress.c)
 */

__int64 __fastcall MiMapParametersInitialize(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 v11; // rdi
  int v12; // r10d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rdx
  unsigned __int64 UserReservationHighestAddress; // rax

  v11 = MiSectionControlArea(a2);
  memset(a1, 0, 0x78uLL);
  v12 = a6;
  *((_QWORD *)a1 + 11) = KeGetCurrentThread()->ApcState.Process;
  *((_QWORD *)a1 + 10) = a3;
  v13 = (unsigned __int16)KeNumberNodes;
  v14 = a6 & 0x7F;
  *((_BYTE *)a1 + 96) = KeGetCurrentThread()->PreviousMode;
  *((_DWORD *)a1 + 12) = v14;
  if ( v14 > v13 )
    return 3221225485LL;
  *((_DWORD *)a1 + 10) = a6 & 0xFFFFFF80;
  *((_DWORD *)a1 + 11) = a7;
  if ( a4 )
    *((_DWORD *)a1 + 16) |= 1u;
  *((_QWORD *)a1 + 3) = a5;
  if ( (*(_DWORD *)(v11 + 56) & 0x20) == 0 && (*((_DWORD *)a1 + 16) & 1) != 0 )
  {
    UserReservationHighestAddress = MiGetUserReservationHighestAddress(a3, 0LL);
  }
  else
  {
    v15 = 0x7FFFFFFEFFFFLL;
    if ( a8 )
    {
      v15 = 0xFFFFFFFFFFFFFFFFuLL >> a8;
      if ( 0xFFFFFFFFFFFFFFFFuLL >> a8 > 0x7FFFFFFEFFFFLL )
        v15 = 0x7FFFFFFEFFFFLL;
    }
    UserReservationHighestAddress = *(_QWORD *)(a3 + 1152) - 1LL;
    if ( v15 <= UserReservationHighestAddress )
      UserReservationHighestAddress = v15;
  }
  *((_QWORD *)a1 + 1) = UserReservationHighestAddress;
  *((_QWORD *)a1 + 2) = 0x10000LL;
  if ( (*(_DWORD *)(v11 + 56) & 0x420) == 0 )
  {
    if ( (v12 & 0x20000000) != 0 )
    {
      *((_QWORD *)a1 + 2) = 0x200000LL;
    }
    else if ( (v12 & 0x40000000) != 0 )
    {
      *((_QWORD *)a1 + 2) = 4096LL;
    }
  }
  return 0LL;
}
