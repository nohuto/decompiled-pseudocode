/*
 * XREFs of ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180219B5C
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18002B938 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWN.c)
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x180219924 (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SET.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x1800D3EF4 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 */

__int64 __fastcall CWindowNode::SetFlipExBitmap(CWindowNode *this, struct CCompositionSurfaceBitmap *a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // r15d
  char *v5; // rbx
  unsigned int v6; // ecx
  struct CCompositionSurfaceBitmap **v7; // rax
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  signed int v13; // eax
  struct CResource **v14; // rbx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 i; // r14
  __int64 v19; // rbx
  struct CCompositionSurfaceBitmap *v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
  v2 = 0;
  v4 = 1;
  if ( !a2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 230); i = (unsigned int)(i + 1) )
    {
      v19 = *((_QWORD *)this + 112);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v19 + 8 * i));
      *(_QWORD *)(v19 + 8 * i) = 0LL;
    }
    *((_DWORD *)this + 230) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 896, 8u);
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 111));
    *((_QWORD *)this + 111) = 0LL;
    v4 = 5;
    goto LABEL_30;
  }
  if ( a2 == *((struct CCompositionSurfaceBitmap **)this + 111) )
  {
LABEL_11:
    if ( CWindowNode::ProcessReadyFlipExImages(this) )
      v4 = 5;
    while ( *((_DWORD *)this + 230) > 0x10u )
    {
      v14 = (struct CResource **)*((_QWORD *)this + 112);
      CResource::UnRegisterNotifierInternal(this, *v14);
      *v14 = 0LL;
      v15 = 0;
      v16 = *((unsigned int *)this + 230);
      if ( (_DWORD)v16 )
      {
        v17 = *((_QWORD *)this + 112);
        if ( (_DWORD)v16 != 1 )
        {
          do
          {
            v16 = v15++;
            *(_QWORD *)(v17 + 8 * v16) = *(_QWORD *)(v17 + 8LL * v15);
            LODWORD(v16) = *((_DWORD *)this + 230);
          }
          while ( v15 < (int)v16 - 1 );
        }
        *((_DWORD *)this + 230) = v16 - 1;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x80070057, 0x19Fu, 0LL);
      }
    }
LABEL_30:
    CVisual::PropagateFlags((__int64)this, v4, 0);
    return v2;
  }
  v5 = (char *)this + 896;
  v6 = 0;
  v7 = *(struct CCompositionSurfaceBitmap ***)v5;
  if ( *((_DWORD *)v5 + 6) )
  {
    while ( a2 != *v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= *((_DWORD *)v5 + 6) )
        goto LABEL_6;
    }
    goto LABEL_11;
  }
LABEL_6:
  v8 = CResource::RegisterNotifier(this, a2);
  v2 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x591u, 0LL);
    return v2;
  }
  v10 = *((_DWORD *)v5 + 6);
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v2 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    goto LABEL_16;
  }
  if ( v11 <= *((_DWORD *)v5 + 5) )
  {
    v2 = 0;
    *(_QWORD *)(*(_QWORD *)v5 + 8LL * *((unsigned int *)v5 + 6)) = v21;
    *((_DWORD *)v5 + 6) = v11;
    goto LABEL_11;
  }
  v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v5, 8, 1, &v21);
  v2 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v13, 0xC3u, 0LL);
LABEL_16:
  if ( (v2 & 0x80000000) == 0 )
    goto LABEL_11;
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v2, 0x592u, 0LL);
  return v2;
}
