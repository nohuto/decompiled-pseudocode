/*
 * XREFs of ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x180078884
 * Callers:
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180078830 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x180204410 (-SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::SetupDepthBuffer(CSwapChainBase *this)
{
  int v1; // eax
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned __int8 v5; // al
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // edi
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h]

  v1 = *((_DWORD *)this + 30);
  v18 = 0LL;
  v3 = *((unsigned int *)this + 102);
  LODWORD(v19) = v1;
  HIDWORD(v19) = *((_DWORD *)this + 31);
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 80LL);
  v5 = (*(__int64 (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 248LL))(this);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(v4 + 224) + 56LL))(
         *(_QWORD *)(v4 + 224),
         v19,
         v5,
         &v18);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_18029B920, 9u, v6, 0x183u);
  v9 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(v4, v8, 0);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x56u);
  }
  else if ( (_DWORD)v3 )
  {
    v12 = 0LL;
    v13 = v3;
    do
    {
      v14 = v18;
      v15 = *(_QWORD *)(v12 + *((_QWORD *)this + 48));
      v16 = *(_QWORD *)(v15 + 224);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      *(_QWORD *)(v15 + 224) = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v12 += 8LL;
      --v13;
    }
    while ( v13 );
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v11;
}
