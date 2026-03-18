/*
 * XREFs of _anonymous_namespace_::AddToResourceCount @ 0x1800644A8
 * Callers:
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800994F8 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x180099E64 (-CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x1800CF884 (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_C.c)
 *     ?Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x1800CFA60 (-Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_C.c)
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::AddToResourceCount(unsigned int a1, int a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx

  if ( a1 > 0x55 )
  {
    v2 = a1 - 86;
    if ( !v2 )
    {
LABEL_16:
      LODWORD(xmmword_180307EF0) = a2 + xmmword_180307EF0;
      return;
    }
    v3 = v2 - 57;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 13;
        if ( v5 )
        {
          if ( v5 != 7 )
            goto LABEL_7;
        }
      }
      goto LABEL_16;
    }
LABEL_15:
    dword_180307EE8 += a2;
    return;
  }
  if ( a1 == 85 )
  {
    DWORD1(xmmword_180307EF0) += a2;
  }
  else
  {
    if ( a1 == 29 )
      goto LABEL_19;
    if ( a1 <= 0x1E )
      goto LABEL_7;
    if ( a1 == 36 || a1 <= 0x21 )
    {
LABEL_19:
      DWORD2(xmmword_180307EF0) += a2;
    }
    else
    {
      if ( a1 != 37 )
      {
        if ( a1 == 39 )
          goto LABEL_15;
LABEL_7:
        dword_180307EEC += a2;
        return;
      }
      HIDWORD(xmmword_180307EF0) += a2;
    }
  }
}
