/*
 * XREFs of CsrClientConnectToServer @ 0x18004BC20
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     CsrpConnectToServer @ 0x18004B854 (CsrpConnectToServer.c)
 *     CsrpClientConnectToServer @ 0x18004BDF4 (CsrpClientConnectToServer.c)
 *     RtlCreateTagHeap @ 0x18007CBA0 (RtlCreateTagHeap.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CBD98 (CsrpLocalSetupForSecureProcess.c)
 */

__int64 __fastcall CsrClientConnectToServer(_WORD *Src, unsigned int a2, __int64 *a3, unsigned int a4, _BYTE *a5)
{
  struct _PEB *v9; // rax
  char v10; // cl
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v13[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v15) = -1073741823;
  if ( a3 && !a4 )
    return 3221225485LL;
  if ( !CsrInitOnceDone )
  {
    v9 = NtCurrentPeb();
    CsrInitOnceDone = 1;
    CsrHeap = (__int64)v9->ProcessHeap;
  }
  if ( CsrServerApiRoutine && !CsrClientProcess )
  {
LABEL_23:
    if ( a5 )
      *a5 = 1;
    return 0LL;
  }
  RtlImageNtHeaderEx(3, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v12);
  v10 = CsrClientProcess;
  if ( *(_WORD *)(v12 + 92) != 1 )
    v10 = 1;
  CsrClientProcess = v10;
  if ( !v10 )
  {
    result = LdrGetDllHandleEx(1, 0LL, 0LL, (__int64)&unk_1801180C0, v13);
    if ( (int)result < 0 )
      return result;
    result = LdrGetProcedureAddressForCaller(v13[0], &qword_1801180D0, 0, &CsrServerApiRoutine, 0, retaddr);
    if ( (int)result < 0 )
      return result;
    CsrPortHeap = (__int64)NtCurrentPeb()->ProcessHeap;
    CsrPortBaseTag = RtlCreateTagHeap((void *)CsrPortHeap);
    goto LABEL_23;
  }
  result = 0LL;
  if ( LdrpIsSecureProcess )
  {
    if ( a2 == 1 )
      result = CsrpLocalSetupForSecureProcess();
    else
      result = 3221225659LL;
  }
  else if ( a3 )
  {
    if ( CsrPortHandle )
      goto LABEL_19;
    result = CsrpConnectToServer(Src, a2, a3, a4, &v15);
    if ( (int)result < 0 )
      return result;
    if ( (int)v15 < 0 )
LABEL_19:
      result = CsrpClientConnectToServer(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
