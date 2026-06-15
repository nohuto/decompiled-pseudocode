/*
 * XREFs of wil::details::lambda_call__lambda_e006c97046dae48ce08c3d14c51991bb___::_lambda_call__lambda_e006c97046dae48ce08c3d14c51991bb___ @ 0x140039BAC
 * Callers:
 *     _CPipeInstance::ActivateAPOs_::_1_::dtor$0 @ 0x140020200 (_CPipeInstance--ActivateAPOs_--_1_--dtor$0.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x14000A500 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140037E7C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_e006c97046dae48ce08c3d14c51991bb___::_lambda_call__lambda_e006c97046dae48ce08c3d14c51991bb___(
        __int64 a1)
{
  unsigned int v1; // edx
  int v2; // eax
  __int64 v3; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = *(_DWORD *)(**(_QWORD **)a1 + 4LL);
    if ( v1 )
    {
      v2 = TrackSystemEffectBehavior(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL), v1, 0, 0, v3);
      if ( v2 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBD1,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v2);
    }
  }
}
