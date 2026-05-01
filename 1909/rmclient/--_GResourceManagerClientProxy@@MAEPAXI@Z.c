/*
 * XREFs of ??_GResourceManagerClientProxy@@MAEPAXI@Z @ 0x10013C20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 *     ??1ResourceManagerClientProxy@@MAE@XZ @ 0x10013B2A (--1ResourceManagerClientProxy@@MAE@XZ.c)
 */

ResourceManagerClientProxy *__thiscall ResourceManagerClientProxy::`scalar deleting destructor'(
        ResourceManagerClientProxy *this,
        char a2)
{
  ResourceManagerClientProxy::~ResourceManagerClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
