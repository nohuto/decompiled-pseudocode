/*
 * XREFs of ?ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180212A50
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180212BD4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddViewer(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  _QWORD *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  lpVtbl = a2->lpVtbl;
  v13 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_6be85f9e_fb49_4826_8b19_a61973c8ea67,
         &v13) >= 0 )
  {
    v5 = 0LL;
    v6 = *((unsigned int *)this + 40);
    v7 = *((_QWORD *)this + 17);
    if ( (_DWORD)v6 )
    {
      v8 = v13;
      v4 = (_QWORD *)*((_QWORD *)this + 17);
      while ( v13 != *v4 )
      {
        v5 = (unsigned int)(v5 + 1);
        ++v4;
        if ( (unsigned int)v5 >= (unsigned int)v6 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v9 = (unsigned int)(v6 + 1);
      v10 = (unsigned int)v9 < (unsigned int)v6 ? 0x80070216 : 0;
      if ( (unsigned int)v9 < (unsigned int)v6 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0xB5u);
      }
      else if ( (unsigned int)v9 > *((_DWORD *)this + 39) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 136, 8, 1, &v13);
        v10 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(v7 + 8 * v6) = v13;
        *((_DWORD *)this + 40) = v9;
      }
      if ( v10 < 0 )
      {
        v8 = v13;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 160LL))(
          *((_QWORD *)this + 3),
          v13,
          v5);
        v8 = 0LL;
        v13 = 0LL;
      }
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)v8 + 16LL))(v8, v4, v5, v7);
  }
}
