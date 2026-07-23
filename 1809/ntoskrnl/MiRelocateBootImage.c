/*
 * XREFs of MiRelocateBootImage @ 0x1409B92CC
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     LdrRelocateImage @ 0x14072B934 (LdrRelocateImage.c)
 *     VslReserveProtectedPages @ 0x140819F5C (VslReserveProtectedPages.c)
 *     MiFreeBootDriverPage @ 0x1409B93FC (MiFreeBootDriverPage.c)
 *     MiUpdateThunks @ 0x1409B953C (MiUpdateThunks.c)
 */

signed int __fastcall MiRelocateBootImage(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        char *a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8)
{
  const CHAR *v12; // rdx
  ULONG v13; // r8d
  ULONG v14; // r9d
  signed int result; // eax
  char *v16; // rbp
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  NTSTATUS v19; // eax
  ULONG BugCheckParameter4; // [rsp+20h] [rbp-C8h]
  char v21[8]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-B0h]
  char *v23; // [rsp+40h] [rbp-A8h]
  __int64 v24; // [rsp+48h] [rbp-A0h]

  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)a4) )
  {
    if ( (MiFlags & 0x8000) != 0 )
    {
      v22 = a3;
      v23 = a4;
      v24 = 1LL;
      v19 = VslpEnterIumSecureMode(2u, 217LL, 0, (__int64)v21);
      if ( v19 < 0 )
        KeBugCheckEx(0x1Au, 0x1080uLL, a2, (ULONG_PTR)a4, v19);
    }
    else if ( *(_DWORD *)(a5 + 176) )
    {
      result = LdrRelocateImage(a4, v12, v13, v14, BugCheckParameter4);
      if ( result < 0 )
        return result;
    }
  }
  *(_QWORD *)(a2 + 48) = a4;
  v16 = &a4[a5 - a3];
  *((_QWORD *)v16 + 6) = a4;
  MiUpdateThunks(a1, a3, a4, *(unsigned int *)(a2 + 64));
  *(_DWORD *)(a2 + 104) |= 0x1000000u;
  *(_QWORD *)(a2 + 56) = &a4[*((unsigned int *)v16 + 10)];
  *(_DWORD *)(a2 + 64) = a6 << 12;
  if ( (MiFlags & 0x8000) != 0 )
    VslReserveProtectedPages(0LL, a3, a6 + a7, 2u);
  v17 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = v17 + 8LL * a6;
  while ( v17 < v18 )
  {
    MiFreeBootDriverPage(v17, a8, 1LL);
    v17 += 8LL;
  }
  return 0;
}
