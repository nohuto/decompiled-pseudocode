/*
 * XREFs of ?EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z @ 0x18015CA6C
 * Callers:
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1801FD690 (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180245980 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180059A50 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnqueueSetEvent(CD3DDeviceLevel1 *this, void *a2)
{
  int v3; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v3 = *((_DWORD *)this + 220);
  if ( v3 < 0 )
  {
    v8 = *((_DWORD *)this + 220);
    v11 = 3942;
    goto LABEL_8;
  }
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 74);
  v6 = **v5;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v12);
  v7 = v6(v5, &GUID_05008617_fbfd_4051_a790_144884b4f6a9, &v12);
  v3 = v7;
  if ( v7 < 0 )
  {
    v11 = 3944;
    goto LABEL_5;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v12 + 128LL))(v12, a2);
  v3 = v7;
  if ( v7 < 0 )
  {
    v11 = 3946;
LABEL_5:
    v8 = v7;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v8, v11, 0LL);
  }
  v9 = CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v3, 0);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v12);
  return v9;
}
