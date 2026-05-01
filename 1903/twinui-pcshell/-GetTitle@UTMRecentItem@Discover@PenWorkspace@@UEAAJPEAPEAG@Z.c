/*
 * XREFs of ?GetTitle@UTMRecentItem@Discover@PenWorkspace@@UEAAJPEAPEAG@Z @ 0x1801E5600
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005B3A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenWorkspace::Discover::UTMRecentItem::GetTitle(
        PenWorkspace::Discover::UTMRecentItem *this,
        unsigned __int16 **a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rdi
  int v9; // eax
  PCWSTR StringRawBuffer; // rax
  int v11; // eax
  unsigned __int16 *v12; // rax
  unsigned __int16 *v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  __int64 v16; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HSTRING string; // [rsp+60h] [rbp+20h] BYREF
  __int64 v19; // [rsp+70h] [rbp+30h] BYREF

  v19 = 0LL;
  v3 = *((_QWORD *)this + 3);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v5 = v4(v3, &v19);
  v6 = v5;
  if ( v5 >= 0 )
  {
    string = 0LL;
    v7 = v19;
    v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v19 + 48LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v9 = v8(v7, &string);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (LPVOID *)&v14,
              (__int64)StringRawBuffer,
              0xFFFFFFFFFFFFFFFFuLL);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v12 = v14;
        v14 = 0LL;
        v16 = 0LL;
        v15 = 0LL;
        *a2 = v12;
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6A,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
          (const char *)(unsigned int)v11);
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
        (const char *)(unsigned int)v9);
    }
    WindowsDeleteString(string);
    string = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v6;
}
