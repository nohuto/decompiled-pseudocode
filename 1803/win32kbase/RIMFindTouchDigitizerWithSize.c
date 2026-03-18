/*
 * XREFs of RIMFindTouchDigitizerWithSize @ 0x1C00E90D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 */

void __fastcall RIMFindTouchDigitizerWithSize(_QWORD *a1, __int64 **a2)
{
  __int64 *v2; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = (__int64 *)gObRimDevList;
  *a2 = 0LL;
  RIMLockExclusive((__int64)&gObListLock);
  while ( v2 != &gObRimDevList )
  {
    v5 = v2 - 2;
    if ( *((_BYTE *)v2 + 112) == 2 && (*((_DWORD *)v5 + 70) & 0x80u) != 0 && (v5[33] & 0x200) == 0 )
    {
      v6 = v5[70];
      if ( (unsigned int)(*(_DWORD *)(v6 + 24) - 1) <= 3 )
      {
        v7 = *(_QWORD *)(v6 + 140) - *a1;
        if ( !v7 )
          v7 = *(_QWORD *)(v6 + 148) - a1[1];
        if ( !v7 )
        {
          ObReferenceObjectByPointer(v2 - 2, 3u, ExRawInputManagerObjectType, 0);
          *a2 = v5;
          break;
        }
      }
    }
    v2 = (__int64 *)*v2;
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
