/*
 * XREFs of MiCheckNodeChannelStandbyCount @ 0x1402BFAE0
 * Callers:
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckNodeChannelStandbyCount(__int64 a1, unsigned int a2, int a3)
{
  int v3; // r9d
  __int64 v4; // r11
  __int64 v5; // rdx
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  _QWORD *v8; // rax

  v3 = MmNumberOfChannels;
  v4 = *(_QWORD *)(a1 + 16) + 1984LL * a2;
  if ( (*(_DWORD *)(v4 + 1888) & 1) != 0 )
    v3 = a3 + 1;
  v5 = a3 & (unsigned int)-((*(_DWORD *)(v4 + 1888) & 1) != 0);
  v6 = 0;
LABEL_8:
  if ( (_DWORD)v5 != v3 )
  {
    v7 = 0;
    v8 = (_QWORD *)(192 * v5 + v4 + 856);
    while ( !*v8 )
    {
      ++v7;
      v8 += 3;
      if ( v7 >= 8 )
      {
        v5 = (unsigned int)(v5 + 1);
        goto LABEL_8;
      }
    }
  }
  LOBYTE(v6) = (_DWORD)v5 != v3;
  return v6;
}
