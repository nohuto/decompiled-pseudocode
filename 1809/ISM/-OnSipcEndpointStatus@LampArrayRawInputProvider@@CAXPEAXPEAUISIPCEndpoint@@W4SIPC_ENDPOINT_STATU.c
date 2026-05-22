/*
 * XREFs of ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x180070E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800712E4 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LampArrayRawInputProvider::OnSipcEndpointStatus(__int64 a1, __int64 a2, int a3)
{
  _QWORD *i; // rbx
  __int64 ***v5; // r14
  __int64 ***j; // rsi
  __int64 **v7; // r15
  char v8; // r13
  __int64 **v9; // rdi
  __int64 *v10; // rax
  __int64 **v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // rcx
  const char *v14; // r9
  __int64 **k; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a3 )
  {
    for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
    {
      if ( i[2] == a2 )
      {
        v5 = (__int64 ***)(a1 + 48);
        for ( j = *(__int64 ****)(a1 + 48); j != v5; j = (__int64 ***)*j )
        {
          v7 = j[2];
          v8 = 0;
          EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 7));
          v9 = (__int64 **)v7[4];
          if ( v9 != v7 + 4 )
          {
            while ( v9[2] != (__int64 *)i[2] )
            {
              v9 = (__int64 **)*v9;
              if ( v9 == v7 + 4 )
                goto LABEL_20;
            }
            *((_BYTE *)v9[4] + 545) = 0;
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)i[2] + 48LL))(i[2]);
            v10 = v7[12];
            if ( v10 && v9[2] == (__int64 *)v10[2] )
            {
              v7[12] = 0LL;
              v8 = 1;
            }
            (*(void (__fastcall **)(__int64 *, __int64 *))(*v9[2] + 40))(v9[2], v9[4]);
            v11 = (__int64 **)*v9;
            v12 = v9[1];
            if ( (__int64 **)(*v9)[1] != v9 || (__int64 **)*v12 != v9 )
              goto LABEL_36;
            *v12 = (__int64)v11;
            v11[1] = v12;
            v7[6] = (__int64 *)((char *)v7[6] - 1);
            v13 = v9[2];
            if ( v13 )
            {
              v9[2] = 0LL;
              (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
            }
            operator delete(v9, (const struct std::nothrow_t *)0x28);
          }
LABEL_20:
          if ( v7 != (__int64 **)-56LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 7));
          if ( v8 && !SetEvent(*(HANDLE *)(a1 + 240)) )
            wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x1F6,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
              v14);
        }
        if ( *((_DWORD *)i + 6) == *(_DWORD *)(a1 + 40) )
        {
          for ( k = *v5; k != (__int64 **)v5; k = (__int64 **)*k )
            LampArrayRawInputProvider::SetActiveViewClient(
              (LampArrayRawInputProvider *)a1,
              (struct LampArrayDevice *)k[2],
              0LL);
        }
        v16 = *i;
        v17 = (_QWORD *)i[1];
        if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v17 != i )
LABEL_36:
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        --*(_QWORD *)(a1 + 88);
        v18 = i[2];
        if ( v18 )
        {
          i[2] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        operator delete(i, (const struct std::nothrow_t *)0x20);
        return;
      }
    }
  }
}
