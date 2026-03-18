/*
 * XREFs of GreLddmProcessDesktopSwitch @ 0x1C01395E0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFF44 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C01396D8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

void GreLddmProcessDesktopSwitch()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int IsRemoteConnection; // edi
  __int64 i; // rcx
  __int64 v6; // rax
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  IsRemoteConnection = UserIsRemoteConnection(v1, v0, v2, v3);
  for ( i = 0LL; ; i = v8 )
  {
    v6 = hdevEnumerate(i);
    v8 = v6;
    if ( !v6 )
      break;
    v9 = *(_DWORD *)(v6 + 40);
    v10 = v6;
    if ( (v9 & 1) != 0
      && (v9 & 0x400) == 0
      && (v9 & 0x20000) == 0
      && ((unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10) || IsRemoteConnection) )
    {
      GreLockVisRgn(v8);
      GreLockDisplayDevice(v8);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))gDxgkInterface[51])(
        *(_QWORD *)(*(_QWORD *)(v8 + 2576) + 240LL),
        *(unsigned int *)(*(_QWORD *)(v8 + 2576) + 256LL),
        IsRemoteConnection);
      GreUnlockDisplayDevice(v8);
      GreUnlockVisRgn(v8);
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
}
