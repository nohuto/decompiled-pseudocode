/*
 * XREFs of ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@I@Z @ 0x18003009C
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180030148 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CLinkedShader *__fastcall CLinkedShader::CLinkedShader(CLinkedShader *this, struct ID3D10Blob *a2, int a3)
{
  __int64 *v4; // rcx

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CLinkedShader::`vftable';
  v4 = (__int64 *)((char *)this + 16);
  *v4 = (__int64)a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v4);
  *((_DWORD *)this + 6) = a3;
  *((_QWORD *)this + 4) = &CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::`vftable';
  *((_QWORD *)this + 5) = this;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 6) = (char *)this + 80;
  *((_QWORD *)this + 7) = (char *)this + 80;
  *((_DWORD *)this + 16) = 2;
  *((_DWORD *)this + 17) = 2;
  return this;
}
