/*
 * XREFs of ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x18006578C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z @ 0x18004E410 (-ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x1800658EC (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180065958 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ??$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z @ 0x180075A14 (--$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800A5D9C (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetTransformParent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETTRANSFORMPARENT *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  char v6; // bp
  struct CResource *Resource; // r14
  unsigned int v10; // ecx
  struct TransformParentData *TransformParentDataInternal; // rax
  struct CResource *v12; // r12
  __int64 v13; // r13
  __int64 v14; // r15
  struct TransformParentData *v15; // rbx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  char v20; // [rsp+80h] [rbp+18h]
  struct TransformParentData *v21; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  v6 = 0;
  Resource = 0LL;
  if ( (_DWORD)v5 && (Resource = (struct CResource *)CResourceTable::GetResource(a2, v5, 160LL)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0xA3Fu);
  }
  else
  {
    v20 = *((_DWORD *)a3 + 3) != 0;
    TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
    v12 = 0LL;
    v21 = TransformParentDataInternal;
    v13 = 0LL;
    v14 = 0LL;
    v15 = TransformParentDataInternal;
    if ( TransformParentDataInternal )
    {
      v12 = *(struct CResource **)TransformParentDataInternal;
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)TransformParentDataInternal + 152LL))(*(_QWORD *)TransformParentDataInternal);
    }
    if ( Resource == v12 )
    {
      v14 = v13;
    }
    else
    {
      if ( Resource )
      {
        v16 = CResource::RegisterNotifier(this, Resource);
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xA53u);
          return v4;
        }
        if ( !v15 )
        {
          v15 = (struct TransformParentData *)HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
          if ( v15 )
          {
            *(_QWORD *)v15 = 0LL;
            *((_QWORD *)v15 + 1) = 0LL;
          }
          else
          {
            v15 = 0LL;
          }
          if ( !v15 )
          {
            v4 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0xA58u);
            CResource::UnRegisterNotifierInternal(this, Resource);
            return v4;
          }
          CVisual::SetTransformParentDataInternal(this, v15);
        }
        v14 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 152LL))(Resource);
        *(_QWORD *)v15 = Resource;
      }
      else if ( v15 )
      {
        SAFE_DELETE<TransformParentData>(&v21);
        CVisual::SetTransformParentDataInternal(this, 0LL);
        v15 = v21;
      }
      CResource::UnRegisterNotifierInternal(this, v12);
      if ( v14 != v13 )
      {
        CVisual::ManageTransformParentChildList(this, v15);
        v6 = 1;
      }
    }
    if ( v15 )
    {
      if ( *((_BYTE *)v15 + 8) != v20 )
      {
        *((_BYTE *)v15 + 8) = v20;
        if ( v14 )
          v6 = 1;
      }
    }
    if ( v6 )
    {
      CVisual::PropagateFlags(this, 5LL);
      CVisual::OnOuterTransformChanged(this);
    }
  }
  return v4;
}
