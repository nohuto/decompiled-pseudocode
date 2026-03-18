/*
 * XREFs of ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02735F8
 * Callers:
 *     NtGdiDdDDISharedPrimaryUnLockNotification @ 0x1C02754D0 (NtGdiDdDDISharedPrimaryUnLockNotification.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00832CC (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     UserRedrawDesktop @ 0x1C023B5E4 (UserRedrawDesktop.c)
 *     vSpUnTearDownSprites @ 0x1C02831A0 (vSpUnTearDownSprites.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned int CurrentProcessId; // eax
  __int64 ProcessEntry; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  LONG HighPart; // [rsp+64h] [rbp+44h]
  __int64 v21; // [rsp+70h] [rbp+50h] BYREF

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v21);
  for ( i = hdevEnumerate(0LL); i; i = hdevEnumerate(i) )
  {
    v21 = i;
    v8 = *(_DWORD *)(i + 40);
    if ( (v8 & 0x400) == 0
      && (v8 & 0x20000) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v21)
      && LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v21)->LowPart
      && HighPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v21)->HighPart
      && *(_DWORD *)(*(_QWORD *)(v21 + 2576) + 256LL) == v3 )
    {
      GreLockVisRgn(v21, v9, v10, v11);
      GreLockSprite(v21);
      GreLockDisplayDevice(v21);
      v12 = v21;
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      ProcessEntry = DxLddmFindProcessEntry(v12 + 2624, CurrentProcessId & 0xFFFFFFFC);
      v15 = ProcessEntry;
      if ( ProcessEntry )
      {
        if ( *(_DWORD *)(ProcessEntry + 20) )
        {
          v16 = v21;
          if ( *(_QWORD *)(v21 + 2648) )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(v21 + 2648))(*(_QWORD *)(v21 + 1800), v15 + 28);
            v16 = v21;
          }
          --*(_DWORD *)(v16 + 2640);
          if ( (*(_DWORD *)(v15 + 20))-- == 1 )
          {
            vSpUnTearDownSprites(v21, v15 + 28, 1LL);
            if ( *(_DWORD *)(v15 + 44) != giVisRgnUniqueness )
              v5 = 1;
          }
        }
      }
      else
      {
        v4 = -1073741811;
      }
      GreUnlockDisplayDevice(v21);
      GreUnlockSprite(v21);
      GreUnlockVisRgn(v21);
      v3 = a2;
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  if ( v5 )
    UserRedrawDesktop();
  return v4;
}
