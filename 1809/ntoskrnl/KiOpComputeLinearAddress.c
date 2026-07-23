/*
 * XREFs of KiOpComputeLinearAddress @ 0x14029C654
 * Callers:
 *     KiOpRetrieveRegMemAddress @ 0x140192098 (KiOpRetrieveRegMemAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiOpComputeLinearAddress(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 v3; // rdi
  __int64 v5; // rsi
  char v6; // bl
  KPCR *Thread; // rdx
  __int16 v8; // r10
  struct _KTHREAD *v10; // rdx
  struct _KTHREAD *v11; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v5 = *a2;
  v6 = *(_BYTE *)(a1 + 81);
  _BitScanForward((unsigned int *)&a1, *(_DWORD *)(a1 + 48));
  Thread = 0LL;
  v8 = *(_WORD *)(KiOpSegmentOffsetTable[a1] + *(_QWORD *)(v3 + 24));
  if ( 1 << a1 == 32 )
  {
    if ( v6 )
    {
      Thread = (KPCR *)CurrentThread[1].WaitBlock[2].Thread;
      if ( !Thread )
      {
        v10 = KeGetCurrentThread();
        if ( (v10->MiscFlags & 0x400) != 0 || v10->ApcStateIndex == 1 )
          Thread = 0LL;
        else
          Thread = (KPCR *)v10->Teb;
      }
    }
    else
    {
      Thread = KeGetPcr();
    }
    goto LABEL_4;
  }
  if ( 1 << a1 == 16 )
  {
    Thread = *(KPCR **)&CurrentThread[1].WaitBlockFill11[112];
    if ( !Thread )
    {
      v11 = KeGetCurrentThread();
      if ( (v11->MiscFlags & 0x400) != 0 || v11->ApcStateIndex == 1 )
        Thread = 0LL;
      else
        Thread = (KPCR *)v11->Teb;
      if ( Thread )
        Thread = (KPCR *)((char *)Thread + 0x2000);
    }
    goto LABEL_4;
  }
  if ( v6 != 1 || !*(_BYTE *)(v3 + 58) || ((v8 - 35) & 0xFFE7) == 0 && v8 != 59 )
  {
LABEL_4:
    *a2 = (__int64)Thread + v5;
    return 0LL;
  }
  *a2 = 0x7FFFFFFF0000LL;
  return 3221225477LL;
}
