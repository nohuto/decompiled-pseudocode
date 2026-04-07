/*
 * XREFs of ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180025C28
 * Callers:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x180025BCC (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18008F190 (-Initialize@CAnimatedGlassSheet@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033EA0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsVisual::RemoveAllAtlasImages(CAtlasedRectsVisual *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 66); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 30) + 8 * i);
    *(_QWORD *)(v3 + 80) = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
  }
  *((_DWORD *)this + 66) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 240, 8LL);
  (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
}
