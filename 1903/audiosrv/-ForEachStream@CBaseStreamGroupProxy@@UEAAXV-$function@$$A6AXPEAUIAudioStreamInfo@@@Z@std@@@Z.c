/*
 * XREFs of ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18002FBB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x18002FEF0 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F1BC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x1800EDB24 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::ForEachStream(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdx
  _BYTE *v6; // r8
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *, _QWORD); // rcx
  _QWORD *v8; // r15
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  _BYTE *v11; // rcx
  _BYTE *v12; // rax
  __int64 (__fastcall ***v13)(_QWORD, _BYTE *); // rcx
  __int64 *v14; // rbx
  __int64 *v15; // rdi
  __int64 v16; // rcx
  _BYTE v18[56]; // [rsp+20h] [rbp-79h] BYREF
  _BYTE *v19; // [rsp+58h] [rbp-41h]
  _QWORD v20[2]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v21[56]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+Fh]

  v20[1] = -2LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  v6 = 0LL;
  v19 = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *, _QWORD))(a2 + 56);
  if ( v7 )
  {
    v6 = (_BYTE *)(**v7)(v7, v18, 0LL);
    v19 = v6;
  }
  v8 = *(_QWORD **)(a1 + 192);
  v9 = 0LL;
  v10 = (unsigned __int64)(*(_QWORD *)(a1 + 200) - (_QWORD)v8 + 7LL) >> 3;
  if ( (unsigned __int64)v8 > *(_QWORD *)(a1 + 200) )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      std::_Func_class<void,IAudioStreamInfo *>::operator()(v18, *v8++, v6);
      ++v9;
    }
    while ( v9 != v10 );
    v6 = v19;
  }
  v11 = 0LL;
  v22 = 0LL;
  if ( v6 )
  {
    v11 = v6;
    if ( v6 == v18 )
    {
      v11 = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v6 + 8LL))(v6, v21);
      v22 = (__int64)v11;
      v6 = v19;
      if ( v19 )
      {
        if ( v19 == v18 )
          v5 = 0LL;
        else
          LOBYTE(v5) = 1;
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v19 + 32LL))(v19, v5);
        v19 = 0LL;
        v6 = 0LL;
        v11 = (_BYTE *)v22;
      }
    }
    else
    {
      v22 = (__int64)v6;
      v19 = 0LL;
      v6 = 0LL;
    }
  }
  if ( v6 )
  {
    LOBYTE(v5) = v6 != v18;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
    v19 = 0LL;
    v11 = (_BYTE *)v22;
  }
  if ( v11 )
  {
    if ( v11 == v21 )
      v5 = 0LL;
    else
      LOBYTE(v5) = 1;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 32LL))(v11, v5);
  }
  v12 = 0LL;
  v19 = 0LL;
  v13 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v13 )
  {
    v12 = (_BYTE *)(**v13)(v13, v18);
    v19 = v12;
  }
  v14 = *(__int64 **)(a1 + 216);
  v15 = *(__int64 **)(a1 + 224);
  if ( v14 != v15 )
  {
    do
    {
      v16 = *v14;
      v20[0] = v16;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      lambda_530575f8b419a08780554bb070101504_::operator()(v18, v20);
      ++v14;
    }
    while ( v14 != v15 );
    v12 = v19;
  }
  v22 = 0LL;
  if ( v12 )
  {
    if ( v12 == v18 )
    {
      v22 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v12 + 8LL))(v12, v21);
      v12 = v19;
      if ( v19 )
      {
        if ( v19 == v18 )
          v5 = 0LL;
        else
          LOBYTE(v5) = 1;
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v19 + 32LL))(v19, v5);
        v19 = 0LL;
        v12 = 0LL;
      }
    }
    else
    {
      v22 = (__int64)v12;
      v19 = 0LL;
      v12 = 0LL;
    }
  }
  if ( v12 )
  {
    LOBYTE(v5) = v12 != v18;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v12 + 32LL))(v12, v5);
    v19 = 0LL;
  }
  std::_Func_class<void,>::_Tidy(v21);
  if ( v4 )
    LeaveCriticalSection(v4);
  return std::_Func_class<void,>::_Tidy(a2);
}
