/*
 * XREFs of ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x1800CA150
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CImageSource::IsOpaque(CImageSource *this)
{
  _BYTE v2[16]; // [rsp+20h] [rbp-28h] BYREF

  return *(_DWORD *)((*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this - 1) + 24LL))((char *)this - 8, v2)
                   + 4) == 3;
}
