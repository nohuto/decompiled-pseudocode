/*
 * XREFs of ?Remove@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1801EC17C
 * Callers:
 *     ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EC548 (-RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 */

__int64 __fastcall CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Remove(
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
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 8LL * v2));
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
