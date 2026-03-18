/*
 * XREFs of ?GetVertexShaderNoRef@CD3DDeviceLevel1@@QEBAPEAUID3D11VertexShader@@I@Z @ 0x1801BAD88
 * Callers:
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802570F0 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 */

struct ID3D11VertexShader *__fastcall CD3DDeviceLevel1::GetVertexShaderNoRef(CD3DDeviceLevel1 *this, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  int v5; // eax
  _DWORD *v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v4 = *((int *)this + 296);
  v5 = 0;
  if ( (int)v4 <= 0 )
  {
LABEL_5:
    v5 = -1;
  }
  else
  {
    v6 = (_DWORD *)*((_QWORD *)this + 146);
    v7 = 0LL;
    while ( *v6 != a2 )
    {
      ++v5;
      ++v7;
      ++v6;
      if ( v7 >= v4 )
        goto LABEL_5;
    }
  }
  if ( v5 == -1 )
  {
    v9 = 0LL;
  }
  else
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 147) + 8LL * v5);
    v9 = v2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v9);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v9);
  return (struct ID3D11VertexShader *)v2;
}
