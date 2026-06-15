/*
 * XREFs of ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z @ 0x1800EFC1C
 * Callers:
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K@Z @ 0x1800EFA58 (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@VCCaptureReference@@@std@@EEAAXXZ @ 0x1800EFD30 (-_Destroy@-$_Ref_count_obj@VCCaptureReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180051FDC (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800EF89C (--$_Try_emplace@AEBK$$V@-$map@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKU.c)
 */

void __fastcall CCaptureNotifier::UpdateAudioCaptureStatus(CCaptureNotifier *a1, int a2, unsigned int a3)
{
  __int64 *v5; // rcx
  const char *v6; // r9
  __int64 v7; // r8
  bool v8; // zf
  int v9; // eax
  int v10; // eax
  _QWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v5 = (__int64 *)((char *)a1 + 80);
  try
  {
    std::map<unsigned long,APPLICATION_REF_DATA>::_Try_emplace<unsigned long const &,>(v5, (__int64)v11, &v13);
    v7 = v11[0];
    if ( a2 )
    {
      if ( a2 != 1 )
        return;
      v9 = *(_DWORD *)(v11[0] + 32LL);
      if ( !v9 )
        return;
      v10 = v9 - 1;
      v8 = v10 == 0;
      *(_DWORD *)(v11[0] + 32LL) = v10;
    }
    else
    {
      ++*(_DWORD *)(v11[0] + 32LL);
      v8 = *(_DWORD *)(v7 + 32) == 1;
    }
    if ( v8 )
      CCaptureNotifier::PublishCaptureAudioStatus(a1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x209,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v6);
  }
}
