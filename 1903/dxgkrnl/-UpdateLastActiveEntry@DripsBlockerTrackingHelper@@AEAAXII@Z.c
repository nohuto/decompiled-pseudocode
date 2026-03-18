/*
 * XREFs of ?UpdateLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXII@Z @ 0x1C02464BC
 * Callers:
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0245534 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEADPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 * Callees:
 *     <none>
 */

void __fastcall DripsBlockerTrackingHelper::UpdateLastActiveEntry(LARGE_INTEGER *this, unsigned int a2, LONG a3)
{
  __int64 v4; // rsi
  char *v6; // r9
  int v7; // r10d
  unsigned int v8; // r11d
  unsigned int v9; // edi
  int *v10; // r8
  int v11; // ecx
  int v12; // eax

  v4 = a2;
  v6 = (char *)&this[5].QuadPart + 4;
  v7 = 1;
  v8 = 0;
  while ( v7 )
  {
    if ( v6[56] )
    {
      v9 = 0;
      if ( *(_DWORD *)v6 )
      {
        v10 = (int *)(v6 + 100);
        do
        {
          if ( !v7 )
            break;
          v11 = *v10;
          v12 = 0;
          v10 += 18;
          ++v9;
          if ( !v11 )
            v12 = v7;
          v7 = v12;
        }
        while ( v9 < *(_DWORD *)v6 );
      }
    }
    ++v8;
    v6 += 4720;
    if ( v8 >= 0x40 )
    {
      if ( v7 )
      {
        this[37767] = KeQueryPerformanceCounter(0LL);
        this[37768].LowPart = v4;
        this[37768].HighPart = a3;
        LOBYTE(this[37769].LowPart) = 1;
        BYTE1(this[37769].LowPart) = (signed int)this[590 * v4 + 13].LowPart > 0;
        return;
      }
      break;
    }
  }
  LOBYTE(this[37769].LowPart) = 0;
}
