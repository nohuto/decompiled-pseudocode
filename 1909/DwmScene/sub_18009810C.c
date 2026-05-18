/*
 * XREFs of sub_18009810C @ 0x18009810C
 * Callers:
 *     sub_180099F28 @ 0x180099F28 (sub_180099F28.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18009810C(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *result; // rax

  v6 = operator new(0x28uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<Spectre::Engine::MeshInstance::MaterialLoadedFnc>::`vftable';
    v8 = *a3;
    v9 = *a2;
    *((_QWORD *)v6 + 2) = &Spectre::Engine::MeshInstance::MaterialLoadedFnc::`vftable';
    *((_QWORD *)v6 + 3) = v9;
    *((_QWORD *)v6 + 4) = v8;
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 4;
  result = a1;
  a1[1] = v7;
  return result;
}
