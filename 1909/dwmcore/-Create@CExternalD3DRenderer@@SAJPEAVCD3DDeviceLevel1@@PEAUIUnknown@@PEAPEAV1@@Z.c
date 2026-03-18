/*
 * XREFs of ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x18023DDA0
 * Callers:
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18017A510 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x1800475A4 (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExternalD3DRenderer::Create(
        struct CD3DDeviceLevel1 *a1,
        struct IUnknown *a2,
        struct CExternalD3DRenderer **a3)
{
  volatile signed __int32 *v6; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rbx
  unsigned int v10; // edi

  v6 = (volatile signed __int32 *)DefaultHeap::Alloc(0x80uLL);
  v8 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 2) = 0LL;
    *((_DWORD *)v6 + 2) = 0;
    *((_BYTE *)v6 + 68) = 0;
    *((_DWORD *)v6 + 24) = 0;
    *((_QWORD *)v6 + 9) = v6 + 26;
    *((_QWORD *)v6 + 10) = v6 + 26;
    *((_DWORD *)v6 + 22) = 2;
    *((_DWORD *)v6 + 23) = 2;
    *((_DWORD *)v6 + 16) = 0;
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *(_QWORD *)v6 = &CExternalD3DRenderer::`vftable'{for `CMILPoolResource'};
    *((_QWORD *)v6 + 3) = &CDWMSwapChainDDA::`vftable'{for `IDeviceResource'};
    *((_BYTE *)v6 + 69) = 0;
    *((_QWORD *)v6 + 15) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    CD3DResource::Init((CD3DResource *)v8, (struct CD3DDeviceLevel1 *)((char *)a1 + 896), 0);
    v9 = *((_QWORD *)v8 + 15);
    *((_QWORD *)v8 + 15) = a2;
    if ( a2 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *a3 = (struct CExternalD3DRenderer *)v8;
    return 0;
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x12u, 0LL);
  }
  return v10;
}
