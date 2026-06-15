/*
 * XREFs of ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x14004F890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x140036EE8 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::IsProperlyInitialized(CCrossProcessBaseServerEndpoint *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rax
  wil::details *v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  wil::details *v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 408);
  if ( *((_QWORD *)this + 51) )
    return 0LL;
  v3 = *((_QWORD *)this + 53);
  if ( !v3 )
    return 0LL;
  _InterlockedExchange64((volatile __int64 *)this + 52, v3);
  v4 = (wil::details *)*((_QWORD *)this + 52);
  if ( v4 )
  {
    v10 = v4;
    v5 = *v1;
    *v1 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(v1, &v10);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
    *((_QWORD *)this + 53) = 0LL;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD2,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.h",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
