/*
 * XREFs of ?AddMoveOptimizationNode@CHwndRenderTarget@@QEAAJPEAVCWindowNode@@@Z @ 0x18015AB24
 * Callers:
 *     ?AddMoveOptimizationNode@CDesktopRenderTarget@@UEAAJPEAVCWindowNode@@@Z @ 0x180159690 (-AddMoveOptimizationNode@CDesktopRenderTarget@@UEAAJPEAVCWindowNode@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::AddMoveOptimizationNode(CHwndRenderTarget *this, struct CWindowNode *a2)
{
  char *v2; // r10
  int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r11
  struct CWindowNode **v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  CMILCOMBase *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 704;
  v3 = 0;
  v4 = *((unsigned int *)this + 182);
  v5 = 0;
  v6 = *((_QWORD *)this + 88);
  if ( (_DWORD)v4 )
  {
    v8 = (struct CWindowNode **)*((_QWORD *)this + 88);
    do
    {
      if ( a2 == *v8 )
        break;
      ++v5;
      ++v8;
    }
    while ( v5 < (unsigned int)v4 );
  }
  if ( v5 >= *((_DWORD *)this + 182) )
  {
    v9 = (unsigned int)(v4 + 1);
    v3 = (unsigned int)v9 < (unsigned int)v4 ? 0x80070216 : 0;
    if ( (unsigned int)v9 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0xB5u);
    }
    else if ( (unsigned int)v9 > *((_DWORD *)v2 + 5) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8, 1, &v12);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v6 + 8 * v4) = v12;
      *((_DWORD *)v2 + 6) = v9;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0x15Bu);
    else
      CMILCOMBase::InternalAddRef(v12);
  }
  return (unsigned int)v3;
}
