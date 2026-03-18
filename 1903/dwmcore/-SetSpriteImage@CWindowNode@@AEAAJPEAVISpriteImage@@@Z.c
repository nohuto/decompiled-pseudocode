/*
 * XREFs of ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18002BAC8
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18002B938 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWN.c)
 *     ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x18002BA4C (-ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITEI.c)
 * Callees:
 *     ?ResetComposeTop@CWindowNode@@AEAAXXZ @ 0x18002D798 (-ResetComposeTop@CWindowNode@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18008F320 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxx @ 0x180164C0C (McTemplateU0xxx.c)
 */

__int64 __fastcall CWindowNode::SetSpriteImage(CWindowNode *this, struct ISpriteImage *a2)
{
  unsigned int v2; // ebp
  _QWORD **v4; // rdi
  unsigned int v5; // ecx
  struct ISpriteImage **v6; // rax
  struct CResource *v7; // rax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // rcx
  int v16; // eax
  struct CResource *v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rcx
  struct CResource *v20; // rbx
  __int64 v21; // rcx
  struct CResource *v22; // rbx
  int v23; // ecx
  unsigned int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-28h]
  struct ISpriteImage *v30; // [rsp+58h] [rbp+10h] BYREF

  v30 = a2;
  v2 = 0;
  if ( !a2 )
    goto LABEL_18;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0xxx(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_WINDOWNODE_GDISPRITE_ASSOCIATION,
      *((_QWORD *)this + 80),
      *((_QWORD *)this + 81),
      (char)a2);
    a2 = v30;
  }
  if ( !a2 )
  {
LABEL_18:
    v15 = *((_QWORD *)this + 93);
    if ( v15 )
    {
      v17 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 152LL))(v15);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 93) + 168LL))(*((_QWORD *)this + 93), this);
      CResource::UnRegisterNotifierInternal(this, v17);
      *((_QWORD *)this + 93) = 0LL;
      v16 = *((_DWORD *)this + 194);
    }
    else
    {
      v16 = *((_DWORD *)this + 194);
      if ( !v16 )
        return v2;
    }
    v18 = 0LL;
    if ( v16 )
    {
      do
      {
        v19 = *(_QWORD *)(*((_QWORD *)this + 94) + 8 * v18);
        v20 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 152LL))(v19);
        v21 = *(_QWORD *)(*((_QWORD *)this + 94) + 8 * v18);
        (*(void (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v21 + 168LL))(v21, this);
        CResource::UnRegisterNotifierInternal(this, v20);
        v18 = (unsigned int)(v18 + 1);
      }
      while ( (unsigned int)v18 < *((_DWORD *)this + 194) );
    }
    *((_DWORD *)this + 194) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 752, 8LL);
    goto LABEL_14;
  }
  if ( a2 == *((struct ISpriteImage **)this + 93) )
    return v2;
  v4 = (_QWORD **)((char *)this + 752);
  v5 = 0;
  v6 = (struct ISpriteImage **)*((_QWORD *)this + 94);
  if ( !*((_DWORD *)this + 194) )
  {
LABEL_7:
    if ( *((_DWORD *)this + 194) > 0x10u )
    {
      do
      {
        v22 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v4 + 152LL))(**v4);
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(*(_QWORD *)**v4 + 168LL))(**v4, this);
        CResource::UnRegisterNotifierInternal(this, v22);
        v23 = *((_DWORD *)this + 194);
        v24 = 0;
        if ( v23 )
        {
          v25 = (__int64)*v4;
          if ( v23 != 1 )
          {
            do
            {
              v26 = v24++;
              *(_QWORD *)(v25 + 8 * v26) = *(_QWORD *)(v25 + 8LL * v24);
              v23 = *((_DWORD *)this + 194);
            }
            while ( v24 < v23 - 1 );
          }
          *((_DWORD *)this + 194) = v23 - 1;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024809, 0x19Fu, 0LL);
        }
      }
      while ( *((_DWORD *)this + 194) > 0x10u );
      a2 = v30;
    }
    v7 = (struct CResource *)(*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)a2 + 152LL))(a2);
    v8 = CResource::RegisterNotifier(this, v7);
    v2 = v8;
    if ( v8 < 0 )
    {
      v29 = 1009;
      goto LABEL_43;
    }
    v10 = *((_DWORD *)this + 194);
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v2 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0xB8u, 0LL);
    }
    else
    {
      if ( v11 <= *((_DWORD *)this + 193) )
      {
        (*v4)[v10] = v30;
        *((_DWORD *)this + 194) = v11;
LABEL_12:
        v8 = (*(__int64 (__fastcall **)(struct ISpriteImage *, CWindowNode *))(*(_QWORD *)v30 + 160LL))(v30, this);
        v2 = v8;
        if ( v8 >= 0 )
        {
          LOBYTE(v12) = *((_BYTE *)this + 937);
          (*(void (__fastcall **)(struct ISpriteImage *, __int64))(*(_QWORD *)v30 + 208LL))(v30, v12);
          v13 = *((_DWORD *)this + 215) >> 1;
          LOBYTE(v13) = (*((_DWORD *)this + 215) & 2) != 0;
          (*(void (__fastcall **)(struct ISpriteImage *, __int64, char *))(*(_QWORD *)v30 + 216LL))(
            v30,
            v13,
            (char *)this + 808);
          CWindowNode::ProcessReadyGdiSpriteBitmaps(this);
LABEL_14:
          if ( *((_BYTE *)this + 938) )
            CWindowNode::ResetComposeTop(this);
          *((_BYTE *)this + 936) = 0;
          CVisual::PropagateFlags(this, 5LL);
          return v2;
        }
        v29 = 1012;
LABEL_43:
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v29, 0LL);
        return v2;
      }
      v28 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 752, 8LL, 1LL, &v30);
      v2 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v28, 0xC3u, 0LL);
    }
    if ( (v2 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v2, 0x3F2u, 0LL);
      return v2;
    }
    goto LABEL_12;
  }
  while ( a2 != *v6 )
  {
    ++v5;
    ++v6;
    if ( v5 >= *((_DWORD *)this + 194) )
      goto LABEL_7;
  }
  return v2;
}
