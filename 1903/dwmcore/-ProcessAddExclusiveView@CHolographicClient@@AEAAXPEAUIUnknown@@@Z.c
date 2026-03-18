/*
 * XREFs of ?ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802493E8
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180249748 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddExclusiveView(CHolographicClient *this, struct IUnknown *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  int v4; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  struct IUnknown *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 24);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    goto LABEL_7;
  }
  if ( v3 > *((_DWORD *)this + 23) )
  {
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 72, 8, 1, &v7);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xC3u, 0LL);
LABEL_7:
      if ( v4 < 0 )
        return;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * *((unsigned int *)this + 24)) = v7;
    *((_DWORD *)this + 24) = v3;
  }
  ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->AddRef)(v7);
}
