/*
 * XREFs of ?ndisNsiGetIfNameForIfIndex@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0008420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiGetIfNameForIfIndex(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v2; // esi
  int v3; // ebx
  KIRQL v4; // r8
  struct _LIST_ENTRY *Flink; // rax

  v2 = 0;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(84LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  if ( *((_DWORD *)a1 + 6) == 4
    && *((_DWORD *)a1 + 8) == 2
    && *((_QWORD *)a1 + 5)
    && *((_DWORD *)a1 + 12) == 8
    && !*((_DWORD *)a1 + 13)
    && !*((_DWORD *)a1 + 14) )
  {
    v3 = **((_DWORD **)a1 + 2);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    Flink = ndisIfList.Flink;
    if ( ndisIfList.Flink == &ndisIfList )
      goto LABEL_12;
    while ( HIDWORD(Flink[-77].Flink) != v3 )
    {
      Flink = Flink->Flink;
      if ( Flink == &ndisIfList )
        goto LABEL_12;
    }
    if ( Flink == (struct _LIST_ENTRY *)1232 )
LABEL_12:
      v2 = -1073741772;
    else
      **((_QWORD **)a1 + 5) = Flink[5].Flink;
    KeReleaseSpinLock(&ndisIfListLock, v4);
  }
  else
  {
    v2 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qD(85LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, v2);
  return v2;
}
