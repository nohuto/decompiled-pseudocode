/*
 * XREFs of sub_18009C098 @ 0x18009C098
 * Callers:
 *     sub_18009C320 @ 0x18009C320 (sub_18009C320.c)
 * Callees:
 *     sub_18000FDAC @ 0x18000FDAC (sub_18000FDAC.c)
 *     sub_18009C14C @ 0x18009C14C (sub_18009C14C.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18009C098(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int128 v8; // [rsp+28h] [rbp-20h] BYREF

  v4 = operator new(0x80uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::Bounds>::`vftable';
    v8 = 0LL;
    v6 = a2[1];
    if ( v6 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
      v6 = a2[1];
    }
    *(_QWORD *)&v8 = *a2;
    *((_QWORD *)&v8 + 1) = v6;
    sub_18009C14C(v4 + 4, &v8);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  sub_18000FDAC((__int64)a1, (__int64)(v5 + 4));
  return a1;
}
