/*
 * XREFs of ?vDownload@RGNOBJ@@QEAAXPEAX@Z @ 0x1C003E4A0
 * Callers:
 *     GreGetRegionData @ 0x1C003E380 (GreGetRegionData.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C01319B4 (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vDownload(RGNOBJ *this, _OWORD *a2)
{
  int v3; // r9d
  unsigned int *v4; // r8
  unsigned int v5; // edx
  unsigned int i; // eax
  __int64 v7; // rcx
  __int128 v8; // [rsp+0h] [rbp-18h]

  v3 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  v4 = (unsigned int *)(*(_QWORD *)this + 104LL);
  while ( v3 )
  {
    --v3;
    DWORD1(v8) = v4[1];
    v5 = 0;
    HIDWORD(v8) = v4[2];
    for ( i = *v4; v5 < *v4; ++a2 )
    {
      v7 = (int)v5;
      v5 += 2;
      LODWORD(v8) = v4[v7 + 3];
      DWORD2(v8) = v4[v7 + 4];
      *a2 = v8;
      i = *v4;
    }
    v4 += i + 4;
  }
}
