/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd___::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd___ @ 0x180391C94
 * Callers:
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd_____lambda_01897aac42b7dc25bdb9079eaecdeabd___ @ 0x18039110C (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallb_ea_18039110C.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800679FC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 */

_QWORD *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd___::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)a1);
  a1[6] = *a2;
  v4 = a2 + 1;
  a1[7] = 0LL;
  if ( a1 + 7 != v4 )
  {
    a1[7] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_18045F1F0;
  a1[1] = off_180434FB0;
  return a1;
}
