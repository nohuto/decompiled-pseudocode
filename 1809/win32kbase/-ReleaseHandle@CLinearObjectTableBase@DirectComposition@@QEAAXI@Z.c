/*
 * XREFs of ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C006D16C
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C000DBE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C005A310 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C005A664 (-ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z.c)
 * Callees:
 *     memmove @ 0x1C00AF880 (memmove.c)
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
