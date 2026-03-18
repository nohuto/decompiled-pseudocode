/*
 * XREFs of ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1C0049150
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0049028 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C009B378 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

NTSTATUS __fastcall CoreMessagingK::CoreMsgObject::Create(char a1, __int64 (**a2)(void), PVOID *a3, void **a4)
{
  __int64 (*v5)(void); // rax
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // r9
  NTSTATUS result; // eax
  _DWORD v13[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]
  __int128 v18; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+A8h] [rbp+28h] BYREF

  *a4 = 0LL;
  v5 = *a2;
  v13[1] = 0;
  v17 = 0;
  *a3 = 0LL;
  v9 = v5();
  v14 = 0LL;
  v13[0] = 48;
  v10 = v9 + 8;
  LOBYTE(v11) = a1;
  v15 = 0LL;
  v16 = a1 == 0 ? 0x200 : 0;
  v18 = 0LL;
  result = ObCreateObject(0LL, ExCoreMessagingObjectType, v13, v11, 0LL, v9 + 8, 0, 0, &Object);
  if ( result >= 0 )
  {
    memset(Object, 0, v10);
    *(_DWORD *)Object = gSessionId;
    *((_QWORD *)Object + 1) = a2;
    result = ObInsertObject(Object, 0LL, 0x10000000u, 0, 0LL, a4);
    if ( result >= 0 )
    {
      *a3 = Object;
      return 0;
    }
  }
  return result;
}
