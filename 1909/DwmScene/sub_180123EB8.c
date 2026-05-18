/*
 * XREFs of sub_180123EB8 @ 0x180123EB8
 * Callers:
 *     sub_180123E48 @ 0x180123E48 (sub_180123E48.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180125004 @ 0x180125004 (sub_180125004.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 *     _Mtx_init_in_situ @ 0x180127532 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180123EB8(__int64 a1)
{
  __int64 *v2; // rax
  volatile signed __int32 *v3; // rbx
  _BYTE v5[8]; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v6; // [rsp+30h] [rbp-18h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  Mtx_init_in_situ((_Mtx_t)(a1 + 88), 2);
  if ( dword_18026C3AC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026C3AC);
    if ( dword_18026C3AC == -1 )
    {
      dword_18026C3A8 = 0;
      Init_thread_footer(&dword_18026C3AC);
    }
  }
  *(_DWORD *)(a1 + 20) = _InterlockedIncrement(&dword_18026C3A8);
  v2 = (__int64 *)sub_180125004(v5);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)a1, v2);
  v3 = v6;
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  return a1;
}
