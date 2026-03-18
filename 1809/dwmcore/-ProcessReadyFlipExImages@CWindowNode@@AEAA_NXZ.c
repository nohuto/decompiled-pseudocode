/*
 * XREFs of ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x180075EB8
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180075DB0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801B9ED0 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180192200 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 */

char __fastcall CWindowNode::ProcessReadyFlipExImages(CWindowNode *this)
{
  unsigned int v1; // esi
  char v2; // bp
  __int64 v5; // rbx
  struct CResource *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned int v11; // ebx
  unsigned int v12; // ebx

  v1 = *((_DWORD *)this + 234);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v5 = v1 - 1;
      if ( CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 114)
                                                                                         + 8 * v5)
                                                                             + 64LL)) )
        break;
      --v1;
      if ( !(_DWORD)v5 )
        return v2;
    }
    v6 = (struct CResource *)*((_QWORD *)this + 113);
    if ( v6 )
    {
      CResource::UnRegisterNotifierInternal(this, v6);
      *((_QWORD *)this + 113) = 0LL;
    }
    v2 = 1;
    v7 = *(_QWORD *)(*((_QWORD *)this + 114) + 8 * v5);
    *((_QWORD *)this + 113) = v7;
    if ( v1 != 1 )
    {
      v8 = 0LL;
      v9 = (unsigned int)v5;
      do
      {
        v10 = *((_QWORD *)this + 114);
        CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v8 + v10));
        *(_QWORD *)(v8 + v10) = 0LL;
        v8 += 8LL;
        --v9;
      }
      while ( v9 );
    }
    if ( v1 )
    {
      v11 = *((_DWORD *)this + 234);
      if ( v1 > v11 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x23Du);
      }
      else
      {
        v12 = v11 - v1;
        if ( v12 )
          memmove_0(*((void **)this + 114), (const void *)(*((_QWORD *)this + 114) + 8LL * v1), 8LL * v12);
        *((_DWORD *)this + 234) = v12;
      }
    }
  }
  return v2;
}
