/*
 * XREFs of ?ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0009780
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C000988C (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiGetCompartmentIdForGuid(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v2; // ebx
  const struct _GUID *v3; // rbp
  KIRQL v4; // al
  _LIST_ENTRY *Flink; // rsi
  KIRQL v6; // r14

  v2 = 0;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(131LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  v3 = (const struct _GUID *)*((_QWORD *)a1 + 2);
  if ( v3
    && *((_DWORD *)a1 + 6) == 16
    && *((_DWORD *)a1 + 8) == 2
    && *((_QWORD *)a1 + 5)
    && *((_DWORD *)a1 + 12) == 4
    && !*((_DWORD *)a1 + 13)
    && !*((_DWORD *)a1 + 14) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    Flink = ndisIfCompartmentList.Flink;
    v6 = v4;
    while ( Flink != &ndisIfCompartmentList )
    {
      if ( !(unsigned int)ndisCompareGuid((const struct _GUID *)&Flink[71].Blink, v3) )
      {
        if ( Flink )
        {
          **((_DWORD **)a1 + 5) = Flink[1].Flink;
          goto LABEL_15;
        }
        break;
      }
      Flink = Flink->Flink;
    }
    v2 = -1073741772;
LABEL_15:
    KeReleaseSpinLock(&ndisIfListLock, v6);
  }
  else
  {
    v2 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qD(132LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, v2);
  return v2;
}
