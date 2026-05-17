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
  if ( !byte_180165B11 )
  {
    v9 = NtCurrentPeb();
    byte_180165B11 = 1;
    qword_180165B60 = (__int64)v9->ProcessHeap;
  }
  if ( qword_180165B08 && !byte_180165B10 )
  {
LABEL_23:
    if ( a5 )
      *a5 = 1;
    return 0LL;
  }
  RtlImageNtHeaderEx(3, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v12);
  v10 = byte_180165B10;
  if ( *(_WORD *)(v12 + 92) != 1 )
    v10 = 1;
  byte_180165B10 = v10;
  if ( !v10 )
  {
    result = LdrGetDllHandleEx(1, 0LL, 0LL, (__int64)&unk_1801180C0, v13);
    if ( (int)result < 0 )
      return result;
    result = LdrGetProcedureAddressForCaller(v13[0], &qword_1801180D0, 0, &qword_180165B08, 0, retaddr);
    if ( (int)result < 0 )
      return result;
    qword_180165B50 = (__int64)NtCurrentPeb()->ProcessHeap;
    dword_180165B58 = RtlCreateTagHeap((void *)qword_180165B50);
    goto LABEL_23;
  }
  result = 0LL;
  if ( byte_180165430 )
  {
    if ( a2 == 1 )
      result = sub_1800CBCD0();
    else
      result = 3221225659LL;
  }
  else if ( a3 )
  {
    if ( qword_180165B48 )
      goto LABEL_19;
    result = sub_18004B7B4(Src, a2, a3, a4, &v15);
    if ( (int)result < 0 )
      return result;
    if ( (int)v15 < 0 )
LABEL_19:
      result = sub_18004BD54(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
