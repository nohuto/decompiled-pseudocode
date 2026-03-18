/*
 * XREFs of ?CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA?AUComputeScribbleSupportResult@@XZ @ 0x180207B88
 * Callers:
 *     ?CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180207CF0 (-CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompatibleDriver@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x18022C91C (-IsCompatibleDriver@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z.c)
 *     ?IsGPUWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x18022C950 (-IsGPUWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z.c)
 */

_BYTE *__fastcall CHwFullScreenRenderTarget::CheckComputeScribbleSupport(_QWORD *a1, _BYTE *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rsi
  char v6; // al
  char v7; // dl
  char v8; // al
  char v9; // dl
  bool v10; // cf
  int v11; // eax
  __int64 v12; // rax
  char v13; // r8
  const struct CD3DDeviceLevel1 *v14; // rcx
  bool IsGPUWhitelisted; // al
  char v16; // r8
  const struct CD3DDeviceLevel1 *v17; // rcx
  bool IsCompatibleDriver; // al
  char v19; // r9

  v4 = a1[29];
  v5 = (_DWORD *)a1[30];
  v6 = *a2 & 0xFE;
  v7 = v6 | (v4 == 0);
  *a2 = v7;
  if ( v6 & 1 | (v4 == 0) )
    v8 = 0;
  else
    v8 = *(_BYTE *)(v4 + 320);
  *a2 = v7 ^ (v7 ^ (2 * v8)) & 2;
  v9 = (4 * ((*(__int64 (__fastcall **)(_QWORD *))(a1[26] + 488LL))(a1 + 26) & 1)) | *a2 & 0x83 | (v5 == 0LL ? 8 : 0);
  *a2 = v9;
  if ( (v9 & 8) == 0 )
  {
    *a2 = v9 | (v5[40] < 2u ? 0x10 : 0);
    v10 = (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 232LL))(v5) != 0;
    v11 = v5[39];
    *a2 &= ~0x20u;
    *a2 = (v10 ? 0 : 0x20) | *a2 & 0xBF | ((v11 & 0x2000480) != 33555584 ? 0x40 : 0);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 104LL))(a1);
  v13 = a2[1];
  *a2 &= ~0x80u;
  *a2 |= v12 == 0 ? 0x80 : 0;
  v14 = (const struct CD3DDeviceLevel1 *)a1[27];
  a2[1] = (CCommonRegistryData::m_fSuperWetEnabled == 0) | v13 & 0xFE;
  IsGPUWhitelisted = CComputeScribbleRenderer::IsGPUWhitelisted(v14);
  a2[1] = v16 & 0xFD | (2 * !IsGPUWhitelisted);
  IsCompatibleDriver = CComputeScribbleRenderer::IsCompatibleDriver(v17);
  a2[1] = v19 & 0xFB | (4 * !IsCompatibleDriver);
  return a2;
}
