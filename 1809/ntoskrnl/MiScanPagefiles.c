/*
 * XREFs of MiScanPagefiles @ 0x1400F0544
 * Callers:
 *     MiWorkingSetManager @ 0x1400EF634 (MiWorkingSetManager.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     PsReferencePartitionSafe @ 0x140090C28 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
 *     MiFreePageFileHashPfns @ 0x1400F0578 (MiFreePageFileHashPfns.c)
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
    v3 = *(_DWORD *)(a1 + 7128);
    if ( v3 )
    {
      if ( *(_QWORD *)(a1 + 7792) && !*(_QWORD *)(a1 + 968) )
      {
        v2 = *(_DWORD *)(a1 + 976);
        if ( v2 >= 0x1E )
        {
          v4 = 0;
          for ( i = a1 + 7136; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)i + 24LL); i += 8LL )
          {
            if ( ++v4 >= v3 )
            {
              if ( *(_BYTE *)(a1 + 659) == 1 )
              {
                v6 = *(_QWORD *)(a1 + 168);
                *(_BYTE *)(a1 + 659) = 0;
                *(_DWORD *)(a1 + 976) = 0;
                LOBYTE(v2) = PsReferencePartitionSafe(v6);
                if ( (_BYTE)v2 )
                {
                  *(_QWORD *)(a1 + 968) = a1;
                  *(_QWORD *)(a1 + 960) = MiScanPagefileSpace;
                  *(_QWORD *)(a1 + 944) = v7;
                  LOBYTE(v2) = ExQueueWorkItemToPartition((__int64 *)(a1 + 944), 2, 0xFFFFFFFF, *(_QWORD *)(a1 + 168));
                }
              }
              return v2;
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 976) = ++v2;
        }
      }
    }
  }
  return v2;
}
