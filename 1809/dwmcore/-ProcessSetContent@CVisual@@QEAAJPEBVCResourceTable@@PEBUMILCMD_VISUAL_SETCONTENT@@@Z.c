/*
 * XREFs of ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x18006BE74
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ProcessSetContent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETCONTENT *a3)
{
  unsigned int v3; // eax
  const struct CResourceTable *v4; // r9
  __int64 Resource; // rdx
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx

  v3 = *((_DWORD *)a3 + 2);
  v4 = a2;
  Resource = 0LL;
  if ( v3 && (Resource = CResourceTable::GetResource(v4, v3, 40LL)) == 0 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0xBE1u);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(CVisual *, __int64, const struct MILCMD_VISUAL_SETCONTENT *, const struct CResourceTable *))(*(_QWORD *)this + 296LL))(
           this,
           Resource,
           a3,
           v4);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xBE5u);
  }
  return v10;
}
