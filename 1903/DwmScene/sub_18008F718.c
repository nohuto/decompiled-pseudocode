/*
 * XREFs of sub_18008F718 @ 0x18008F718
 * Callers:
 *     sub_180090F10 @ 0x180090F10 (sub_180090F10.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18008F718(_QWORD *a1, __int64 *a2, __int16 *a3, __int64 *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // r10
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int16 v13; // cx
  _QWORD *result; // rax

  v8 = operator new(0x38uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler>::`vftable';
    v10 = a2[1];
    if ( v10 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v10 + 12), 1u);
      v10 = a2[1];
    }
    v11 = *a2;
    v12 = *a4;
    v13 = *a3;
    *((_QWORD *)v9 + 2) = &Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler::`vftable';
    *((_QWORD *)v9 + 3) = v11;
    *((_QWORD *)v9 + 4) = v10;
    *((_WORD *)v9 + 20) = v13;
    *((_QWORD *)v9 + 6) = v12;
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 4;
  result = a1;
  a1[1] = v9;
  return result;
}
