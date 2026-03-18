/*
 * XREFs of wil::details::lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___::_lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___ @ 0x1C015F458
 * Callers:
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0056C90 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     GreGetRandomRgn @ 0x1C010DA60 (GreGetRandomRgn.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C012F820 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0100AFC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___::_lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___(
        _BYTE *a1)
{
  if ( a1[8] )
  {
    a1[8] = 0;
    CPushLock::ReleaseLock((CPushLock *)(*(_QWORD *)a1 + 1112LL));
  }
}
