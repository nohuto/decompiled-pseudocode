/*
 * XREFs of ?CaptureCurrentManipulation@CInteractionProcessor@@QEAAXI_K@Z @ 0x1801EFD98
 * Callers:
 *     ?CaptureCurrentManipulation@CInteraction@@UEAAXI_K@Z @ 0x18019BF00 (-CaptureCurrentManipulation@CInteraction@@UEAAXI_K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CInteractionProcessor::CaptureCurrentManipulation(CInteractionProcessor *this, int a2, __int64 a3)
{
  const struct _TlgProvider_t *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  __int64 *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]
  int v13; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v14; // [rsp+C0h] [rbp+77h] BYREF

  v14 = a3;
  v13 = a2;
  *((_BYTE *)this + 808) |= 0x20u;
  *((_DWORD *)this + 206) = a2;
  *((_QWORD *)this + 104) = a3;
  if ( dword_180305E40 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
    {
      v5 = v4;
      v7 = &v5;
      v9 = &v13;
      v11 = &v14;
      v8 = 8LL;
      v10 = 4LL;
      v12 = 8LL;
      TlgWrite(v3, &unk_1802B75AA, 0LL, 0LL, 5u, &pData);
    }
  }
}
