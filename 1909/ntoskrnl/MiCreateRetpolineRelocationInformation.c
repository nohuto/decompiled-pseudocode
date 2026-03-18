/*
 * XREFs of MiCreateRetpolineRelocationInformation @ 0x1406EB4D8
 * Callers:
 *     MiParseImageLoadConfig @ 0x140643DC8 (MiParseImageLoadConfig.c)
 * Callees:
 *     RtlCreateRetpolineRelocationInformation @ 0x14008DAB4 (RtlCreateRetpolineRelocationInformation.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140729790 (MiFreeRetpolineRelocationInformation.c)
 */

__int64 __fastcall MiCreateRetpolineRelocationInformation(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  unsigned int v9; // ebp
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rdi
  unsigned int v12; // ebp
  char *v13; // rax
  int RetpolineRelocationInformation; // ebx

  v6 = a3 >> 12;
  v9 = 8 * (a3 >> 12) + 56;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x7252694Du);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v9);
    v12 = 4 * (*(_DWORD *)(a1 + 4) + 3 * v6);
    v13 = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x7252694Du);
    v11[6] = v13;
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
                                         v11 + 7,
                                         8 * v6);
      if ( RetpolineRelocationInformation >= 0 )
      {
        *((_DWORD *)v11 + 2) = *(_DWORD *)a1;
        *(_DWORD *)v11 = ((a3 + 4095) & 0xFFFFF000) + ((dword_1404645B0 + 4095) & 0xFFFFF000);
        *((_DWORD *)v11 + 1) = *(_DWORD *)(a2 + 24);
        *a4 = v11;
        v11 = 0LL;
        RetpolineRelocationInformation = 0;
      }
    }
    else
    {
      RetpolineRelocationInformation = -1073741670;
    }
    if ( v11 )
      MiFreeRetpolineRelocationInformation(v11);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)RetpolineRelocationInformation;
}
