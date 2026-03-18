/*
 * XREFs of MiScanPagefiles @ 0x1400DA8E0
 * Callers:
 *     MiWorkingSetManager @ 0x1400DA208 (MiWorkingSetManager.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x14007D460 (MiSufficientAvailablePages.c)
 *     ExQueueWorkItemToPartition @ 0x140080598 (ExQueueWorkItemToPartition.c)
 *     PsReferencePartitionSafe @ 0x1400C5438 (PsReferencePartitionSafe.c)
 *     MiFreePageFileHashPfns @ 0x1400DA914 (MiFreePageFileHashPfns.c)
 */

char __fastcall MiScanPagefiles(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  int v4; // edx
  __int64 i; // r8
  __int64 v6; // rcx
  __int64 v7; // r10

  MiFreePageFileHashPfns();
  v2 = MiSufficientAvailablePages(a1, 0x420uLL);
  if ( !v2 )
  {
    v3 = *(_DWORD *)(a1 + 7896);
    if ( v3 )
    {
      if ( *(_QWORD *)(a1 + 8560) && !*(_QWORD *)(a1 + 976) )
      {
        v2 = *(_DWORD *)(a1 + 984);
        if ( v2 >= 0x1E )
        {
          v4 = 0;
          for ( i = a1 + 7904; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)i + 24LL); i += 8LL )
          {
            if ( ++v4 >= v3 )
            {
              if ( *(_BYTE *)(a1 + 667) == 1 )
              {
                v6 = *(_QWORD *)(a1 + 168);
                *(_BYTE *)(a1 + 667) = 0;
                *(_DWORD *)(a1 + 984) = 0;
                LOBYTE(v2) = PsReferencePartitionSafe(v6);
                if ( (_BYTE)v2 )
                {
                  *(_QWORD *)(a1 + 976) = a1;
                  *(_QWORD *)(a1 + 968) = MiScanPagefileSpace;
                  *(_QWORD *)(a1 + 952) = v7;
                  LOBYTE(v2) = ExQueueWorkItemToPartition((_QWORD *)(a1 + 952), 2, 0xFFFFFFFF, *(_QWORD *)(a1 + 168));
                }
              }
              return v2;
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 984) = ++v2;
        }
      }
    }
  }
  return v2;
}
