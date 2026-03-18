/*
 * XREFs of ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x180021F90
 * Callers:
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x180021D94 (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedSectionAnimationPrimitiveBuffer::Create(
        struct CSharedSection *this,
        int a2,
        int a3,
        struct CSharedSectionAnimationPrimitiveBuffer **a4)
{
  unsigned int v5; // edi
  _DWORD *v9; // rax
  unsigned int v10; // ecx
  _DWORD *v11; // rbx
  void (__fastcall **v12)(_DWORD *); // rcx

  v5 = 0;
  v9 = operator new(0x20uLL);
  v11 = v9;
  if ( v9 )
  {
    v9[2] = 0;
    *(_QWORD *)v9 = &CSharedSectionAnimationPrimitiveBuffer::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    *((_QWORD *)v11 + 2) = this;
    if ( this )
      CMILCOMBase::InternalAddRef(this);
    v12 = *(void (__fastcall ***)(_DWORD *))v11;
    v11[6] = a2;
    v11[7] = a3;
    (*v12)(v11);
    *a4 = (struct CSharedSectionAnimationPrimitiveBuffer *)v11;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0xDu);
  }
  return v5;
}
