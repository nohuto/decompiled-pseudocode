/*
 * XREFs of GreSetDCOwnerEx @ 0x1C002E880
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 *     GetMonitorDC @ 0x1C0033A78 (GetMonitorDC.c)
 *     DestroyProcessInfo @ 0x1C003B604 (DestroyProcessInfo.c)
 *     DestroyCacheDC @ 0x1C0062BA0 (DestroyCacheDC.c)
 *     CreateCacheDC @ 0x1C0062F20 (CreateCacheDC.c)
 *     InitUserScreen @ 0x1C00A67B0 (InitUserScreen.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00A8D7C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     HmgIncProcessHandleCount @ 0x1C001ED30 (HmgIncProcessHandleCount.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0024D98 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreSetBrushOwner @ 0x1C00277C0 (GreSetBrushOwner.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C002B2E0 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002C040 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C002E1C4 (HmgDecProcessHandleCount.c)
 *     HmgAllocateDcAttr @ 0x1C0030F9C (HmgAllocateDcAttr.c)
 *     HmgFreeDcAttr @ 0x1C0031308 (HmgFreeDcAttr.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00335D0 (GreReleaseHmgrSemaphore.c)
 *     GreIncQuotaCount @ 0x1C0064A20 (GreIncQuotaCount.c)
 *     IsThreadCrossSessionAttached @ 0x1C0075BD4 (IsThreadCrossSessionAttached.c)
 *     McTemplateK0pqz @ 0x1C00DA608 (McTemplateK0pqz.c)
 */

__int64 __fastcall GreSetDCOwnerEx(unsigned int a1, int a2, int a3, int a4)
{
  unsigned int v6; // r15d
  _OWORD *DcAttr; // rdi
  BOOL v8; // r13d
  struct _ERESOURCE *v9; // rbx
  GdiHandleManager *v10; // rbx
  unsigned int v11; // eax
  struct _ENTRY *v12; // rax
  struct _ENTRY *v13; // rsi
  char v14; // al
  struct OBJECT *EntryObject; // rax
  struct OBJECT *v16; // r14
  BOOL v17; // eax
  int v18; // edx
  unsigned __int64 v19; // rbx
  int v20; // r8d
  unsigned int v21; // eax
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _OWORD *v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // ebx
  _OWORD *v29; // rax
  _OWORD *v30; // rcx
  __int64 v31; // rdx
  unsigned int CurrentProcessId; // eax
  unsigned int v33; // ecx
  unsigned int v35; // [rsp+38h] [rbp-70h]
  _BYTE v36[8]; // [rsp+48h] [rbp-60h] BYREF
  struct _ENTRY *v37; // [rsp+50h] [rbp-58h] BYREF
  int v38; // [rsp+58h] [rbp-50h]
  int v39; // [rsp+5Ch] [rbp-4Ch]
  __int16 v40; // [rsp+B2h] [rbp+Ah]

  v40 = HIWORD(a1);
  v6 = 0;
  DcAttr = 0LL;
  v8 = a3 == 0;
  if ( a2 == -2147483646 && !a3 )
    DcAttr = (_OWORD *)HmgAllocateDcAttr();
  v9 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz(a1, a2, a3, (_DWORD)ghsemHmgr, 16, (__int64)L"ghsemHmgr");
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v36);
  v38 = 1;
  v10 = gpHandleManager;
  v11 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v12 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v10 + 2), v11, 0);
  v13 = v12;
  v37 = v12;
  if ( !v12 )
  {
    v38 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_19;
  }
  _m_prefetchw((char *)v12 + 8);
  v39 = *((_DWORD *)v12 + 2);
  v14 = *((_BYTE *)v12 + 15);
  if ( (v14 & 0x20) != 0 )
    goto LABEL_17;
  if ( (v14 & 0x40) == 0 )
    goto LABEL_19;
  EntryObject = GdiHandleManager::GetEntryObject((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v13 & 0xFFFFFF);
  if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
LABEL_17:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v37);
  v13 = v37;
