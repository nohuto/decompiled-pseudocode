/*
 * XREFs of ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x1800372D8
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180035C10 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180037368 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x1800376A8 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::GetConstantBuffer(
        CRenderingTechnique *this,
        struct CD3DDeviceLevel1 *a2,
        struct ID3D11Buffer **a3)
{
  struct ID3D11Buffer *v5; // rcx
  int ResourceNoRef; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  int updated; // eax
  unsigned int v10; // ecx

  v5 = 0LL;
  if ( *((_DWORD *)this + 20) || *((_DWORD *)this + 68) )
  {
    ResourceNoRef = CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
                      (CRenderingTechnique *)((char *)this + 16),
                      a2);
    v8 = ResourceNoRef;
    if ( ResourceNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ResourceNoRef, 0x148u, 0LL);
      return v8;
    }
    updated = CRenderingTechnique::UpdateConstantBuffers(this);
    v8 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, updated, 0x14Au, 0LL);
      return v8;
    }
    v5 = (struct ID3D11Buffer *)MEMORY[0x78];
  }
  *a3 = v5;
  if ( v5 )
    ((void (__fastcall *)(struct ID3D11Buffer *))v5->lpVtbl->AddRef)(v5);
  return 0;
}
