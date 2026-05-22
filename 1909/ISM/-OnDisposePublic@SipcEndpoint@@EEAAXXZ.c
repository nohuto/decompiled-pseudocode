/*
 * XREFs of ?OnDisposePublic@SipcEndpoint@@EEAAXXZ @ 0x1800D6120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SipcEndpoint::OnDisposePublic(SipcEndpoint *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 12);
  if ( v2 )
  {
    (**v2)(v2, 1LL);
    *((_QWORD *)this + 12) = 0LL;
  }
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 13);
  if ( v3 )
  {
    (**v3)(v3, 1LL);
    *((_QWORD *)this + 13) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 15) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 16);
  if ( v5 )
  {
    CloseHandle(v5);
    *((_QWORD *)this + 16) = 0LL;
  }
  v6 = *((_QWORD *)this + 14);
  if ( v6 )
    (*(void (__fastcall **)(__int64, SipcEndpoint *))(*(_QWORD *)v6 + 8LL))(v6, this);
}
