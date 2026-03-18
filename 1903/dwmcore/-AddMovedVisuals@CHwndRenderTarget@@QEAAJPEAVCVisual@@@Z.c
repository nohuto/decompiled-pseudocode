/*
 * XREFs of ?AddMovedVisuals@CHwndRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801A8EB8
 * Callers:
 *     ?AddMovedVisuals@CDesktopRenderTarget@@UEAAJPEAVCVisual@@@Z @ 0x1801A7840 (-AddMovedVisuals@CDesktopRenderTarget@@UEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::AddMovedVisuals(CHwndRenderTarget *this, struct CVisual *a2)
{
  char *v2; // r10
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  struct CVisual **v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  signed int v11; // eax
  struct CVisual *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = (char *)this + 776;
  v3 = 0;
  v4 = *((unsigned int *)this + 200);
  v5 = 0;
  v6 = *((_QWORD *)this + 97);
  if ( (_DWORD)v4 )
  {
    v8 = (struct CVisual **)*((_QWORD *)this + 97);
    do
    {
      if ( a2 == *v8 )
        break;
      ++v5;
      ++v8;
    }
    while ( v5 < (unsigned int)v4 );
  }
  if ( v5 >= *((_DWORD *)this + 200) )
  {
    v9 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v9 >= (unsigned int)v4 )
    {
      if ( (unsigned int)v9 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(v6 + 8 * v4) = v13;
        *((_DWORD *)v2 + 6) = v9;
LABEL_13:
        (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v13 + 8LL))(v13);
        return v3;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8, 1, &v13);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0xC3u, 0LL);
    }
    else
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0x148u, 0LL);
      return v3;
    }
    goto LABEL_13;
  }
  return v3;
}
