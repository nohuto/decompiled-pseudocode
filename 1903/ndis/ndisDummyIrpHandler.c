/*
 * XREFs of ndisDummyIrpHandler @ 0x1C00111A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisDummyIrpHandler(__int64 a1, _IRP *a2)
{
  _BYTE *v2; // rbx
  _IRP *v3; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v6; // ebx
  int v7; // edx
  __int64 (__fastcall *v9)(__int64, _IRP *); // rax
  char v10; // [rsp+30h] [rbp-18h]

  v2 = *(_BYTE **)(a1 + 64);
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      31,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1,
      v10);
  }
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  if ( *v2 == 17 )
  {
    v6 = CurrentStackLocation->MajorFunction != 18 ? 0xC00000BB : 0;
LABEL_5:
    v3->IoStatus.Status = v6;
    IofCompleteRequest(v3, 2);
    goto LABEL_6;
  }
  if ( *v2 != 9
    || (v9 = *(__int64 (__fastcall **)(__int64, _IRP *))&v2[8 * CurrentStackLocation->MajorFunction + 48]) == 0LL )
  {
    v6 = -1073741637;
    goto LABEL_5;
  }
  v6 = v9(a1, v3);
LABEL_6:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      11,
      32,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1,
      (char)v3);
  }
  return v6;
}
