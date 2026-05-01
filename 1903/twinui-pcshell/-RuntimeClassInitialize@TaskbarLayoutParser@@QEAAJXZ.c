/*
 * XREFs of ?RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ @ 0x180169E44
 * Callers:
 *     ??$MakeAndInitialize@VTaskbarLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTaskbarLayoutParser@@@Z @ 0x180167C00 (--$MakeAndInitialize@VTaskbarLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTaskbarLayout.c)
 * Callees:
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x180167734 (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 */

__int64 __fastcall TaskbarLayoutParser::RuntimeClassInitialize(TaskbarLayoutParser *this)
{
  TaskbarLayoutParser *bstr; // rax
  TaskbarLayoutParser *v3; // r14
  OLECHAR **v4; // rsi
  OLECHAR *v5; // r12
  OLECHAR *v6; // r15
  DWORD LastError; // ebx
  TaskbarLayoutParser *v8; // rax
  TaskbarLayoutParser *v9; // r14
  OLECHAR **v10; // rsi
  OLECHAR *v11; // r12
  OLECHAR *v12; // r15
  DWORD v13; // ebx
  TaskbarLayoutParser *v14; // rax
  TaskbarLayoutParser *v15; // r14
  OLECHAR **v16; // rsi
  OLECHAR *v17; // r12
  OLECHAR *v18; // r15
  DWORD v19; // ebx
  BSTR *v20; // rax
  const char *v21; // r9
  BSTR *v22; // rsi
  OLECHAR **v23; // rdi
  OLECHAR *v24; // r15
  OLECHAR *v25; // r14
  DWORD v26; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  BSTR bstrString; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    bstr = (TaskbarLayoutParser *)wil::make_bstr(&bstrString, L"AppUserModelID");
    v3 = bstr;
    v4 = (OLECHAR **)((char *)this + 16);
    if ( (TaskbarLayoutParser *)((char *)this + 16) != bstr )
    {
      v5 = *(OLECHAR **)bstr;
      v6 = *v4;
      if ( *v4 )
      {
        LastError = GetLastError();
        SysFreeString(v6);
        SetLastError(LastError);
      }
      *v4 = v5;
      *(_QWORD *)v3 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v8 = (TaskbarLayoutParser *)wil::make_bstr(&bstrString, L"DesktopApplicationID");
    v9 = v8;
    v10 = (OLECHAR **)((char *)this + 24);
    if ( (TaskbarLayoutParser *)((char *)this + 24) != v8 )
    {
      v11 = *(OLECHAR **)v8;
      v12 = *v10;
      if ( *v10 )
      {
        v13 = GetLastError();
        SysFreeString(v12);
        SetLastError(v13);
      }
      *v10 = v11;
      *(_QWORD *)v9 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v14 = (TaskbarLayoutParser *)wil::make_bstr(&bstrString, L"DesktopApplicationLinkPath");
    v15 = v14;
    v16 = (OLECHAR **)((char *)this + 32);
    if ( (TaskbarLayoutParser *)((char *)this + 32) != v14 )
    {
      v17 = *(OLECHAR **)v14;
      v18 = *v16;
      if ( *v16 )
      {
        v19 = GetLastError();
        SysFreeString(v18);
        SetLastError(v19);
      }
      *v16 = v17;
      *(_QWORD *)v15 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
    v20 = wil::make_bstr(&bstrString, L"TileID");
    v22 = v20;
    v23 = (OLECHAR **)((char *)this + 40);
    if ( v23 != v20 )
    {
      v24 = *v20;
      v25 = *v23;
      if ( *v23 )
      {
        v26 = GetLastError();
        SysFreeString(v25);
        SetLastError(v26);
      }
      *v23 = v24;
      *v22 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x55,
                           (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                           v21);
  }
  return 0LL;
}
