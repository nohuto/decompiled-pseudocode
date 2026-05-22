/*
 * XREFs of ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x180070C80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800712E4 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x180074338 (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LampArrayRawInputProvider::OnSipcClientConnection(_QWORD *a1, struct ISIPCServer *a2, int a3)
{
  char *v6; // rdi
  char *i; // rax
  char *v8; // rax
  char *v9; // rbx
  struct LampArrayEndpoint *v10; // r15
  char *v11; // r14
  char **v12; // rax
  __int64 ***v13; // rdi
  __int64 **j; // rbx
  __int64 **k; // rbx
  __int64 v16; // rcx

  v6 = (char *)(a1 + 9);
  for ( i = (char *)a1[9]; i != v6; i = *(char **)i )
  {
    if ( *((_DWORD *)i + 6) == a3 )
      return;
  }
  v8 = (char *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x20uLL);
    *((_QWORD *)v9 + 2) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = (struct LampArrayEndpoint *)(v9 + 16);
    v11 = v9;
    if ( (*(int (__fastcall **)(struct ISIPCServer *, void *, void (__fastcall *)(void *, struct ISIPCEndpoint *, void *, unsigned __int64), _QWORD *, char *))(*(_QWORD *)a2 + 24LL))(
           a2,
           &LampArrayRawInputProvider::OnSipcEndpointStatus,
           LampArrayRawInputProvider::OnSipcSharedBuffer,
           a1,
           v9 + 16) >= 0 )
    {
      *((_DWORD *)v9 + 6) = a3;
      v12 = (char **)*((_QWORD *)v6 + 1);
      if ( *v12 != v6 )
        __fastfail(3u);
      *(_QWORD *)v9 = v6;
      *((_QWORD *)v9 + 1) = v12;
      *v12 = v9;
      *((_QWORD *)v6 + 1) = v9;
      ++*((_QWORD *)v6 + 2);
      v13 = (__int64 ***)(a1 + 6);
      for ( j = (__int64 **)a1[6]; j != (__int64 **)v13; j = (__int64 **)*j )
        LampArrayDevice::AddViewClient((LampArrayDevice *)j[2], v10);
      if ( a3 == *((_DWORD *)a1 + 10) )
      {
        for ( k = *v13; k != (__int64 **)v13; k = (__int64 **)*k )
          LampArrayRawInputProvider::SetActiveViewClient(
            (LampArrayRawInputProvider *)a1,
            (struct LampArrayDevice *)k[2],
            v10);
      }
      v9 = 0LL;
      v11 = 0LL;
    }
    if ( v11 )
    {
      v16 = *((_QWORD *)v9 + 2);
      if ( v16 )
      {
        *((_QWORD *)v9 + 2) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      operator delete(v9, (const struct std::nothrow_t *)0x20);
    }
  }
}
