/*
 * XREFs of GreSetDCOwnerEx @ 0x1C0027700
 * Callers:
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C004275C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     DestroyCacheDC @ 0x1C0045330 (DestroyCacheDC.c)
 *     InitUserScreen @ 0x1C0098FE4 (InitUserScreen.c)
 *     CreateCacheDC @ 0x1C0099470 (CreateCacheDC.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00ACBC0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C00202A4 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C00204BC (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0023460 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0023670 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0023860 (--1HANDLELOCK@@QEAA@XZ.c)
 *     HmgDecProcessHandleCount @ 0x1C0023B18 (HmgDecProcessHandleCount.c)
 *     HmgFreeDcAttr @ 0x1C0023B9C (HmgFreeDcAttr.c)
 *     HmgAllocateDcAttr @ 0x1C0023C68 (HmgAllocateDcAttr.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003323C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0033270 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0034DF0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     GreSetBrushOwner @ 0x1C0042FF0 (GreSetBrushOwner.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C00433E0 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     GreIncQuotaCount @ 0x1C00813B0 (GreIncQuotaCount.c)
 *     HmgIncProcessHandleCount @ 0x1C009CC04 (HmgIncProcessHandleCount.c)
 *     DC::AcquireDcVisRgnShared @ 0x1C00ABA50 (DC--AcquireDcVisRgnShared.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00AC29C (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 */

__int64 __fastcall GreSetDCOwnerEx(__int64 a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // ebx
  BOOL v6; // r12d
  unsigned int v7; // edi
  struct _DC_ATTR *DcAttr; // r13
  _DWORD *v9; // r14
  struct OBJECT *EntryObject; // rax
  struct OBJECT *v11; // r15
  bool v12; // bl
  BOOL v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // rcx
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  bool v18; // cf
  unsigned int v19; // ebx
  unsigned int CurrentProcessId; // eax
  unsigned int v21; // ecx
  __int64 v22; // rcx
  _BYTE v24[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  char v26; // [rsp+40h] [rbp-38h]
  struct _RECTL v27; // [rsp+48h] [rbp-30h] BYREF
  _DWORD *v28; // [rsp+58h] [rbp-20h] BYREF
  int v29; // [rsp+60h] [rbp-18h]
  __int64 v30; // [rsp+C0h] [rbp+48h] BYREF
  int v31; // [rsp+C8h] [rbp+50h]
  int v32; // [rsp+D0h] [rbp+58h]
  int v33; // [rsp+D8h] [rbp+60h]

  v33 = a4;
  v32 = a3;
  v5 = a1;
  v6 = a3 == 0;
  v7 = 0;
  DcAttr = 0LL;
  if ( a2 == -2147483646 && !a3 )
    DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
  GreAcquireHmgrSemaphore(a1);
  v28 = 0LL;
  v29 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v28, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v29 )
  {
    v9 = v28;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v28 & 0xFFFFFF);
    v11 = EntryObject;
    if ( *((_BYTE *)v9 + 14) == 1 && *((_WORD *)v9 + 6) == HIWORD(v5) )
    {
      if ( !*((_WORD *)EntryObject + 6) )
      {
LABEL_10:
        if ( a2 != -2147483630 )
        {
          if ( (v9[2] & 0xFFFFFFFE) == 0x80000012 )
          {
            DC::AcquireDcVisRgnShared(EntryObject, &v25);
            v12 = GrepValidateVisRgn(v11, *((struct REGION **)v11 + 143), (struct ERECTL *)&v27);
            if ( v26 )
              CPushLock::ReleaseLock((CPushLock *)(v25 + 1112));
            if ( !v12 )
            {
              CPushLock::AcquireLockExclusive((struct OBJECT *)((char *)v11 + 1112));
              v30 = *((_QWORD *)v11 + 143);
              if ( v30 )
                RGNOBJ::vSet((RGNOBJ *)&v30, &v27);
              CPushLock::ReleaseLock((struct OBJECT *)((char *)v11 + 1112));
            }
          }
          if ( a2 )
          {
            v13 = v6;
            if ( a2 == -2147483646 )
            {
              v14 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
              v15 = v9[2] & 0xFFFFFFFE;
              if ( v15 == v14 || v15 == -2147483630 || !v15 )
              {
                v31 = 0;
                v7 = 1;
                if ( v15 == v14 || !v33 )
                  goto LABEL_29;
                v7 = HmgIncProcessHandleCount(v14);
                if ( v7 )
                {
LABEL_28:
                  v31 = 1;
LABEL_29:
                  if ( !*((_QWORD *)v9 + 2) )
                  {
                    if ( DcAttr )
                    {
                      SetupDCAttributes(v11, DcAttr);
                      DcAttr = 0LL;
                    }
                    else
                    {
                      v18 = v32 != 0;
                      v32 = -v32;
                      v7 &= -v18;
                    }
                  }
                  if ( v7 )
                  {
                    HANDLELOCK::Pid((HANDLELOCK *)&v28, v14);
                  }
                  else if ( v31 )
                  {
                    HmgDecProcessHandleCount(v14);
                  }
                  goto LABEL_41;
                }
                if ( v32 )
                {
                  CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v16);
                  GreIncQuotaCount(CurrentProcessWin32Process);
                  v7 = 1;
                  goto LABEL_28;
                }
              }
LABEL_41:
              v13 = v6;
            }
LABEL_48:
            if ( a2 != -2147483630 && v7 && v13 && (unsigned int)GreSetBrushOwner(**((HBRUSH **)v11 + 17), a2) )
              GreSetBrushOwner(**((HBRUSH **)v11 + 18), a2);
            goto LABEL_53;
          }
        }
        v19 = v9[2] & 0xFFFFFFFE;
        if ( v19 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v24, (struct _EX_PUSH_LOCK *)&gDCOwnershipChangeLock);
          FreeDCAttributes(v11);
          HANDLELOCK::Pid((HANDLELOCK *)&v28, a2);
          if ( v33 )
          {
            CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
            HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
          }
          v7 = 1;
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v24);
          goto LABEL_41;
        }
        v21 = v9[2] & 0xFFFFFFFE;
        if ( v21 == -2147483630 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v28, a2);
          v13 = v6;
        }
        else
        {
          v13 = v6;
          if ( v21 || a2 )
            goto LABEL_48;
          v13 = 0;
        }
        v7 = 1;
        goto LABEL_48;
      }
      if ( *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
      {
        v9 = v28;
        goto LABEL_10;
      }
    }
LABEL_53:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v28);
  GreReleaseHmgrSemaphore(v22);
  if ( DcAttr )
    HmgFreeDcAttr((__int64)DcAttr);
  return v7;
}
