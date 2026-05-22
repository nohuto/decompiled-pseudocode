/*
 * XREFs of ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180029320
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x1800084E0 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x1800293D0 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x180029474 (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

__int64 __fastcall LampArrayRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3)
{
  LampArrayRawInputProvider *v5; // rax
  LampArrayRawInputProvider *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  const char *v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( hProvider > 5u )
  {
    v13 = "Starting LampArray provider.  Either first time dwm.exe started or dwm.exe crashed and now restarting";
    v14 = 102;
    v15 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D222, 0LL, 0LL, 3u, &pData);
  }
  if ( !a3 )
  {
    v10 = -2147024809;
    v11 = 34LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)v10);
    return v10;
  }
  v5 = (LampArrayRawInputProvider *)RefCountedObject::operator new(0x100uLL);
  if ( v5 )
    v6 = LampArrayRawInputProvider::LampArrayRawInputProvider(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v10 = -2147024882;
    v11 = 38LL;
    goto LABEL_12;
  }
  v7 = LampArrayRawInputProvider::Initialize(v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v7);
    LampArrayRawInputProvider::Release(v6);
    return v8;
  }
  else
  {
    *a3 = v6;
    return 0LL;
  }
}
