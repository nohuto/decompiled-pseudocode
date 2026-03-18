/*
 * XREFs of GreLddmProcessDesktopSwitch @ 0x1C00BCE88
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00CF058 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void GreLddmProcessDesktopSwitch()
{
  unsigned int IsRemoteConnection; // edi
  __int64 i; // rcx
  __int64 v2; // rax
  DYNAMICMODECHANGESHARELOCK *v3; // rcx
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
  IsRemoteConnection = UserIsRemoteConnection();
  for ( i = 0LL; ; i = v4 )
  {
    v2 = hdevEnumerate(i);
    v4 = v2;
    if ( !v2 )
      break;
    v5 = *(_DWORD *)(v2 + 40);
    v6 = v2;
    if ( (v5 & 1) != 0
      && (v5 & 0x400) == 0
      && (v5 & 0x20000) == 0
      && ((unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v6) || IsRemoteConnection) )
    {
      GreLockVisRgn(v4);
      GreLockDisplayDevice(v4);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))gDxgkInterface[126])(
        *(_QWORD *)(*(_QWORD *)(v4 + 2568) + 240LL),
        *(unsigned int *)(*(_QWORD *)(v4 + 2568) + 256LL),
        IsRemoteConnection);
      GreUnlockDisplayDevice(v4);
      GreUnlockVisRgn(v4);
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v3);
}
