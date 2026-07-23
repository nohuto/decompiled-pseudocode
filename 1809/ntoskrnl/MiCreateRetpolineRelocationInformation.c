/*
 * XREFs of MiCreateRetpolineRelocationInformation @ 0x140854D60
 * Callers:
 *     MiParseImageLoadConfig @ 0x140651A9C (MiParseImageLoadConfig.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlCreateRetpolineRelocationInformation @ 0x1402F6FB8 (RtlCreateRetpolineRelocationInformation.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140854E9C (MiFreeRetpolineRelocationInformation.c)
 */

__int64 __fastcall MiCreateRetpolineRelocationInformation(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rdi
  int RetpolineRelocationInformation; // ebx
  unsigned int v12; // ebp
  char *v13; // rax

  v6 = a3 >> 12;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * (a3 >> 12) + 56, 0x7252694Du);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v6 + 56);
    v12 = 4 * (*(_DWORD *)(a1 + 4) + 3 * v6);
    v13 = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x7252694Du);
    v10[6] = v13;
    if ( v13 )
    {
      RetpolineRelocationInformation = RtlCreateRetpolineRelocationInformation(
                                         a3,
                                         *(_DWORD *)(a1 + 4),
                                         *(_QWORD *)(a1 + 8),
                                         *(_QWORD *)(a1 + 16),
                                         *(_QWORD *)(a1 + 24),
                                         v13,
                                         v12,
                                         v10 + 7,
                                         8 * v6);
      if ( RetpolineRelocationInformation >= 0 )
      {
        *((_DWORD *)v10 + 2) = *(_DWORD *)a1;
        *(_DWORD *)v10 = ((a3 + 4095) & 0xFFFFF000) + ((dword_140439F34 + 4095) & 0xFFFFF000);
        *((_DWORD *)v10 + 1) = *(_DWORD *)(a2 + 24);
        *a4 = v10;
        v10 = 0LL;
        RetpolineRelocationInformation = 0;
      }
    }
    else
    {
      RetpolineRelocationInformation = -1073741670;
    }
    if ( v10 )
      MiFreeRetpolineRelocationInformation(v10);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)RetpolineRelocationInformation;
}
