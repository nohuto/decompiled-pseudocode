/*
 * XREFs of MiApplyRetpolineToBootDrivers @ 0x1409B98C4
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlIsImageFullyRetpolined @ 0x1401B6140 (RtlIsImageFullyRetpolined.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1402F7294 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     MiMapRetpolineStubs @ 0x140854EDC (MiMapRetpolineStubs.c)
 *     MiMarkRetpolineBits @ 0x140854FB0 (MiMarkRetpolineBits.c)
 */

__int64 __fastcall MiApplyRetpolineToBootDrivers(__int64 a1)
{
  __int64 *v2; // rdi
  ULONG_PTR v3; // rbx
  PVOID v4; // rsi
  unsigned __int64 v5; // rbp
  PIMAGE_NT_HEADERS v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 *i; // rbx
  _BYTE v11[8]; // [rsp+40h] [rbp-98h] BYREF
  PVOID v12; // [rsp+48h] [rbp-90h]
  char v13; // [rsp+50h] [rbp-88h]

  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    v2 = (__int64 *)(a1 + 16);
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 != a1 + 16 )
    {
      do
      {
        v4 = *(PVOID *)(v3 + 48);
        v5 = ((unsigned __int64)*(unsigned int *)(v3 + 64) + 4095) >> 12;
        v6 = RtlImageNtHeader(v4);
        if ( v4 != PsNtosImageBase
          && v4 != PsHalImageBase
          && (v6->FileHeader.Characteristics & 1) == 0
          && v6->OptionalHeader.NumberOfRvaAndSizes > 5 )
        {
          if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v3 + 48)) )
          {
            v7 = MiMapRetpolineStubs((__int64)v4, v5);
            if ( (MiFlags & 0x10000) != 0 )
            {
              v12 = v4;
              v13 = 1;
              v8 = VslpEnterIumSecureMode(2u, 221LL, 0, (__int64)v11);
            }
            else
            {
              v8 = RtlPerformRetpolineRelocationsOnImageEx(
                     (char *)v4,
                     (__int64)v4,
                     *(_DWORD *)(v3 + 64),
                     v7,
                     (__int64)qword_140439F10,
                     1,
                     0,
                     0);
            }
            if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -1073741637 )
              KeBugCheckEx(0x1Au, 0x1080uLL, v3, *(_QWORD *)(v3 + 48), v8);
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
