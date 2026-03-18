/*
 * XREFs of ?AddResourceNotifier@CColorKeyBitmapRealization@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18018CF40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::AddResourceNotifier(
        CColorKeyBitmapRealization *this,
        struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  struct IDeviceResourceNotify *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)this + 8);
  v3 = v2 + 1;
  v4 = v2 + 1 < v2 ? 0x80070216 : 0;
  if ( v2 + 1 < v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v4, 0xB5u);
  }
  else if ( v3 > *((_DWORD *)this + 7) )
  {
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 8, 8, 1, &v8);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v2) = v8;
    *((_DWORD *)this + 8) = v3;
  }
  return v4;
}
