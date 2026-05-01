/*
 * XREFs of wil::details::functor_wrapper_void__lambda_1efbb5b924668bd981b6f09bcb2700eb__&_::Run @ 0x1800B34B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$TerminateAppRequested@AEAPEBGAEAE@AppUsageTelemetry@@SAXAEAPEBGAEAE@Z @ 0x1800AF424 (--$TerminateAppRequested@AEAPEBGAEAE@AppUsageTelemetry@@SAXAEAPEBGAEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_1efbb5b924668bd981b6f09bcb2700eb____::Run(__int64 a1)
{
  __int64 v1; // rbx
  const WCHAR *StringRawBuffer; // rax
  _BYTE *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  LPCWSTR v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)v1, 0LL);
  v3 = *(_BYTE **)(v1 + 8);
  v7 = StringRawBuffer;
  AppUsageTelemetry::TerminateAppRequested<unsigned short const * &,unsigned char &>(&v7, v3);
  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 24) + 248LL);
  if ( **(_BYTE **)(v1 + 8) )
  {
    LOBYTE(v4) = **(_DWORD **)(v1 + 16) != 0;
    (*(void (__fastcall **)(__int64, LPCWSTR, __int64))(*(_QWORD *)v5 + 64LL))(v5, v7, v4);
  }
  else
  {
    (*(void (__fastcall **)(__int64, LPCWSTR))(*(_QWORD *)v5 + 72LL))(v5, v7);
  }
  return 0LL;
}
