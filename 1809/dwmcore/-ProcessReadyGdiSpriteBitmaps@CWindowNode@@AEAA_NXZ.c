/*
 * XREFs of ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x1800A979C
 * Callers:
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18006EEB8 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800A9F28 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::ProcessReadyGdiSpriteBitmaps(CWindowNode *this)
{
  unsigned int v1; // esi
  char v2; // r14
  __int64 v4; // rcx
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  struct CResource *v12; // rbx
  __int64 v13; // r15
  struct CResource *v14; // rbx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 198);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v6 = v1 - 1;
      v7 = *(_QWORD *)(*((_QWORD *)this + 96) + 8 * v6);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 176LL))(v7) || *((_BYTE *)this + 954) )
        break;
      --v1;
      if ( !(_DWORD)v6 )
        goto LABEL_2;
    }
    v8 = *((_QWORD *)this + 95);
    if ( v8 )
    {
      v12 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 152LL))(v8);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 95) + 168LL))(*((_QWORD *)this + 95), this);
      CResource::UnRegisterNotifierInternal(this, v12);
    }
    v2 = 1;
    v9 = *(_QWORD *)(*((_QWORD *)this + 96) + 8 * v6);
    *((_QWORD *)this + 95) = v9;
    if ( v1 != 1 )
    {
      v13 = 0LL;
      do
      {
        v14 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + *((_QWORD *)this + 96)) + 152LL))(*(_QWORD *)(v13 + *((_QWORD *)this + 96)));
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(**(_QWORD **)(v13 + *((_QWORD *)this + 96)) + 168LL))(
          *(_QWORD *)(v13 + *((_QWORD *)this + 96)),
          this);
        CResource::UnRegisterNotifierInternal(this, v14);
        *(_QWORD *)(v13 + *((_QWORD *)this + 96)) = 0LL;
        v13 += 8LL;
        --v6;
      }
      while ( v6 );
    }
    if ( v1 )
    {
      v10 = *((_DWORD *)this + 198);
      if ( v1 > v10 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x23Du);
      }
      else
      {
        v11 = v10 - v1;
        if ( v11 )
          memmove_0(*((void **)this + 96), (const void *)(*((_QWORD *)this + 96) + 8LL * v1), 8LL * v11);
        *((_DWORD *)this + 198) = v11;
      }
    }
  }
LABEL_2:
  v4 = *((_QWORD *)this + 95);
  if ( v4 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 80LL))(v4, &v15);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v15);
  }
  return v2;
}
