/*
 * XREFs of ?CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA?AUComputeScribbleSupportResult@@XZ @ 0x180167118
 * Callers:
 *     ?CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801672B0 (-CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x1800E34F4 (-IsDriverWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?IsDriverBlacklisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x1801ADBF8 (-IsDriverBlacklisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z.c)
 */

_BYTE *__fastcall CHwFullScreenRenderTarget::CheckComputeScribbleSupport(_QWORD *a1, _BYTE *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  char v6; // al
  char v7; // dl
  char v8; // al
  char v9; // dl
  bool v10; // cf
  int v11; // eax
  __int64 v12; // rax
  char v13; // dl
  const struct CD3DDeviceLevel1 *v14; // rcx
  bool IsDriverWhitelisted; // al
  char v16; // dl
  const struct CD3DDeviceLevel1 *v17; // rcx
  bool IsDriverBlacklisted; // al
  char v19; // r8
  char v20; // r8
  bool v21; // zf
  char v22; // r8

  v4 = a1[21];
  v5 = (_DWORD *)a1[22];
  v6 = *a2 & 0xFE;
  v7 = v6 | (v4 == 0);
  if ( v6 & 1 | (v4 == 0) )
    v8 = 0;
  else
    v8 = *(_BYTE *)(v4 + 312);
  *a2 = v7 ^ (v7 ^ (2 * v8)) & 2;
  v9 = (4 * ((*(__int64 (__fastcall **)(_QWORD *))(a1[18] + 496LL))(a1 + 18) & 1)) | *a2 & 0x83 | (v5 == 0LL ? 8 : 0);
  *a2 = v9;
  if ( (v9 & 8) == 0 )
  {
    *a2 = v9 | (v5[40] < 2u ? 0x10 : 0);
    v10 = (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 240LL))(v5) != 0;
    v11 = v5[39];
    *a2 &= ~0x20u;
    *a2 = (v10 ? 0 : 0x20) | *a2 & 0xBF | ((v11 & 0x2000480) != 33555584 ? 0x40 : 0);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 104LL))(a1);
  v13 = a2[1];
  *a2 &= ~0x80u;
  *a2 |= v12 == 0 ? 0x80 : 0;
  v14 = (const struct CD3DDeviceLevel1 *)a1[19];
  a2[1] = (CCommonRegistryData::m_fSuperWetEnabled == 0) | v13 & 0xFE;
  IsDriverWhitelisted = CComputeScribbleRenderer::IsDriverWhitelisted(v14);
  a2[1] = v16 & 0xFD | (2 * !IsDriverWhitelisted);
  IsDriverBlacklisted = CComputeScribbleRenderer::IsDriverBlacklisted(v17);
  v20 = (4 * IsDriverBlacklisted) | v19 & 0xFB;
  v21 = CCommonRegistryData::m_fEnableFrontBufferRenderChecks == 0;
  a2[1] = v20;
  if ( v21 )
    v22 = v20 & 0xF7;
  else
    v22 = ((*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 304LL))(v5) != 2 ? 8 : 0) | a2[1] & 0xF7;
  a2[1] = v22;
  return a2;
}
