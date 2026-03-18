/*
 * XREFs of ?Add@?$CMap@IV?$ComPtr@UID3D11VertexShader@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@UID3D11VertexShader@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@UID3D11VertexShader@@@WRL@Microsoft@@@Z @ 0x180028B98
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180028680 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180028D30 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<ID3D11VertexShader>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<ID3D11VertexShader>>>::Add(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  void *v6; // rax
  void *v7; // rcx
  char *v8; // rax
  char *v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // r8
  __int64 *v12; // rcx

  v6 = DefaultHeap::Realloc(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = (char *)DefaultHeap::Realloc(v7, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  v11 = (_DWORD *)(*(_QWORD *)a1 + 4 * v10);
  if ( v11 )
  {
    *v11 = *a2;
    v9 = *(char **)(a1 + 8);
  }
  v12 = (__int64 *)&v9[8 * v10];
  if ( v12 )
  {
    *v12 = *a3;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v12);
  }
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
