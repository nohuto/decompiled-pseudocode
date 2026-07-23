/*
 * XREFs of CsrClientConnectToServer @ 0x18004BB80
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     sub_18004B7B4 @ 0x18004B7B4 (sub_18004B7B4.c)
 *     sub_18004BD54 @ 0x18004BD54 (sub_18004BD54.c)
 *     RtlCreateTagHeap @ 0x18007C500 (RtlCreateTagHeap.c)
 *     sub_1800CBCD0 @ 0x1800CBCD0 (sub_1800CBCD0.c)
 */

int __fastcall CsrClientConnectToServer(_WORD *Src, unsigned int a2, __int64 *a3, unsigned int a4, _BYTE *a5)
{
  struct _PEB *v9; // rax
  char v10; // cl
  int result; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-28h] BYREF
  PVOID DllHandle; // [rsp+38h] [rbp-20h] BYREF
  PVOID *Callback; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v15) = -1073741823;
  if ( a3 && !a4 )
    return -1073741811;
  if ( !byte_180165B11 )
  {
    v9 = NtCurrentPeb();
    byte_180165B11 = 1;
    qword_180165B60 = v9->ProcessHeap;
  }
  if ( ProcedureAddress && !byte_180165B10 )
  {
LABEL_23:
    if ( a5 )
      *a5 = 1;
    return 0;
  }
  RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
  v10 = byte_180165B10;
  if ( OutHeaders->OptionalHeader.Subsystem != 1 )
    v10 = 1;
  byte_180165B10 = v10;
  if ( !v10 )
  {
    result = LdrGetDllHandleEx(1u, 0LL, 0LL, (PUNICODE_STRING)&DllName, &DllHandle);
    if ( result < 0 )
      return result;
    result = LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&ProcedureName, 0, &ProcedureAddress, 0, Callback);
    if ( result < 0 )
      return result;
    qword_180165B50 = NtCurrentPeb()->ProcessHeap;
    dword_180165B58 = RtlCreateTagHeap(qword_180165B50, 0, (PWSTR)L"CSRPORT!", (PWSTR)L"CAPTURE");
    goto LABEL_23;
  }
  result = 0;
  if ( byte_180165430 )
  {
    if ( a2 == 1 )
      result = sub_1800CBCD0();
    else
      result = -1073741637;
  }
  else if ( a3 )
  {
    if ( PortHandle )
      goto LABEL_19;
    result = sub_18004B7B4(Src, a2, a3, a4, &v15);
    if ( result < 0 )
      return result;
    if ( (int)v15 < 0 )
LABEL_19:
      result = sub_18004BD54(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
