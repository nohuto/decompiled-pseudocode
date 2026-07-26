/*
 * XREFs of ?ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0024384
 * Callers:
 *     ndisOidPostOffloadEncapsulation @ 0x1C0024210 (ndisOidPostOffloadEncapsulation.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisOidPostMiniportSetEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // eax
  int v5; // eax
  __int64 v6; // xmm1_8

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 4128LL);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 1216);
    if ( v4 )
    {
      *(_DWORD *)(v2 + 32) = v4;
      *(_DWORD *)(v3 + 1216) = 0;
      *(_QWORD *)(v2 + 40) = *(_QWORD *)(*(_QWORD *)(v1 + 4128) + 1208LL);
      *(_QWORD *)(v3 + 1208) = 0LL;
      if ( !*((_DWORD *)a1 + 10) || *(_DWORD *)(v2 + 52) == *(_DWORD *)(v2 + 48) )
        *(_DWORD *)(v2 + 52) = *(_DWORD *)(*(_QWORD *)(v1 + 4128) + 1220LL);
      *(_DWORD *)(v2 + 48) = *(_DWORD *)(*(_QWORD *)(v1 + 4128) + 1220LL);
      *(_DWORD *)(v3 + 1220) = 0;
      if ( !*((_DWORD *)a1 + 10) )
      {
        v5 = *(_DWORD *)(v3 + 868);
        v6 = *(_QWORD *)(v3 + 860);
        *(_OWORD *)(v3 + 760) = *(_OWORD *)(v3 + 844);
        *(_QWORD *)(v3 + 776) = v6;
        *(_DWORD *)(v3 + 784) = v5;
      }
    }
  }
}
