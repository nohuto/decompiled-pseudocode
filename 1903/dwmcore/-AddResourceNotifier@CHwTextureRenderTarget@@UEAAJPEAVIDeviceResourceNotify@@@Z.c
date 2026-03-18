/*
 * XREFs of ?AddResourceNotifier@CHwTextureRenderTarget@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x1800CBC10
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::AddResourceNotifier(
        CHwTextureRenderTarget *this,
        struct IDeviceResourceNotify *a2)
{
  __int64 v2; // r10
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  struct IDeviceResourceNotify *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88982F04, 0x342u, 0LL);
    return v5;
  }
  v3 = *(_DWORD *)(v2 + 96);
  v9 = a2;
  v4 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  else
  {
    if ( v4 <= *(_DWORD *)(v2 + 92) )
    {
      v5 = 0;
      *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8LL * v3) = v9;
      *(_DWORD *)(v2 + 96) = v4;
      return v5;
    }
    v7 = DynArrayImpl<0>::AddMultipleAndSet(v2 + 72, 8, 1, &v9);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC3u, 0LL);
  }
  if ( (v5 & 0x80000000) != 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v5, 0x33Eu, 0LL);
  return v5;
}
