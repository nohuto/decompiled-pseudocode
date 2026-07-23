/*
 * XREFs of SepCaptureOctetStringArray @ 0x1408A12B8
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1405C07FC (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureOctetStringArray(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v6; // r15
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int *PoolWithTag; // rbx
  unsigned int i; // r8d
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // esi
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  char *v17; // r15
  unsigned int j; // edi
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx

  v6 = 16LL * a2;
  v7 = 0xFFFFFFFFLL;
  if ( v6 <= 0xFFFFFFFF )
    v7 = (unsigned int)v6;
  result = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v6 <= 0xFFFFFFFF )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v7, 0x74416553u);
    if ( PoolWithTag )
    {
      if ( (_DWORD)v7 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[v7] > 0x7FFFFFFF0000LL || &Src[v7] < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(PoolWithTag, Src, (unsigned int)v7);
      for ( i = 0; i < a2; ++i )
      {
        v11 = v7;
        v12 = v7 + PoolWithTag[4 * i + 2];
        v13 = -1;
        if ( v12 >= (unsigned int)v7 )
          v13 = v7 + PoolWithTag[4 * i + 2];
        LODWORD(v7) = v13;
        v14 = v12 < v11 ? 0xC0000095 : 0;
        if ( v12 < v11 )
          goto LABEL_20;
      }
      v15 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v7, 0x74416553u);
      v16 = v15;
      if ( !v15 )
      {
        v14 = -1073741670;
LABEL_20:
        ExFreePoolWithTag(PoolWithTag, 0);
        return v14;
      }
      memmove(v15, PoolWithTag, v6);
      v17 = (char *)&v16[v6 / 8];
      for ( j = 0; j < a2; ++j )
      {
        v19 = PoolWithTag[4 * j + 2];
        if ( (_DWORD)v19 )
        {
          v20 = *(_QWORD *)&PoolWithTag[4 * j];
          if ( v20 + v19 > 0x7FFFFFFF0000LL || v20 + v19 < v20 )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
            LODWORD(v19) = PoolWithTag[4 * j + 2];
          }
        }
        memmove(v17, *(const void **)&PoolWithTag[4 * j], (unsigned int)v19);
        v16[2 * j] = v17;
        v17 += PoolWithTag[4 * j + 2];
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      *a4 = v16;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
