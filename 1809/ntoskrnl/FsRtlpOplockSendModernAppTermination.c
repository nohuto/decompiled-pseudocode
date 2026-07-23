/*
 * XREFs of FsRtlpOplockSendModernAppTermination @ 0x140134DD0
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x140018CB0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x140130800 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14013AC0C (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B37D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockBreakNotify @ 0x140816638 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     FsRtlSendModernAppTermination @ 0x14018B0E0 (FsRtlSendModernAppTermination.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpOplockSendModernAppTermination(__int64 a1, __int64 a2)
{
  char v2; // r14
  ULONG v4; // edi
  int *PoolWithTag; // rax
  int *v6; // rbx
  _QWORD *v7; // rbp
  unsigned int v8; // edx
  _QWORD *i; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // [rsp+38h] [rbp+10h] BYREF
  int v13; // [rsp+3Ch] [rbp+14h]

  v2 = 0;
  if ( a2 || (v11 = *(_QWORD *)(a1 + 16)) == 0 )
  {
    v4 = 4096;
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x74725346u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x1000uLL);
      v7 = (_QWORD *)(a1 + 72);
      v2 = 1;
      v8 = 1;
      for ( i = (_QWORD *)*v7; ; i = (_QWORD *)*i )
      {
        if ( i == v7 )
        {
          *v6 = v8 - 1;
          goto LABEL_8;
        }
        if ( v8 >= 0x400 )
          break;
        v10 = v8++;
        v6[v10] = *(_DWORD *)(i[4] + 736LL);
      }
      memset(v6, 0, 0x1000uLL);
      *v6 = -1;
    }
    else
    {
      v12 = -1;
      v6 = &v12;
      v13 = 0;
    }
    v4 = 4;
  }
  else
  {
    v12 = 1;
    v6 = &v12;
    v4 = 8;
    v13 = *(_DWORD *)(v11 + 736);
  }
LABEL_8:
  FsRtlSendModernAppTermination(v6, v4);
  if ( v2 )
    ExFreePoolWithTag(v6, 0);
}
