/*
 * XREFs of ??_E?$SharedUnknownBase@UISIPCEndpoint@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAAPEAXI@Z @ 0x1800D4490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$SharedUnknownBase@UISIPCEndpoint@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAA@XZ @ 0x1800D4168 (--1-$SharedUnknownBase@UISIPCEndpoint@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAA@XZ.c)
 */

SharedObjectBase *__fastcall SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vector deleting destructor'(
        SharedObjectBase *a1,
        char a2)
{
  SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::~SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x60);
  return a1;
}
