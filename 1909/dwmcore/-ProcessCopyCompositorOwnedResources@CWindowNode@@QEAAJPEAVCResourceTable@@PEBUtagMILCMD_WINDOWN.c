/*
 * XREFs of ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x1800AD66C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18007FADC (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AB6F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x1800AD7FC (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800ADAAC (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x18021846C (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessCopyCompositorOwnedResources(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 Resource; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  signed int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbp
  struct CCompositionSurfaceBitmap *v13; // rdx
  __int64 v14; // rbp
  struct CEffect *EffectInternal; // rax
  unsigned int v17; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0xC5u);
    v9 = Resource;
    if ( Resource )
    {
      *((_BYTE *)this + 941) = 1;
      v10 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(Resource + 744));
      v4 = v10;
      if ( v10 < 0 )
      {
        v17 = 1333;
        goto LABEL_25;
      }
      v12 = 0LL;
      if ( *(_DWORD *)(v9 + 776) )
      {
        while ( 1 )
        {
          v10 = CWindowNode::SetSpriteImage(this, *(struct ISpriteImage **)(*(_QWORD *)(v9 + 752) + 8 * v12));
          v4 = v10;
          if ( v10 < 0 )
            break;
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *(_DWORD *)(v9 + 776) )
            goto LABEL_5;
        }
        v17 = 1337;
        goto LABEL_25;
      }
LABEL_5:
      v13 = *(struct CCompositionSurfaceBitmap **)(v9 + 888);
      if ( v13 )
      {
        v10 = CWindowNode::SetFlipExBitmap(this, v13);
        v4 = v10;
        if ( v10 < 0 )
        {
          v17 = 1342;
LABEL_25:
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v17, 0LL);
          return v4;
        }
      }
      v14 = 0LL;
      if ( *(_DWORD *)(v9 + 920) )
      {
        while ( 1 )
        {
          v10 = CWindowNode::SetFlipExBitmap(
                  this,
                  *(struct CCompositionSurfaceBitmap **)(*(_QWORD *)(v9 + 896) + 8 * v14));
          v4 = v10;
          if ( v10 < 0 )
            break;
          v14 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v14 >= *(_DWORD *)(v9 + 920) )
            goto LABEL_7;
        }
        v17 = 1347;
        goto LABEL_25;
      }
LABEL_7:
      EffectInternal = CVisual::GetEffectInternal((CVisual *)v9);
      v10 = CVisual::SetEffect(this, EffectInternal);
      v4 = v10;
      if ( v10 < 0 )
      {
        v17 = 1350;
        goto LABEL_25;
      }
      *((_BYTE *)this + 95) ^= (*((_BYTE *)this + 95) ^ *(_BYTE *)(v9 + 95)) & 8;
      if ( (*((_BYTE *)this + 95) & 8) != 0 )
        ++*(_DWORD *)(*((_QWORD *)this + 2) + 280LL);
      CResource::NotifyOnChanged((__int64)this, 0, 0LL);
    }
    else
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x88980403, 0x528u, 0LL);
    }
  }
  return v4;
}
