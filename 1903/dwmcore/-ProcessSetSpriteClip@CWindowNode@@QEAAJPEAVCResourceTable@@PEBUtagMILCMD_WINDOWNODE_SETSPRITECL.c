/*
 * XREFs of ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x18009BFA0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETSPRITECLIP *a3)
{
  unsigned int v3; // esi
  struct CResource *v4; // rdi
  struct CResourceTable *v5; // r12
  char v8; // dl
  char v9; // bp
  __int64 v10; // rdx
  __int64 Resource; // rax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 i; // r15
  __int64 v18; // rcx

  v3 = 0;
  v4 = 0LL;
  v5 = a2;
  v8 = *((_BYTE *)a3 + 8) != 0;
  v9 = 0;
  if ( v8 != *((_BYTE *)this + 937) )
  {
    *((_BYTE *)this + 937) = v8;
    v9 = 1;
    v16 = *((_QWORD *)this + 93);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 208LL))(v16);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 194); i = (unsigned int)(i + 1) )
    {
      LOBYTE(a2) = *((_BYTE *)this + 937);
      v18 = *(_QWORD *)(*((_QWORD *)this + 94) + 8 * i);
      (*(void (__fastcall **)(__int64, struct CResourceTable *))(*(_QWORD *)v18 + 208LL))(v18, a2);
    }
  }
  v10 = *((unsigned int *)a3 + 3);
  if ( !(_DWORD)v10
    || (Resource = CResourceTable::GetResource(v5, v10, 62LL), (v4 = (struct CResource *)Resource) != 0LL)
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)Resource + 48LL))(Resource, 140LL) )
  {
    if ( v4 != *((struct CResource **)this + 100) )
    {
      v14 = CResource::RegisterNotifier(this, v4);
      v3 = v14;
      if ( v14 >= 0 )
      {
        CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 100));
        *((_QWORD *)this + 100) = v4;
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x45Fu, 0LL);
    }
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x88980403, 0x459u, 0LL);
  }
  if ( v9 )
  {
LABEL_11:
    *((_BYTE *)this + 936) = 0;
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return v3;
}
