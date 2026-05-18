/*
 * XREFs of sub_180123A6C @ 0x180123A6C
 * Callers:
 *     sub_180121EA0 @ 0x180121EA0 (sub_180121EA0.c)
 * Callees:
 *     sub_18007DE54 @ 0x18007DE54 (sub_18007DE54.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180123A6C(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  *(_DWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = a3[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *(_QWORD *)(a1 + 32) = *a3;
  *(_QWORD *)(a1 + 40) = a3[1];
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 48) = sub_18007DE54(a1 + 48, 0LL, 0LL);
  return a1;
}
