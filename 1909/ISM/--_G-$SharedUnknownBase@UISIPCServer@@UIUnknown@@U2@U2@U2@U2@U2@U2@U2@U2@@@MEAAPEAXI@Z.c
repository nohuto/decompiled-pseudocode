/*
 * XREFs of ??_G?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAAPEAXI@Z @ 0x1800D4290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAA@XZ @ 0x1800D3F74 (--1-$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAA@XZ.c)
 */

SharedObjectBase *__fastcall SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`scalar deleting destructor'(
        SharedObjectBase *a1,
        char a2)
{
  SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::~SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x60);
  return a1;
}
