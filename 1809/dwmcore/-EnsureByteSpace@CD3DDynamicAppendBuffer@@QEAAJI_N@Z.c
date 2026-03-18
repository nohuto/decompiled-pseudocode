/*
 * XREFs of ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x1800D7080
 * Callers:
 *     ?AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV?$span@$$CBG$0?0@gsl@@IPEAPEAX@Z @ 0x18003A860 (-AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV-$span@$$CBG$0-0@gsl@@IPEAPEAX@Z.c)
 *     ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x1800D7050 (-Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x1800943E0 (-CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDynamicAppendBuffer::EnsureByteSpace(CD3DDynamicAppendBuffer *this, UINT a2, char a3)
{
  unsigned int v3; // esi
  UINT i; // ebx
  UINT v6; // ecx
  UINT v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  struct ID3D11Buffer *v10; // r14
  UINT v12; // eax
  UINT v13; // edx
  struct ID3D11Buffer *v14; // [rsp+30h] [rbp-30h] BYREF
  struct ID3D11Buffer *v15; // [rsp+38h] [rbp-28h] BYREF
  struct D3D11_BUFFER_DESC v16; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0;
  v14 = 0LL;
  i = a2;
  v6 = *((_DWORD *)this + 10);
  if ( a2 > v6 )
  {
    if ( !a3 )
    {
      v12 = a2;
      if ( v6 )
        v12 = v6;
      v13 = v6 + a2;
      for ( i = v12; i < v13; i *= 2 )
        ;
      if ( i > *((_DWORD *)this + 11) )
        i = *((_DWORD *)this + 11);
    }
    v7 = *((_DWORD *)this + 4);
    v16.MiscFlags = 0;
    v16.StructureByteStride = 0;
    v16.BindFlags = v7;
    v16.ByteWidth = i;
    v16.Usage = D3D11_USAGE_DYNAMIC;
    v16.CPUAccessFlags = 0x10000;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v14);
    v8 = CD3DDeviceLevel1::CreateBuffer(*(CD3DDeviceLevel1 **)this, &v16, 0LL, &v14);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x48u);
    }
    else
    {
      v10 = v14;
      if ( *((struct ID3D11Buffer **)this + 1) != v14 )
      {
        v15 = v14;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v15);
        v15 = (struct ID3D11Buffer *)*((_QWORD *)this + 1);
        *((_QWORD *)this + 1) = v10;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v15);
      }
      *((_DWORD *)this + 9) = 0;
      *((_DWORD *)this + 10) = i;
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v14);
  return v3;
}
