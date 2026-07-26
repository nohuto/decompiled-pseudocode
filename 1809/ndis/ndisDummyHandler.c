/*
 * XREFs of ndisDummyHandler @ 0x1C00EE614
 * Callers:
 *     ndisCloseIrpHandler @ 0x1C0009CA0 (ndisCloseIrpHandler.c)
 *     ndisCreateHandler @ 0x1C000F8B0 (ndisCreateHandler.c)
 *     ndisCloseHandler @ 0x1C005F928 (ndisCloseHandler.c)
 *     ndisDeviceInternalDispatch @ 0x1C0068FC4 (ndisDeviceInternalDispatch.c)
 *     ndisWMIDispatch @ 0x1C00B537C (ndisWMIDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

__int64 __fastcall ndisDummyHandler(__int64 a1, _BYTE *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(__int64, _IRP *); // rax

  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x1Cu, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1, a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( *a2 == 17 )
  {
    v7 = CurrentStackLocation->MajorFunction != 18 ? 0xC00000BB : 0;
  }
  else
  {
    if ( *a2 == 9 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, _IRP *))&a2[8 * CurrentStackLocation->MajorFunction + 48];
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
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x1Du, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1, a3);
  return v7;
}
