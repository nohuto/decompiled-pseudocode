/*
 * XREFs of ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x1800A2464
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETSPRITECLIP *a3)
{
  unsigned int v3; // esi
  struct CResource *v4; // rdi
  struct CResourceTable *v5; // r12
  char v8; // dl
  char v9; // bp
  __int64 v10; // rdx
  __int64 Resource; // rax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 i; // r15
  __int64 v18; // rcx

  v3 = 0;
  v4 = 0LL;
  v5 = a2;
  v8 = *((_DWORD *)a3 + 2) != 0;
  v9 = 0;
  if ( v8 != *((_BYTE *)this + 953) )
  {
    *((_BYTE *)this + 953) = v8;
    v9 = 1;
    v16 = *((_QWORD *)this + 95);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 208LL))(v16);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 198); i = (unsigned int)(i + 1) )
    {
      LOBYTE(a2) = *((_BYTE *)this + 953);
      v18 = *(_QWORD *)(*((_QWORD *)this + 96) + 8 * i);
      (*(void (__fastcall **)(__int64, struct CResourceTable *))(*(_QWORD *)v18 + 208LL))(v18, a2);
    }
  }
  v10 = *((unsigned int *)a3 + 3);
  if ( !(_DWORD)v10
    || (Resource = CResourceTable::GetResource(v5, v10, 59LL), (v4 = (struct CResource *)Resource) != 0LL)
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)Resource + 48LL))(Resource, 126LL) )
  {
    if ( v4 != *((struct CResource **)this + 102) )
    {
      v14 = CResource::RegisterNotifier(this, v4);
      v3 = v14;
      if ( v14 >= 0 )
      {
        CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 102));
        *((_QWORD *)this + 102) = v4;
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x470u);
    }
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2003303421, 0x46Au);
  }
  if ( v9 )
  {
LABEL_11:
    *((_BYTE *)this + 952) = 0;
    CVisual::PropagateFlags(this, 5LL);
  }
  return v3;
}
