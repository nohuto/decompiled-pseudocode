/*
 * XREFs of ?BuildRequestForLegacyInputInfo@HitTestHelper@@CA?AUHitTestRequest@1@PEAULegacyInputInfo@@KPEAUHMONITOR__@@@Z @ 0x180090EE0
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x180089E30 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

int *__fastcall HitTestHelper::BuildRequestForLegacyInputInfo(int *a1, int *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbp
  int v8; // eax
  int v9; // ecx
  __int16 v10; // r8
  unsigned int v11; // edx
  int v12; // ecx
  int v13; // eax

  v4 = a3;
  memset_0(a1, 0, 0xC8uLL);
  v8 = *a2;
  a1[43] = 0;
  if ( (v8 & 8) != 0 )
  {
    v9 = 2;
  }
  else if ( (v8 & 0x20) != 0 )
  {
    v9 = 5;
  }
  else
  {
    v9 = 3;
    if ( (v8 & 0x10) == 0 )
      v9 = (v8 & 2) != 0 ? 4 : 1;
  }
  *a1 = v9;
  *((_QWORD *)a1 + 1) = a4;
  if ( v9 == 4 )
  {
    v10 = *((_WORD *)a2 + 262);
    v11 = 0;
    if ( (v10 & 0xC00) != 0 )
    {
      v11 = (((*((__int16 *)a2 + 263) >> 31) & 0xFFFFFFFE) + 3) | 4;
      if ( (v10 & 0x800) == 0 )
        v11 = ((*((__int16 *)a2 + 263) >> 31) & 0xFFFFFFFE) + 3;
    }
    v12 = v11 | 8;
    if ( (v10 & 1) == 0 )
      v12 = v11;
    v13 = v12 | 0x20;
    if ( !*((_BYTE *)a2 + 1596) )
      v13 = v12;
    a1[43] = v13;
  }
  a1[13] = 0;
  *((_QWORD *)a1 + 2) = *(_QWORD *)&a2[8 * v4 + 16];
  a1[46] = a2[124];
  return a1;
}
