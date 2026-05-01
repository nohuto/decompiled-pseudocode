/*
 * XREFs of HamGetPackageInterruptiveUIState @ 0x18000F030
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800038D0 (CempRpcBindToServer.c)
 */

__int64 __fastcall HamGetPackageInterruptiveUIState(__int64 a1, void *a2, int a3, bool *a4)
{
  int v8; // edi
  int Pointer; // ebx
  CLIENT_CALL_RETURN v10; // rax
  ULONG v12; // [rsp+30h] [rbp-58h]
  int v13; // [rsp+38h] [rbp-50h]
  _BYTE v14[4]; // [rsp+50h] [rbp-38h] BYREF
  int v15; // [rsp+54h] [rbp-34h]
  int v16; // [rsp+58h] [rbp-30h]
  RPC_BINDING_HANDLE Binding[2]; // [rsp+60h] [rbp-28h] BYREF

  v14[0] = 0;
  v8 = 0;
  if ( RtlValidSid(a2) )
  {
    Pointer = CempRpcBindToServer(&unk_180013840, Binding);
    if ( Pointer >= 0 )
    {
      v8 = 1;
      v16 = 1;
      v13 = a3;
      v12 = RtlLengthSid(a2);
      v10.Pointer = NdrClientCall3(
                      (MIDL_STUBLESS_PROXY_INFO *)&stru_1800138D0,
                      0xFu,
                      0LL,
                      Binding[0],
                      a1,
                      a2,
                      v12,
                      v13,
                      v14).Pointer;
      Pointer = (int)v10.Pointer;
      Binding[1] = v10.Pointer;
      v15 = (int)v10.Pointer;
      if ( SLODWORD(v10.Simple) >= 0 )
      {
        *a4 = v14[0] != 0;
        Pointer = 0;
      }
    }
  }
  else
  {
    Pointer = -1073741584;
  }
  if ( v8 )
    RpcBindingFree(Binding);
  return (unsigned int)Pointer;
}
