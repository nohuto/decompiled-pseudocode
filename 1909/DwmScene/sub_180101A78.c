/*
 * XREFs of sub_180101A78 @ 0x180101A78
 * Callers:
 *     sub_180101D20 @ 0x180101D20 (sub_180101D20.c)
 * Callees:
 *     sub_18000FDFC @ 0x18000FDFC (sub_18000FDFC.c)
 *     sub_180101B2C @ 0x180101B2C (sub_180101B2C.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180101A78(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int128 v8; // [rsp+28h] [rbp-20h] BYREF

  v4 = operator new(0xB8uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::Aimer>::`vftable';
    v8 = 0LL;
    v6 = a2[1];
    if ( v6 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
      v6 = a2[1];
    }
    *(_QWORD *)&v8 = *a2;
    *((_QWORD *)&v8 + 1) = v6;
    sub_180101B2C(v4 + 4, &v8);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  sub_18000FDFC((__int64)a1, (__int64)(v5 + 4));
  return a1;
}
