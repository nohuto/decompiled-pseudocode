/*
 * XREFs of ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x1800977FC
 * Callers:
 *     ?OnStubDisconnected@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z @ 0x1800922B0 (-OnStubDisconnected@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x180093F8C (-erase@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocat.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x180096F60 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CustomCursorApplication::Cleanup(CustomCursorApplication *this)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  __int64 v4; // r8
  SystemCursor *v5; // r14
  _QWORD *v6; // rdi
  _QWORD *i; // rbx
  unsigned __int64 v8; // r15
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  signed __int32 v12; // eax
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  __int64 v16; // rbx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD **v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char *v26; // rdi
  DWORD LastError; // ebx
  SystemCursor *v28[2]; // [rsp+30h] [rbp-28h]
  __int128 v29; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  __int64 v31; // [rsp+A0h] [rbp+48h] BYREF
  unsigned __int64 v32; // [rsp+A8h] [rbp+50h] BYREF
  __int64 *v33; // [rsp+B0h] [rbp+58h]
  __int64 *v34; // [rsp+B8h] [rbp+60h]

  v29 = 0LL;
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      if ( !v3 )
        break;
      if ( v3 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3) )
      {
        v29 = *(_OWORD *)this;
        break;
      }
    }
  }
  if ( (_QWORD)v29 )
  {
    *(_OWORD *)v28 = 0LL;
    v4 = *(_QWORD *)(v29 + 184);
    if ( v4 )
    {
      while ( 1 )
      {
        v12 = *(_DWORD *)(v4 + 8);
        if ( !v12 )
          break;
        if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v12 + 1, v12) )
        {
          v5 = *(SystemCursor **)(v29 + 176);
          v28[1] = *(SystemCursor **)(v29 + 184);
          goto LABEL_10;
        }
      }
    }
    v5 = 0LL;
LABEL_10:
    v6 = (_QWORD *)*((_QWORD *)this + 3);
    for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
    {
      v8 = i[2];
      v32 = v8;
      if ( v5 )
      {
        v9 = (__int64 *)*((_QWORD *)v5 + 4);
        v33 = v9;
        v10 = (__int64 *)v9[1];
        v11 = v9;
        if ( *((_BYTE *)v10 + 25) )
          goto LABEL_23;
        do
        {
          if ( v10[4] >= v8 )
          {
            v11 = v10;
            v10 = (__int64 *)*v10;
          }
          else
          {
            v10 = (__int64 *)v10[2];
          }
        }
        while ( !*((_BYTE *)v10 + 25) );
        if ( v11 == v9 || v8 < v11[4] )
LABEL_23:
          v11 = v9;
        if ( v11 != v9 )
          SystemCursor::RemoveShape(v5, v8);
      }
      v13 = *(__int64 **)(v29 + 160);
      v34 = v13;
      v14 = (__int64 *)v13[1];
      v15 = v13;
      if ( *((_BYTE *)v14 + 25) )
        goto LABEL_33;
      do
      {
        if ( v14[4] >= v8 )
        {
          v15 = v14;
          v14 = (__int64 *)*v14;
        }
        else
        {
          v14 = (__int64 *)v14[2];
        }
      }
      while ( !*((_BYTE *)v14 + 25) );
      if ( v15 == v13 || v8 < v15[4] )
LABEL_33:
        v15 = v13;
      if ( v15 != v13 )
        std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::erase(
          (__int64 ***)(v29 + 160),
          &v32);
    }
    if ( !*((_QWORD *)this + 12) )
      goto LABEL_48;
    v16 = *(_QWORD *)(v29 + 152);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v31 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 48LL))(v16, &v31);
    v18 = retaddr;
    if ( v17 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 88LL))(v31, *((_QWORD *)this + 12));
      v18 = retaddr;
      if ( v17 >= 0 )
      {
LABEL_45:
        v20 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_48:
        if ( v28[1] )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v28[1] + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(SystemCursor *))v28[1])(v28[1]);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v28[1] + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(SystemCursor *))(*(_QWORD *)v28[1] + 8LL))(v28[1]);
          }
        }
        goto LABEL_52;
      }
      v19 = 660LL;
    }
    else
    {
      v19 = 658LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v18,
      (void *)v19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_45;
  }
LABEL_52:
  v21 = (_QWORD **)*((_QWORD *)this + 3);
  v22 = *v21;
  *v21 = v21;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = 0LL;
  if ( v22 != *((_QWORD **)this + 3) )
  {
    do
    {
      v23 = (_QWORD *)*v22;
      operator delete(v22, (const struct std::nothrow_t *)0x18);
      v22 = v23;
    }
    while ( v23 != *((_QWORD **)this + 3) );
  }
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 2,
    8LL);
  *((_DWORD *)this + 20) = 0;
  v24 = *((_QWORD *)this + 11);
  if ( v24 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  }
  v25 = *((_QWORD *)this + 12);
  if ( v25 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = (char *)*((_QWORD *)this + 13);
  if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v26);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 13) = 0LL;
  if ( *((_QWORD *)&v29 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL)) )
  {
    (***((void (__fastcall ****)(_QWORD))&v29 + 1))(*((_QWORD *)&v29 + 1));
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 12LL)) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v29 + 1) + 8LL))(*((_QWORD *)&v29 + 1));
  }
}
