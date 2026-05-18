/*
 * XREFs of sub_18012395C @ 0x18012395C
 * Callers:
 *     sub_180121D90 @ 0x180121D90 (sub_180121D90.c)
 * Callees:
 *     sub_18007DD44 @ 0x18007DD44 (sub_18007DD44.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18012395C(__int64 a1, int a2, _QWORD *a3)
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
  *(_QWORD *)(a1 + 48) = sub_18007DD44(a1 + 48, 0LL, 0LL);
  return a1;
}
