/*
 * XREFs of ??_GResourceSetClientProxy@@MAEPAXI@Z @ 0x10013C50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPAX@Z @ 0x1000C461 (--3@YAXPAX@Z.c)
 *     ??1ResourceSetClientProxy@@MAE@XZ @ 0x10013BB8 (--1ResourceSetClientProxy@@MAE@XZ.c)
 */

ResourceSetClientProxy *__thiscall ResourceSetClientProxy::`scalar deleting destructor'(
        ResourceSetClientProxy *this,
        char a2)
{
  ResourceSetClientProxy::~ResourceSetClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
