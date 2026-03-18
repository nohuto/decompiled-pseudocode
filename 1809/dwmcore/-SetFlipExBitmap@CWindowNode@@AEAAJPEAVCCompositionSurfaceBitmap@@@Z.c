/*
 * XREFs of ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801B9ED0
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18006ED1C (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x1801B9C74 (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOM.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x180075EB8 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::SetFlipExBitmap(CWindowNode *this, struct CCompositionSurfaceBitmap *a2)
{
  unsigned int v2; // ebp
  char *v4; // rbx
  unsigned int v5; // ecx
  struct CCompositionSurfaceBitmap **v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  struct CResource **v13; // rbx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 i; // r14
  __int64 v20; // rbx
  struct CCompositionSurfaceBitmap *v22; // [rsp+58h] [rbp+10h] BYREF

  v22 = a2;
  v2 = 0;
  if ( !a2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 234); i = (unsigned int)(i + 1) )
    {
      v20 = *((_QWORD *)this + 114);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v20 + 8 * i));
      *(_QWORD *)(v20 + 8 * i) = 0LL;
    }
    *((_DWORD *)this + 234) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 912, 8u);
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 113));
    *((_QWORD *)this + 113) = 0LL;
    v18 = 5;
    goto LABEL_29;
  }
  if ( a2 != *((struct CCompositionSurfaceBitmap **)this + 113) )
  {
    v4 = (char *)this + 912;
    v5 = 0;
    v6 = *(struct CCompositionSurfaceBitmap ***)v4;
    if ( *((_DWORD *)v4 + 6) )
    {
      while ( a2 != *v6 )
      {
        ++v5;
        ++v6;
        if ( v5 >= *((_DWORD *)v4 + 6) )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v7 = CResource::RegisterNotifier(this, a2);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x5BDu);
        return v2;
      }
      v9 = *((_DWORD *)v4 + 6);
      v10 = v9 + 1;
      v2 = v9 + 1 < v9 ? 0x80070216 : 0;
      if ( v9 + 1 < v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v2, 0xB5u);
      }
      else if ( v10 > *((_DWORD *)v4 + 5) )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8, 1, &v22);
        v2 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0xC0u);
      }
      else
      {
        v11 = v9;
        *(_QWORD *)(*(_QWORD *)v4 + 8LL * v9) = v22;
        *((_DWORD *)v4 + 6) = v10;
      }
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v2, 0x5BEu);
        return v2;
      }
    }
  }
  CWindowNode::ProcessReadyFlipExImages(this);
  while ( 1 )
  {
    v17 = *((_DWORD *)this + 234);
    if ( v17 <= 0x10 )
      break;
    v13 = (struct CResource **)*((_QWORD *)this + 114);
    CResource::UnRegisterNotifierInternal(this, *v13);
    *v13 = 0LL;
    v14 = 0;
    v15 = *((unsigned int *)this + 234);
    if ( (_DWORD)v15 )
    {
      v16 = *((_QWORD *)this + 114);
      if ( (_DWORD)v15 != 1 )
      {
        do
        {
          v15 = v14++;
          *(_QWORD *)(v16 + 8 * v15) = *(_QWORD *)(v16 + 8LL * v14);
          LODWORD(v15) = *((_DWORD *)this + 234);
        }
        while ( v14 < (int)v15 - 1 );
      }
      *((_DWORD *)this + 234) = v15 - 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024809, 0x19Cu);
    }
  }
  if ( v17 )
  {
    v18 = 1;
LABEL_29:
    CVisual::PropagateFlags((__int64)this, v18, 0);
  }
  return v2;
}
