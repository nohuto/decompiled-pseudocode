/*
 * XREFs of NtGdiGetDeviceCapsAll @ 0x1C0125F80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001B230 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FC8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003FD3C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00778D4 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007933C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 *     ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00BB8C4 (-NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 */

__int64 __fastcall NtGdiGetDeviceCapsAll(HDC a1, struct _DEVCAPS *a2)
{
  unsigned int DeviceCapsAllInternal; // ebx
  DYNAMICMODECHANGESHARELOCK *v5; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD v12[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF

  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == (HDC)-589410304LL )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13);
    v13 = *(_QWORD *)(gpDispInfo + 40);
    if ( v13 )
    {
      DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v13, a2);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v5);
      return DeviceCapsAllInternal;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(0LL);
  }
  else
  {
    DCOBJ::DCOBJ((DCOBJ *)v12, a1);
    if ( v12[0] )
    {
      NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        (NEEDDYNAMICMODECHANGESHARELOCK *)&v13,
        (*(_DWORD *)(*(_QWORD *)(v12[0] + 48LL) + 40LL) & 0x8000) == 0,
        v7);
      v14 = *(_QWORD *)(v12[0] + 48LL);
      if ( v14 )
      {
        DeviceCapsAllInternal = NtGdiGetDeviceCapsAllInternal((struct PDEVOBJ *)&v14, a2);
        NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK(
          (NEEDDYNAMICMODECHANGESHARELOCK *)&v13,
          v10,
          v11);
        if ( v12[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v12);
        return DeviceCapsAllInternal;
      }
      NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v13, v8, v9);
    }
    else
    {
      EngSetLastError(6u);
    }
    if ( v12[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  }
  return 0LL;
}
