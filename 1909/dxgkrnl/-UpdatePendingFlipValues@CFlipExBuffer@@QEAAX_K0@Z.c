/*
 * XREFs of ?UpdatePendingFlipValues@CFlipExBuffer@@QEAAX_K0@Z @ 0x1C005D370
 * Callers:
 *     ?PreNotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C005D2E0 (-PreNotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::UpdatePendingFlipValues(CFlipExBuffer *this, __int64 a2, __int64 a3)
{
  if ( a2 )
    *((_QWORD *)this + 40) = a2;
  if ( a3 )
    ++*((_DWORD *)this + 76);
}
