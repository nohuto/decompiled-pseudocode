/*
 * XREFs of ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800C3204
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z @ 0x180078B14 (-ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800A41E4 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BCD5C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x1800C335C (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x1800C33A8 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ??$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z @ 0x1800D71F4 (--$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetTransformParent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETTRANSFORMPARENT *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  char v6; // bp
  struct CResource *Resource; // r14
  __int64 v10; // rcx
  struct TransformParentData *TransformParentDataInternal; // rax
  struct CResource *v12; // r12
  __int64 v13; // r13
  __int64 v14; // r15
  struct TransformParentData *v15; // rbx
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v22; // r10
  __int64 v23; // rcx
  unsigned int Slot; // eax
  __int64 v25; // r10
  char v26; // [rsp+80h] [rbp+18h]
  struct TransformParentData *v27; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0;
  Resource = 0LL;
  if ( v5 && (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xC0u)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x88980403, 0xA93u, 0LL);
  }
  else
  {
    v26 = *((_BYTE *)a3 + 12) != 0;
    TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
    v12 = 0LL;
    v27 = TransformParentDataInternal;
    v13 = 0LL;
    v14 = 0LL;
    v15 = TransformParentDataInternal;
    if ( TransformParentDataInternal )
    {
      v12 = *(struct CResource **)TransformParentDataInternal;
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)TransformParentDataInternal + 192LL))(*(_QWORD *)TransformParentDataInternal);
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
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xAA7u, 0LL);
          return v4;
        }
        if ( !v15 )
        {
          v15 = (struct TransformParentData *)DefaultHeap::Alloc(0x10uLL);
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
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, 0x8007000E, 0xAACu, 0LL);
            CResource::UnRegisterNotifierInternal(this, Resource);
            return v4;
          }
          CVisual::SetTransformParentDataInternal(this, v15);
        }
        v14 = (*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 192LL))(Resource);
        *(_QWORD *)v15 = Resource;
      }
      else if ( v15 )
      {
        SAFE_DELETE<TransformParentData>(&v27);
        v22 = (_DWORD *)*((_QWORD *)this + 28);
        if ( (*v22 & 0x800000) != 0 )
        {
          v23 = *((_QWORD *)this + 28);
          *v22 &= ~0x800000u;
          Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v23, 9);
          if ( Slot < *(_DWORD *)(v25 + 4) )
            *(_BYTE *)(Slot + v25 + 8) = 0;
        }
        v15 = v27;
      }
      CResource::UnRegisterNotifierInternal(this, v12);
      if ( v14 != v13 )
      {
        CVisual::ManageTransformParentChildList(this, v15, v19, v20);
        v6 = 1;
      }
    }
    if ( v15 )
    {
      if ( *((_BYTE *)v15 + 8) != v26 )
      {
        *((_BYTE *)v15 + 8) = v26;
        if ( v14 )
          v6 = 1;
      }
    }
    if ( v6 )
    {
      CVisual::PropagateFlags((__int64)this, 5u, 0);
      CVisual::OnOuterTransformChanged(this);
    }
  }
  return v4;
}
