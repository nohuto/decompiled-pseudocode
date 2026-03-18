/*
 * XREFs of ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C0013E78
 * Callers:
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0007D00 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0008034 (-ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C0013B2C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 * Callees:
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

void __fastcall DirectComposition::CLinearObjectTableBase::ReleaseHandle(
        DirectComposition::CLinearObjectTableBase *this,
        int a2)
{
  unsigned __int64 v2; // r9
  size_t v4; // r8
  __int64 Src; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 )
  {
    v2 = (unsigned int)(a2 - 1);
    if ( v2 < *((_QWORD *)this + 3) )
    {
      v4 = *((_QWORD *)this + 4);
      Src = 0LL;
      memmove((void *)(*(_QWORD *)this + v2 * v4), &Src, v4);
      --*((_QWORD *)this + 5);
    }
  }
}
