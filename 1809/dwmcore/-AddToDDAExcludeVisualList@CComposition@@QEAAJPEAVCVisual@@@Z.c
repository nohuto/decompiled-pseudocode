/*
 * XREFs of ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18014AF64
 * Callers:
 *     ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x18014B984 (-Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMIL.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A0000 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindDDAExcludeVisual@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x18014B3A0 (-FindDDAExcludeVisual@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::AddToDDAExcludeVisualList(CComposition *this, struct CVisual *a2)
{
  int v3; // ebx
  unsigned int DDAExcludeVisual; // eax
  struct CResource *v5; // r11
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  struct CWeakResourceReference *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  DDAExcludeVisual = CComposition::FindDDAExcludeVisual(this, a2);
  if ( DDAExcludeVisual == *(_DWORD *)(v6 + 984) )
  {
    v14 = 0LL;
    v7 = CWeakReference<CVisual>::Create(v5, &v14);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xFE8u);
    }
    else
    {
      v9 = *((_DWORD *)this + 246);
      v10 = v9 + 1;
      v3 = v9 + 1 < v9 ? 0x80070216 : 0;
      if ( v9 + 1 < v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v3, 0xB5u);
      }
      else if ( v10 > *((_DWORD *)this + 245) )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 960, 8, 1, &v14);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0xC0u);
      }
      else
      {
        v11 = v9;
        *(_QWORD *)(*((_QWORD *)this + 120) + 8LL * v9) = v14;
        *((_DWORD *)this + 246) = v10;
      }
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0xFE9u);
    }
  }
  return (unsigned int)v3;
}
