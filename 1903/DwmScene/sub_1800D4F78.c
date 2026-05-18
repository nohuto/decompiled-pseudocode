/*
 * XREFs of sub_1800D4F78 @ 0x1800D4F78
 * Callers:
 *     sub_1800D5EAC @ 0x1800D5EAC (sub_1800D5EAC.c)
 *     sub_1800D6124 @ 0x1800D6124 (sub_1800D6124.c)
 *     sub_1800D625C @ 0x1800D625C (sub_1800D625C.c)
 *     sub_18010A37C @ 0x18010A37C (sub_18010A37C.c)
 * Callees:
 *     sub_1800E0E9C @ 0x1800E0E9C (sub_1800E0E9C.c)
 *     sub_18011E090 @ 0x18011E090 (sub_18011E090.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void **__fastcall sub_1800D4F78(__int64 *a1)
{
  void **result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  sub_1800E0E9C(a1 + 31);
  sub_1800E0E9C(a1 + 8);
  sub_18011E090(a1 + 5);
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
        JUMPOUT(0x1800D4FFCLL);
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
