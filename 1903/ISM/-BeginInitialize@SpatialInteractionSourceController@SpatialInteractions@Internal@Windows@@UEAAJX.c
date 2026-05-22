/*
 * XREFs of ?BeginInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x180163D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x1800D97E0 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::BeginInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  __int16 v14; // cx
  __int16 v15; // r8
  __int16 v16; // dx
  char v17; // al
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int16 v19; // [rsp+50h] [rbp+8h] BYREF
  __int16 v20; // [rsp+52h] [rbp+Ah]
  __int16 v21; // [rsp+54h] [rbp+Ch]
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 14);
  if ( *((_QWORD *)this + 15) != v2 )
  {
    v22 = *((_QWORD *)this + 14);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v22);
    v22 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = v2;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v22);
    v2 = *((_QWORD *)this + 14);
  }
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v7 = *((_QWORD *)this + 14);
      WindowsDeleteString(*((HSTRING *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 24LL))(v7, (char *)this + 40);
      v9 = v8;
      if ( v8 >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 5), 0LL);
        v11 = -1LL;
        do
          ++v11;
        while ( StringRawBuffer[v11] );
        std::wstring::assign((char *)this + 128, StringRawBuffer, v11);
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int16 *))(**((_QWORD **)this + 14) + 32LL))(
                *((_QWORD *)this + 14),
                &v19);
        v13 = v12;
        if ( v12 >= 0 )
        {
          v14 = v20;
          *((_WORD *)this + 83) = v20;
          v15 = v19;
          *((_WORD *)this + 82) = v19;
          v16 = v21;
          *((_WORD *)this + 84) = v21;
          *((_WORD *)this + 503) = v14;
          *((_WORD *)this + 502) = v15;
          *((_WORD *)this + 504) = v16;
          *((_DWORD *)this + 240) = *((_DWORD *)this + 2);
          v5 = 255LL;
          *((_BYTE *)this + 1022) = -1;
          if ( v14 != -256 || v15 != 255 || (v17 = 1, v16 != 2) )
            v17 = 0;
          *((_BYTE *)this + 456) = v17;
          if ( v17 )
            *((_BYTE *)this + 1013) = 1;
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x12B,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
            (const char *)(unsigned int)v12);
          result = v13;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x128,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
          (const char *)(unsigned int)v8);
        result = v9;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x126,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)(unsigned int)v3);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x13F,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractions"
                                    "ourcecontroller.cpp",
                           (const char *)v5);
  }
  return result;
}
