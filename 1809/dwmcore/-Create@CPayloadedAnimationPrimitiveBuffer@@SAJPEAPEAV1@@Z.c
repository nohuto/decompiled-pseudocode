/*
 * XREFs of ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z @ 0x180015258
 * Callers:
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180015160 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPayloadedAnimationPrimitiveBuffer::Create(struct CPayloadedAnimationPrimitiveBuffer **a1)
{
  unsigned int v2; // ebx
  struct CPayloadedAnimationPrimitiveBuffer *v3; // rax
  unsigned int v4; // ecx
  struct CPayloadedAnimationPrimitiveBuffer *v5; // rdi

  v2 = 0;
  v3 = (struct CPayloadedAnimationPrimitiveBuffer *)operator new(0x30uLL);
  v5 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 2) = 0;
    *(_QWORD *)v3 = &CPayloadedAnimationPrimitiveBuffer::`vftable';
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_DWORD *)v3 + 10) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    (**(void (__fastcall ***)(struct CPayloadedAnimationPrimitiveBuffer *))v5)(v5);
    *a1 = v5;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0xDu);
  }
  return v2;
}
