/*
 * XREFs of ndisDummyHandler @ 0x1C0094F8C
 * Callers:
 *     ndisCloseIrpHandler @ 0x1C0001070 (ndisCloseIrpHandler.c)
 *     ndisCreateHandler @ 0x1C000FBB0 (ndisCreateHandler.c)
 *     ndisWMIDispatch @ 0x1C00191AC (ndisWMIDispatch.c)
 *     ndisCloseHandler @ 0x1C0094D08 (ndisCloseHandler.c)
 *     ndisDeviceInternalDispatch @ 0x1C00A4E58 (ndisDeviceInternalDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisDummyHandler(__int64 a1, _BYTE *a2, _IRP *a3)
{
  _BYTE *v4; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(__int64, _IRP *); // rax
  int v9; // edx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      31,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1,
      (char)a3);
  }
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( *v4 == 17 )
  {
    v7 = CurrentStackLocation->MajorFunction != 18 ? 0xC00000BB : 0;
  }
  else
  {
    if ( *v4 == 9 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, _IRP *))&v4[8 * CurrentStackLocation->MajorFunction + 48];
      if ( v8 )
      {
        v7 = v8(a1, a3);
        goto LABEL_10;
      }
    }
    v7 = -1073741637;
  }
  a3->IoStatus.Status = v7;
  IofCompleteRequest(a3, 2);
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      11,
      32,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1,
      (char)a3);
  }
  return v7;
}
