/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180012714
 * Callers:
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18008199C (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800821A4 (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CWindowData *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  int v5; // eax
  void *v7; // [rsp+28h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 24);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v7);
  }
  else
  {
    v4 = 0;
    if ( v3 <= *(_DWORD *)(a1 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 24)) = *a2;
      *(_DWORD *)(a1 + 24) = v3;
    }
    else
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, 1LL, a2);
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xC0u, v7);
    }
  }
  return v4;
}
