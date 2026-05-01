/*
 * XREFs of ??$FailedToRetreiveAppIdInfo@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x18008DC8C
 * Callers:
 *     ?DetermineAppIdKind@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AW4AppIdKind@Activities@Data@56@PEBG@Z @ 0x18008E66C (-DetermineAppIdKind@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AW4AppIdKin.c)
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x18008EF8C (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Provider@TaskFlowDataEngineTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18006E8C4 (-Provider@TaskFlowDataEngineTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

char __fastcall TaskFlowDataEngineTelemetry::FailedToRetreiveAppIdInfo<long &>(int *a1)
{
  const struct _TlgProvider_t *v2; // rax
  const struct _TlgProvider_t *v3; // r10
  int v4; // ecx
  int v6; // [rsp+30h] [rbp-68h] BYREF
  __int64 v7; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v2 = TaskFlowDataEngineTelemetry::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn(v2, 0x200000000000uLL);
    if ( (_BYTE)v2 )
    {
      v4 = *a1;
      v11 = 0;
      v14 = 0;
      v9 = &v6;
      v6 = v4;
      v12 = &v7;
      v10 = 4;
      v7 = 0x1000000LL;
      v13 = 8;
      LOBYTE(v2) = TlgWrite(v3, &unk_180455379, 0LL, 0LL, 4u, &pData);
    }
  }
  return (char)v2;
}
