/*
 * XREFs of xxxSendMessageEx @ 0x1C00F77B0
 * Callers:
 *     xxxSendMessageFF @ 0x1C020D050 (xxxSendMessageFF.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 */

ULONG_PTR __fastcall xxxSendMessageEx(
        __int64 *BugCheckParameter2,
        unsigned int a2,
        HWND a3,
        struct _LARGE_STRING *a4,
        ULONG64 a5)
{
  _BYTE *v6; // rcx
  __int64 v7; // rax
  ULONG_PTR v8; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+58h] [rbp-40h] BYREF
  int v11[4]; // [rsp+70h] [rbp-28h] BYREF
  ULONG_PTR v12; // [rsp+80h] [rbp-18h]

  if ( !a5 )
    return xxxSendTransformableMessageTimeout(BugCheckParameter2, a2, a3, a4, 0, 0, 0LL, 0, 1);
  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  if ( !KeGetCurrentThread() )
    return 0LL;
  v6 = (_BYTE *)a5;
  if ( (a5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a5 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v6[23] = v6[23];
  *(_OWORD *)v11 = *(_OWORD *)a5;
  v12 = *(_QWORD *)(a5 + 16);
  v7 = xxxSendTransformableMessageTimeout(
         BugCheckParameter2,
         a2,
         a3,
         a4,
         v11[0],
         v11[1],
         (__int64 *)BugCheckParameter3,
         0,
         1);
  v8 = BugCheckParameter3[0];
  v12 = BugCheckParameter3[0];
  *(_QWORD *)&v11[2] = v7;
  *(_OWORD *)a5 = *(_OWORD *)v11;
  *(_QWORD *)(a5 + 16) = v12;
  return v8;
}
