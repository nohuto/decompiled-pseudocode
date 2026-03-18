/*
 * XREFs of ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800DD3C8
 * Callers:
 *     ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x1800DD364 (-Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtag.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002B314 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindDDAExcludeVisual@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x1800DD460 (-FindDDAExcludeVisual@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::AddToDDAExcludeVisualList(CComposition *this, struct CVisual *a2)
{
  unsigned int v3; // ebx
  unsigned int DDAExcludeVisual; // eax
  struct CResource *v5; // r11
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edx
  signed int v11; // eax
  __int64 v12; // rcx
  struct CWeakResourceReference *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  DDAExcludeVisual = CComposition::FindDDAExcludeVisual(this, a2);
  if ( DDAExcludeVisual == *(_DWORD *)(v6 + 1000) )
  {
    v14 = 0LL;
    v7 = CWeakReference<CVisual>::Create(v5, &v14);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xF1Du, 0LL);
      return v3;
    }
    v9 = *((_DWORD *)this + 250);
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    else
    {
      if ( v10 <= *((_DWORD *)this + 249) )
      {
        v3 = 0;
        *(_QWORD *)(*((_QWORD *)this + 122) + 8LL * *((unsigned int *)this + 250)) = v14;
        *((_DWORD *)this + 250) = v10;
        return v3;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 976, 8, 1, &v14);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC3u, 0LL);
    }
    if ( (v3 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v3, 0xF1Eu, 0LL);
  }
  return v3;
}
