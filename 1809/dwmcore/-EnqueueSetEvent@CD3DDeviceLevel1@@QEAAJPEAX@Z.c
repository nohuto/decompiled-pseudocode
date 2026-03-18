/*
 * XREFs of ?EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z @ 0x18001C304
 * Callers:
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x18001C23C (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180210F20 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnqueueSetEvent(CD3DDeviceLevel1 *this, void *a2)
{
  int v3; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *((_DWORD *)this + 212);
  if ( v3 < 0 )
  {
    v9 = 3950;
    v8 = *((_DWORD *)this + 212);
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v10);
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 74))(
         *((_QWORD *)this + 74),
         &GUID_05008617_fbfd_4051_a790_144884b4f6a9,
         &v10);
  v3 = v5;
  if ( v5 < 0 )
  {
    v9 = 3952;
    goto LABEL_7;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 128LL))(v10, a2);
  v3 = v5;
  if ( v5 < 0 )
  {
    v9 = 3954;
LABEL_7:
    v8 = v5;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v8, v9);
  }
  v6 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v3, 0LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v10);
  return v6;
}
