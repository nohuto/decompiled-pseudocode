/*
 * XREFs of ?ProcessSetBrush@CCompositionGlyphRun@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONGLYPHRUN_SETBRUSH@@@Z @ 0x1801CF7EC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionGlyphRun::ProcessSetBrush(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONGLYPHRUN_SETBRUSH *a3)
{
  signed int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x66u)) != 0LL )
  {
    if ( Resource != this[7] )
    {
      v9 = CResource::RegisterNotifier((CResource *)this, Resource);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xBDu, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
        this[7] = Resource;
      }
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v4, 0x7Bu, 0LL);
      else
        (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))*this + 8))(this, 0LL, 0LL);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x88980403, 0x75u, 0LL);
  }
  return (unsigned int)v4;
}
