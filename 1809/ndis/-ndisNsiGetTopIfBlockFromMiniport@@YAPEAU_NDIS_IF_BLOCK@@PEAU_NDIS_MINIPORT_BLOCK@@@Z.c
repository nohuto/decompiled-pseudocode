/*
 * XREFs of ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023BE0
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0009F20 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C000A9D0 (ndisDereferenceMiniportForNsi.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB20 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 */

struct _NDIS_IF_BLOCK *__fastcall ndisNsiGetTopIfBlockFromMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  struct _NDIS_IF_BLOCK *result; // rax
  struct _NDIS_IF_BLOCK *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // [rsp+48h] [rbp+10h] BYREF

  result = (struct _NDIS_IF_BLOCK *)ndisReferenceTopMiniportByNameForNsi((__int64)a1, 0, a3, 0, 2u, 0x3Cu);
  v4 = result;
  if ( result )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&result->ifDescr.String[43]);
    v5 = *(_QWORD **)&v4[1].ifFlags;
    *(_QWORD *)&v4->ifDescr.String[255] = KeGetCurrentThread();
    *(_DWORD *)&v4[1].ifDescr.String[175] = 2234941;
    if ( !v5 )
      goto LABEL_8;
    do
    {
      if ( ndisReferenceRefEx(v5 + 40, 0xBu, &v8) )
        break;
      v5 = (_QWORD *)v5[14];
    }
    while ( v5 );
    if ( v5 )
      v6 = v5[88];
    else
LABEL_8:
      v6 = *(_QWORD *)&v4[2].ifAlias.String[233];
    *(_QWORD *)&v4->ifDescr.String[255] = 0LL;
    *(_DWORD *)&v4[1].ifDescr.String[175] = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v4->ifDescr.String[43]);
    LOBYTE(v7) = 2;
    ndisDereferenceMiniportForNsi((__int64)v4, v7, 0x3Cu);
    return (struct _NDIS_IF_BLOCK *)v6;
  }
  return result;
}
