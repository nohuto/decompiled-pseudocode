/*
 * XREFs of AdtpBuildMultiSzStringListString @ 0x14018941C
 * Callers:
 *     AdtpPackageParameters @ 0x140188EDC (AdtpPackageParameters.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     AdtpEtwBuildDashString @ 0x1406D1E00 (AdtpEtwBuildDashString.c)
 */

__int64 __fastcall AdtpBuildMultiSzStringListString(unsigned __int16 *a1, __int64 a2, _BYTE *a3)
{
  unsigned int v6; // ebp
  int v7; // r12d
  __int64 v8; // r10
  unsigned int v9; // esi
  unsigned int v10; // ebx
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  unsigned __int64 v13; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // r8
  unsigned int v16; // r9d
  __int64 result; // rax
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // edx
  bool v24; // cf
  __int64 v25; // r10
  __int16 v26; // cx
  unsigned int v27; // edx
  unsigned int v28; // ecx
  int v29; // eax

  v6 = 0;
  v7 = 0;
  if ( !a1 || (v8 = *((_QWORD *)a1 + 1)) == 0 )
  {
    if ( a2 )
      AdtpEtwBuildDashString(a2, a2, a3);
    return 0LL;
  }
  v9 = *a1 >> 1;
  v10 = 1;
  v11 = 0;
  if ( !v9 )
  {
LABEL_4:
    v12 = v10;
    if ( v10 - 1 > v9 )
    {
      v21 = v10 + 4;
      v22 = -1;
      v23 = v10;
      if ( v10 + 4 >= v10 )
        v22 = v10 + 4;
      v10 = v22;
      if ( v21 < v12 )
      {
        v24 = v21 < v23;
        return v24 ? 0xC0000095 : 0;
      }
      v7 = 1;
    }
    v13 = 2LL * v10;
    if ( v13 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v13 > 0xFFFF )
        return 3221225485LL;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x6B416553u);
      v15 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225495LL;
      *a3 = 1;
      if ( v7 )
      {
        v6 = 4;
        *PoolWithTag = *(_QWORD *)L"\r\n\t\t";
      }
      v16 = 0;
      if ( v9 )
      {
        v25 = 0LL;
        do
        {
          v26 = *(_WORD *)(v25 + *((_QWORD *)a1 + 1));
          if ( v26 )
          {
            *((_WORD *)v15 + v6++) = v26;
          }
          else
          {
            v27 = v6 + 4;
            *(_QWORD *)((char *)v15 + 2 * v6) = *(_QWORD *)L"\r\n\t\t";
            v28 = v6;
            v29 = -1;
            if ( v6 + 4 >= v6 )
              v29 = v6 + 4;
            v6 = v29;
            result = v27 < v28 ? 0xC0000095 : 0;
            if ( v27 < v28 )
              return result;
          }
          ++v16;
          v25 += 2LL;
        }
        while ( v16 < v9 );
      }
      *((_WORD *)v15 + v10 - 1) = 0;
      *(_QWORD *)a2 = v15;
      *(_DWORD *)(a2 + 8) = 2 * v10;
      *(_DWORD *)(a2 + 12) = 0;
      return 0LL;
    }
    v24 = 1;
    return v24 ? 0xC0000095 : 0;
  }
  while ( 1 )
  {
    v18 = v10;
    v19 = -1;
    v20 = v10 + (*(_WORD *)(v8 + 2LL * v11) != 0 ? 1 : 4);
    if ( v20 >= v10 )
      v19 = v10 + (*(_WORD *)(v8 + 2LL * v11) != 0 ? 1 : 4);
    v10 = v19;
    result = v20 < v18 ? 0xC0000095 : 0;
    if ( v20 < v18 )
      return result;
    if ( ++v11 >= v9 )
      goto LABEL_4;
  }
}
