/*
 * XREFs of sub_180080CF0 @ 0x180080CF0
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     LdrAddDllDirectory @ 0x18008C200 (LdrAddDllDirectory.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800DE268 @ 0x1800DE268 (sub_1800DE268.c)
 */

__int64 __fastcall sub_180080CF0(__int64 (__fastcall *a1)(_BYTE *, __int64))
{
  int v1; // eax
  __int16 v3; // bx
  char v4; // al
  __m128i v5; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v6[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v7; // [rsp+48h] [rbp-B8h]
  _BYTE v8[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v9[528]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = 2 * a1(v9, 260LL);
  if ( !v1 )
    return 0LL;
  v6[0] = v1;
  v7 = v9;
  v6[1] = 520;
  if ( !*((_QWORD *)&xmmword_180166318 + 1) )
  {
LABEL_11:
    LdrAddDllDirectory(v6, v8);
    return 0LL;
  }
  v3 = v1 + xmmword_180166318 + 2;
  v5.m128i_i64[1] = RtlAllocateHeap(
                      (__int64)NtCurrentPeb()->ProcessHeap,
                      0,
                      v1 + (unsigned int)(unsigned __int16)xmmword_180166318 + 2LL);
  if ( v5.m128i_i64[1] )
  {
    v5.m128i_i16[0] = 0;
    v5.m128i_i16[1] = v3;
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v5, (__int16 *)&xmmword_180166318);
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v5, v6);
    RtlAppendUnicodeToString((unsigned __int16 *)&v5, ";");
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((__int64 *)&xmmword_180166318 + 1));
    xmmword_180166318 = (__int128)v5;
    *((_QWORD *)&xmmword_180166308 + 1) = _mm_srli_si128(v5, 8).m128i_u64[0];
    sub_1800DE268();
    goto LABEL_11;
  }
  v4 = dword_18015FAB0;
  if ( (dword_18015FAB0 & 3) != 0 )
  {
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3287,
      (unsigned int)"LdrpInitializePerUserWindowsDirectory",
      0,
      (__int64)"Failed to reallocate the system dirs string !\n");
    v4 = dword_18015FAB0;
  }
  if ( (v4 & 0x10) != 0 )
    __debugbreak();
  return 3221225495LL;
}
