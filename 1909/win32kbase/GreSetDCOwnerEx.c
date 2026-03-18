/*
 * XREFs of GreSetDCOwnerEx @ 0x1C001AF00
 * Callers:
 *     CreateCacheDC @ 0x1C000FDD0 (CreateCacheDC.c)
 *     DestroyCacheDC @ 0x1C000FFD0 (DestroyCacheDC.c)
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C00200C0 (ReleaseCacheDC.c)
 *     GetMonitorDC @ 0x1C002E29C (GetMonitorDC.c)
 *     DestroyProcessInfo @ 0x1C0035D10 (DestroyProcessInfo.c)
 *     InitUserScreen @ 0x1C00625FC (InitUserScreen.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00B45CC (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C001B1E4 (-SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C001B258 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001B2B0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreSetBrushOwner @ 0x1C001B890 (GreSetBrushOwner.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001F6D0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00200A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0021E60 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0022034 (HmgDecProcessHandleCount.c)
 *     HmgAllocateDcAttr @ 0x1C0027C58 (HmgAllocateDcAttr.c)
 *     HmgFreeDcAttr @ 0x1C0027DBC (HmgFreeDcAttr.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0035C9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0035CD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     GreIncQuotaCount @ 0x1C0086C20 (GreIncQuotaCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00BB194 (HmgIncProcessHandleCountEx.c)
 */

__int64 __fastcall GreSetDCOwnerEx(unsigned int a1, unsigned int a2, int a3, unsigned int a4)
{
  BOOL v6; // r13d
  unsigned int v7; // edi
  struct _DC_ATTR *DcAttr; // r12
  _DWORD *v9; // r14
  struct OBJECT *EntryObject; // rax
  HBRUSH **v11; // r15
  BOOL v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  bool v17; // cf
  unsigned int v18; // ebx
  unsigned int CurrentProcessId; // eax
  unsigned int v20; // ecx
  _DWORD *v22; // [rsp+30h] [rbp-28h] BYREF
  int v23; // [rsp+38h] [rbp-20h]
  char v24; // [rsp+A0h] [rbp+48h] BYREF
  int v25; // [rsp+A8h] [rbp+50h]
  int v26; // [rsp+B0h] [rbp+58h]
  unsigned int v27; // [rsp+B8h] [rbp+60h]

  v27 = a4;
  v26 = a3;
  v6 = a3 == 0;
  v7 = 0;
  DcAttr = 0LL;
  if ( a2 == -2147483646 && !a3 )
    DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
  GreAcquireHmgrSemaphore();
  v22 = 0LL;
  v23 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v22, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v23 )
  {
    v9 = v22;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v22 & 0xFFFFFF);
    v11 = (HBRUSH **)EntryObject;
    if ( *((_BYTE *)v9 + 14) == 1 && *((_WORD *)v9 + 6) == HIWORD(a1) )
    {
      if ( !*((_WORD *)EntryObject + 6) )
      {
LABEL_10:
        if ( a2 != -2147483630 )
        {
          if ( (v9[2] & 0xFFFFFFFE) == 0x80000012 )
            GrepValidateVisRgn(EntryObject, *((struct REGION **)EntryObject + 140));
          if ( a2 )
          {
            v12 = v6;
            if ( a2 == -2147483646 )
            {
              v13 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
              v14 = v9[2] & 0xFFFFFFFE;
              if ( v14 == v13 || v14 == -2147483630 || !v14 )
              {
                v25 = 0;
                v7 = 1;
                if ( v14 == v13 )
                {
LABEL_23:
                  if ( !*((_QWORD *)v9 + 2) )
                  {
                    if ( DcAttr )
                    {
                      SetupDCAttributes((struct DC *)v11, DcAttr);
                      DcAttr = 0LL;
                    }
                    else
                    {
                      v17 = v26 != 0;
                      v26 = -v26;
                      v7 &= -v17;
                    }
                  }
                  if ( v7 )
                  {
                    HANDLELOCK::Pid((HANDLELOCK *)&v22, v13);
                  }
                  else if ( v25 )
                  {
                    HmgDecProcessHandleCount(v13);
                  }
                  goto LABEL_33;
                }
                v7 = HmgIncProcessHandleCountEx(v13, 0LL, v27);
                if ( v7 )
                {
LABEL_22:
                  v25 = 1;
                  goto LABEL_23;
                }
                if ( v26 )
                {
                  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
                  GreIncQuotaCount(CurrentProcessWin32Process);
                  v7 = 1;
                  goto LABEL_22;
                }
              }
LABEL_33:
              v12 = v6;
            }
LABEL_40:
            if ( a2 != -2147483630 && v7 && v12 && (unsigned int)GreSetBrushOwner(*v11[17], a2) )
              GreSetBrushOwner(*v11[18], a2);
            goto LABEL_45;
          }
        }
        v18 = v9[2] & 0xFFFFFFFE;
        if ( v18 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v24, (struct _EX_PUSH_LOCK *)&gDCOwnershipChangeLock);
          FreeDCAttributes((struct DC *)v11);
          HANDLELOCK::Pid((HANDLELOCK *)&v22, a2);
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
          HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
          v7 = 1;
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v24);
          goto LABEL_33;
        }
        v20 = v9[2] & 0xFFFFFFFE;
        if ( v20 == -2147483630 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v22, a2);
          v12 = v6;
        }
        else
        {
          v12 = v6;
          if ( v20 || a2 )
            goto LABEL_40;
          v12 = 0;
        }
        v7 = 1;
        goto LABEL_40;
      }
      if ( *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
      {
        v9 = v22;
        goto LABEL_10;
      }
    }
LABEL_45:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v22);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v22);
  GreReleaseHmgrSemaphore();
  if ( DcAttr )
    HmgFreeDcAttr(DcAttr);
  return v7;
}
