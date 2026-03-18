/*
 * XREFs of ?Append@CPayloadedAnimationPrimitiveBuffer@@UEAAJ_KPEBUDwmAnimationPrimitive@@@Z @ 0x18001F770
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CPayloadedAnimationPrimitiveBuffer::Append(
        CPayloadedAnimationPrimitiveBuffer *this,
        unsigned int a2,
        const struct DwmAnimationPrimitive *a3)
{
  char *v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx

  v3 = (char *)this + 16;
  v4 = *((unsigned int *)this + 10);
  v5 = a2 + v4;
  v6 = a2 + (unsigned int)v4 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( a2 + (unsigned int)v4 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 <= *((_DWORD *)this + 9) )
  {
    memcpy_0((void *)(*(_QWORD *)v3 + 32 * v4), a3, 32LL * a2);
    *((_DWORD *)v3 + 6) = v5;
  }
  else
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet(v3, 32LL, a2, a3);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC0u);
  }
  return v6;
}
