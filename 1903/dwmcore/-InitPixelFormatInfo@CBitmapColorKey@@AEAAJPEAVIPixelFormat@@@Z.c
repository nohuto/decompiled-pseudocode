/*
 * XREFs of ?InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z @ 0x180262158
 * Callers:
 *     ?ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x18026144C (-ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapColorKey::InitPixelFormatInfo(CBitmapColorKey *this, struct IPixelFormat *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  v3 = (*(__int64 (__fastcall **)(struct IPixelFormat *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v7);
  *((_QWORD *)this + 5) = *(_QWORD *)v3;
  *((_DWORD *)this + 12) = *(_DWORD *)(v3 + 8);
  v5 = *((_DWORD *)this + 10);
  if ( v5 != 2 && v5 != 10 && v5 != 28 && (unsigned int)(v5 - 87) > 1 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, 0x88982F80, 0x17Au, 0LL);
  return 0LL;
}
