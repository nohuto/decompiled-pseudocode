/*
 * XREFs of ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x1800703B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DResource::AddResourceNotifier(CD2DResource *this, struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  struct IDeviceResourceNotify *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)this + 16);
  v3 = v2 + 1;
  v4 = v2 + 1 < v2 ? 0x80070216 : 0;
  if ( v2 + 1 < v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v4, 0xB5u);
  }
  else if ( v3 > *((_DWORD *)this + 15) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8, 1, &v8);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v2) = v8;
    *((_DWORD *)this + 16) = v3;
  }
  return v4;
}
