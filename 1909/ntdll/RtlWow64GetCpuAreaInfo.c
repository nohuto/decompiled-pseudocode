/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x180066710
 * Callers:
 *     RtlWow64GetCurrentCpuArea @ 0x180066690 (RtlWow64GetCurrentCpuArea.c)
 * Callees:
 *     RtlpGetContextFlagsLocation @ 0x1800667BC (RtlpGetContextFlagsLocation.c)
 *     RtlpGetLegacyContextLength @ 0x1800667D4 (RtlpGetLegacyContextLength.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned __int16 v4; // r11
  unsigned int v6; // r10d
  __int64 v7; // rcx
  unsigned int v8; // r10d
  __int64 v9; // r8
  __int64 v10; // r8
  int v11; // r10d
  __int64 result; // rax
  __int16 v13; // r11
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)(a3 + 24) = a1;
  v4 = a2;
  if ( !a2 )
    v4 = *(_WORD *)(a1 + 2);
  switch ( v4 )
  {
    case 0x14Cu:
      v6 = 0x10000;
LABEL_5:
      RtlpGetLegacyContextLength(v6, &v14, &v15);
      v7 = ~(v15 - 1LL) & (a1 + v15 + 3LL);
      v9 = v7 + v14 + 7LL;
      *(_QWORD *)a3 = v7;
      *(_QWORD *)(a3 + 8) = v9 & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(a3 + 16) = RtlpGetContextFlagsLocation(v7, v8);
      *(_DWORD *)(a3 + 32) = v11;
      *(_QWORD *)(a3 + 40) = (v10 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
      result = 0LL;
      *(_WORD *)(a3 + 36) = v13;
      return result;
    case 0x1C4u:
      v6 = 0x200000;
      goto LABEL_5;
    case 0x8664u:
      v6 = 0x100000;
      goto LABEL_5;
    case 0xAA64u:
      v6 = 0x400000;
      goto LABEL_5;
  }
  return 3221225485LL;
}
