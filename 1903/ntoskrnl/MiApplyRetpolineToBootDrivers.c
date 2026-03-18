/*
 * XREFs of MiApplyRetpolineToBootDrivers @ 0x1409F0BB8
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1409EF614 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     RtlIsImageFullyRetpolined @ 0x1401543E8 (RtlIsImageFullyRetpolined.c)
 *     MiMapRetpolineStubs @ 0x1401548C8 (MiMapRetpolineStubs.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140187478 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiLogRetpolineImageLoadEvents @ 0x14070ECE4 (MiLogRetpolineImageLoadEvents.c)
 *     MiMarkRetpolineBits @ 0x14070F8B4 (MiMarkRetpolineBits.c)
 */

__int64 __fastcall MiApplyRetpolineToBootDrivers(__int64 a1)
{
  __int64 *v2; // rdi
  ULONG_PTR v3; // rbx
  PVOID v4; // rsi
  PIMAGE_NT_HEADERS v5; // r14
  unsigned __int64 v6; // rax
  int v7; // eax
  __int64 *i; // rbx
  _QWORD v10[14]; // [rsp+40h] [rbp-A8h] BYREF

  if ( (KiSpeculationFeatures & 0x2000000) != 0 )
  {
    v2 = (__int64 *)(a1 + 16);
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 != a1 + 16 )
    {
      do
      {
        v4 = *(PVOID *)(v3 + 48);
        v5 = RtlImageNtHeader(v4);
        MiLogRetpolineImageLoadEvents(v3);
        if ( (KiSpeculationFeatures & 0x2000000) != 0
          && v4 != PsNtosImageBase
          && v4 != PsHalImageBase
          && (v5->FileHeader.Characteristics & 1) == 0
          && v5->OptionalHeader.NumberOfRvaAndSizes > 5 )
        {
          if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v3 + 48)) )
          {
            v6 = MiMapRetpolineStubs((unsigned __int64)v4);
            if ( (MiFlags & 0x10000) != 0 )
            {
              memset(v10, 0, 0x68uLL);
              v10[1] = v4;
              LOBYTE(v10[2]) = 1;
              v7 = VslpEnterIumSecureMode(2, 220LL, 0LL, (__int64)v10);
            }
            else
            {
              v7 = RtlPerformRetpolineRelocationsOnImageEx(
                     (char *)v4,
                     (__int64)v4,
                     *(_DWORD *)(v3 + 64),
                     v6,
                     (__int64)qword_140464868,
                     1,
                     0,
                     0);
            }
            if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741637 )
              KeBugCheckEx(0x1Au, 0x1080uLL, v3, *(_QWORD *)(v3 + 48), v7);
          }
          if ( (unsigned int)RtlIsImageFullyRetpolined(*(void **)(v3 + 48)) )
            MiMarkRetpolineBits(*(_QWORD *)(v3 + 48));
        }
        v3 = *(_QWORD *)v3;
      }
      while ( (__int64 *)v3 != v2 );
      for ( i = *(__int64 **)(a1 + 16); i != v2; i = (__int64 *)*i )
      {
        if ( (i[13] & 0x1000000) == 0 && !(unsigned int)RtlIsImageFullyRetpolined((void *)i[6]) )
          MiMarkRetpolineBits(i[6]);
      }
    }
  }
  return 0LL;
}
