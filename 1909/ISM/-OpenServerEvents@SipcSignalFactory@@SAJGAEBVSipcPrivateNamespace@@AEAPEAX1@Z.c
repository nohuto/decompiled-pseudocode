/*
 * XREFs of ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@AEAPEAX1@Z @ 0x1800D6368
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800D4500 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18001F46C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x1800D3D28 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ??$GetFullSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXGAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1800D3DC8 (--$GetFullSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXGAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z.c)
 *     ??$GetNamespaceSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1800D3E00 (--$GetNamespaceSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@.c)
 */

__int64 __fastcall SipcSignalFactory::OpenServerEvents(
        unsigned __int16 a1,
        const struct SipcPrivateNamespace *a2,
        void **a3,
        void **a4)
{
  char *v4; // rbx
  __int64 v8; // rdx
  wil::details::in1diag0 *v9; // rcx
  HANDLE v10; // rbx
  __int64 v11; // r8
  const char *v12; // r9
  HANDLE v14; // rax
  __int64 v15; // rdx
  wil::details::in1diag0 *v16; // rcx
  __int64 v17; // r8
  const char *v18; // r9
  unsigned int LastError; // edi
  void *v20; // rdx
  WCHAR Name[56]; // [rsp+20h] [rbp-118h] BYREF
  WCHAR v22[56]; // [rsp+90h] [rbp-A8h] BYREF

  v4 = (char *)a2 + 8;
  *a3 = 0LL;
  *a4 = 0LL;
  if ( a1 )
  {
    SipcSignalFactory::GetFullSignalPath<13,38,56>(a1, (__int64)a2 + 8, (__int64)L"ClientSignal", (__int64)Name);
    SipcSignalFactory::GetFullSignalPath<13,38,56>(a1, (__int64)v4, (__int64)L"ServerSignal", (__int64)v22);
  }
  else
  {
    SipcSignalFactory::GetNamespaceSignalPath<13,38,56>((__int64)a2 + 8, (__int64)L"ClientSignal", (__int64)Name);
    SipcSignalFactory::GetNamespaceSignalPath<13,38,56>((__int64)v4, (__int64)L"ServerSignal", (__int64)v22);
  }
  v10 = OpenEventW(0x100002u, 0, Name);
  if ( !v10 )
    return wil::details::in1diag0::Return_GetLastError(v9, v8, v11, v12);
  v14 = OpenEventW(2u, 0, v22);
  if ( v14 )
  {
    *a3 = v10;
    *a4 = v14;
    return 0LL;
  }
  else
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v16, v15, v17, v18);
    wil::details::CloseHandle((wil::details *)v10, v20);
    return LastError;
  }
}
