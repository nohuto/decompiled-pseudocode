/*
 * XREFs of ??$MakeCBuffer@P6AXPEAX@Z@Streams@Storage@Windows@@YAJIIPEAEP6AXPEAX@ZPEAPEAUIBuffer@012@@Z @ 0x18022E358
 * Callers:
 *     ?DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180230544 (-DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Make@V?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@AEAIAEAIAEAPEAEAEAP6AXPEAX@Z@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@@12@AEAI0AEAPEAEAEAP6AXPEAX@Z@Z @ 0x18022E284 (--$Make@V-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Windows::Storage::Streams::MakeCBuffer<void (*)(void *)>(int a1, int a2, ...)
{
  void (__fastcall *v2)(__int64); // rsi
  __int64 v3; // rbp
  _QWORD *v4; // r14
  __int64 v5; // rbx
  unsigned int v6; // edi
  int v8; // [rsp+70h] [rbp+8h] BYREF
  int v9; // [rsp+78h] [rbp+10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+18h]
  void (__fastcall *v12)(__int64); // [rsp+88h] [rbp+20h] BYREF
  va_list va1; // [rsp+88h] [rbp+20h]
  _QWORD *v14; // [rsp+90h] [rbp+28h] BYREF
  va_list va2; // [rsp+90h] [rbp+28h]
  va_list va3; // [rsp+98h] [rbp+30h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, void (__fastcall *)(__int64));
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD *);
  v9 = a2;
  v8 = a1;
  v2 = v12;
  v3 = v10;
  v4 = v14;
  *v14 = 0LL;
  Microsoft::WRL::Details::Make<Windows::Storage::Streams::CBuffer<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>,unsigned int &,unsigned int &,unsigned char * &,void (*&)(void *)>(
    (_QWORD **)va2,
    &v8,
    &v9,
    (__int64 *)va,
    (__int64 *)va1);
  v5 = (__int64)v14;
  if ( v14 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v14)(
           v14,
           &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
           v4);
  }
  else
  {
    v6 = -2147024882;
    v2(v3);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
