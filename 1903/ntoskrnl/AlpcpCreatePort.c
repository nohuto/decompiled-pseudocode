/*
 * XREFs of AlpcpCreatePort @ 0x1406489C0
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140648DD8 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1406D9518 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
 */

__int64 __fastcall AlpcpCreatePort(unsigned __int8 a1, int a2, void **a3)
{
  int Object; // ebx
  __int64 v6; // [rsp+20h] [rbp-38h]

  Object = ObCreateObjectEx(a1, AlpcPortObjectType, a2, a1, v6, 472, 0, 0, a3, 0LL);
  if ( Object >= 0 )
    memset(*a3, 0, 0x1D8uLL);
  return (unsigned int)Object;
}
