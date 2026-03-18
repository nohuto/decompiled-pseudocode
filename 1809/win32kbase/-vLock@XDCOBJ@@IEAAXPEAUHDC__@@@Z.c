/*
 * XREFs of ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00A9968
 * Callers:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     hbmSelectBitmap @ 0x1C0073B90 (hbmSelectBitmap.c)
 * Callees:
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0021420 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     HmgLockEx @ 0x1C0023060 (HmgLockEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00713AC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z @ 0x1C00A9B60 (-LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00F5FA4 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  struct OBJECT *v3; // rax
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v6; // rdx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx

  v3 = HmgLockEx((unsigned int)a2, 1, *((_DWORD *)this + 3));
  *(_QWORD *)this = v3;
  if ( v3 )
  {
    ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
    v6 = *(_QWORD *)this;
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 1 )
    {
      *(_QWORD *)(v6 + 2136) = ThreadCurrentObj;
      *(_DWORD *)(*(_QWORD *)this + 2144LL) = 0xFFFF;
      v6 = *(_QWORD *)this;
    }
    else if ( *(struct UMPDOBJ **)(v6 + 2136) != ThreadCurrentObj )
    {
      XDCOBJ::LogUmpdCallbackStatus(this, ThreadCurrentObj);
LABEL_10:
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
LABEL_11:
      *(_QWORD *)this = 0LL;
      return;
    }
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 48) + 40LL) & 0x8000) == 0 )
        goto LABEL_10;
      v7 = *(_DWORD *)(v6 + 2120);
      if ( v7 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_10;
    }
    else if ( *(_DWORD *)(v6 + 2120) )
    {
      *(_DWORD *)(v6 + 2120) = 0;
    }
    v8 = XDCOBJ::SaveAttributes((DC **)this);
    v9 = *(_QWORD *)this;
    if ( !v8 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v9 + 520) & 4) != 0 )
      DC::vMarkTransformDirty((DC *)v9);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
