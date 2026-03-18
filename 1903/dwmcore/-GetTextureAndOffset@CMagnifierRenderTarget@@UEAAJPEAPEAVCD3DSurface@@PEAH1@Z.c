/*
 * XREFs of ?GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z @ 0x1801AA1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x1800B25D4 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierRenderTarget::GetTextureAndOffset(
        CMagnifierRenderTarget *this,
        struct CD3DSurface **a2,
        int *a3,
        int *a4)
{
  __int64 v5; // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  signed int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  signed int D3DSurfaceLevel; // eax
  __int64 v17; // rcx
  CD3DTexture *v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  v5 = *((_QWORD *)this + 13);
  v19 = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v5 + 8LL * *((unsigned int *)this + 126));
  v10 = (**v9)(v9, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, &v20);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x220u, 0LL);
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(__int64, CD3DTexture **))(*(_QWORD *)v20 + 232LL))(v20, &v19);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v13, 0x225u, 0LL);
    }
    else
    {
      D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(v19, v14, a2);
      v12 = D3DSurfaceLevel;
      if ( D3DSurfaceLevel < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, D3DSurfaceLevel, 0x22Au, 0LL);
      }
      else
      {
        *a3 = *((_DWORD *)this + 127);
        *a4 = *((_DWORD *)this + 128);
      }
    }
  }
  if ( v19 )
    (*(void (__fastcall **)(CD3DTexture *))(*(_QWORD *)v19 + 8LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v12;
}
