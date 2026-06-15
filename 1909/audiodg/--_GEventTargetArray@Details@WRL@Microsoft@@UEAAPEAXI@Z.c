/*
 * XREFs of ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140046710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x140026324 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

Microsoft::WRL::Details::EventTargetArray *__fastcall Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(
        Microsoft::WRL::Details::EventTargetArray *this,
        char a2)
{
  char *v4; // rcx

  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v4 = (char *)*((_QWORD *)this + 2);
  if ( v4 )
    Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'(v4);
  operator delete(*((void **)this + 4));
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
