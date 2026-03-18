/*
 * XREFs of _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0048C28
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0048030 (DrvSetDisplayConfig.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1C01267F0 (_DrvSetDisplayConfig_--_2_--_AUTO--_scalar_deleting_destructor_.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0048C94 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0048E18 (--1AUTO_TGO@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DrvSetDisplayConfig_::_2_::_AUTO::__AUTO(AUTO_TGO *this)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  void *v6; // rcx
  __int64 v7; // rax

  v1 = *((_BYTE *)this + 72) == 0;
  *(_QWORD *)this = &off_1C01CB160;
  if ( !v1 && (int)((__int64 (*)(void))qword_1C0212128)() < 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4, v3, v5);
    WdLogEvent5_WdAssertion(v7);
  }
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 6));
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 7));
  FreePathsModality(*((struct D3DKMT_GETPATHSMODALITY **)this + 8));
  v6 = (void *)*((_QWORD *)this + 11);
  if ( v6 )
    ObfDereferenceObject(v6);
  AUTO_TGO::~AUTO_TGO(this);
}
