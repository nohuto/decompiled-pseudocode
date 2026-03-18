/*
 * XREFs of HmgIncrementShareReferenceCount @ 0x1C001F700
 * Callers:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0017B78 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     EngLockSurface @ 0x1C0020240 (EngLockSurface.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0057140 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C009CF60 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00B0DA0 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C0122D50 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C0128C5C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C012AEC0 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001EB20 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022730 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C01257A8 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C013348C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall HmgIncrementShareReferenceCount(struct _BASEOBJECT *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  unsigned __int16 *v4; // rdi
  char v5; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v6; // rdx
  unsigned int v7; // ebx
  GdiHandleManager *v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // r9
  _DWORD *v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // r10
  unsigned __int16 *v19; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+38h] [rbp-30h]

  v1 = *(_DWORD *)a1;
  v2 = *(_DWORD *)a1;
  v19 = 0LL;
  v20 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v19, (unsigned __int16)v1 | (v2 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v20 )
  {
    v4 = v19;
    v5 = *((_BYTE *)v19 + 14);
    if ( v5 == 5
      && (!gbGdiHmgrAltStacks
       || !gpentHmgrAltStacks
       || (RECALTLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)a1, a1), v5 = *((_BYTE *)v4 + 14), v5 == 5)) )
    {
      v6 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 85);
      if ( v6 && qword_1C0210538 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C0210538, v6, 1);
    }
    else if ( v5 == 16 )
    {
      TrackObjectReferenceIncrement(2LL, *((_QWORD *)a1 + 17));
    }
    ++*((_DWORD *)a1 + 2);
    v7 = *(_DWORD *)v4 & 0xFFFFFF;
    if ( v7 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v4,
                                    1)
             + 13) == HIWORD(v7) )
          v7 = (unsigned __int16)v7;
      }
      else
      {
        v7 = *v4;
      }
    }
    v8 = gpHandleManager;
    v9 = *((_QWORD *)gpHandleManager + 2);
    v10 = *(_DWORD *)(v9 + 2056);
    if ( v7 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
      goto LABEL_36;
    v11 = ((v7 - v10) >> 16) + 1;
    if ( v7 < v10 )
      v11 = 0LL;
    v12 = *(_QWORD *)(v9 + 8 * v11 + 8);
    if ( (_DWORD)v11 )
      v7 += ((1 - (_DWORD)v11) << 16) - v10;
    if ( v7 >= *(_DWORD *)(v12 + 20) )
LABEL_36:
      v13 = 0LL;
    else
      v13 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                       + 16LL * (unsigned __int8)v7
                       + 8);
    v14 = (unsigned __int16)*v13 | (*v13 >> 8) & 0xFF0000;
    if ( v14 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v13,
                                    1)
             + 13) == HIWORD(v14) )
          v14 = (unsigned __int16)v14;
      }
      else
      {
        v14 = (unsigned __int16)*v13;
      }
    }
    v15 = *((_QWORD *)v8 + 2);
    v16 = *(_DWORD *)(v15 + 2056);
    if ( v14 < v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    {
      v17 = ((v14 - v16) >> 16) + 1;
      if ( v14 < v16 )
        v17 = 0LL;
      v18 = *(_QWORD *)(v15 + 8 * v17 + 8);
      if ( (_DWORD)v17 )
        v14 += ((1 - (_DWORD)v17) << 16) - v16;
      *(_DWORD *)(*(_QWORD *)v18 + 24LL * v14 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v14 >> 8)) + 16LL * (unsigned __int8)v14,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
}
