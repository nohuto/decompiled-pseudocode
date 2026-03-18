/*
 * XREFs of MonitorFromMousePoint @ 0x1C00557F0
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00390C8 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C00554C8 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C00558B0 (--0CLockedOutputConfig@@QEAA@XZ.c)
 *     PtInRect @ 0x1C0055DE4 (PtInRect.c)
 */

__int64 __fastcall MonitorFromMousePoint(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  int Next_high; // r10d
  struct _SINGLE_LIST_ENTRY *v6; // r11
  struct _SINGLE_LIST_ENTRY *v7; // rcx
  __int64 v8; // r9
  char v10[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  char v12; // [rsp+30h] [rbp-18h]

  CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v10);
  v2 = 0LL;
  v3 = 0LL;
  Next = gpInputConfig[4].Next;
  Next_high = HIDWORD(Next[1].Next);
  if ( Next_high )
  {
    v6 = Next[2].Next;
    while ( 1 )
    {
      v7 = &v6[10 * v3];
      if ( v7[9].Next )
      {
        if ( (unsigned int)PtInRect(v7, a1) )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (_DWORD)v3 == Next_high )
        goto LABEL_7;
    }
    v2 = v8;
  }
LABEL_7:
  if ( !v12 )
  {
    ExReleasePushLockSharedEx(v11, 0LL);
    KeLeaveCriticalRegion();
  }
  return v2;
}
