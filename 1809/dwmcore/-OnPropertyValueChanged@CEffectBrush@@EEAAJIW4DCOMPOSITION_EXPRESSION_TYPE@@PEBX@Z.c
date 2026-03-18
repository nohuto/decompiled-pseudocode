/*
 * XREFs of ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800DFC00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1800DFD50 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::OnPropertyValueChanged(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  int v15; // eax
  _DWORD v17[4]; // [rsp+40h] [rbp-28h] BYREF
  char v18; // [rsp+70h] [rbp+8h] BYREF

  v4 = a1 - 72;
  if ( CEffectBrush::HasValidTemplate((CEffectBrush *)(a1 - 72)) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) + 48LL);
    if ( a2 < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _DWORD *))(**(_QWORD **)(a1 + 24) + 32LL))(
              *(_QWORD *)(a1 + 24),
              a2,
              a3,
              a4,
              &v18,
              v17);
      v13 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x312u);
        return v13;
      }
      v14 = 1;
      if ( v18 || (v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10), v17[0] != v15 - 1) )
        v14 = 6;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 64LL))(v4, v14, v4);
    }
    return 0;
  }
  else
  {
    v13 = -2147483634;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147483634, 0x303u);
  }
  return v13;
}
