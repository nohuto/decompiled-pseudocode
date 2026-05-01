/*
 * XREFs of ??$ShellFeedsExperienceManagerImpl_SetPositioningAnchorRect@AEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAMAEAMAEAMAEAM@ShellFeedsTelemetry@@SAXAEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAM111@Z @ 0x180092454
 * Callers:
 *     ?SetPositioningAnchorRect@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800949A0 (-SetPositioningAnchorRect@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experienc.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800942E8 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_SetPositioningAnchorRect<enum Windows::Internal::Shell::Experience::ShellFeedsButtonType &,float &,float &,float &,float &>(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  const struct _TlgProvider_t *v9; // rax
  const struct _TlgProvider_t *v10; // r10
  int v11; // ecx
  int v13; // [rsp+38h] [rbp-51h] BYREF
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-41h] BYREF
  int *v16; // [rsp+68h] [rbp-21h]
  __int64 v17; // [rsp+70h] [rbp-19h]
  __int64 v18; // [rsp+78h] [rbp-11h]
  __int64 v19; // [rsp+80h] [rbp-9h]
  __int64 v20; // [rsp+88h] [rbp-1h]
  __int64 v21; // [rsp+90h] [rbp+7h]
  __int64 v22; // [rsp+98h] [rbp+Fh]
  __int64 v23; // [rsp+A0h] [rbp+17h]
  __int64 v24; // [rsp+A8h] [rbp+1Fh]
  __int64 v25; // [rsp+B0h] [rbp+27h]
  __int64 *v26; // [rsp+B8h] [rbp+2Fh]
  __int64 v27; // [rsp+C0h] [rbp+37h]

  v9 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    LOBYTE(v9) = TlgKeywordOn(v9, 0x200000000000uLL);
    if ( (_BYTE)v9 )
    {
      v11 = *a1;
      v16 = &v13;
      v24 = a5;
      v13 = v11;
      v26 = &v14;
      v17 = 4LL;
      v18 = a2;
      v19 = 4LL;
      v20 = a3;
      v21 = 4LL;
      v22 = a4;
      v23 = 4LL;
      v25 = 4LL;
      v14 = 0x1000000LL;
      v27 = 8LL;
      LOBYTE(v9) = TlgWrite(v10, &unk_1804EA705, 0LL, 0LL, 8u, &pData);
    }
  }
  return (char)v9;
}
