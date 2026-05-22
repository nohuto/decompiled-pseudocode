/*
 * XREFs of ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x1800AC2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z @ 0x1800ABF0C (--_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800AC52C (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800AE3A8 (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 */

void __fastcall LampArrayRawInputProvider::OnSipcClientConnection(_QWORD *a1, struct ISIPCServer *a2, int a3)
{
  char *v6; // rdi
  char *i; // rax
  char **v8; // rax
  char **v9; // rbx
  struct LampArrayEndpoint *v10; // r15
  char **v11; // r14
  char **v12; // rax
  __int64 ***v13; // rdi
  __int64 **j; // rbx
  __int64 **k; // rbx

  v6 = (char *)(a1 + 9);
  for ( i = (char *)a1[9]; i != v6; i = *(char **)i )
  {
    if ( *((_DWORD *)i + 6) == a3 )
      return;
  }
  v8 = (char **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[3] = 0LL;
    v8[2] = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    v10 = (struct LampArrayEndpoint *)(v9 + 2);
    v11 = v9;
    if ( (*(int (__fastcall **)(struct ISIPCServer *, _QWORD, void *, _QWORD *, char **))(*(_QWORD *)a2 + 24LL))(
           a2,
           *((unsigned int *)a1 + 16),
           &LampArrayRawInputProvider::OnSipcEndpointStatus,
           a1,
           v9 + 2) >= 0 )
    {
      *((_DWORD *)v9 + 6) = a3;
      v12 = (char **)*((_QWORD *)v6 + 1);
      if ( *v12 != v6 )
        __fastfail(3u);
      *v9 = v6;
      v9[1] = (char *)v12;
      *v12 = (char *)v9;
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
      LampArrayRawInputProvider::LampArrayClientListEntry::`scalar deleting destructor'((LampArrayRawInputProvider::LampArrayClientListEntry *)v9);
  }
}
