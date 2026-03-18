/*
 * XREFs of ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x1800D40E4
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3FD0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x18021846C (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801C6C40 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
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

  v1 = *((_DWORD *)this + 230);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v5 = v1 - 1;
      if ( CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 112)
                                                                                         + 8 * v5)
                                                                             + 64LL)) )
        break;
      --v1;
      if ( !(_DWORD)v5 )
        return v2;
    }
    v6 = (struct CResource *)*((_QWORD *)this + 111);
    if ( v6 )
    {
      CResource::UnRegisterNotifierInternal(this, v6);
      *((_QWORD *)this + 111) = 0LL;
    }
    v2 = 1;
    v7 = *(_QWORD *)(*((_QWORD *)this + 112) + 8 * v5);
    *((_QWORD *)this + 111) = v7;
    if ( v1 != 1 )
    {
      v8 = 0LL;
      v9 = (unsigned int)v5;
      do
      {
        v10 = *((_QWORD *)this + 112);
        CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v8 + v10));
        *(_QWORD *)(v8 + v10) = 0LL;
        v8 += 8LL;
        --v9;
      }
      while ( v9 );
    }
    if ( v1 )
    {
      v11 = *((_DWORD *)this + 230);
      if ( v1 > v11 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x80070057, 0x240u, 0LL);
      }
      else
      {
        v12 = v11 - v1;
        if ( v12 )
          memmove_0(*((void **)this + 112), (const void *)(*((_QWORD *)this + 112) + 8LL * v1), 8LL * v12);
        *((_DWORD *)this + 230) = v12;
      }
    }
  }
  return v2;
}
