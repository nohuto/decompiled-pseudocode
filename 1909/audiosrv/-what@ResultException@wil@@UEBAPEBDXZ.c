/*
 * XREFs of ?what@ResultException@wil@@UEBAPEBDXZ @ 0x1800BCBA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800BB838 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x1800BC72C (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x1800BCA6C (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 */

const char *__fastcall wil::ResultException::what(
        wil::ResultException *this,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  wil::details::shared_buffer *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  char Source[1024]; // [rsp+20h] [rbp-1418h] BYREF
  char v9[4096]; // [rsp+420h] [rbp-1018h] BYREF

  v4 = (wil::ResultException *)((char *)this + 184);
  v5 = *((_QWORD *)this + 23);
  if ( !v5 )
  {
    wil::GetFailureLogString((wil *)v9, (unsigned __int16 *)0x800, (__int64)this + 24, a4);
    wil::details::StringCchPrintfA((wil::details *)Source, (char *)0x400, "%ws", v9);
    v6 = -1LL;
    do
      ++v6;
    while ( Source[v6] );
    wil::details::shared_buffer::create(v4, Source, v6 + 1);
    v5 = *(_QWORD *)v4;
  }
  return (const char *)((v5 + 4) & -(__int64)(v5 != 0));
}
