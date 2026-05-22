/*
 * XREFs of ?BeginInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1801251D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z @ 0x1800A3268 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::BeginInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  WCHAR *StringRawBuffer; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int16 v14; // cx
  __int16 v15; // r8
  __int16 v16; // dx
  bool v17; // al
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int16 v19; // [rsp+40h] [rbp+8h] BYREF
  __int16 v20; // [rsp+42h] [rbp+Ah]
  __int16 v21; // [rsp+44h] [rbp+Ch]

  try
  {
    v2 = *((_QWORD *)this + 15);
    v3 = *((_QWORD *)this + 14);
    if ( v2 != v3 )
    {
      if ( v3 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 14));
        v2 = *((_QWORD *)this + 15);
      }
      *((_QWORD *)this + 15) = v3;
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 14) + 56LL))(
           *((_QWORD *)this + 14),
           (char *)this + 184,
           (char *)this + 176);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v8 = *((_QWORD *)this + 14);
      WindowsDeleteString(*((HSTRING *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL))(v8, (char *)this + 40);
      v10 = v9;
      if ( v9 >= 0 )
      {
        StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(*((HSTRING *)this + 5), 0LL);
        std::wstring::assign((_QWORD *)this + 16, StringRawBuffer);
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
          v6 = 255LL;
          *((_BYTE *)this + 1022) = -1;
          v17 = v14 == -256 && v15 == 255 && v16 == 2;
          *((_BYTE *)this + 456) = v17;
          if ( v17 )
            *((_BYTE *)this + 1013) = 1;
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x129,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
            (const char *)(unsigned int)v12);
          result = v13;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x126,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
          (const char *)(unsigned int)v9);
        result = v10;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)(unsigned int)v4);
      result = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x13D,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractions"
                                    "ourcecontroller.cpp",
                           (const char *)v6);
  }
  return result;
}
