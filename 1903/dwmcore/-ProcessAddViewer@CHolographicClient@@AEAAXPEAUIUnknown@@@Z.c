/*
 * XREFs of ?ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x180249560
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180249748 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddViewer(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  lpVtbl = a2->lpVtbl;
  v13 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_6be85f9e_fb49_4826_8b19_a61973c8ea67,
         &v13) >= 0 )
  {
    v4 = 0LL;
    v5 = *((unsigned int *)this + 46);
    v6 = *((_QWORD *)this + 20);
    if ( (_DWORD)v5 )
    {
      v7 = v13;
      v8 = (_QWORD *)*((_QWORD *)this + 20);
      while ( v13 != *v8 )
      {
        v4 = (unsigned int)(v4 + 1);
        ++v8;
        if ( (unsigned int)v4 >= (unsigned int)v5 )
          goto LABEL_6;
      }
      goto LABEL_11;
    }
LABEL_6:
    v9 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v9 >= (unsigned int)v5 )
    {
      if ( (unsigned int)v9 <= *((_DWORD *)this + 45) )
      {
        *(_QWORD *)(v6 + 8 * v5) = v13;
        *((_DWORD *)this + 46) = v9;
        goto LABEL_10;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 160, 8, 1, &v13);
      v10 = v11;
      if ( v11 >= 0 )
        goto LABEL_10;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC3u, 0LL);
    }
    else
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( v10 < 0 )
    {
      v7 = v13;
LABEL_11:
      if ( v7 )
        (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v8, v4, v6);
      return;
    }
LABEL_10:
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 192LL))(*((_QWORD *)this + 3), v13, v4);
    v7 = 0LL;
    v13 = 0LL;
    goto LABEL_11;
  }
}
