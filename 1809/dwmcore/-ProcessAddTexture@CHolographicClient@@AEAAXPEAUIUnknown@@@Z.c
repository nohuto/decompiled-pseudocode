/*
 * XREFs of ?ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212974
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180212BD4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddTexture(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 v3; // rcx
  char *v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873,
         &v11) >= 0 )
  {
    v4 = (char *)this + 40;
    v5 = *((_DWORD *)this + 16);
    v6 = v5 + 1;
    v7 = v5 + 1 < v5 ? 0x80070216 : 0;
    if ( v5 + 1 < v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v7, 0xB5u);
    }
    else if ( v6 > *((_DWORD *)v4 + 5) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8, 1, &v11);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v4 + 8LL * v5) = v11;
      *((_DWORD *)v4 + 6) = v6;
    }
    v10 = v11;
    if ( v7 >= 0 )
      v10 = 0LL;
    v11 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
