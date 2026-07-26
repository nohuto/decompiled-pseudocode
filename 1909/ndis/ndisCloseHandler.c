/*
 * XREFs of ndisCloseHandler @ 0x1C0094D08
 * Callers:
 *     NdisWdfCloseIrpHandler @ 0x1C009EC80 (NdisWdfCloseIrpHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisCleanupUserOpenContext @ 0x1C0094C0C (ndisCleanupUserOpenContext.c)
 *     ndisDummyHandler @ 0x1C0094F8C (ndisDummyHandler.c)
 */

__int64 __fastcall ndisCloseHandler(char a1, _BYTE *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v5; // rdi
  _FILE_OBJECT *FileObject; // rax
  _BYTE *FsContext; // rdx
  int v10; // edx
  char v11; // [rsp+28h] [rbp-30h]

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v5 = (__int64)a2;
  if ( *a2 == 17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        11,
        29,
        (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
        v5,
        (char)a3);
    }
    FileObject = CurrentStackLocation->FileObject;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    ndisCleanupUserOpenContext(v5, FsContext);
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        11,
        30,
        (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
        v5,
        (char)a3);
    }
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = (char)a2;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        11,
        28,
        (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
        v11,
        (char)a3);
    }
    return ndisDummyHandler(a1);
  }
}
