/*
 * XREFs of ?CapturePointer@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I@Z @ 0x1C016D1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C016D204 (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CapturePointer(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3)
{
  char *v3; // rbx
  __int64 result; // rax

  v3 = (char *)this + 264;
  result = CDynamicArray<unsigned int,2003858261>::Grow((char *)this + 264, a2);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)v3 + 4LL * (unsigned int)(*((_DWORD *)v3 + 2))++) = a3;
    *((_DWORD *)this + 4) |= 0x80u;
  }
  return result;
}
