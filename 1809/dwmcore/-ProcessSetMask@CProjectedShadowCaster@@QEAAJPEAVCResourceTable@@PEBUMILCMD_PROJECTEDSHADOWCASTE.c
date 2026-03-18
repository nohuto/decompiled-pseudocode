/*
 * XREFs of ?ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCASTER_SETMASK@@@Z @ 0x1801ADCA0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyMaskIntermediate@CProjectedShadowCaster@@QEAAXXZ @ 0x1801ACFC4 (-DestroyMaskIntermediate@CProjectedShadowCaster@@QEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadowCaster::ProcessSetMask(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWCASTER_SETMASK *a3)
{
  int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xEu)) != 0LL )
  {
    if ( Resource != this[15] )
    {
      v9 = CResource::RegisterNotifier((CResource *)this, Resource);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x18Fu);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
        this[15] = Resource;
        CProjectedShadowCaster::DestroyMaskIntermediate((CProjectedShadowCaster *)this);
      }
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v4, 0xB2u);
      else
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))*this + 8))(this, 0LL, 0LL);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0xACu);
  }
  return (unsigned int)v4;
}
