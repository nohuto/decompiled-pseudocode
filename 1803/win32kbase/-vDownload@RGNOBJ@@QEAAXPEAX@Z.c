/*
 * XREFs of ?vDownload@RGNOBJ@@QEAAXPEAX@Z @ 0x1C0020D30
 * Callers:
 *     GreGetRegionData @ 0x1C001E520 (GreGetRegionData.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C00D9944 (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vDownload(RGNOBJ *this, _OWORD *a2)
{
  int v3; // r9d
  unsigned int *v4; // r8
  unsigned int v5; // edx
  unsigned int i; // eax
  unsigned int v7; // eax
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
      v7 = v5 + 1;
      LODWORD(v8) = v4[v5 + 3];
      v5 += 2;
      DWORD2(v8) = v4[v7 + 3];
      *a2 = v8;
      i = *v4;
    }
    v4 += i + 4;
  }
}
