/*
 * XREFs of ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1801770C8
 * Callers:
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x1801779B0 (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002B314 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x1801774F0 (-FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::AddToMagnifierList(CComposition *this, struct CVisual *a2)
{
  unsigned int v3; // ebx
  unsigned int Magnifier; // eax
  struct CResource *v5; // r11
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  signed int v12; // eax
  struct CWeakResourceReference *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  Magnifier = CComposition::FindMagnifier(this, a2);
  if ( Magnifier == *(_DWORD *)(v6 + 968) )
  {
    v14 = 0LL;
    v7 = CWeakReference<CVisual>::Create(v5, &v14);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xECDu, 0LL);
      return v3;
    }
    v9 = *((_DWORD *)this + 242);
    v10 = v9 + 1;
    if ( v9 + 1 >= v9 )
    {
      if ( v10 <= *((_DWORD *)this + 241) )
      {
        v3 = 0;
        *(_QWORD *)(*((_QWORD *)this + 118) + 8LL * *((unsigned int *)this + 242)) = v14;
        *((_DWORD *)this + 242) = v10;
        return v3;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 944, 8, 1, &v14);
      v3 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0xC3u, 0LL);
    }
    else
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( (v3 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0xECEu, 0LL);
  }
  return v3;
}
