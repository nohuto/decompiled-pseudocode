/*
 * XREFs of ??_GVirtualTouchpadUriHandlerFactory@@EEAAPEAXI@Z @ 0x180298320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1VirtualTouchpadUriHandlerFactory@@EEAA@XZ @ 0x180298258 (--1VirtualTouchpadUriHandlerFactory@@EEAA@XZ.c)
 */

VirtualTouchpadUriHandlerFactory *__fastcall VirtualTouchpadUriHandlerFactory::`scalar deleting destructor'(
        VirtualTouchpadUriHandlerFactory *this,
        char a2)
{
  VirtualTouchpadUriHandlerFactory::~VirtualTouchpadUriHandlerFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
