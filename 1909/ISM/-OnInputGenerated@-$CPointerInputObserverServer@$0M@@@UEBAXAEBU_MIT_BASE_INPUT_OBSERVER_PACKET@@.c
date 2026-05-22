/*
 * XREFs of ?OnInputGenerated@?$CPointerInputObserverServer@$0M@@@UEBAXAEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@Z @ 0x1800684E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ?DeliverToApps@?$CBaseInputObserverServer@$0M@@@UEBAXV?$function@$$A6AXAEBV?$ComPtr@VBamoInputObserverClientProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x1800682F0 (-DeliverToApps@-$CBaseInputObserverServer@$0M@@@UEBAXV-$function@$$A6AXAEBV-$ComPtr@VBamoInputOb.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPointerInputObserverServer<12>::OnInputGenerated(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD v5[9]; // [rsp+28h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a2 + 48) == 4 && (*(_BYTE *)(a2 + 16) & 2) != 0 )
  {
    v4 = operator new(0x38uLL);
    *(_DWORD *)v4 = 56;
    v4[1] = *(_QWORD *)(a2 + 8);
    *((_BYTE *)v4 + 16) = *(_BYTE *)(a2 + 16) & 1;
    v4[3] = *(_QWORD *)(a2 + 24);
    *((_DWORD *)v4 + 8) = *(_DWORD *)(a2 + 32);
    v4[5] = *(_QWORD *)(a2 + 40);
    *((_DWORD *)v4 + 12) = *(_DWORD *)(a2 + 56);
    v5[0] = off_180174400;
    v5[1] = v4;
    v5[7] = v5;
    CBaseInputObserverServer<12>::DeliverToApps(a1, (__int64)v5);
    operator delete(v4, (const struct std::nothrow_t *)0x38);
  }
}
