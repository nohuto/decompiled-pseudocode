/*
 * XREFs of HmgIncrementShareReferenceCount @ 0x1C002C830
 * Callers:
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0027610 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     EngLockSurface @ 0x1C002D1A0 (EngLockSurface.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C002FA68 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0032E80 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00487A0 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00BFA20 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00CB78C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00D0804 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002D5A0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00C2910 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00DC83C (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall HmgIncrementShareReferenceCount(struct _BASEOBJECT *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  __int64 v4; // rbx
  char v5; // al
  unsigned int v6; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v7; // rdx
  unsigned int v8; // ebx
  GdiHandleManager *v9; // rdi
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r9
  _DWORD *v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+38h] [rbp-30h]

  v1 = *(_DWORD *)a1;
  v2 = *(_DWORD *)a1;
  v20 = 0LL;
  v21 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v20, (unsigned __int16)v1 | (v2 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v21 )
  {
    v4 = v20;
    v5 = *(_BYTE *)(v20 + 14);
    if ( v5 == 5
      && (!gbGdiHmgrAltStacks
       || !gpentHmgrAltStacks
       || (v6 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000,
           RECALTLOCKSTACKBACKTRACE((unsigned __int16)v6 | (v6 >> 8) & 0xFF0000, a1),
           v5 = *(_BYTE *)(v4 + 14),
           v5 == 5)) )
    {
      v7 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 85);
      if ( v7 && qword_1C019F730 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C019F730, v7, 1);
    }
    else if ( v5 == 16 )
    {
      TrackObjectReferenceIncrement(2LL, *((_QWORD *)a1 + 17));
    }
    ++*((_DWORD *)a1 + 2);
    v8 = *(_DWORD *)v4 & 0xFFFFFF;
    if ( v8 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v8,
                                    1)
             + 13) == HIWORD(v8) )
          v8 = (unsigned __int16)v8;
      }
      else
      {
        v8 = (unsigned __int16)v8;
      }
    }
    v9 = gpHandleManager;
    v10 = *((_QWORD *)gpHandleManager + 2);
    v11 = *(_DWORD *)(v10 + 2056);
    if ( v8 >= v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
      goto LABEL_36;
    v12 = ((v8 - v11) >> 16) + 1;
    if ( v8 < v11 )
      v12 = 0LL;
    v13 = *(_QWORD *)(v10 + 8 * v12 + 8);
    if ( (_DWORD)v12 )
      v8 += ((1 - (_DWORD)v12) << 16) - v11;
    if ( v8 >= *(_DWORD *)(v13 + 20) )
LABEL_36:
      v14 = 0LL;
    else
      v14 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                       + 16LL * (unsigned __int8)v8
                       + 8);
    v15 = (unsigned __int16)*v14 | (*v14 >> 8) & 0xFF0000;
    if ( v15 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v14,
                                    1)
             + 13) == HIWORD(v15) )
          v15 = (unsigned __int16)v15;
      }
      else
      {
        v15 = (unsigned __int16)*v14;
      }
    }
    v16 = *((_QWORD *)v9 + 2);
    v17 = *(_DWORD *)(v16 + 2056);
    if ( v15 < v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
    {
      v18 = ((v15 - v17) >> 16) + 1;
      if ( v15 < v17 )
        v18 = 0LL;
      v19 = *(_QWORD *)(v16 + 8 * v18 + 8);
      if ( (_DWORD)v18 )
        v15 += ((1 - (_DWORD)v18) << 16) - v17;
      *(_DWORD *)(*(_QWORD *)v19 + 24LL * v15 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v15 >> 8)) + 16LL * (unsigned __int8)v15,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
}
