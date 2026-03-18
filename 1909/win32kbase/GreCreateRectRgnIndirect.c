/*
 * XREFs of GreCreateRectRgnIndirect @ 0x1C0028030
 * Callers:
 *     CreateEmptyRgnPublic @ 0x1C0016040 (CreateEmptyRgnPublic.c)
 *     CreateEmptyRgn @ 0x1C0016090 (CreateEmptyRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00275A0 (SetOrCreateRectRgnIndirectPublic.c)
 *     NtUserGetDC @ 0x1C002A0F0 (NtUserGetDC.c)
 *     GetMonitorDC @ 0x1C002E29C (GetMonitorDC.c)
 *     UserValidateCopyRgn @ 0x1C00872B0 (UserValidateCopyRgn.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0016EF0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0021F44 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0022014 (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0022034 (HmgDecProcessHandleCount.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00272C0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C002915C (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002A4A0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     EtwTraceGdiCreateHandle @ 0x1C007923C (EtwTraceGdiCreateHandle.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C008B790 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C0093250 (EngSetLastError.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00BB194 (HmgIncProcessHandleCountEx.c)
 *     McTemplateK0pqz @ 0x1C012FEB8 (McTemplateK0pqz.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(struct _RECTL *a1)
{
  unsigned int v2; // ebp
  struct HOBJ__ *v3; // rsi
  BOOL v4; // r14d
  __int64 v5; // rbx
  char *v6; // rbx
  LONG left; // eax
  LONG right; // ecx
  LONG top; // eax
  LONG bottom; // ecx
  struct HOBJ__ *v11; // rdi
  unsigned __int64 v12; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  struct _ERESOURCE *v18; // r14
  GdiHandleManager *v19; // rcx
  struct _BASEOBJECT *v20; // rdx
  unsigned int EtwGdiHandleType; // eax
  __int16 *v23; // [rsp+30h] [rbp-28h] BYREF
  int v24; // [rsp+38h] [rbp-20h]
  unsigned int v25; // [rsp+60h] [rbp+8h] BYREF

  if ( (((a1->left & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a1->bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a1->right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a1->top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v2 = 376;
    v3 = 0LL;
    v4 = gulGdiHmgrTraceObjectType == 4;
    v24 = 0;
    if ( gulGdiHmgrTraceObjectType != 4 )
      v2 = 216;
    if ( dword_1C02119A0 < v2 )
    {
      v6 = (char *)PALLOCMEM2(v2, 0x34306847u, 0);
      if ( v6 )
      {
        *(_QWORD *)v6 = 0LL;
        *((_QWORD *)v6 + 1) = 0LL;
        *((_QWORD *)v6 + 2) = 0LL;
        if ( v4 )
          RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v6[v2 - 160], 0LL);
      }
    }
    else
    {
      v5 = qword_1C02128D0;
      if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported() < 0 )
      {
        v6 = 0LL;
      }
      else
      {
        v6 = (char *)Win32AllocateFromPagedLookasideListImpl(v5);
        if ( v6 )
        {
          *(_QWORD *)v6 = 0LL;
          *((_QWORD *)v6 + 1) = 0LL;
          *((_QWORD *)v6 + 2) = 0LL;
          if ( v4 )
            RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)&v6[v2 - 160], 0LL);
          *((_WORD *)v6 + 7) = 0x8000;
        }
      }
    }
    if ( !v6 )
      EngSetLastError(8u);
    v23 = (__int16 *)v6;
    if ( v6 )
    {
      *((_QWORD *)v6 + 3) = 216LL;
      *((_DWORD *)v6 + 20) = 0;
      *((_QWORD *)v6 + 4) = 0LL;
      *((_QWORD *)v6 + 7) = v6 + 48;
      *((_QWORD *)v6 + 6) = v6 + 48;
      left = a1->left;
      right = a1->right;
      if ( a1->left > right )
      {
        a1->left = right;
        a1->right = left;
      }
      top = a1->top;
      bottom = a1->bottom;
      if ( top > bottom )
      {
        a1->top = bottom;
        a1->bottom = top;
      }
      RGNOBJ::vSet((RGNOBJ *)&v23, a1);
      v11 = 0LL;
      v12 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( ThreadWin32Thread )
      {
        v17 = *(_QWORD *)(ThreadWin32Thread + 72);
        if ( v17 )
          LODWORD(v12) = *(_DWORD *)(v17 + 8);
      }
      v18 = ghsemHmgr;
      if ( ghsemHmgr )
      {
        PsEnterPriorityRegion();
        ExEnterCriticalRegionAndAcquireResourceExclusive(v18);
      }
      if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pqz(v15, v14, v16, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
      if ( (unsigned int)HmgIncProcessHandleCountEx((unsigned int)v12, v14, 0LL) )
      {
        v25 = 0;
        if ( GdiHandleManager::AcquireEntryIndex(v19, &v25) )
        {
          v11 = ENTRYOBJ::hSetup((struct OBJECT *)v6, 4u, 1u, v25);
          RECHMGRCREATE(v11, v20);
          EtwGdiHandleType = GetEtwGdiHandleType(4u);
          EtwTraceGdiCreateHandle(v11, EtwGdiHandleType, v12);
        }
        else
        {
          HmgDecProcessHandleCount(v12);
        }
      }
      GreReleaseHmgrSemaphore();
      if ( v11 )
        _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
      v3 = v11;
      if ( !v11 )
        RGNOBJ::vDeleteRGNOBJ(&v23);
    }
    else
    {
      EngSetLastError(8u);
    }
    RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v23);
    return v3;
  }
}
