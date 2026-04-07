/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z @ 0x180039AE4
 * Callers:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000ECFC (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x18004FDAA (memcpy_0.c)
 */

__int64 __fastcall DynArray<CVisual *,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v8; // eax
  void *v9; // [rsp+28h] [rbp-10h]

  v3 = *(_DWORD *)(a1 + 24);
  v5 = v3 + a3;
  if ( v3 + a3 < v3 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v9);
  }
  else
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8, a3, a2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u, v9);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + 8LL * v3), a2, 8LL * a3);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return v6;
}
