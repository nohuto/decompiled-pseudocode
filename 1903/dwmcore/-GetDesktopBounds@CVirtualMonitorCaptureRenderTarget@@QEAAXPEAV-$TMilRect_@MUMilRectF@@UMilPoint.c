/*
 * XREFs of ?GetDesktopBounds@CVirtualMonitorCaptureRenderTarget@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A6DE4
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180093420 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?NotifyTreeDirtyRegion@CVirtualMonitorCaptureRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1801A6F30 (-NotifyTreeDirtyRegion@CVirtualMonitorCaptureRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegio.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4B8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVirtualMonitorCaptureRenderTarget::GetDesktopBounds(_DWORD *a1, float *a2)
{
  int v2; // eax
  float v4; // xmm0_4
  float v5; // xmm1_4
  void (__fastcall *v6)(_DWORD *, _BYTE *); // rax
  __int64 v7; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v8; // r8
  _BYTE v10[64]; // [rsp+20h] [rbp-78h] BYREF
  int v11; // [rsp+60h] [rbp-38h]
  _DWORD v12[4]; // [rsp+70h] [rbp-28h] BYREF

  v2 = a1[22];
  v12[0] = 0;
  v12[1] = 0;
  v11 = 0;
  v4 = (float)v2;
  v5 = (float)(int)a1[23];
  v6 = *(void (__fastcall **)(_DWORD *, _BYTE *))(*(_QWORD *)a1 + 352LL);
  *(float *)&v12[2] = v4;
  *(float *)&v12[3] = v5;
  v6(a1, v10);
  CMILMatrix::Invert((CMILMatrix *)v10, v7, v8);
  return CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v10, (__int64)v12, a2);
}
