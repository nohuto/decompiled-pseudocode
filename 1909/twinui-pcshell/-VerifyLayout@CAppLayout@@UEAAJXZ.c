/*
 * XREFs of ?VerifyLayout@CAppLayout@@UEAAJXZ @ 0x18043DC90
 * Callers:
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x18043E3A4 (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180084F74 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011F158 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18011F158.c)
 *     ?_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x18043EA10 (-_GetItemCountOfType@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 *     ?_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18043EA88 (-_GetItemCountWithFlags@CAppLayout@@AEAAIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 */

__int64 __fastcall CAppLayout::VerifyLayout(RTL_SRWLOCK *this)
{
  unsigned __int64 Ptr; // r14
  int v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // r12
  unsigned __int64 i; // r15
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int128 *); // rcx
  unsigned int v8; // r15d
  unsigned __int64 v9; // rsi
  int j; // r13d
  _QWORD **v11; // rax
  __int64 v12; // rcx
  _QWORD **v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  _QWORD **v16; // rax
  _QWORD **v17; // rax
  RTL_SRWLOCK *v19; // [rsp+20h] [rbp-40h] BYREF
  __int128 v20; // [rsp+28h] [rbp-38h] BYREF
  __int128 v21; // [rsp+38h] [rbp-28h] BYREF
  __int128 v22; // [rsp+48h] [rbp-18h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 2, &v19);
  Ptr = (unsigned __int64)this[9].Ptr;
  v3 = 0;
  if ( !Ptr )
    goto LABEL_13;
  v4 = 1LL;
  v5 = 0LL;
  do
  {
    if ( v3 < 0 )
      goto LABEL_44;
    *(_QWORD *)&v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int128 *))((char *)this[8].Ptr + v5))(
           *(_QWORD *)((char *)this[8].Ptr + v5),
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v20);
    if ( v3 >= 0 )
    {
      for ( i = v4; i < Ptr; ++i )
      {
        if ( v3 < 0 )
          break;
        *(_QWORD *)&v21 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
        v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int128 *))*((_QWORD *)this[8].Ptr + i);
        v3 = (**v7)(v7, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v21);
        if ( v3 >= 0 && (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v20 + 96LL))(v20, v21) )
          v3 = -2147319767;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    ++v4;
    v5 += 8LL;
  }
  while ( v4 - 1 < Ptr );
  if ( v3 >= 0 )
  {
LABEL_13:
    v8 = (unsigned int)this[3].Ptr;
    v9 = 0LL;
    for ( j = CAppLayout::_GetItemCountOfType(&this[-5], 2LL); v9 < Ptr; ++v9 )
    {
      if ( v3 < 0 )
        goto LABEL_44;
      v11 = (_QWORD **)this[8].Ptr;
      v20 = 0LL;
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int128 *))(*v11[v9] + 56LL))(v11[v9], 0LL, &v20);
      if ( (_QWORD)v20 != __PAIR64__(HIDWORD(this[3].Ptr), v8)
        || HIDWORD(v20) != HIDWORD(this[4].Ptr)
        || SDWORD2(v20) > SLODWORD(this[4].Ptr) )
      {
        v3 = -2147319767;
      }
      if ( v3 >= 0 )
      {
        v12 = *((_QWORD *)this[8].Ptr + v9);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12) == 1 )
        {
          v13 = (_QWORD **)this[8].Ptr;
          v21 = 0LL;
          (*(void (__fastcall **)(_QWORD *, __int64, __int128 *))(*v13[v9] + 56LL))(v13[v9], 1LL, &v21);
          if ( (int)v21 < (int)v20
            || SDWORD1(v21) < SDWORD1(v20)
            || SDWORD2(v21) > SDWORD2(v20)
            || SHIDWORD(v21) > SHIDWORD(v20) )
          {
            v3 = -2147319767;
          }
        }
        if ( v3 >= 0 )
        {
          v14 = *((_QWORD *)this[8].Ptr + v9);
          v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
          if ( j )
          {
            if ( (v15 == 1 || v15 == 4) && (v9 & 1) != 0 )
              goto LABEL_33;
          }
          if ( v15 != 2 )
          {
            if ( v15 == 4 )
            {
              v16 = (_QWORD **)this[8].Ptr;
              v22 = 0uLL;
              (*(void (__fastcall **)(_QWORD *, _QWORD, __int128 *))(*v16[v9] + 56LL))(v16[v9], 0LL, &v22);
            }
            goto LABEL_36;
          }
          if ( (v9 & 1) == 0 )
LABEL_33:
            v3 = -2147319767;
        }
      }
LABEL_36:
      v8 = DWORD2(v20);
    }
    if ( v3 >= 0 )
    {
      if ( Ptr )
      {
        v17 = (_QWORD **)this[8].Ptr;
        v22 = 0LL;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int128 *))(*v17[Ptr - 1] + 56LL))(v17[Ptr - 1], 0LL, &v22);
        if ( DWORD2(v22) != LODWORD(this[4].Ptr) )
          v3 = -2147319767;
      }
      if ( v3 >= 0 && (unsigned int)CAppLayout::_GetItemCountWithFlags(&this[-5], 2LL) > 1 )
        v3 = -2147319767;
    }
  }
LABEL_44:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v19);
  return (unsigned int)v3;
}
