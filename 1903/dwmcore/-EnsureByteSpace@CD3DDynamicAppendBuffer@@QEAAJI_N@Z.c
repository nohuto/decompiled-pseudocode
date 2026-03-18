/*
 * XREFs of ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x180026D5C
 * Callers:
 *     ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x180026D2C (-Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180059BF0 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x180039228 (-CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDynamicAppendBuffer::EnsureByteSpace(CD3DDynamicAppendBuffer *this, UINT a2, char a3)
{
  unsigned int v3; // ebx
  UINT i; // edi
  UINT v6; // ecx
  UINT v7; // eax
  CD3DDeviceLevel1 *v8; // rbx
  int v9; // eax
  unsigned int v10; // ecx
  struct ID3D11Buffer *v11; // r14
  UINT v13; // eax
  UINT v14; // edx
  struct ID3D11Buffer *v15; // [rsp+30h] [rbp-30h] BYREF
  struct ID3D11Buffer *v16; // [rsp+38h] [rbp-28h] BYREF
  D3D11_BUFFER_DESC v17; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0;
  v15 = 0LL;
  i = a2;
  v6 = *((_DWORD *)this + 10);
  if ( a2 > v6 )
  {
    if ( !a3 )
    {
      v13 = a2;
      if ( v6 )
        v13 = v6;
      v14 = v6 + a2;
      for ( i = v13; i < v14; i *= 2 )
        ;
      if ( i > *((_DWORD *)this + 11) )
        i = *((_DWORD *)this + 11);
    }
    v7 = *((_DWORD *)this + 4);
    v17.MiscFlags = 0;
    v17.StructureByteStride = 0;
    v8 = *(CD3DDeviceLevel1 **)this;
    v17.BindFlags = v7;
    v17.ByteWidth = i;
    v17.Usage = D3D11_USAGE_DYNAMIC;
    v17.CPUAccessFlags = 0x10000;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v15);
    v9 = CD3DDeviceLevel1::CreateBuffer(v8, &v17, 0LL, &v15);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x48u, 0LL);
    }
    else
    {
      v11 = v15;
      if ( *((struct ID3D11Buffer **)this + 1) != v15 )
      {
        v16 = v15;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v16);
        v16 = (struct ID3D11Buffer *)*((_QWORD *)this + 1);
        *((_QWORD *)this + 1) = v11;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v16);
      }
      *((_DWORD *)this + 9) = 0;
      *((_DWORD *)this + 10) = i;
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v15);
  return v3;
}
