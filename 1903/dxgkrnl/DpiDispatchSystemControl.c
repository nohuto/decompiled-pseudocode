/*
 * XREFs of DpiDispatchSystemControl @ 0x1C029DEC0
 * Callers:
 *     <none>
 * Callees:
 *     LoadEtwStackLocation @ 0x1C0006350 (LoadEtwStackLocation.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C003566C (McTemplateK0xq.c)
 *     McTemplateK0phbr1q @ 0x1C004B50C (McTemplateK0phbr1q.c)
 */

__int64 __fastcall DpiDispatchSystemControl(__int64 a1, IRP *a2)
{
  __int64 v2; // rbp
  char v3; // r14
  _BYTE *EtwStackLocation; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 (__fastcall *v18)(__int64, IRP *); // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-F8h]
  _BYTE v21[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v22; // [rsp+90h] [rbp-88h]
  __int128 v23; // [rsp+A0h] [rbp-78h]
  __int128 v24; // [rsp+B0h] [rbp-68h]
  __int128 v25; // [rsp+C0h] [rbp-58h]
  __int64 v26; // [rsp+D0h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation(v21, (__int64)a2);
    v22 = *(_OWORD *)EtwStackLocation;
    v23 = *((_OWORD *)EtwStackLocation + 1);
    v24 = *((_OWORD *)EtwStackLocation + 2);
    v25 = *((_OWORD *)EtwStackLocation + 3);
    v26 = *((_QWORD *)EtwStackLocation + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0phbr1q(v7, &EventEnterDpiDispatchSystemControl, v8, a1);
  }
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), a2, File, 1u, 0x20u);
  v13 = v9;
  if ( v9 >= 0 )
  {
    v18 = *(__int64 (__fastcall **)(__int64, IRP *))(v2 + 144);
    v3 = 1;
    if ( v18 )
    {
      LODWORD(v13) = v18(a1, a2);
      if ( (_DWORD)v13 != -1073741637 )
        goto LABEL_7;
    }
    LODWORD(v13) = -1073741637;
    if ( *(_BYTE *)(v2 + 56) == 1 )
    {
      if ( *(_QWORD *)(v2 + 160) )
      {
        CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
        if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
        {
          ++a2->CurrentLocation;
          a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
          LODWORD(v13) = IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 160), a2);
          goto LABEL_7;
        }
      }
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = v13;
    WdLogEvent5_WdWarning(v14);
  }
  a2->IoStatus.Status = v13;
  IofCompleteRequest(a2, 0);
  if ( v3 == 1 )
LABEL_7:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), a2, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(RemlockSize) = v13;
    McTemplateK0xq(v15, &EventExitDpiDispatchSystemControl, v16, a1, RemlockSize);
  }
  return (unsigned int)v13;
}
