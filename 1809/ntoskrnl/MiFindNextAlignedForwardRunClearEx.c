/*
 * XREFs of MiFindNextAlignedForwardRunClearEx @ 0x14018C520
 * Callers:
 *     MiObtainDynamicVa @ 0x1400F6A0C (MiObtainDynamicVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindNextAlignedForwardRunClearEx(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  _QWORD *v11; // r10

  v3 = a1[1];
  v4 = ~(a3 - 1);
  v5 = (a2 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  v6 = v4 & *a1;
  if ( v5 <= v6 )
  {
    v8 = 0LL;
    if ( v6 )
    {
      v9 = v5 >> 6;
      while ( v8 + v5 <= v6 )
      {
        v10 = 0LL;
        if ( v9 )
        {
          v11 = (_QWORD *)(v3 + 8 * (v8 >> 6));
          do
          {
            if ( *v11 )
              break;
            ++v10;
            ++v11;
          }
          while ( v10 < v9 );
        }
        if ( v10 == v9 )
          return v8;
        v8 += v4 & ((v10 << 6) + a3 + 63);
        if ( v8 >= v6 )
          return -1LL;
      }
    }
  }
  return -1LL;
}
