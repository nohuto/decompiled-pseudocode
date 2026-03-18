/*
 * XREFs of ?ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY@@@Z @ 0x1801A7F30
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x1801A7DA0 (-GetVertexCount@CMeshGeometry2D@@UEAAIXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::ProcessSetConstantOpacity(
        CMeshGeometry2D *this,
        struct CResourceTable *a2,
        const struct MILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r8

  v5 = 0;
  LODWORD(v6) = CMeshGeometry2D::GetVertexCount(this);
  if ( (_DWORD)v6 == *((_DWORD *)this + 36) >> 2 )
  {
    if ( (_DWORD)v6 )
    {
      v7 = 0LL;
      v6 = (unsigned int)v6;
      do
      {
        *(_DWORD *)(v7 + *((_QWORD *)this + 19)) = *((_DWORD *)a3 + 2);
        v7 += 4LL;
        --v6;
      }
      while ( v6 );
    }
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v6, 0LL, 0, -2003303421, 0x3Bu);
  }
  return v5;
}
