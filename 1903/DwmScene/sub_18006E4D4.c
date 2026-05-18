/*
 * XREFs of sub_18006E4D4 @ 0x18006E4D4
 * Callers:
 *     sub_1800781BC @ 0x1800781BC (sub_1800781BC.c)
 * Callees:
 *     sub_1800741A4 @ 0x1800741A4 (sub_1800741A4.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_18006E4D4(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Spectre::Utils::Tweening::TweenManager>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  v2 = operator new(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Utils::Tweening::HighPerfClock>::`vftable';
    *((_QWORD *)v2 + 2) = &Spectre::Utils::Tweening::HighPerfClock::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  v5[1] = v3;
  v5[0] = v3 + 4;
  sub_1800741A4(a1 + 16, v5);
  return a1;
}
