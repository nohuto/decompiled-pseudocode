/*
 * XREFs of ObInitServerSilo @ 0x140782F9C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408C50A0 (PspInitializeServerSiloDeferred.c)
 *     ObInitSystem @ 0x140A0533C (ObInitSystem.c)
 * Callees:
 *     PsIsHostSilo @ 0x14000A9B0 (PsIsHostSilo.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x140101B40 (PsGetPermanentSiloContext.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 */

int __fastcall ObInitServerSilo(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  int result; // eax
  __int64 v6; // rdx
  int v7; // ebx
  PVOID v8; // rcx
  _OWORD v9[3]; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+18h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  memset(v9, 0, sizeof(v9));
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  v3 = 37LL;
  ServerSiloGlobals[15] = 0LL;
  v4 = ServerSiloGlobals + 16;
  ServerSiloGlobals[90] = 0LL;
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v3;
  }
  while ( v3 );
  if ( PsIsHostSilo(a1) )
    return 0;
  result = PsGetPermanentSiloContext(a1, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&Object);
  if ( result >= 0 )
  {
    result = ObOpenObjectByPointer(Object, 0x240u, 0LL, 2u, ObpDirectoryObjectType, 0, &Handle);
    if ( result >= 0 )
    {
      *((_QWORD *)&v9[0] + 1) = Handle;
      LODWORD(v9[0]) = 48;
      *(_QWORD *)&v9[1] = &ObpGlobalDirectoryName;
      DWORD2(v9[1]) = 576;
      v9[2] = 0LL;
      v7 = ObReferenceObjectByNameEx((__int64)v9, v6, 2u, (__int64)ObpDirectoryObjectType, 0, 0LL, &Object);
      ZwClose(Handle);
      if ( v7 < 0 )
        return v7;
      v8 = Object;
      *ServerSiloGlobals = *((_QWORD *)Object + 38);
      ObfDereferenceObject(v8);
      return 0;
    }
  }
  return result;
}