LABEL_19:
  if ( !v38 )
    goto LABEL_73;
  v16 = GdiHandleManager::GetEntryObject((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v13 & 0xFFFFFF);
  if ( *((_BYTE *)v13 + 14) == 1 && *((_WORD *)v13 + 6) == v40 )
  {
    if ( !*((_WORD *)v16 + 6) )
    {
LABEL_25:
      v35 = a2;
      if ( a2 != -2147483630 )
      {
        if ( (*((_DWORD *)v13 + 2) & 0xFFFFFFFE) == 0x80000012 )
          GrepValidateVisRgn(v16, *((struct REGION **)v16 + 191));
        if ( a2 )
        {
          v17 = v8;
          if ( a2 == -2147483646 )
          {
            v19 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
            v21 = *((_DWORD *)v13 + 2) & 0xFFFFFFFE;
            if ( v21 != (_DWORD)v19 && v21 != -2147483630 && v21 )
            {
LABEL_50:
              v17 = v8;
              goto LABEL_67;
            }
            v22 = 0;
            v6 = 1;
            if ( v21 != (_DWORD)v19 && a4 )
            {
              v6 = HmgIncProcessHandleCount(v19, v18, v20);
              if ( v6 )
              {
                v22 = 1;
              }
              else if ( a3 )
              {
                CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24, v23);
                GreIncQuotaCount(CurrentProcessWin32Process);
                v22 = 1;
                v6 = 1;
                goto LABEL_40;
              }
            }
            if ( !v6 )
            {
LABEL_48:
              if ( v22 )
                HmgDecProcessHandleCount(v19);
              goto LABEL_50;
            }
LABEL_40:
            if ( *((_QWORD *)v13 + 2) )
              goto LABEL_45;
            if ( DcAttr )
            {
              *((_QWORD *)v16 + 10) = DcAttr;
              *((_QWORD *)v13 + 2) = DcAttr;
              v26 = (_OWORD *)((char *)v16 + 552);
              v27 = 3LL;
              do
              {
                *DcAttr = *v26;
                DcAttr[1] = v26[1];
                DcAttr[2] = v26[2];
                DcAttr[3] = v26[3];
                DcAttr[4] = v26[4];
                DcAttr[5] = v26[5];
                DcAttr[6] = v26[6];
                DcAttr += 8;
                *(DcAttr - 1) = v26[7];
                v26 += 8;
                --v27;
              }
              while ( v27 );
              *DcAttr = *v26;
              DcAttr[1] = v26[1];
              DcAttr = 0LL;
              goto LABEL_45;
            }
            if ( a3 )
            {
LABEL_45:
              HANDLELOCK::Pid((HANDLELOCK *)&v37, v19);
              v17 = v8;
              goto LABEL_67;
            }
            v6 = 0;
            goto LABEL_48;
          }
LABEL_67:
          if ( v35 != -2147483630 && v6 && v17 && (unsigned int)GreSetBrushOwner(**((HBRUSH **)v16 + 18), v35) )
            GreSetBrushOwner(**((HBRUSH **)v16 + 19), v35);
          goto LABEL_72;
        }
      }
      v28 = *((_DWORD *)v13 + 2) & 0xFFFFFFFE;
      if ( v28 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v29 = (_OWORD *)((char *)v16 + 552);
        v30 = (_OWORD *)*((_QWORD *)v16 + 10);
        if ( v30 != (_OWORD *)((char *)v16 + 552) )
        {
          v31 = 3LL;
          do
          {
            *v29 = *v30;
            v29[1] = v30[1];
            v29[2] = v30[2];
            v29[3] = v30[3];
            v29[4] = v30[4];
            v29[5] = v30[5];
            v29[6] = v30[6];
            v29 += 8;
            *(v29 - 1) = v30[7];
            v30 += 8;
            --v31;
          }
          while ( v31 );
          *v29 = *v30;
          v29[1] = v30[1];
          DcAttr = (_OWORD *)*((_QWORD *)v16 + 10);
          if ( DcAttr == (_OWORD *)((char *)v16 + 976) )
            DcAttr = (_OWORD *)*((_QWORD *)v16 + 121);
          *((_QWORD *)v16 + 10) = (char *)v16 + 552;
          *((_QWORD *)v13 + 2) = 0LL;
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v37, a2);
        if ( a4 )
        {
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
          HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
        }
        v17 = v8;
      }
      else
      {
        v33 = *((_DWORD *)v13 + 2) & 0xFFFFFFFE;
        if ( v33 == -2147483630 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v37, a2);
          v17 = v8;
        }
        else
        {
          v17 = v8;
          if ( v33 || a2 )
            goto LABEL_67;
          v17 = 0;
        }
      }
      v6 = 1;
      goto LABEL_67;
    }
    if ( *((struct _KTHREAD **)v16 + 2) == KeGetCurrentThread() )
    {
      v13 = v37;
      goto LABEL_25;
    }
  }
LABEL_72:
  HANDLELOCK::vUnlock((HANDLELOCK *)&v37);
LABEL_73:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v37);
  GreReleaseHmgrSemaphore();
  if ( DcAttr )
    HmgFreeDcAttr(DcAttr);
  return v6;
}
