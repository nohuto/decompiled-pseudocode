/*
 * XREFs of _lambda_c7a3d71a2342ccc4636948ba7f796bf6_::operator() @ 0x18002A1A0
 * Callers:
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___ @ 0x180036310 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180023DB8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180026674 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 *     ?IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z @ 0x1800298F4 (-IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800ADF60 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_c7a3d71a2342ccc4636948ba7f796bf6_::operator()(__int64 a1, unsigned int a2)
{
  PCWSTR StringRawBuffer; // rdi
  const unsigned __int16 *v5; // rbx
  CreativeFramework::CreativeEventStore *v6; // rax
  int v7; // eax
  ContentManagement *v8; // rcx
  const unsigned __int16 *v9; // rdx
  _QWORD *v10; // rdi
  char v11; // bl
  _QWORD *v12; // rcx
  _DWORD *v13; // rax
  char *v14; // rax
  char *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rdx
  _QWORD *v21; // rdx
  int v22; // eax
  _BYTE *v23; // rdx
  _QWORD v25[3]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD *v26; // [rsp+50h] [rbp-21h]
  _BYTE v27[24]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE *v28; // [rsp+70h] [rbp-1h]
  _QWORD v29[3]; // [rsp+78h] [rbp+7h] BYREF
  _QWORD *v30; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 16), 0LL);
  v5 = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 8), 0LL);
  v6 = (CreativeFramework::CreativeEventStore *)WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
  v7 = CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
         v6,
         v5,
         (const unsigned __int16 *)a2,
         (__int64)StringRawBuffer);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x209,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x18002A44CLL);
  }
  v8 = (ContentManagement *)WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 16), 0LL);
  if ( ContentManagement::IsHighPriorityEvent(v8, v9) )
  {
    v29[0] = &std::_Func_impl<std::_Callable_fun<long (*const)(void),0>,std::allocator<std::_Func_class<long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
    v29[1] = ContentManagement::BatterySaverOverrideEventNotificationHandler;
    v30 = v29;
    v10 = v29;
    v11 = 1;
    v12 = v26;
  }
  else
  {
    v13 = &unk_18018D2C0;
    while ( *v13 != **(_DWORD **)(a1 + 24) )
    {
      v13 += 10;
      if ( v13 == (_DWORD *)&unk_18018D338 )
      {
        v25[0] = &std::_Func_impl<std::_Callable_fun<long (*const)(void),0>,std::allocator<std::_Func_class<long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
        v25[1] = ContentManagement::NormalEventNotificationHandler;
        v12 = v25;
        v26 = v25;
        goto LABEL_14;
      }
    }
    v14 = (char *)(v13 + 2);
    v26 = 0LL;
    v15 = (char *)*((_QWORD *)v14 + 3);
    if ( v15 )
    {
      if ( v15 == v14 )
        v16 = v25;
      else
        v16 = 0LL;
      v26 = (_QWORD *)(**(__int64 (__fastcall ***)(char *, _QWORD *))v15)(v15, v16);
      v12 = v26;
    }
    else
    {
      v12 = 0LL;
      v26 = 0LL;
    }
LABEL_14:
    v10 = v25;
    v11 = 6;
  }
  v28 = 0LL;
  v17 = v10[3];
  if ( v17 )
  {
    if ( (_QWORD *)v17 == v10 )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v17 + 8LL))(v10[3], v27);
      v28 = (_BYTE *)v17;
      v19 = (_QWORD *)v10[3];
      if ( !v19 )
      {
LABEL_22:
        v12 = v26;
        goto LABEL_23;
      }
      LOBYTE(v18) = v19 != v10;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v19 + 32LL))(v19, v18, v17);
      v17 = (__int64)v28;
    }
    else
    {
      v28 = (_BYTE *)v10[3];
    }
    v10[3] = 0LL;
    goto LABEL_22;
  }
  v17 = 0LL;
  v28 = 0LL;
LABEL_23:
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    if ( v12 )
    {
      v20 = v25;
      LOBYTE(v20) = v12 != v25;
      (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*v12 + 32LL))(v12, v20, v17);
      v26 = 0LL;
      v17 = (__int64)v28;
    }
  }
  if ( (v11 & 1) != 0 && v30 )
  {
    v21 = v29;
    LOBYTE(v21) = v30 != v29;
    (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*v30 + 32LL))(v30, v21, v17);
    v30 = 0LL;
    v17 = (__int64)v28;
  }
  if ( !v17 )
    std::_Xbad_function_call();
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v22);
  if ( v28 )
  {
    v23 = v27;
    LOBYTE(v23) = v28 != v27;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v28 + 32LL))(v28, v23);
  }
  return 0LL;
}
