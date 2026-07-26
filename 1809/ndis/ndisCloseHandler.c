/*
 * XREFs of ndisCloseHandler @ 0x1C005F928
 * Callers:
 *     NdisWdfCloseIrpHandler @ 0x1C00651F0 (NdisWdfCloseIrpHandler.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisCleanupUserOpenContext @ 0x1C005F834 (ndisCleanupUserOpenContext.c)
 *     ndisDummyHandler @ 0x1C00EE614 (ndisDummyHandler.c)
 */

__int64 __fastcall ndisCloseHandler(__int64 a1, _BYTE *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  _FILE_OBJECT *FileObject; // rax
  _BYTE *FsContext; // rdx

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( *a2 == 17 )
  {
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qq(0x1Au, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a2, a3);
    FileObject = CurrentStackLocation->FileObject;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    ndisCleanupUserOpenContext((__int64)a2, FsContext);
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 2);
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qq(0x1Bu, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a2, a3);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qq(0x19u, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a2, a3);
    return ndisDummyHandler(a1, a2, a3);
  }
}
