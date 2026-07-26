/*
 * XREFs of ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x1C0001298
 * Callers:
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C00010C0 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     NdisSetJobObjectCompartmentId @ 0x1C00F8008 (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCmCreateStateObject(struct _NDIS_CM_STATE **a1)
{
  __int64 result; // rax
  struct _NDIS_CM_STATE *v3; // rcx
  int v4; // [rsp+50h] [rbp-48h] BYREF
  const wchar_t *v5; // [rsp+58h] [rbp-40h]
  int v6; // [rsp+60h] [rbp-38h] BYREF
  __int64 v7; // [rsp+68h] [rbp-30h]
  int *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  __int128 v10; // [rsp+80h] [rbp-18h]

  v6 = 48;
  v7 = 0LL;
  v9 = 576;
  v4 = 1703960;
  v5 = L"\\Device\\NDIS";
  v8 = &v4;
  v10 = 0LL;
  result = ObCreateObject(0LL, ndisCmStateObjectType, &v6, 0LL, 0LL, 16, 0, 0, a1);
  if ( (int)result >= 0 )
  {
    v3 = *a1;
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
  }
  return result;
}
