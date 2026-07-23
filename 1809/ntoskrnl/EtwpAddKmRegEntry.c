/*
 * XREFs of EtwpAddKmRegEntry @ 0x1406BFBD8
 * Callers:
 *     EtwpRegisterProvider @ 0x1406BF84C (EtwpRegisterProvider.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     EtwpReferenceGuidEntry @ 0x1405C5288 (EtwpReferenceGuidEntry.c)
 */

__int64 __fastcall EtwpAddKmRegEntry(ULONG_PTR BugCheckParameter2, int a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v8; // edi
  _WORD *PoolWithTag; // rax
  _WORD *v11; // rbx
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx

  v8 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x52777445u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v11[49] = 1;
    EtwpReferenceGuidEntry(BugCheckParameter2);
    *((_QWORD *)v11 + 4) = BugCheckParameter2;
    if ( a2 == 2 )
      v11[49] |= 8u;
    if ( a3 )
    {
      *((_QWORD *)v11 + 11) = a3;
      *((_QWORD *)v11 + 10) = a4;
      LOBYTE(v12) = MmIsSessionAddress(a3);
      if ( v12 )
      {
        v11[49] |= 0x10u;
        *((_DWORD *)v11 + 14) = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      }
    }
    v13 = (_QWORD *)(BugCheckParameter2 + 56);
    v14 = *(_QWORD *)(BugCheckParameter2 + 56);
    if ( *(_QWORD *)(v14 + 8) != BugCheckParameter2 + 56 )
      __fastfail(3u);
    *((_QWORD *)v11 + 1) = v13;
    *(_QWORD *)v11 = v14;
    *(_QWORD *)(v14 + 8) = v11;
    *v13 = v11;
    *((_QWORD *)v11 + 3) = v11 + 8;
    *((_QWORD *)v11 + 2) = v11 + 8;
    v11[49] |= 0x80u;
    *a5 = v11;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
