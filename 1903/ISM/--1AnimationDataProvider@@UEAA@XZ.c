/*
 * XREFs of ??1AnimationDataProvider@@UEAA@XZ @ 0x1800CE944
 * Callers:
 *     ??_GAnimationDataProvider@@UEAAPEAXI@Z @ 0x1800CEA40 (--_GAnimationDataProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180022244 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180028AA4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C1EC (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall AnimationDataProvider::~AnimationDataProvider(
        AnimationDataProvider *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct ISMTestMode *v5; // rax
  char *v6; // rdi
  char *v7; // rsi
  __int64 v8; // rcx
  Microsoft::Bamo::BaseBamoConnection *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &AnimationDataProvider::`vftable';
  v5 = ISMTestMode::s_instance;
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      a4);
  if ( !*(_BYTE *)v5 )
    *(_QWORD *)(*((_QWORD *)this + 2) + 152LL) = 0LL;
  v6 = (char *)*((_QWORD *)this + 5);
  if ( v6 )
  {
    v7 = (char *)*((_QWORD *)this + 6);
    if ( v6 != v7 )
    {
      do
      {
        std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v6, a2);
        v6 += 64;
      }
      while ( v6 != v7 );
      v6 = (char *)*((_QWORD *)this + 5);
    }
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 7) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFC0uLL));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)this + 4);
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  v9 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 2);
  if ( v9 )
  {
    *((_QWORD *)this + 2) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v9);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
