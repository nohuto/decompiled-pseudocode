/*
 * XREFs of sub_1800D5088 @ 0x1800D5088
 * Callers:
 *     sub_1800D5FBC @ 0x1800D5FBC (sub_1800D5FBC.c)
 *     sub_1800D6234 @ 0x1800D6234 (sub_1800D6234.c)
 *     sub_1800D636C @ 0x1800D636C (sub_1800D636C.c)
 *     sub_18010A48C @ 0x18010A48C (sub_18010A48C.c)
 * Callees:
 *     sub_1800E0FAC @ 0x1800E0FAC (sub_1800E0FAC.c)
 *     sub_18011E1A0 @ 0x18011E1A0 (sub_18011E1A0.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void **__fastcall sub_1800D5088(__int64 *a1)
{
  void **result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  sub_1800E0FAC(a1 + 31);
  sub_1800E0FAC(a1 + 8);
  sub_18011E1A0(a1 + 5);
  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  a1[4] = (__int64)&Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  v3 = a1[3];
  if ( v3 >= 0x10 )
  {
    v4 = *a1;
    v5 = v3 + 1;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v4 - 8);
      v7 = v5 + 39;
      v8 = v4 - v6;
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v7);
        JUMPOUT(0x1800D510CLL);
      }
      v4 = v6;
    }
    result = (void **)j_j__o_free(v4);
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  return result;
}
