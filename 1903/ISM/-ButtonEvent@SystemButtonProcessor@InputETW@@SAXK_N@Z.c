/*
 * XREFs of ?ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z @ 0x180035F14
 * Callers:
 *     ?OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800360C0 (-OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRes.c)
 * Callees:
 *     ?Provider@InputETW@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A12C (-Provider@InputETW@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x18006C218 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::SystemButtonProcessor::ButtonEvent(int a1, unsigned __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  int v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  int *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]
  int v14; // [rsp+A0h] [rbp+8h] BYREF

  v14 = a1;
  v2 = a2;
  if ( InputETW::IsEnabled(a1, a2) )
  {
    v4 = InputETW::Provider(v3);
    if ( *(_DWORD *)v4 > 5u )
    {
      if ( TlgKeywordOn(v4, 1uLL) )
      {
        v10 = 0;
        v13 = 0;
        v8 = &v14;
        v6 = v2;
        v11 = &v6;
        v9 = 4;
        v12 = 4;
        TlgWrite(v5, &unk_1801A098F, 0LL, 0LL, 4u, &pData);
      }
    }
  }
}
