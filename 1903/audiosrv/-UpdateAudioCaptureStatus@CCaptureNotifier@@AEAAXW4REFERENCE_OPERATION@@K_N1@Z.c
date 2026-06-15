/*
 * XREFs of ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x1800FBCD4
 * Callers:
 *     ??_GCCaptureReference@@QEAAPEAXI@Z @ 0x1800FB9F8 (--_GCCaptureReference@@QEAAPEAXI@Z.c)
 *     ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K_N0@Z @ 0x1800FBA98 (-AcquireReference@CCaptureNotifier@@QEAA-AV-$shared_ptr@VCCaptureReference@@@std@@K_N0@Z.c)
 * Callees:
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x18005A5A4 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800FB814 (--$_Try_emplace@AEBK$$V@-$map@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKU.c)
 */

void __fastcall CCaptureNotifier::UpdateAudioCaptureStatus(CCaptureNotifier *a1, int a2, int a3, char a4, char a5)
{
  bool v8; // di
  bool v9; // si
  __int64 *v10; // rcx
  const char *v11; // r9
  _DWORD *v12; // rdx
  bool v13; // al
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = a3;
  v8 = 0;
  v9 = 0;
  v10 = (__int64 *)((char *)a1 + 80);
  try
  {
    std::map<unsigned long,APPLICATION_REF_DATA>::_Try_emplace<unsigned long const &,>(v10, (__int64)&v17, &v19);
    v12 = v17;
    if ( a2 )
    {
      if ( a2 != 1 )
        return;
      v15 = v17[8];
      if ( !v15 )
        return;
      v16 = v15 - 1;
      v17[8] = v16;
      v13 = v16 == 0;
      if ( a4 )
      {
        v14 = v12[9]-- == 1;
        v8 = v14;
      }
      if ( !a5 )
        goto LABEL_14;
      v14 = v12[10]-- == 1;
    }
    else
    {
      ++v17[8];
      v13 = v12[8] == 1;
      if ( a4 )
        v8 = ++v12[9] == 1;
      if ( !a5 )
        goto LABEL_14;
      v14 = ++v12[10] == 1;
    }
    v9 = v14;
LABEL_14:
    if ( v13 || v8 || v9 )
      CCaptureNotifier::PublishCaptureAudioStatus(a1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x242,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v11);
  }
}
