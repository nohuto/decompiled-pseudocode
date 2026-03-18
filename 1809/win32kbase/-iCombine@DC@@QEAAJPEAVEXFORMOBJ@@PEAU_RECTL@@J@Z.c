/*
 * XREFs of ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00FA8E0
 * Callers:
 *     GreIntersectClipRect @ 0x1C009DA90 (GreIntersectClipRect.c)
 * Callees:
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C00138AC (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0017730 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001D7B4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00202F0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0022D80 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0023940 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023FE8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00244A0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025478 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C002E870 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0069740 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C006DFE0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0071A60 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C00729C0 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct EXFORMOBJ *a2, struct _RECTL *a3, int a4)
{
  LONG top; // edx
  LONG bottom; // eax
  LONG left; // r9d
  int v10; // r12d
  unsigned int v11; // r14d
  REGION *v13; // rbx
  REGION *v14; // r15
  struct _ENTRY *EntryFromObject; // rax
  REGION *v16; // rdi
  REGION *v17; // rcx
  bool v18; // zf
  int v19; // r15d
  LONG v20; // edi
  LONG v21; // r13d
  _DWORD *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  LONG v27; // edi
  int v28; // eax
  _BYTE v29[8]; // [rsp+20h] [rbp-E0h] BYREF
  struct _RECTL v30; // [rsp+28h] [rbp-D8h] BYREF
  REGION *v31; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+40h] [rbp-C0h]
  REGION *v33; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+58h] [rbp-A8h]
  REGION *v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+68h] [rbp-98h]
  _BYTE v38[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h]
  _QWORD v40[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v41; // [rsp+E0h] [rbp-20h]
  struct _POINTL v42; // [rsp+F0h] [rbp-10h] BYREF
  struct _POINTL v43; // [rsp+F8h] [rbp-8h] BYREF
  LONG x; // [rsp+100h] [rbp+0h]
  LONG v45; // [rsp+104h] [rbp+4h]
  LONG v46; // [rsp+108h] [rbp+8h]
  LONG v47; // [rsp+10Ch] [rbp+Ch]

  v43.x = a3->right;
  top = a3->top;
  x = v43.x;
  bottom = a3->bottom;
  LODWORD(v33) = a4;
  left = a3->left;
  v45 = bottom;
  v47 = bottom;
  v42.x = left;
  v42.y = top;
  v43.y = top;
  v46 = left;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v38);
  v10 = 0;
  if ( !v39 )
  {
    EngSetLastError(8u);
LABEL_3:
    v11 = 0;
    goto LABEL_4;
  }
  if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v38, a2, &v42)
    || !(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v38, a2, &v43, 3)
    || !(unsigned int)EPATHOBJ::bCloseFigure((EPATHOBJ *)v38) )
  {
    goto LABEL_3;
  }
  v31 = 0LL;
  v32 = 0;
  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v31, (struct EPATHOBJ *)v38, 1u, 0LL);
  v13 = v31;
  if ( !v31 )
  {
    EngSetLastError(8u);
    v11 = 0;
    goto LABEL_39;
  }
  *((_DWORD *)this + 9) |= 0x10u;
  v11 = 0;
  v14 = (REGION *)*((_QWORD *)this + 20);
  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
  if ( v14 )
  {
    *(_QWORD *)&v30.left = 0LL;
    v30.right = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v30, 0xD8u);
    v16 = *(REGION **)&v30.left;
    if ( *(_QWORD *)&v30.left )
    {
      v33 = v14;
      v11 = RGNOBJ::iCombine((RGNOBJ *)&v30, (struct RGNOBJ *)&v33, (struct RGNOBJ *)&v31, a4);
      if ( v11 )
      {
        v16 = *(REGION **)&v30.left;
        v17 = v33;
        ++*(_DWORD *)(*(_QWORD *)&v30.left + 32LL);
        *((_QWORD *)this + 20) = v16;
        v18 = (*((_DWORD *)v17 + 8))-- == 1;
        if ( v18 )
          REGION::vDeleteREGION(v17);
      }
      else
      {
        REGION::vDeleteREGION(*(REGION **)&v30.left);
        v16 = 0LL;
      }
      v13 = v31;
    }
    REGION::vDeleteREGION(v13);
    v18 = v30.right == 1;
LABEL_37:
    v13 = 0LL;
    if ( v18 )
      REGION::vDeleteREGION(v16);
    goto LABEL_39;
  }
  if ( a4 != 1 )
  {
    v36 = 0LL;
    v37 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v36, 0xD8u);
    v16 = v36;
    if ( v36 )
    {
      v34 = 0LL;
      v35 = 0;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v34, 0xD8u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v34);
      if ( v34 )
      {
        DC::vGet_sizlWindow(this, (struct tagSIZE *)&v30);
        v19 = 0;
        v20 = v30.left;
        v21 = v30.top;
        v22 = (_DWORD *)*((_QWORD *)this + 6);
        if ( *((_QWORD *)this + 62) )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v29);
          if ( (v22[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
          {
            v19 = v22[647];
            v10 = v19;
            v11 = v22[646];
            v20 += v11;
            v21 += v19;
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v23);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion(v24);
            v19 = v10;
          }
        }
        v25 = *((_DWORD *)this + 10) & 1;
        v26 = *((_DWORD *)this + 2 * v25 + 254);
        v27 = v20 - v26;
        v30.left = v11 - v26;
        v28 = *((_DWORD *)this + 2 * v25 + 255);
        v30.top = v19 - v28;
        v30.bottom = v21 - v28;
        v30.right = v27;
        RGNOBJ::vSet((RGNOBJ *)&v34, &v30);
        v11 = RGNOBJ::iCombine((RGNOBJ *)&v36, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v31, (int)v33);
        if ( v11 )
        {
          v16 = v36;
          ++*((_DWORD *)v36 + 8);
          *((_QWORD *)this + 20) = v16;
        }
        else
        {
          REGION::vDeleteREGION(v36);
          v16 = 0LL;
        }
        v13 = v31;
      }
      else
      {
        REGION::vDeleteREGION(v16);
        v16 = 0LL;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
    }
    REGION::vDeleteREGION(v13);
    v18 = v37 == 1;
    goto LABEL_37;
  }
  ++*((_DWORD *)v13 + 8);
  *((_QWORD *)this + 20) = v13;
  v11 = RGNOBJ::iComplexity((RGNOBJ *)&v31);
LABEL_39:
  if ( v32 == 1 )
    REGION::vDeleteREGION(v13);
LABEL_4:
  EPATHOBJ::vUnlock((EPATHOBJ *)v38);
  if ( v41 )
    PopThreadGuardedObject(v40);
  return v11;
}
