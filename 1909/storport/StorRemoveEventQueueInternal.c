/*
 * XREFs of StorRemoveEventQueueInternal @ 0x1C00397B0
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0009590 (RaidUnitCompleteRequest.c)
 *     StorRemoveEventQueue @ 0x1C00396F8 (StorRemoveEventQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall StorRemoveEventQueueInternal(__int64 *a1, char a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v5; // r9
  __int64 *v6; // r10
  __int64 *v7; // rdx
  __int64 v8; // r9

  LOBYTE(v3) = *((_BYTE *)a3 - 32);
  if ( (v3 & 2) == 0 )
    return v3;
  *((_BYTE *)a3 - 32) = v3 & 0xFD;
  v5 = *a3;
  v6 = (__int64 *)*a1;
  if ( *(__int64 **)(*a3 + 8) != a3 )
    goto LABEL_16;
  v3 = a3[1];
  if ( *(__int64 **)v3 != a3 )
    goto LABEL_16;
  *(_QWORD *)v3 = v5;
  *(_QWORD *)(v5 + 8) = v3;
  LODWORD(v3) = *((_DWORD *)a3 + 12);
  if ( (v3 & 1) != 0 )
  {
    v7 = a3 + 2;
    if ( (__int64 *)a1[4] == a3 + 2 )
      a1[4] = *v7;
    v8 = *v7;
    if ( *(__int64 **)(*v7 + 8) == v7 )
    {
      v3 = a3[3];
      if ( *(__int64 **)v3 == v7 )
      {
        *(_QWORD *)v3 = v8;
        *(_QWORD *)(v8 + 8) = v3;
        *((_DWORD *)a3 + 12) &= ~1u;
        goto LABEL_10;
      }
    }
LABEL_16:
    __fastfail(3u);
  }
LABEL_10:
  if ( (a2 & 4) == 0 && v6 == a3 )
  {
    v3 = *a1;
    if ( (__int64 *)*a1 == a1 )
    {
      *((_DWORD *)a1 + 12) = -1;
    }
    else
    {
      LODWORD(v3) = *(_DWORD *)(v3 + 32);
      *((_DWORD *)a1 + 12) = v3;
    }
  }
  return v3;
}
