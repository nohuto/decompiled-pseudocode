/*
 * XREFs of ?IsOpaque@CRenderTargetImageSource@@UEBA_NXZ @ 0x1800C4B70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CRenderTargetImageSource::IsOpaque(CRenderTargetImageSource *this)
{
  _BYTE v2[16]; // [rsp+20h] [rbp-28h] BYREF

  return *(_DWORD *)((*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 19) + 24LL))(
                       (char *)this + 152,
                       v2)
                   + 4) == 3;
}
