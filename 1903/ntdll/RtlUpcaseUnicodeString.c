/*
 * XREFs of RtlUpcaseUnicodeString @ 0x18000E4A0
 * Callers:
 *     RtlCreateServiceSid @ 0x18000B430 (RtlCreateServiceSid.c)
 *     sub_180018A84 @ 0x180018A84 (sub_180018A84.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180021450 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateVirtualAccountSid @ 0x1800829B0 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

__int64 __fastcall RtlUpcaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned __int16 v5; // ax
  __int64 v6; // r9
  __int64 v7; // r11
  unsigned __int16 v8; // r8
  unsigned int v10; // eax
  __int64 v11; // rax

  if ( a3 )
  {
    v10 = *a2;
    *(_WORD *)(a1 + 2) = v10;
    v11 = sub_18006D6B8(v10, a2);
    *(_QWORD *)(a1 + 8) = v11;
    if ( !v11 )
      return 3221225495LL;
    v5 = *a2;
  }
  else
  {
    v5 = *a2;
    if ( *a2 > *(_WORD *)(a1 + 2) )
      return 2147483653LL;
  }
  v6 = 0LL;
  v7 = qword_180166510;
  while ( (unsigned int)v6 < v5 >> 1 )
  {
    v8 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v6);
    if ( v8 >= 0x61u )
    {
      if ( v8 <= 0x7Au )
      {
        v8 -= 32;
      }
      else if ( v7 )
      {
        if ( v8 >= 0xC0u )
          v8 += *(_WORD *)(v7
                         + 2LL
                         * ((v8 & 0xF)
                          + (unsigned int)*(unsigned __int16 *)(v7
                                                              + 2LL
                                                              * (((v8 >> 4) & 0xF)
                                                               + (unsigned int)*(unsigned __int16 *)(v7 + 2 * ((unsigned __int64)v8 >> 8))))));
      }
    }
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v6) = v8;
    v6 = (unsigned int)(v6 + 1);
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
