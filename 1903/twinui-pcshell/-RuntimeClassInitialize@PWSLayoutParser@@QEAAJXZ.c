/*
 * XREFs of ?RuntimeClassInitialize@PWSLayoutParser@@QEAAJXZ @ 0x1801E8598
 * Callers:
 *     ??$MakeAndInitialize@VPWSLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPWSLayoutParser@@@Z @ 0x1801E76CC (--$MakeAndInitialize@VPWSLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPWSLayoutParser@@.c)
 * Callees:
 *     ?make_bstr@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG@Z @ 0x180167734 (-make_bstr@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFre.c)
 */

__int64 __fastcall PWSLayoutParser::RuntimeClassInitialize(PWSLayoutParser *this)
{
  PWSLayoutParser *bstr; // rax
  PWSLayoutParser *v3; // rsi
  OLECHAR **v4; // rdi
  OLECHAR *v5; // r12
  OLECHAR *v6; // r15
  DWORD LastError; // ebx
  PWSLayoutParser *v8; // rax
  PWSLayoutParser *v9; // rsi
  OLECHAR **v10; // rdi
  OLECHAR *v11; // r12
  OLECHAR *v12; // r15
  DWORD v13; // ebx
  PWSLayoutParser *v14; // rax
  const char *v15; // r9
  PWSLayoutParser *v16; // rsi
  OLECHAR **v17; // rdi
  OLECHAR *v18; // r15
  OLECHAR *v19; // r14
  DWORD v20; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  BSTR bstrString; // [rsp+58h] [rbp+10h] BYREF

  try
  {
    bstr = (PWSLayoutParser *)wil::make_bstr(&bstrString, L"AppUserModelID");
    v3 = bstr;
    v4 = (OLECHAR **)((char *)this + 16);
    if ( (PWSLayoutParser *)((char *)this + 16) != bstr )
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
    v8 = (PWSLayoutParser *)wil::make_bstr(&bstrString, L"LinkFilePath");
    v9 = v8;
    v10 = (OLECHAR **)((char *)this + 24);
    if ( (PWSLayoutParser *)((char *)this + 24) != v8 )
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
    v14 = (PWSLayoutParser *)wil::make_bstr(&bstrString, L"DesktopApplicationLinkPath");
    v16 = v14;
    v17 = (OLECHAR **)((char *)this + 32);
    if ( (PWSLayoutParser *)((char *)this + 32) != v14 )
    {
      v18 = *(OLECHAR **)v14;
      v19 = *v17;
      if ( *v17 )
      {
        v20 = GetLastError();
        SysFreeString(v19);
        SetLastError(v20);
      }
      *v17 = v18;
      *(_QWORD *)v16 = 0LL;
    }
    if ( bstrString )
      SysFreeString(bstrString);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x55,
                           (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
                           v15);
  }
  return 0LL;
}
