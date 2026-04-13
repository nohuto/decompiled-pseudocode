/*
 * XREFs of ??$Initialize@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJPEAUINilDelegate@12@@Z @ 0x18001C168
 * Callers:
 *     ?PutOnProgress@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUINilDelegate@23@@Z @ 0x18001AD80 (-PutOnProgress@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::Initialize<Windows::Internal::INilDelegate>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // rcx

  v2 = *a1;
  v3 = 0;
  *a1 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    v5 = *a1;
  }
  if ( a2 )
  {
    if ( v5 )
    {
      *a1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return (unsigned int)RoGetAgileReference(0LL, &GUID_2fafaaf9_2986_48ee_919d_98f66edf0a31, a2, a1);
  }
  else
  {
    *a1 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v3;
}
