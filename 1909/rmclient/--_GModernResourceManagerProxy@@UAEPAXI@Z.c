/*
 * XREFs of ??_GModernResourceManagerProxy@@UAEPAXI@Z @ 0x10012060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 *     ??1ModernResourceManagerProxy@@UAE@XZ @ 0x10012027 (--1ModernResourceManagerProxy@@UAE@XZ.c)
 */

ModernResourceManagerProxy *__thiscall ModernResourceManagerProxy::`scalar deleting destructor'(
        ModernResourceManagerProxy *this,
        char a2)
{
  ModernResourceManagerProxy::~ModernResourceManagerProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
