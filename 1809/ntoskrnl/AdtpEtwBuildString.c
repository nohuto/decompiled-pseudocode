/*
 * XREFs of AdtpEtwBuildString @ 0x14074EB50
 * Callers:
 *     AdtpPackageParameters @ 0x140188EDC (AdtpPackageParameters.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpEtwBuildString(__int64 a1, unsigned __int16 *a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  unsigned int v6; // edx
  unsigned __int16 v8; // r11
  unsigned int v9; // edi
  bool v10; // zf
  _WORD *PoolWithTag; // rbx
  __int64 v12; // rax
  __int64 result; // rax

  v6 = *a2;
  v8 = a2[1];
  v9 = (v6 >> 1) + 1;
  v10 = v8 == (unsigned __int16)v6;
  if ( v8 > (unsigned __int16)v6 )
  {
    PoolWithTag = (_WORD *)*((_QWORD *)a2 + 1);
    if ( !PoolWithTag[v6 >> 1] )
    {
LABEL_8:
      *(_QWORD *)a1 = PoolWithTag;
      *(_DWORD *)(a1 + 8) = 2 * v9;
      result = 0LL;
      *(_DWORD *)(a1 + 12) = 0;
      return result;
    }
    v10 = v8 == (unsigned __int16)v6;
  }
  if ( v10 && v9 > 1 )
  {
    PoolWithTag = (_WORD *)*((_QWORD *)a2 + 1);
    if ( !PoolWithTag[(v6 >> 1) - 1] )
    {
      v9 = v6 >> 1;
      goto LABEL_8;
    }
  }
  v12 = (unsigned int)*a4;
  if ( (unsigned int)v12 + v9 < 0x400 )
  {
    PoolWithTag = (_WORD *)(a3 + 2 * v12);
    *a4 = v12 + v9;
LABEL_7:
    memmove(PoolWithTag, *((const void **)a2 + 1), (unsigned __int16)v6);
    PoolWithTag[v9 - 1] = 0;
    goto LABEL_8;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v9, 0x6B416553u);
  if ( PoolWithTag )
  {
    *a5 = 1;
    LOWORD(v6) = *a2;
    goto LABEL_7;
  }
  return 3221225495LL;
}
