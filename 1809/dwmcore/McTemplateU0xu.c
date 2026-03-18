/*
 * XREFs of McTemplateU0xu @ 0x18022E6D8
 * Callers:
 *     _lambda_6a58240d8047e86606b12524314309a7_::operator() @ 0x18022D66C (_lambda_6a58240d8047e86606b12524314309a7_--operator().c)
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18022DBE0 (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 *     ?LockForDraw@CFramebuffer@CComputeScribbleRenderer@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18022E250 (-LockForDraw@CFramebuffer@CComputeScribbleRenderer@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022F7E4 (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     McGenEventWrite @ 0x1800841D4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xu(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, char a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v6; // [rsp+40h] [rbp-38h]
  int v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+4Ch] [rbp-2Ch]
  char *v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF
  char v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = &v12;
  v8 = 0;
  v7 = 8;
  v9 = &v13;
  v11 = 0;
  v10 = 1;
  return McGenEventWrite(Microsoft_Windows_Dwm_Core_Provider_Context, a2, a3, 3u, &v5);
}
