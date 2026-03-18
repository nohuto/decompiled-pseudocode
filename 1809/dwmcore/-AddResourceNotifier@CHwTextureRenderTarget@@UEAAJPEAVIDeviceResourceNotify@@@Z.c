/*
 * XREFs of ?AddResourceNotifier@CHwTextureRenderTarget@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180069FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::AddResourceNotifier(
        CHwTextureRenderTarget *this,
        struct IDeviceResourceNotify *a2)
{
  __int64 v2; // r10
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // ebx
  unsigned int v6; // ecx
  int v8; // eax
  struct IDeviceResourceNotify *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    v9 = a2;
    v3 = *(_DWORD *)(v2 + 96);
    v4 = v3 + 1;
    v5 = v3 + 1 < v3 ? 0x80070216 : 0;
    if ( v3 + 1 < v3 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v5, 0xB5u);
    }
    else if ( v4 > *(_DWORD *)(v2 + 92) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(v2 + 72, 8, 1, &v9);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      v6 = *(_DWORD *)(v2 + 96);
      *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8LL * v3) = v9;
      *(_DWORD *)(v2 + 96) = v4;
    }
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x33Fu);
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292412, 0x343u);
  }
  return (unsigned int)v5;
}
