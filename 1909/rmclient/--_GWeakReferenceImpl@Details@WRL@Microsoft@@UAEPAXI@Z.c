/*
 * XREFs of ??_GWeakReferenceImpl@Details@WRL@Microsoft@@UAEPAXI@Z @ 0x10010630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 */

Microsoft::WRL::Details::WeakReferenceImpl *__thiscall Microsoft::WRL::Details::WeakReferenceImpl::`scalar deleting destructor'(
        Microsoft::WRL::Details::WeakReferenceImpl *this,
        char a2)
{
  *(_DWORD *)this = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
  *((_DWORD *)this + 3) = -1073741823;
  *((_DWORD *)this + 2) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
