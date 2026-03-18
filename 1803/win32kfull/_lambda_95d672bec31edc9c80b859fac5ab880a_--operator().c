/*
 * XREFs of _lambda_95d672bec31edc9c80b859fac5ab880a_::operator() @ 0x1C01FC3DC
 * Callers:
 *     NtUserDeleteWindowGroup @ 0x1C01ECA40 (NtUserDeleteWindowGroup.c)
 * Callees:
 *     ??_GCWindowGroup@@QEAAPEAXI@Z @ 0x1C01FC4E8 (--_GCWindowGroup@@QEAAPEAXI@Z.c)
 *     ?RemoveAll@CWindowGroup@@QEAAXXZ @ 0x1C01FCFC0 (-RemoveAll@CWindowGroup@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_95d672bec31edc9c80b859fac5ab880a_::operator()(__int64 *a1, CWindowGroup *a2)
{
  __int64 v2; // r11
  unsigned __int64 v4; // r9
  CWindowGroup *i; // rdx
  unsigned int v6; // edx

  v2 = *a1;
  v4 = *((_QWORD *)a2 + 1) & (-1LL << (*(_DWORD *)(*a1 + 20) & 0x1F));
  for ( i = (CWindowGroup *)(*(_QWORD *)(*a1 + 24)
                           + 8
                           * ((HIBYTE(v4)
                             + 37
                             * (BYTE6(v4)
                              + 37
                              * (BYTE5(v4)
                               + 37
                               * (BYTE4(v4)
                                + 37
                                * (BYTE3(v4)
                                 + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(*a1 + 20) >> 5) - 1)));
        (*(_QWORD *)i & 1) == 0;
        i = *(CWindowGroup **)i )
  {
    if ( *(CWindowGroup **)i == a2 )
    {
      *(_QWORD *)i = *(_QWORD *)a2;
      --*(_DWORD *)(v2 + 16);
      *(_QWORD *)a2 |= 0x8000000000000002uLL;
      break;
    }
  }
  CWindowGroup::RemoveAll(a2);
  CWindowGroup::`scalar deleting destructor'(a2, v6);
  return 0LL;
}
