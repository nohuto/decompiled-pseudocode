/*
 * XREFs of ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C62D8
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00C14C4 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00BF634 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetAltScaleFont @ 0x1C00BFB38 (UserSetAltScaleFont.c)
 *     CreateFontFromUserProfile @ 0x1C00BFC88 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x1C00BFFF8 (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall SPISetIconTitleFont(struct _UNICODE_STRING *a1, struct tagLOGFONTW *a2, int a3)
{
  BOOL v6; // ebp
  unsigned int v7; // edi
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // ax
  INT v10; // ebx
  struct HLFONT__ *FontFromUserProfile; // rax
  struct HLFONT__ *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 SessionDpiMetrics; // rbp
  __int64 v18; // rax
  struct HLFONT__ *v19; // rcx
  __int64 v20; // rsi
  struct HLFONT__ *v21; // rcx
  struct HLFONT__ *v22; // rax
  struct HLFONT__ *v23; // [rsp+30h] [rbp-A8h] BYREF
  char v24[96]; // [rsp+40h] [rbp-98h] BYREF

  v6 = a3 == 0;
  v7 = 0;
  v8 = *(_WORD *)(PsGetCurrentProcessWin32Process(a1) + 284);
  v9 = *(_WORD *)(gpsi + 6998LL);
  if ( v8 != v9 )
  {
    v10 = v8;
    a2->lfWidth = EngMulDiv(a2->lfWidth, v9, v8);
    a2->lfHeight = EngMulDiv(a2->lfHeight, *(unsigned __int16 *)(gpsi + 6998LL), v10);
  }
  FontFromUserProfile = CreateFontFromUserProfile(a1, a2, 0x9Au);
  v12 = FontFromUserProfile;
  if ( FontFromUserProfile )
  {
    if ( !(unsigned int)UserSetAltScaleFont((HSURF)FontFromUserProfile, (__int64 *)&v23) )
    {
      GreMarkDeletableFont(v12);
      GreDeleteObject(v12);
      return 0LL;
    }
    if ( a3 )
    {
      if ( a2 )
      {
        if ( (unsigned int)GreExtGetObjectW((HSURF)v12, 92LL, v24) )
          v7 = FastWriteProfileValue(a1, 23LL, 154LL, 3LL, v24, 92);
      }
      else
      {
        v7 = 1;
      }
      v6 = v7;
    }
    if ( v6 )
    {
      SessionDpiMetrics = GetSessionDpiMetrics(v14, v13, v15);
      v18 = Get96DpiMetrics();
      v19 = *(struct HLFONT__ **)(SessionDpiMetrics + 64);
      v20 = v18;
      if ( v19 )
      {
        GreMarkDeletableFont(v19);
        GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 64));
      }
      v21 = *(struct HLFONT__ **)(v20 + 64);
      if ( v21 )
      {
        GreMarkDeletableFont(v21);
        GreDeleteObject(*(_QWORD *)(v20 + 64));
      }
      v22 = v23;
      *(_QWORD *)(SessionDpiMetrics + 64) = v12;
      *(_QWORD *)(v20 + 64) = v22;
      InvalidateKMDpiMetricsCacheDPIMETRICS();
    }
    else
    {
      GreMarkDeletableFont(v12);
      GreDeleteObject(v12);
      GreMarkDeletableFont(v23);
      GreDeleteObject(v23);
    }
  }
  return v7;
}
