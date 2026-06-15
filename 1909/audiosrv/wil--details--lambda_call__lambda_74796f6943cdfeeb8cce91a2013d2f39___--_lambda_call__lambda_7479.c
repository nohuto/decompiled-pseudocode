/*
 * XREFs of wil::details::lambda_call__lambda_74796f6943cdfeeb8cce91a2013d2f39___::_lambda_call__lambda_74796f6943cdfeeb8cce91a2013d2f39___ @ 0x1801273C4
 * Callers:
 *     _PhoneCallAudio::StartSession_::_1_::dtor$2 @ 0x180128C1C (_PhoneCallAudio--StartSession_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1AA0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x1801275F8 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 */

PhoneCallAudio *__fastcall wil::details::lambda_call__lambda_74796f6943cdfeeb8cce91a2013d2f39___::_lambda_call__lambda_74796f6943cdfeeb8cce91a2013d2f39___(
        __int64 a1)
{
  PhoneCallAudio *result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    PhoneCallAudio::CleanupRouting(*(PhoneCallAudio **)a1);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 136LL) + 480LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 136LL),
      0LL);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a1 + 136LL));
    result = *(PhoneCallAudio **)a1;
    *(_DWORD *)(*(_QWORD *)a1 + 68LL) = 0;
  }
  return result;
}
