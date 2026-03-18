/*
 * XREFs of ?Remove@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x18023A054
 * Callers:
 *     ?OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180239280 (-OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@.c)
 * Callees:
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ??_G?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180237D60 (--_G-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Remove(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // ebx
  int v4; // ecx
  unsigned int v5; // esi
  _QWORD *v6; // rax
  int v8; // edx

  v2 = 0;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = 1;
  if ( v4 <= 0 )
  {
LABEL_5:
    v2 = -1;
  }
  else
  {
    v6 = *(_QWORD **)a1;
    while ( *v6 != *a2 )
    {
      ++v2;
      ++v6;
      if ( v2 >= v4 )
        goto LABEL_5;
    }
  }
  if ( v2 == -1 )
    return 0LL;
  if ( v2 < 0 || v2 >= v4 )
  {
    return 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<CManipulationContext>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)a1 + 8LL * v2));
    v8 = *(_DWORD *)(a1 + 8);
    if ( v2 + 1 != v8 )
    {
      memmove_0((void *)(*(_QWORD *)a1 + 8LL * v2), (const void *)(*(_QWORD *)a1 + 8LL * v2 + 8), 8LL * (v8 - v2 - 1));
      v8 = *(_DWORD *)(a1 + 8);
    }
    *(_DWORD *)(a1 + 8) = v8 - 1;
  }
  return v5;
}
