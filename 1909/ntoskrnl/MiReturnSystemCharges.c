/*
 * XREFs of MiReturnSystemCharges @ 0x140125BB4
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiGetPageTablePages @ 0x140096860 (MiGetPageTablePages.c)
 *     MiDeleteSystemPageTableTail @ 0x140125B10 (MiDeleteSystemPageTableTail.c)
 *     MiDeleteSessionPdes @ 0x140168D80 (MiDeleteSessionPdes.c)
 *     MiCleanupPageTablePages @ 0x140186C2C (MiCleanupPageTablePages.c)
 *     MiReturnSplitPageCharges @ 0x14019D6B4 (MiReturnSplitPageCharges.c)
 *     MiGetLargePagesForSystemMapping @ 0x14088B1F8 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnSystemCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  if ( a3 == 2 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      goto LABEL_7;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), a2);
  }
  else
  {
    if ( a3 == 1 || a3 == 11 )
    {
      v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 40), -(__int64)a2);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 48), -(__int64)a2);
    }
    else
    {
      v4 = -(__int64)a2;
      if ( a3 == 4 )
      {
        _InterlockedExchangeAdd64(&qword_140466758, v4);
        return;
      }
      _InterlockedExchangeAdd64(&qword_140466740, v4);
    }
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
LABEL_7:
      MiReturnResidentAvailable(a2);
      return;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), a2);
  }
}
