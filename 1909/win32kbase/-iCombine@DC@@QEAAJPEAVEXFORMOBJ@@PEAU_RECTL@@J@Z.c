/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0124510
 * Callers:
 *     GreIntersectClipRect @ 0x1C0019DF0 (GreIntersectClipRect.c)
 * Callees:
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C000EE80 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00116C0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0015C80 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0015D10 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0017174 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     PopThreadGuardedObject @ 0x1C00172F0 (PopThreadGuardedObject.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0018D30 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001A16C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C001B860 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C001F210 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00255A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00272C0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0027C00 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0072A90 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C007EB50 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0080360 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct EXFORMOBJ *a2, struct _RECTL *a3, int a4)
{
  LONG left; // r9d
  LONG top; // edx
  unsigned int v9; // r14d
  REGION *v11; // rbx
  __int64 v12; // r15
  struct _ENTRY *EntryFromObject; // rax
  REGION *v14; // rdi
  REGION *v15; // rcx
  bool v16; // zf
  int v17; // r15d
  LONG v18; // edi
  LONG v19; // r12d
  _DWORD *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  LONG v25; // edi
  int v26; // eax
  _BYTE v27[8]; // [rsp+20h] [rbp-E0h] BYREF
  REGION *v28; // [rsp+28h] [rbp-D8h] BYREF
  int v29; // [rsp+30h] [rbp-D0h]
  struct _RECTL v30; // [rsp+38h] [rbp-C8h] BYREF
  REGION *v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+50h] [rbp-B0h]
  REGION *v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+60h] [rbp-A0h]
  _BYTE v35[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h]
  _QWORD v37[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v38; // [rsp+E0h] [rbp-20h]
  struct _POINTL v39; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL v40; // [rsp+F8h] [rbp-8h] BYREF
  LONG x; // [rsp+100h] [rbp+0h]
  LONG bottom; // [rsp+104h] [rbp+4h]
  LONG v43; // [rsp+108h] [rbp+8h]
  LONG v44; // [rsp+10Ch] [rbp+Ch]

  left = a3->left;
  top = a3->top;
  v40.x = a3->right;
  x = v40.x;
  bottom = a3->bottom;
  v44 = bottom;
  v39.x = left;
  v39.y = top;
  v40.y = top;
  v43 = left;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v35);
  if ( !v36 )
  {
    EngSetLastError(8u);
LABEL_3:
    v9 = 0;
    goto LABEL_4;
  }
  if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v35, a2, &v39)
    || !(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v35, a2, &v40, 3)
    || !(unsigned int)EPATHOBJ::bCloseFigure((EPATHOBJ *)v35) )
  {
    goto LABEL_3;
  }
  v32 = 0;
  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v31, (struct EPATHOBJ *)v35, 1u, 0LL);
  v11 = v31;
  if ( !v31 )
  {
    EngSetLastError(8u);
    v9 = 0;
    goto LABEL_39;
  }
  *((_DWORD *)this + 9) |= 0x10u;
  v9 = 0;
  v12 = *((_QWORD *)this + 20);
  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  if ( v12 )
  {
    v29 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v28, 0xD8u);
    v14 = v28;
    if ( v28 )
    {
      *(_QWORD *)&v30.left = v12;
      v9 = RGNOBJ::iCombine((RGNOBJ *)&v28, (struct RGNOBJ *)&v30, (struct RGNOBJ *)&v31, a4);
      if ( v9 )
      {
        v14 = v28;
        v15 = *(REGION **)&v30.left;
        ++*((_DWORD *)v28 + 8);
        *((_QWORD *)this + 20) = v14;
        v16 = (*((_DWORD *)v15 + 8))-- == 1;
        if ( v16 )
          REGION::vDeleteREGION(v15);
      }
      else
      {
        REGION::vDeleteREGION(v28);
        v14 = 0LL;
      }
      v11 = v31;
    }
    REGION::vDeleteREGION(v11);
    v16 = v29 == 1;
LABEL_37:
    v11 = 0LL;
    if ( v16 )
      REGION::vDeleteREGION(v14);
    goto LABEL_39;
  }
  if ( a4 != 1 )
  {
    v34 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v33, 0xD8u);
    v14 = v33;
    *(_QWORD *)&v30.left = 0LL;
    if ( v33 )
    {
      v29 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v28, 0xD8u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v28);
      if ( v28 )
      {
        DC::vGet_sizlWindow(this, (struct tagSIZE *)&v30);
        v17 = 0;
        v18 = v30.left;
        v19 = v30.top;
        v20 = (_DWORD *)*((_QWORD *)this + 6);
        if ( *((_QWORD *)this + 62) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v27);
          if ( (v20[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
          {
            v9 = v20[646];
            v18 += v9;
            v17 = v20[647];
            v19 += v17;
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v21);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion(v22);
          }
        }
        v23 = *((_DWORD *)this + 10) & 1;
        v24 = *((_DWORD *)this + 2 * v23 + 254);
        v25 = v18 - v24;
        v30.left = v9 - v24;
        v26 = *((_DWORD *)this + 2 * v23 + 255);
        v30.top = v17 - v26;
        v30.bottom = v19 - v26;
        v30.right = v25;
        RGNOBJ::vSet((RGNOBJ *)&v28, &v30);
        v9 = RGNOBJ::iCombine((RGNOBJ *)&v33, (struct RGNOBJ *)&v28, (struct RGNOBJ *)&v31, a4);
        if ( v9 )
        {
          v14 = v33;
          ++*((_DWORD *)v33 + 8);
          *((_QWORD *)this + 20) = v14;
        }
        else
        {
          REGION::vDeleteREGION(v33);
          v14 = 0LL;
        }
        v11 = v31;
      }
      else
      {
        REGION::vDeleteREGION(v14);
        v14 = 0LL;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v28);
    }
    REGION::vDeleteREGION(v11);
    v16 = v34 == 1;
    goto LABEL_37;
  }
  ++*((_DWORD *)v11 + 8);
  *((_QWORD *)this + 20) = v11;
  v9 = RGNOBJ::iComplexity((RGNOBJ *)&v31);
LABEL_39:
  if ( v32 == 1 )
    REGION::vDeleteREGION(v11);
LABEL_4:
  EPATHOBJ::vUnlock((EPATHOBJ *)v35);
  if ( v38 )
    PopThreadGuardedObject(v37);
  return v9;
}
