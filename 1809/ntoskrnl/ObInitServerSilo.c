/*
 * XREFs of ObInitServerSilo @ 0x14075B090
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1408886A0 (PspInitializeServerSiloDeferred.c)
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     PsGetPermanentSiloContext @ 0x14010A120 (PsGetPermanentSiloContext.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 */

int __fastcall ObInitServerSilo(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *ServerSiloGlobals; // rdi
  _QWORD *v4; // rdx
  __int64 v5; // rax
  int result; // eax
  int v7; // ebx
  PVOID v8; // rcx
  int v9; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v10; // [rsp+48h] [rbp-28h]
  __int64 *v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+58h] [rbp-18h]
  __int128 v13; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+88h] [rbp+18h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  ServerSiloGlobals[15] = 0LL;
  v4 = ServerSiloGlobals + 16;
  ServerSiloGlobals[90] = 0LL;
  v5 = 37LL;
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  if ( PsIsHostSilo(v2) )
    return 0;
  result = PsGetPermanentSiloContext(a1, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&Object);
  if ( result >= 0 )
  {
    result = ObOpenObjectByPointer(Object, 0x240u, 0LL, 2u, ObpDirectoryObjectType, 0, &Handle);
    if ( result >= 0 )
    {
      v10 = Handle;
      v9 = 48;
      v11 = &ObpGlobalDirectoryName;
      v12 = 576;
      v13 = 0LL;
      v7 = ObReferenceObjectByNameEx((__int64)&v9, 0LL, 2u, (__int64)ObpDirectoryObjectType, 0, 0LL, &Object);
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
