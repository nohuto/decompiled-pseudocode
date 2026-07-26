/*
 * XREFs of ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x1C000A8AC
 * Callers:
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C000A6E4 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C011A27C (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCmCreateStateObject(struct _NDIS_CM_STATE **a1)
{
  __int64 result; // rax
  struct _NDIS_CM_STATE *v3; // rcx
  _QWORD v4[2]; // [rsp+58h] [rbp+17h] BYREF
  _DWORD v5[2]; // [rsp+68h] [rbp+27h] BYREF
  __int64 v6; // [rsp+70h] [rbp+2Fh]
  _QWORD *v7; // [rsp+78h] [rbp+37h]
  int v8; // [rsp+80h] [rbp+3Fh]
  int v9; // [rsp+84h] [rbp+43h]
  __int128 v10; // [rsp+88h] [rbp+47h]

  v5[1] = 0;
  v9 = 0;
  v6 = 0LL;
  v4[1] = L"\\Device\\NDIS";
  v7 = v4;
  v4[0] = 1703960LL;
  v5[0] = 48;
  v8 = 576;
  v10 = 0LL;
  result = ObCreateObject(0LL, ndisCmStateObjectType, v5, 0LL, 0LL, 16, 0, 0, a1);
  if ( (int)result >= 0 )
  {
    v3 = *a1;
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
  }
  return result;
}
