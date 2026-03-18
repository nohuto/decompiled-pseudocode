/*
 * XREFs of GreDxDwmShutdown @ 0x1C0275214
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C015E1B0 (xxxDwmStopRedirection.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00832CC (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

void GreDxDwmShutdown()
{
  __int64 HDEV; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 i; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    gDxgkInterface[15]((_QWORD *)-1LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
    HDEV = UserGetHDEV();
    GreLockVisRgn(HDEV, v1, v2, v3);
    for ( i = 0LL; ; i = v8 )
    {
      v7 = hdevEnumerate(i);
      v8 = v7;
      if ( !v7 )
        break;
      v5 = *(_DWORD *)(v7 + 40);
      v11 = v8;
      if ( (v5 & 1) != 0
        && (v5 & 0x400) == 0
        && (v5 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v11) )
      {
        GreLockDisplayDevice(v8);
        if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))gDxgkInterface[36])(
               *(_QWORD *)(*(_QWORD *)(v8 + 2576) + 240LL),
               *(unsigned int *)(*(_QWORD *)(v8 + 2576) + 256LL)) )
        {
          if ( *(_QWORD *)(v8 + 2728) )
          {
            LOBYTE(v6) = 1;
            DrvDxgkDisplayOnOff(v8, v6, 3LL);
            (*(void (__fastcall **)(_QWORD, __int64))(v8 + 2728))(*(_QWORD *)(v8 + 1800), 1LL);
          }
        }
        GreUnlockDisplayDevice(v8);
      }
    }
    v9 = UserGetHDEV();
    GreUnlockVisRgn(v9);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
  }
}
