/*
 * XREFs of CreateSystemInputHost @ 0x180004250
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x1800043C4 (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004674 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateSystemInputHost(void *a1, __int64 a2)
{
  const char *v4; // r9
  int v5; // ebx
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  struct OneCoreUAPInputHost *v8; // rcx
  OneCoreUAPInputHost *v9; // rax
  OneCoreUAPInputHost *v10; // rcx
  OneCoreUAPInputHost *v11; // rbx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InitOnceExecuteOnce(&gInitOnce, (PINIT_ONCE_FN)InitEditionOnceCallback, 0LL, 0LL);
  if ( !a2 )
  {
    v5 = -2147024809;
    v6 = 153LL;
LABEL_3:
    v7 = (unsigned int)v5;
    goto LABEL_4;
  }
  v8 = OneCoreUAPInputHost::s_pInputHost;
  if ( !OneCoreUAPInputHost::s_pInputHost )
  {
    if ( ISMTestMode::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x16,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
        v4);
      JUMPOUT(0x1800043BDLL);
    }
    ISMTestMode::s_instance = (struct ISMTestMode *)operator new(1uLL);
    *(_BYTE *)ISMTestMode::s_instance = 0;
    v9 = (OneCoreUAPInputHost *)malloc(0x68uLL);
    v11 = v9;
    if ( v9 )
    {
      memset_0(v9, 0, 0x68uLL);
      v9 = OneCoreUAPInputHost::OneCoreUAPInputHost(v11);
    }
    OneCoreUAPInputHost::s_pInputHost = v9;
    if ( !v9 )
    {
      v5 = -2147024882;
LABEL_13:
      if ( v9 )
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v9 + 2) + 24LL))((__int64)v9 + 16, 1LL);
      v6 = 175LL;
      goto LABEL_3;
    }
    v5 = OneCoreUAPInputHost::Initialize(v10, a1);
    if ( v5 < 0 )
    {
      v9 = OneCoreUAPInputHost::s_pInputHost;
      goto LABEL_13;
    }
    v8 = OneCoreUAPInputHost::s_pInputHost;
  }
  v12 = (**(__int64 (__fastcall ***)(struct OneCoreUAPInputHost *, GUID *, __int64))v8)(
          v8,
          &GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953,
          a2);
  v5 = v12;
  if ( v12 >= 0 )
  {
    (*(void (__fastcall **)(struct OneCoreUAPInputHost *))(*(_QWORD *)OneCoreUAPInputHost::s_pInputHost + 16LL))(OneCoreUAPInputHost::s_pInputHost);
    return 0;
  }
  v7 = (unsigned int)v12;
  v6 = 180LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
    (const char *)v7);
  return (unsigned int)v5;
}
