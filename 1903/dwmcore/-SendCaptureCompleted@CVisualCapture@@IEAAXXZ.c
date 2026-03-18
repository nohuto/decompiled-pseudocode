/*
 * XREFs of ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801FDCD4
 * Callers:
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801FD61C (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CVisualCapture@@UEAAXXZ @ 0x1801FDC10 (-ReleaseResourcesForDisplayChange@CVisualCapture@@UEAAXXZ.c)
 *     ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x1801FDC50 (-Render@CVisualCapture@@UEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisualCapture::SendCaptureCompleted(CVisualCapture *this)
{
  __int64 v2; // r10
  __int64 v3; // rax
  int v4; // ecx
  int v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1224LL) + 48LL);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 6);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 68);
    else
      v4 = 0;
    LOWORD(v5) = 0;
    CoreUICallSend(v2, &v6, 2LL, 16LL, v5, &unk_1802B2E2E, v4, *((unsigned int *)this + 14));
  }
  *((_BYTE *)this + 441) = 1;
}
