/*
 * XREFs of ?ForEachStream@CProcessSubmixProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18000E1B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcessSubmixProxy::ForEachStream(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  __int64 v5; // rdx
  _BYTE *v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *); // rcx
  __int64 *v8; // rbx
  __int64 *v9; // rsi
  _BYTE *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v13[56]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE *v14; // [rsp+60h] [rbp-78h]
  __int64 v15; // [rsp+68h] [rbp-70h]
  _BYTE v16[56]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE *v17; // [rsp+A8h] [rbp-30h]

  v15 = -2LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v6 = 0LL;
  v14 = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v7 )
  {
    v6 = (_BYTE *)(**v7)(v7, v13);
    v14 = v6;
  }
  v8 = *(__int64 **)(a1 + 168);
  v9 = *(__int64 **)(a1 + 176);
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      v12 = *v8;
      if ( !v6 )
        break;
      (*(void (__fastcall **)(_BYTE *, __int64 *))(*(_QWORD *)v6 + 16LL))(v6, &v12);
      ++v8;
      v6 = v14;
      if ( v8 == v9 )
        goto LABEL_6;
    }
    std::_Xbad_function_call();
    goto LABEL_28;
  }
LABEL_6:
  v10 = 0LL;
  v17 = 0LL;
  if ( !v6 )
    goto LABEL_12;
  if ( v6 == v13 )
  {
    v10 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v6 + 8LL))(v6, v16);
    v17 = v10;
    v6 = v14;
    if ( !v14 )
      goto LABEL_12;
    if ( v14 == v13 )
    {
      v5 = 0LL;
LABEL_11:
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
      v14 = 0LL;
      v6 = 0LL;
      v10 = v17;
      goto LABEL_12;
    }
LABEL_28:
    LOBYTE(v5) = 1;
    goto LABEL_11;
  }
  v10 = v6;
  v17 = v6;
  v14 = 0LL;
  v6 = 0LL;
LABEL_12:
  if ( v6 )
  {
    LOBYTE(v5) = v6 != v13;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
    v14 = 0LL;
    v10 = v17;
  }
  if ( v10 )
  {
    if ( v10 == v16 )
      v5 = 0LL;
    else
      LOBYTE(v5) = 1;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v10 + 32LL))(v10, v5);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  v11 = *(_QWORD *)(a2 + 56);
  if ( v11 )
  {
    if ( v11 == a2 )
      v5 = 0LL;
    else
      LOBYTE(v5) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v5);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
}
