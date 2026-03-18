/*
 * XREFs of ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x180169F70
 * Callers:
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180161770 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 * Callees:
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800473A4 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DConstantBuffer::SetData(__int64 a1, unsigned int *a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-28h]
  struct D3D11_MAPPED_SUBRESOURCE v11; // [rsp+30h] [rbp-18h] BYREF

  v4 = CD3DDeviceLevel1::Map(
         *(CD3DDeviceLevel1 **)(*(_QWORD *)(a1 + 16) + 80LL),
         *(struct ID3D11Resource **)(a1 + 120),
         0LL,
         4LL,
         v10,
         &v11);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x45u, 0LL);
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 128);
    if ( v7 >= *a2 )
      v7 = *a2;
    memcpy_0(v11.pData, *((const void **)a2 + 1), v7);
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 80LL) + 640LL);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 120LL))(v8, *(_QWORD *)(a1 + 120), 0LL);
  }
  return v6;
}
