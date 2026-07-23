/*
 * XREFs of MiCountWslesInPageTable @ 0x1400F82B0
 * Callers:
 *     MiSetVaAgeList @ 0x14003E2D0 (MiSetVaAgeList.c)
 *     MiAddWorkingSetEntries @ 0x140048CE0 (MiAddWorkingSetEntries.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MiRebuildPageTableLeafAges @ 0x14007AE00 (MiRebuildPageTableLeafAges.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

unsigned __int64 __fastcall MiCountWslesInPageTable(__int64 a1, unsigned __int64 a2, void *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  char v13; // r8^7

  v4 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  memset(a3, 0, 0x20uLL);
  do
  {
    v5 = *(_QWORD *)v4;
    result = 0xFFFFF6FB7DBED000uLL;
    if ( v4 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( v4 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        result = (unsigned __int64)KeGetCurrentThread();
        if ( *(_BYTE *)(*(_QWORD *)(result + 184) + 640LL) != 1 )
        {
          if ( (v5 & 1) == 0 )
            goto LABEL_4;
          if ( (v5 & 0x20) == 0 || (v5 & 0x42) == 0 )
          {
            result = (unsigned __int64)KeGetCurrentThread();
            v10 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1544LL);
            if ( v10 )
            {
              result = *(_QWORD *)(v10 + 8 * ((v4 >> 3) & 0x1FF));
              LOBYTE(v10) = v5 | 0x20;
              if ( (result & 0x20) == 0 )
                v10 = *(_QWORD *)v4;
              LOBYTE(v5) = v10;
              if ( (result & 0x42) != 0 )
                LOBYTE(v5) = v10 | 0x42;
            }
          }
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v7 = ((((__int64)(v4 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
      v8 = *(_QWORD *)v7;
      if ( v7 >= 0xFFFFF6FB7DBED000uLL
        && v7 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v8 & 1) != 0
        && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        v11 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 8 * ((v7 >> 3) & 0x1FF));
          v13 = HIBYTE(*(_QWORD *)v7);
          if ( (v12 & 0x20) == 0 )
            v13 = HIBYTE(v8);
          HIBYTE(v8) = v13;
          if ( (v12 & 0x42) != 0 )
            HIBYTE(v8) = v13;
        }
      }
      v9 = HIBYTE(v8) & 0xF;
      result = (unsigned int)(v9 - 8);
      if ( (unsigned __int8)(v9 - 8) > 2u )
      {
        result = (unsigned __int8)v9;
        ++*((_DWORD *)a3 + (unsigned __int8)v9);
      }
    }
LABEL_4:
    v4 += 8LL;
  }
  while ( (v4 & 0xFFF) != 0 );
  return result;
}
