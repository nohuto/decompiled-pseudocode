/*
 * XREFs of NtGdiGetDeviceCapsAll @ 0x1C003F9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C27C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C003FAA4 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00BDBB4 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAll(HDC a1, struct _DEVCAPS *a2)
{
  __int64 v4; // rbx
  struct _DEVCAPS *v5; // rdx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == (HDC)-589410304LL )
  {
    v4 = *(_QWORD *)(gpDispInfo + 40);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v7, a1);
    if ( !v7[0] )
    {
      EngSetLastError(6u);
      DCOBJ::~DCOBJ((DCOBJ *)v7);
      return 0LL;
    }
    v4 = *(_QWORD *)(v7[0] + 48LL);
    DCOBJ::~DCOBJ((DCOBJ *)v7);
  }
  v8 = v4;
  if ( !v4 )
    return 0LL;
  v5 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v5 = (struct _DEVCAPS *)MmUserProbeAddress;
  *(_BYTE *)v5 = *(_BYTE *)v5;
  *((_BYTE *)v5 + 143) = *((_BYTE *)v5 + 143);
  vGetDeviceCaps((struct PDEVOBJ *)&v8, a2);
  return 1LL;
}
