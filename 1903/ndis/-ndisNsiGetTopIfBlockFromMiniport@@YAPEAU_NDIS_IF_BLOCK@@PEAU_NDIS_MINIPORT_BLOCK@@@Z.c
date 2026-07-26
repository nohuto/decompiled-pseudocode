/*
 * XREFs of ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015084
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C0006780 (ndisDereferenceMiniportForNsi.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0016F28 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 */

struct _NDIS_IF_BLOCK *__fastcall ndisNsiGetTopIfBlockFromMiniport(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, int a3)
{
  struct _NDIS_IF_BLOCK *result; // rax
  KSPIN_LOCK *p_Type; // rdi
  _QWORD *v5; // rbx
  KSPIN_LOCK v6; // rbx

  result = (struct _NDIS_IF_BLOCK *)ndisReferenceTopMiniportByNameForNsi((_DWORD)a1, 0, a3, 0, 2, 60);
  p_Type = (KSPIN_LOCK *)&result->Type;
  if ( result )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&result->ifDescr.String[43]);
    v5 = (_QWORD *)p_Type[256];
    p_Type[65] = (KSPIN_LOCK)KeGetCurrentThread();
    if ( !v5 )
      goto LABEL_8;
    do
    {
      if ( (unsigned __int8)ndisReferenceRefEx(v5 + 39) )
        break;
      v5 = (_QWORD *)v5[14];
    }
    while ( v5 );
    if ( v5 )
      v6 = v5[87];
    else
LABEL_8:
      v6 = p_Type[505];
    p_Type[65] = 0LL;
    KeReleaseSpinLockFromDpcLevel(p_Type + 12);
    ndisDereferenceMiniportForNsi((__int64)p_Type, 2u, 0x3Cu);
    return (struct _NDIS_IF_BLOCK *)v6;
  }
  return result;
}
