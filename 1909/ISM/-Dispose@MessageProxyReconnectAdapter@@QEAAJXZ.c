/*
 * XREFs of ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180059F6C
 * Callers:
 *     ?UnInitialize@InputServiceProxy@@UEAAJXZ @ 0x180109770 (-UnInitialize@InputServiceProxy@@UEAAJXZ.c)
 *     ??1CursorManager@@MEAA@XZ @ 0x18010E048 (--1CursorManager@@MEAA@XZ.c)
 *     ?Dispose@TextInputStateAdapter@@UEAAJXZ @ 0x180147FC0 (-Dispose@TextInputStateAdapter@@UEAAJXZ.c)
 * Callees:
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1800143A4 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A030 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::Dispose(MessageProxyReconnectAdapter *this)
{
  int v2; // edi
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
  if ( v2 < 0 )
  {
    v3 = 33LL;
LABEL_3:
    if ( v2 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, v3);
    FailFastWithHR(v2, retaddr, v3);
    return (unsigned int)v2;
  }
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 64LL))(v4, (char *)this + 8);
    if ( v2 < 0 )
    {
      v3 = 37LL;
      goto LABEL_3;
    }
  }
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 9);
  *((_QWORD *)this + 6) = 0LL;
  return (unsigned int)v2;
}
