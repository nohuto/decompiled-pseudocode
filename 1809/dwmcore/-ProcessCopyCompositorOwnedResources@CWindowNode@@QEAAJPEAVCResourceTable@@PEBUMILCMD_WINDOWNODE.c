/*
 * XREFs of ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18006ED1C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x180029D78 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18002E49C (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18006EEB8 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801B9ED0 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessCopyCompositorOwnedResources(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 Resource; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rbp
  struct CCompositionSurfaceBitmap *v13; // rdx
  __int64 v14; // rbp
  struct CEffect *EffectInternal; // rax
  char v16; // al
  unsigned int v18; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 )
  {
    Resource = CResourceTable::GetResource(a2, v5, 164LL);
    v9 = Resource;
    if ( Resource )
    {
      *((_BYTE *)this + 959) = 1;
      v10 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(Resource + 760));
      v4 = v10;
      if ( v10 < 0 )
      {
        v18 = 1349;
        goto LABEL_25;
      }
      v12 = 0LL;
      if ( *(_DWORD *)(v9 + 792) )
      {
        while ( 1 )
        {
          v10 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(*(_QWORD *)(v9 + 768) + 8 * v12));
          v4 = v10;
          if ( v10 < 0 )
            break;
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *(_DWORD *)(v9 + 792) )
            goto LABEL_5;
        }
        v18 = 1353;
        goto LABEL_25;
      }
LABEL_5:
      v13 = *(struct CCompositionSurfaceBitmap **)(v9 + 904);
      if ( v13 )
      {
        v10 = CWindowNode::SetFlipExBitmap(this, v13);
        v4 = v10;
        if ( v10 < 0 )
        {
          v18 = 1358;
LABEL_25:
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v18);
          return v4;
        }
      }
      v14 = 0LL;
      if ( *(_DWORD *)(v9 + 936) )
      {
        while ( 1 )
        {
          v10 = CWindowNode::SetFlipExBitmap(
                  this,
                  *(struct CCompositionSurfaceBitmap **)(*(_QWORD *)(v9 + 912) + 8 * v14));
          v4 = v10;
          if ( v10 < 0 )
            break;
          v14 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v14 >= *(_DWORD *)(v9 + 936) )
            goto LABEL_7;
        }
        v18 = 1363;
        goto LABEL_25;
      }
LABEL_7:
      EffectInternal = CVisual::GetEffectInternal((CVisual *)v9);
      v10 = CVisual::SetEffect(this, EffectInternal);
      v4 = v10;
      if ( v10 < 0 )
      {
        v18 = 1366;
        goto LABEL_25;
      }
      *((_BYTE *)this + 958) = *(_BYTE *)(v9 + 958);
      v16 = *(_BYTE *)(v9 + 957);
      *((_BYTE *)this + 957) = v16;
      if ( v16 )
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 264LL);
      CResource::NotifyOnChanged(this, 0LL, 0LL);
    }
    else
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x538u);
    }
  }
  return v4;
}
