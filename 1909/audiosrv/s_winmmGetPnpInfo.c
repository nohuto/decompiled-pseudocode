/*
 * XREFs of s_winmmGetPnpInfo @ 0x18004C690
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 */

__int64 __fastcall s_winmmGetPnpInfo(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rcx
  void *v5; // rax
  void *v6; // rbx
  unsigned int v7; // ebp
  int v8; // eax

  if ( !(unsigned int)IsWinmmGetPnpInfoSupported() )
    return 1LL;
  RtlAcquireResourceShared(&PnpInfoResource, 1u);
  v4 = *(unsigned int *)g_pPnpInfoActual;
  if ( v4 <= 0x40000 && (v5 = operator new[](v4, (const struct std::nothrow_t *)&std::nothrow), (v6 = v5) != 0LL) )
  {
    memcpy_0(v5, g_pPnpInfoActual, *(unsigned int *)g_pPnpInfoActual);
    v7 = 0;
    v8 = *(_DWORD *)g_pPnpInfoActual;
  }
  else
  {
    v8 = 0;
    v7 = 14;
    v6 = 0LL;
  }
  *a1 = v8;
  *a2 = v6;
  RtlReleaseResource(&PnpInfoResource);
  return v7;
}
