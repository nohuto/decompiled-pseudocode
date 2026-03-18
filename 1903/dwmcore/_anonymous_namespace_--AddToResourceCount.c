/*
 * XREFs of _anonymous_namespace_::AddToResourceCount @ 0x1800C1260
 * Callers:
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18003F8C0 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x180040A08 (-CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x18009C0FC (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x18009C280 (-Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::AddToResourceCount(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx

  if ( a1 > 42 )
  {
    v2 = a1 - 90;
    if ( !v2 )
    {
      DWORD1(xmmword_18033C990) += a2;
      return;
    }
    v3 = v2 - 1;
    if ( !v3 )
    {
LABEL_9:
      LODWORD(xmmword_18033C990) = a2 + xmmword_18033C990;
      return;
    }
    v4 = v3 - 83;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 14;
        if ( v6 )
        {
          if ( v6 != 8 )
            goto LABEL_8;
        }
      }
      goto LABEL_9;
    }
    goto LABEL_20;
  }
  if ( a1 == 42 )
  {
LABEL_20:
    DWORD2(xmmword_18033C980) += a2;
    return;
  }
  v7 = a1 - 29;
  if ( v7 && (v8 = v7 - 2) != 0 && (v9 = v8 - 2) != 0 && (v10 = v9 - 2) != 0 && (v11 = v10 - 3) != 0 )
  {
    if ( v11 != 1 )
    {
LABEL_8:
      HIDWORD(xmmword_18033C980) += a2;
      return;
    }
    HIDWORD(xmmword_18033C990) += a2;
  }
  else
  {
    DWORD2(xmmword_18033C990) += a2;
  }
}
