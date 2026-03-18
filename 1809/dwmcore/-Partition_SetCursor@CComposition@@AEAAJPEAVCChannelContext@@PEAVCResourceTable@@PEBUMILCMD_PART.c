/*
 * XREFs of ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1800EA188
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800EA1EC (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x18014B36C (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18014BEA0 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_SetCursor(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SETCURSOR *a4)
{
  struct CVisual *Resource; // rax
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rcx

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0x9Du);
  if ( !Resource )
    CComposition::FailFastOnMalformedPacket(this, 4261279585LL, 0LL, v7);
  if ( *((_DWORD *)a4 + 2) )
  {
    v8 = CComposition::AddCursorVisual(this, Resource);
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x6ADu);
  }
  else
  {
    CComposition::RemoveCursorVisual(this, Resource);
  }
  return 0LL;
}
