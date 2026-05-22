/*
 * XREFs of ?Thunk_Materialize_BamoDragManagerClientProxy_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180018120
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Thunk_Materialize_BamoDragManagerClientProxy_0(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // esi
  void *v4; // rbx
  __int64 v5; // rbx
  void (__fastcall ***v6)(_QWORD); // rcx
  __int64 v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = **a2;
  v4 = operator new(0x40uLL);
  memset_0(v4, 0, 0x40uLL);
  *(_QWORD *)v4 = &BamoDragManagerClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v4 + 1) = &BamoDragManagerClientProxy::`vftable'{for `IDragManagerClientProxy'};
  *((_DWORD *)v4 + 6) = 0;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_DWORD *)v4 + 10) = 0;
  *((_WORD *)v4 + 22) = 0;
  *((_QWORD *)v4 + 2) = &BamoImpl::BamoDragManagerClientProxyImpl::`vftable';
  *((_QWORD *)v4 + 6) = 0LL;
  *((_QWORD *)v4 + 7) = 0LL;
  v5 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v4 + 48LL))(v4);
  v6 = *(void (__fastcall ****)(_QWORD))(v5 + 16);
  *(_QWORD *)(v5 + 16) = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( v6 )
    (**v6)(v6);
  *(_DWORD *)(v5 + 24) = v3;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 40LL);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v7 + 40LL))(
         v7,
         *(unsigned int *)(a1 + 36),
         v3,
         v5);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCB80,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x18001821CLL);
  }
  return 0LL;
}
