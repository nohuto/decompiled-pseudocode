/*
 * XREFs of ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z @ 0x1C023E5C8
 * Callers:
 *     NtUserRequestMoveSizeOperation @ 0x1C02335C0 (NtUserRequestMoveSizeOperation.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z @ 0x1C023E4E4 (-CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C023E8E0 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 */

char __fastcall CMoveSizeRequest::xxxRequestMoveSizeOperation(struct tagWND *a1, int a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  struct tagPOINT v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( !CMoveSizeRequest::xxxValidateCapture(a1, a3, &v10) )
  {
    v8 = 5LL;
LABEL_3:
    UserSetLastError(v8, v5, v6, v7);
    return 0;
  }
  if ( !CMoveSizeRequest::CreateAndPostRequest((__int64)a1, a2, (__int64 *)&v10) )
  {
    v8 = 8LL;
    goto LABEL_3;
  }
  return 1;
}
