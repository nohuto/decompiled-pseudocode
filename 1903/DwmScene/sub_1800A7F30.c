/*
 * XREFs of sub_1800A7F30 @ 0x1800A7F30
 * Callers:
 *     sub_1800EB0A0 @ 0x1800EB0A0 (sub_1800EB0A0.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 *     sub_1800EE1A0 @ 0x1800EE1A0 (sub_1800EE1A0.c)
 *     sub_1800F0030 @ 0x1800F0030 (sub_1800F0030.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800A1A44 @ 0x1800A1A44 (sub_1800A1A44.c)
 *     sub_1800A201C @ 0x1800A201C (sub_1800A201C.c)
 *     sub_1800A34AC @ 0x1800A34AC (sub_1800A34AC.c)
 *     sub_1800A4188 @ 0x1800A4188 (sub_1800A4188.c)
 *     sub_1800A630C @ 0x1800A630C (sub_1800A630C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A7F30(__int64 a1, size_t *a2)
{
  unsigned int v4; // edi
  __int64 *v6; // rax
  _QWORD *v7[3]; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v9[4]; // [rsp+78h] [rbp-19h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+98h] [rbp+7h] BYREF

  v7[2] = (_QWORD *)-2LL;
  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_18000E498(v9);
    v6 = sub_18000E498(v8);
    sub_180027770(pExceptionObject, v6, 305, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = sub_1800A34AC(*(_QWORD *)(a1 + 440), a2);
  sub_1800A1A44((_QWORD *)(a1 + 48), (__int64)v7, 0, (const void **)a2);
  sub_1800A630C((__int64)v7);
  *(_QWORD *)(a1 + 64) = sub_1800A4188(*(_QWORD *)(a1 + 440), v7);
  sub_1800A201C((__int64 *)(a1 + 80), (__int64)v7, a2);
  *((_DWORD *)v7[0] + 16) = v4;
  return v4;
}
