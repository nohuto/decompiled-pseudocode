/*
 * XREFs of sub_1800A8040 @ 0x1800A8040
 * Callers:
 *     sub_1800EB1B0 @ 0x1800EB1B0 (sub_1800EB1B0.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_1800EE2B0 @ 0x1800EE2B0 (sub_1800EE2B0.c)
 *     sub_1800F0140 @ 0x1800F0140 (sub_1800F0140.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_1800A1B54 @ 0x1800A1B54 (sub_1800A1B54.c)
 *     sub_1800A212C @ 0x1800A212C (sub_1800A212C.c)
 *     sub_1800A35BC @ 0x1800A35BC (sub_1800A35BC.c)
 *     sub_1800A4298 @ 0x1800A4298 (sub_1800A4298.c)
 *     sub_1800A641C @ 0x1800A641C (sub_1800A641C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A8040(__int64 a1, size_t *a2)
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
    sub_18000E4E8(v9);
    v6 = sub_18000E4E8(v8);
    sub_180027880(pExceptionObject, v6, 305, (__int64)v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = sub_1800A35BC(*(_QWORD *)(a1 + 440), a2);
  sub_1800A1B54((_QWORD *)(a1 + 48), (__int64)v7, 0, (const void **)a2);
  sub_1800A641C((__int64)v7);
  *(_QWORD *)(a1 + 64) = sub_1800A4298(*(_QWORD *)(a1 + 440), v7);
  sub_1800A212C((__int64 *)(a1 + 80), (__int64)v7, a2);
  *((_DWORD *)v7[0] + 16) = v4;
  return v4;
}
