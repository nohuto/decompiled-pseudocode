/*
 * XREFs of ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18008F320
 * Callers:
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18002BAC8 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJAEBVCRegion@@_N1@Z @ 0x18008E320 (-NotifyDirtySurface@CWindowNode@@QEAAJAEBVCRegion@@_N1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::ProcessReadyGdiSpriteBitmaps(CWindowNode *this)
{
  unsigned int v1; // esi
  char v2; // r14
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  struct CResource *v11; // rbx
  __int64 v12; // r15
  struct CResource *v13; // rbx

  v1 = *((_DWORD *)this + 194);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v5 = v1 - 1;
      v6 = *(_QWORD *)(*((_QWORD *)this + 94) + 8 * v5);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6) || *((_BYTE *)this + 938) )
        break;
      --v1;
      if ( !(_DWORD)v5 )
        return v2;
    }
    v7 = *((_QWORD *)this + 93);
    if ( v7 )
    {
      v11 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 152LL))(v7);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 93) + 168LL))(*((_QWORD *)this + 93), this);
      CResource::UnRegisterNotifierInternal(this, v11);
    }
    v2 = 1;
    v8 = *(_QWORD *)(*((_QWORD *)this + 94) + 8 * v5);
    *((_QWORD *)this + 93) = v8;
    if ( v1 != 1 )
    {
      v12 = 0LL;
      do
      {
        v13 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + *((_QWORD *)this + 94)) + 152LL))(*(_QWORD *)(v12 + *((_QWORD *)this + 94)));
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(**(_QWORD **)(v12 + *((_QWORD *)this + 94)) + 168LL))(
          *(_QWORD *)(v12 + *((_QWORD *)this + 94)),
          this);
        CResource::UnRegisterNotifierInternal(this, v13);
        *(_QWORD *)(v12 + *((_QWORD *)this + 94)) = 0LL;
        v12 += 8LL;
        --v5;
      }
      while ( v5 );
    }
    if ( v1 )
    {
      v9 = *((_DWORD *)this + 194);
      if ( v1 > v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x240u, 0LL);
      }
      else
      {
        v10 = v9 - v1;
        if ( v10 )
          memmove_0(*((void **)this + 94), (const void *)(*((_QWORD *)this + 94) + 8LL * v1), 8LL * v10);
        *((_DWORD *)this + 194) = v10;
      }
    }
  }
  return v2;
}
