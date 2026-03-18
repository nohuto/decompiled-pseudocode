/*
 * XREFs of ?ProcessSetLight@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_SETLIGHT@@@Z @ 0x1801B01C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetLight(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWSCENE_SETLIGHT *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *v6; // rdi
  __int64 Resource; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  struct CResource *v12; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  if ( !v5
    || (Resource = CResourceTable::GetResource((__int64)a2, v5, 0x20u), (v6 = (struct CResource *)Resource) != 0LL)
    && ((*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)Resource + 48LL))(Resource, 31LL)
     || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v6 + 48LL))(v6, 33LL)) )
  {
    if ( v6 != this[11] )
    {
      v10 = CResource::RegisterNotifier((CResource *)this, v6);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x12Fu);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
        v12 = *this;
        this[11] = v6;
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))v12 + 8))(this, 0LL, 0LL);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x129u);
  }
  return v4;
}
