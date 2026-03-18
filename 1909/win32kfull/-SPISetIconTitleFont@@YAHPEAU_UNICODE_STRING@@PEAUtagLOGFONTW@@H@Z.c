/*
 * XREFs of ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D94FC
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0116EC0 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C013D380 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetAltScaleFont @ 0x1C013DDEC (UserSetAltScaleFont.c)
 *     CreateFontFromUserProfile @ 0x1C013DF50 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x1C013E3A8 (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  __int64 SessionDpiMetrics; // rbp
  __int64 v15; // rax
  struct HLFONT__ *v16; // rcx
  __int64 v17; // rsi
  struct HLFONT__ *v18; // rcx
  struct HLFONT__ *v19; // rax
  struct HLFONT__ *v20; // [rsp+30h] [rbp-A8h] BYREF
  char v21[96]; // [rsp+40h] [rbp-98h] BYREF

  v6 = a3 == 0;
  v7 = 0;
  v8 = *(_WORD *)(PsGetCurrentProcessWin32Process(a1, a2) + 284);
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
    if ( !(unsigned int)UserSetAltScaleFont((HBRUSH)FontFromUserProfile, (__int64 *)&v20) )
    {
      GreMarkDeletableFont(v12);
      GreDeleteObject(v12);
      return 0LL;
    }
    if ( a3 )
    {
      if ( a2 )
      {
        memset(v21, 0, 0x5CuLL);
        if ( (unsigned int)GreExtGetObjectW((HBRUSH)v12, 92LL, v21) )
          v7 = FastWriteProfileValue(a1, 23LL, 154LL, 3LL, v21, 92);
      }
      else
      {
        v7 = 1;
      }
      v6 = v7;
    }
    if ( v6 )
    {
      SessionDpiMetrics = GetSessionDpiMetrics();
      v15 = Get96DpiMetrics();
      v16 = *(struct HLFONT__ **)(SessionDpiMetrics + 64);
      v17 = v15;
      if ( v16 )
      {
        GreMarkDeletableFont(v16);
        GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 64));
      }
      v18 = *(struct HLFONT__ **)(v17 + 64);
      if ( v18 )
      {
        GreMarkDeletableFont(v18);
        GreDeleteObject(*(_QWORD *)(v17 + 64));
      }
      v19 = v20;
      *(_QWORD *)(SessionDpiMetrics + 64) = v12;
      *(_QWORD *)(v17 + 64) = v19;
      InvalidateKMDpiMetricsCacheDPIMETRICS();
    }
    else
    {
      GreMarkDeletableFont(v12);
      GreDeleteObject(v12);
      GreMarkDeletableFont(v20);
      GreDeleteObject(v20);
    }
  }
  return v7;
}
