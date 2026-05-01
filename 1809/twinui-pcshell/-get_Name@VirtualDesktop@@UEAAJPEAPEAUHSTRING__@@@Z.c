/*
 * XREFs of ?get_Name@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802DA750
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D420 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180289C20 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 */

__int64 __fastcall VirtualDesktop::get_Name(RTL_SRWLOCK *this, HSTRING *a2)
{
  RTL_SRWLOCK *v2; // rdi
  char *Ptr; // rbx
  int String; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  PCNZWCH sourceString; // [rsp+20h] [rbp-28h] BYREF
  UINT32 length[2]; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = this + 33;
  AcquireSRWLockShared(this + 33);
  Ptr = (char *)this[17].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  sourceString = 0LL;
  *(_QWORD *)length = 0LL;
  v12 = 0LL;
  String = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
             (__int64)&sourceString,
             &_ImageBase,
             1001LL,
             Ptr + 1);
  v7 = String;
  if ( String < 0 )
  {
    v8 = 165LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)String);
    goto LABEL_8;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
  String = WindowsCreateString(sourceString, length[0], a2);
  v7 = String;
  if ( String < 0 )
  {
    v8 = 166LL;
    goto LABEL_7;
  }
LABEL_8:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  return v7;
}
