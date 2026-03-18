/*
 * XREFs of ?SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z @ 0x1802074F0
 * Callers:
 *     ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ @ 0x180206CC0 (-CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::SetStereoContext(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  if ( a2 < 0 )
    goto LABEL_7;
  if ( a2 <= 1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    goto LABEL_6;
  }
  if ( a2 != 2 )
  {
LABEL_7:
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x140u);
    return v2;
  }
  v3 = *(_QWORD *)(a1 + 24);
LABEL_6:
  *(_QWORD *)(a1 - 384) = v3;
  *(_DWORD *)(a1 + 8) = a2;
  return v2;
}
