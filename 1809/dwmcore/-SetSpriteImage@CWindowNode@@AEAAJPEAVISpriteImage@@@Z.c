/*
 * XREFs of ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x18006EEB8
 * Callers:
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18006ED1C (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x18006EE3C (-ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAG.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ResetComposeTop@CWindowNode@@AEAAXXZ @ 0x18006F12C (-ResetComposeTop@CWindowNode@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x1800A979C (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxx @ 0x1801BA300 (McTemplateU0xxx.c)
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
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v16; // rcx
  int v17; // eax
  struct CResource *v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rcx
  struct CResource *v21; // rbx
  __int64 v22; // rcx
  struct CResource *v23; // rbx
  int v24; // ecx
  unsigned int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-28h]
  struct ISpriteImage *v30; // [rsp+58h] [rbp+10h] BYREF

  v30 = a2;
  v2 = 0;
  if ( !a2 )
    goto LABEL_19;
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
LABEL_19:
    v16 = *((_QWORD *)this + 95);
    if ( v16 )
    {
      v18 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 152LL))(v16);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 95) + 168LL))(*((_QWORD *)this + 95), this);
      CResource::UnRegisterNotifierInternal(this, v18);
      *((_QWORD *)this + 95) = 0LL;
      v17 = *((_DWORD *)this + 198);
    }
    else
    {
      v17 = *((_DWORD *)this + 198);
      if ( !v17 )
        return v2;
    }
    v19 = 0LL;
    if ( v17 )
    {
      do
      {
        v20 = *(_QWORD *)(*((_QWORD *)this + 96) + 8 * v19);
        v21 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 152LL))(v20);
        v22 = *(_QWORD *)(*((_QWORD *)this + 96) + 8 * v19);
        (*(void (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v22 + 168LL))(v22, this);
        CResource::UnRegisterNotifierInternal(this, v21);
        v19 = (unsigned int)(v19 + 1);
      }
      while ( (unsigned int)v19 < *((_DWORD *)this + 198) );
    }
    *((_DWORD *)this + 198) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 768, 8u);
    goto LABEL_15;
  }
  if ( a2 == *((struct ISpriteImage **)this + 95) )
    return v2;
  v4 = (_QWORD **)((char *)this + 768);
  v5 = 0;
  v6 = (struct ISpriteImage **)*((_QWORD *)this + 96);
  if ( !*((_DWORD *)this + 198) )
  {
LABEL_7:
    if ( *((_DWORD *)this + 198) > 0x10u )
    {
      do
      {
        v23 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v4 + 152LL))(**v4);
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(*(_QWORD *)**v4 + 168LL))(**v4, this);
        CResource::UnRegisterNotifierInternal(this, v23);
        v24 = *((_DWORD *)this + 198);
        v25 = 0;
        if ( v24 )
        {
          v26 = (__int64)*v4;
          if ( v24 != 1 )
          {
            do
            {
              v27 = v25++;
              *(_QWORD *)(v26 + 8 * v27) = *(_QWORD *)(v26 + 8LL * v25);
              v24 = *((_DWORD *)this + 198);
            }
            while ( v25 < v24 - 1 );
          }
          *((_DWORD *)this + 198) = v24 - 1;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024809, 0x19Cu);
        }
      }
      while ( *((_DWORD *)this + 198) > 0x10u );
      a2 = v30;
    }
    v7 = (struct CResource *)(*(__int64 (__fastcall **)(struct ISpriteImage *))(*(_QWORD *)a2 + 152LL))(a2);
    v8 = CResource::RegisterNotifier(this, v7);
    v2 = v8;
    if ( v8 < 0 )
    {
      v29 = 1028;
    }
    else
    {
      v10 = *((_DWORD *)this + 198);
      v11 = v10 + 1;
      v2 = v10 + 1 < v10 ? 0x80070216 : 0;
      if ( v10 + 1 < v10 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v2, 0xB5u);
      }
      else if ( v11 > *((_DWORD *)this + 197) )
      {
        v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 768, 8, 1, &v30);
        v2 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v28, 0xC0u);
      }
      else
      {
        v12 = *((_DWORD *)this + 198);
        (*v4)[v10] = v30;
        *((_DWORD *)this + 198) = v11;
      }
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v2, 0x405u);
        return v2;
      }
      v8 = (*(__int64 (__fastcall **)(struct ISpriteImage *, CWindowNode *))(*(_QWORD *)v30 + 160LL))(v30, this);
      v2 = v8;
      if ( v8 >= 0 )
      {
        LOBYTE(v13) = *((_BYTE *)this + 953);
        (*(void (__fastcall **)(struct ISpriteImage *, __int64))(*(_QWORD *)v30 + 208LL))(v30, v13);
        v14 = *((_DWORD *)this + 219) >> 1;
        LOBYTE(v14) = (*((_DWORD *)this + 219) & 2) != 0;
        (*(void (__fastcall **)(struct ISpriteImage *, __int64, char *))(*(_QWORD *)v30 + 216LL))(
          v30,
          v14,
          (char *)this + 824);
        CWindowNode::ProcessReadyGdiSpriteBitmaps(this);
LABEL_15:
        if ( *((_BYTE *)this + 954) )
          CWindowNode::ResetComposeTop(this);
        *((_BYTE *)this + 952) = 0;
        CVisual::PropagateFlags(this, 5LL);
        return v2;
      }
      v29 = 1031;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v29);
    return v2;
  }
  while ( a2 != *v6 )
  {
    ++v5;
    ++v6;
    if ( v5 >= *((_DWORD *)this + 198) )
      goto LABEL_7;
  }
  return v2;
}
