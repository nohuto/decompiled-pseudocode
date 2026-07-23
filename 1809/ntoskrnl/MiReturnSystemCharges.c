/*
 * XREFs of MiReturnSystemCharges @ 0x1401208A4
 * Callers:
 *     MiGetPageTablePages @ 0x140026E90 (MiGetPageTablePages.c)
 *     MiCleanupPageTablePages @ 0x1400288B8 (MiCleanupPageTablePages.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiDeleteSystemPageTableTail @ 0x140120800 (MiDeleteSystemPageTableTail.c)
 *     MiDeleteSessionPdes @ 0x140158E60 (MiDeleteSessionPdes.c)
 *     MiReturnSplitPageCharges @ 0x140192914 (MiReturnSplitPageCharges.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408531D0 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnSystemCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  if ( a3 == 2 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      goto LABEL_7;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), a2);
  }
  else
  {
    if ( a3 == 1 || a3 == 11 )
    {
      v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 40), -(__int64)a2);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 48), -(__int64)a2);
    }
    else
    {
      v4 = -(__int64)a2;
      if ( a3 == 4 )
      {
        _InterlockedExchangeAdd64(&qword_14043C100, v4);
        return;
      }
      _InterlockedExchangeAdd64(&qword_14043C0E0, v4);
    }
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
LABEL_7:
      MiReturnResidentAvailable(a2);
      return;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), a2);
  }
}
