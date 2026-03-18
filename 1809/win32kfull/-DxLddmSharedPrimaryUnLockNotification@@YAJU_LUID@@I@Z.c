/*
 * XREFs of ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0259D10
 * Callers:
 *     NtGdiDdDDISharedPrimaryUnLockNotification @ 0x1C025BE00 (NtGdiDdDDISharedPrimaryUnLockNotification.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0094ACC (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     UserRedrawDesktop @ 0x1C0223048 (UserRedrawDesktop.c)
 *     vSpUnTearDownSprites @ 0x1C0269FD0 (vSpUnTearDownSprites.c)
 */

__int64 __fastcall DxLddmSharedPrimaryUnLockNotification(struct _LUID a1, int a2)
{
  DWORD LowPart; // ebx
  int v3; // edi
  unsigned int v4; // r14d
  int v5; // r15d
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  __int64 i; // rsi
  int v8; // eax
  __int64 v9; // rdi
  unsigned int CurrentProcessId; // eax
  __int64 ProcessEntry; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  LONG HighPart; // [rsp+64h] [rbp+44h]
  __int64 v18; // [rsp+70h] [rbp+50h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v18);
  for ( i = hdevEnumerate(0LL); i; i = hdevEnumerate(i) )
  {
    v18 = i;
    v8 = *(_DWORD *)(i + 40);
    if ( (v8 & 0x400) == 0
      && (v8 & 0x20000) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v18)
      && LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v18)->LowPart
      && HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v18)->HighPart
      && *(_DWORD *)(*(_QWORD *)(v18 + 2576) + 256LL) == v3 )
    {
      GreLockVisRgn(v18);
      GreLockSprite(v18);
      GreLockDisplayDevice(v18);
      v9 = v18;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      ProcessEntry = DxLddmFindProcessEntry(v9 + 2624, CurrentProcessId & 0xFFFFFFFC);
      v12 = ProcessEntry;
      if ( ProcessEntry )
      {
        if ( *(_DWORD *)(ProcessEntry + 20) )
        {
          v13 = v18;
          if ( *(_QWORD *)(v18 + 2648) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v18 + 2648))(*(_QWORD *)(v18 + 1800), v12 + 28);
            v13 = v18;
          }
          --*(_DWORD *)(v13 + 2640);
          if ( (*(_DWORD *)(v12 + 20))-- == 1 )
          {
            vSpUnTearDownSprites(v18, v12 + 28, 1LL);
            if ( *(_DWORD *)(v12 + 44) != giVisRgnUniqueness )
              v5 = 1;
          }
        }
      }
      else
      {
        v4 = -1073741811;
      }
      GreUnlockDisplayDevice(v18);
      GreUnlockSprite(v18);
      GreUnlockVisRgn(v18);
      v3 = a2;
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  if ( v5 )
    UserRedrawDesktop();
  return v4;
}
