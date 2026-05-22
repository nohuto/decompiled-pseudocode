/*
 * XREFs of ?OnHitTest@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800FB970
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VActivationContext@@V1@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@_N@Details@WRL@Microsoft@@YAJPEAPEAVActivationContext@@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@$$QEA_N@Z @ 0x1800FB798 (--$MakeAndInitialize@VActivationContext@@V1@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@_N@Details@WRL.c)
 */

__int64 __fastcall ActivationProcessor::OnHitTest(
        ActivationProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  unsigned int v5; // r10d
  unsigned int v6; // eax
  _BYTE *v7; // rcx
  int v9; // eax
  ActivationContext *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(ActivationContext *, GUID *, char *); // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v15; // [rsp+48h] [rbp+10h] BYREF
  ActivationContext *v16; // [rsp+58h] [rbp+20h] BYREF

  *(_DWORD *)a4 = 1;
  if ( (*(_BYTE *)a2 & 0x3B) == 0 || (v5 = *((_DWORD *)a2 + 53), v6 = 0, !v5) )
  {
LABEL_6:
    *(_DWORD *)a4 = 0;
    return 0LL;
  }
  v7 = (char *)a2 + 228;
  while ( (*v7 & 4) == 0 )
  {
    ++v6;
    v7 += 144;
    if ( v6 >= v5 )
      goto LABEL_6;
  }
  v16 = 0LL;
  v15 = 0;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<ActivationContext,ActivationContext,enum SPATIAL_INPUT_ACTIVATION_POLICY &,bool>(
         &v16,
         (_DWORD *)a3 + 22,
         &v15);
  v10 = v16;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v13 = **(__int64 (__fastcall ***)(ActivationContext *, GUID *, char *))v16;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)a4 + 1);
    v9 = v13(v10, &GUID_00000000_0000_0000_c000_000000000046, (char *)a4 + 8);
    v11 = v9;
    if ( v9 >= 0 )
    {
      v11 = 0;
      goto LABEL_13;
    }
    v12 = 67LL;
  }
  else
  {
    v12 = 66LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\activa"
             "tionprocessor.cpp",
    (const char *)(unsigned int)v9);
LABEL_13:
  if ( v10 )
    (*(void (__fastcall **)(ActivationContext *))(*(_QWORD *)v10 + 16LL))(v10);
  return v11;
}
