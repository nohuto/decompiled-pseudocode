/*
 * XREFs of GreCreateCompatibleDC @ 0x1C002F610
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x1C00313D0 (NtGdiCreateCompatibleDC.c)
 *     InitUserScreen @ 0x1C00A67B0 (InitUserScreen.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002AB40 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0033028 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     GreSetLayout @ 0x1C0064810 (GreSetLayout.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00C05C0 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  int v1; // r9d
  HDC *v2; // rbx
  HDC DisplayDC; // rax
  HDC v4; // rsi
  HDC *v5; // rdi
  unsigned int v6; // r8d
  HDC *v7; // rbx
  HDC v8; // r15
  int v9; // edi
  GdiHandleManager *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // r8
  _DWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // r10
  unsigned int v20; // edx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // r10
  HDC *v24; // rbx
  HDC v25; // r15
  int v26; // edi
  GdiHandleManager *v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned int v31; // r9d
  __int64 v32; // rcx
  __int64 v33; // r8
  _DWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // r10
  unsigned int v37; // edx
  unsigned int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // r10
  int v42; // r9d
  __int64 v43; // rcx
  HDC v44; // rbx
  HDC *v45; // [rsp+30h] [rbp-19h] BYREF
  int v46[2]; // [rsp+38h] [rbp-11h]
  HDC *v47; // [rsp+40h] [rbp-9h] BYREF
  int v48[2]; // [rsp+48h] [rbp-1h]
  __int64 v49; // [rsp+50h] [rbp+7h] BYREF
  int v50; // [rsp+58h] [rbp+Fh]
  __int64 v51; // [rsp+68h] [rbp+1Fh] BYREF
  int v52; // [rsp+70h] [rbp+27h]
  int v53; // [rsp+B0h] [rbp+67h] BYREF

  if ( a1 )
  {
    v47 = 0LL;
    *(_QWORD *)v48 = 0LL;
    XDCOBJ::vLock((XDCOBJ *)&v47, a1);
    v2 = v47;
    if ( v47 )
    {
      DisplayDC = GreCreateDisplayDC((__int64)v47[6], 1u, 0, v1);
      v4 = DisplayDC;
      if ( DisplayDC )
      {
        v45 = 0LL;
        *(_QWORD *)v46 = 0LL;
        XDCOBJ::vLock((XDCOBJ *)&v45, DisplayDC);
        v5 = v45;
        if ( v45 && ((_DWORD)v2[66] & 1) != 0 )
          DC::vSetDpiScaling(v45, *(HDC *)((char *)v2 + 532));
        v6 = *((_DWORD *)v2[10] + 78);
        if ( (v6 & 7) != 0 )
          GreSetLayout(v4, -1, v6);
        if ( v5 )
        {
          XDCOBJ::RestoreAttributes((XDCOBJ *)&v45);
          v7 = v45;
          v49 = 0LL;
          v50 = 0;
          v8 = *v45;
          HANDLELOCK::vLockHandle(
            (HANDLELOCK *)&v49,
            (unsigned __int16)*v45 | ((unsigned int)*v45 >> 8) & 0xFF0000,
            0,
            v46[1],
            1);
          if ( v50 )
          {
            if ( (*(_BYTE *)(v49 + 15) & 8) == 0 || *((_DWORD *)v7 + 2) || (v9 = 1, *((_WORD *)v7 + 6) != 1) )
              v9 = 0;
            _InterlockedDecrement((volatile signed __int32 *)v7 + 3);
            v10 = gpHandleManager;
            v11 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v49 & 0xFFFFFF);
            v12 = *((_QWORD *)v10 + 2);
            v13 = v11;
            v14 = *(_DWORD *)(v12 + 2056);
            if ( v11 >= v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
              goto LABEL_54;
            v15 = ((v11 - v14) >> 16) + 1;
            if ( v11 < v14 )
              v15 = 0LL;
            v16 = *(_QWORD *)(v12 + 8 * v15 + 8);
            if ( (_DWORD)v15 )
              v13 = ((1 - (_DWORD)v15) << 16) - v14 + v11;
            if ( (unsigned int)v13 >= *(_DWORD *)(v16 + 20) )
LABEL_54:
              v17 = 0LL;
            else
              v17 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
            v18 = GdiHandleManager::DecodeIndex(
                    (GdiHandleEntryDirectory **)v10,
                    (unsigned __int16)*v17 | (*v17 >> 8) & 0xFF0000u);
            v19 = *((_QWORD *)v10 + 2);
            v20 = v18;
            v21 = *(_DWORD *)(v19 + 2056);
            if ( v18 < v21 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
            {
              v22 = ((v18 - v21) >> 16) + 1;
              if ( v18 < v21 )
                v22 = 0LL;
              v23 = *(_QWORD *)(v19 + 8 * v22 + 8);
              if ( (_DWORD)v22 )
                v20 = ((1 - (_DWORD)v22) << 16) - v21 + v18;
              *(_DWORD *)(*(_QWORD *)v23 + 24LL * v20 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * ((unsigned __int64)v20 >> 8)) + 16LL * (unsigned __int8)v20,
                0LL);
              KeLeaveCriticalRegion();
            }
            KeLeaveCriticalRegion();
            if ( v9 )
              bDeleteDCInternalEx(v8, 0LL);
          }
        }
      }
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v47);
      v24 = v47;
      v51 = 0LL;
      v52 = 0;
      v25 = *v47;
      HANDLELOCK::vLockHandle(
        (HANDLELOCK *)&v51,
        (unsigned __int16)*v47 | ((unsigned int)*v47 >> 8) & 0xFF0000,
        0,
        v48[1],
        1);
      if ( v52 )
      {
        if ( (*(_BYTE *)(v51 + 15) & 8) == 0 || *((_DWORD *)v24 + 2) || (v26 = 1, *((_WORD *)v24 + 6) != 1) )
          v26 = 0;
        _InterlockedDecrement((volatile signed __int32 *)v24 + 3);
        v27 = gpHandleManager;
        v28 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v51 & 0xFFFFFF);
        v29 = *((_QWORD *)v27 + 2);
        v30 = v28;
        v31 = *(_DWORD *)(v29 + 2056);
        if ( v28 >= v31 + ((*(unsigned __int16 *)(v29 + 2) + 0xFFFF) << 16) )
          goto LABEL_58;
        v32 = ((v28 - v31) >> 16) + 1;
        if ( v28 < v31 )
          v32 = 0LL;
        v33 = *(_QWORD *)(v29 + 8 * v32 + 8);
        if ( (_DWORD)v32 )
          v30 = ((1 - (_DWORD)v32) << 16) - v31 + v28;
        if ( (unsigned int)v30 >= *(_DWORD *)(v33 + 20) )
LABEL_58:
          v34 = 0LL;
        else
          v34 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * (v30 >> 8)) + 16LL * (unsigned __int8)v30 + 8);
        v35 = GdiHandleManager::DecodeIndex(
                (GdiHandleEntryDirectory **)v27,
                (unsigned __int16)*v34 | (*v34 >> 8) & 0xFF0000u);
        v36 = *((_QWORD *)v27 + 2);
        v37 = v35;
        v38 = *(_DWORD *)(v36 + 2056);
        if ( v35 < v38 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
        {
          v39 = ((v35 - v38) >> 16) + 1;
          if ( v37 < v38 )
            v39 = 0LL;
          v40 = *(_QWORD *)(v36 + 8 * v39 + 8);
          if ( (_DWORD)v39 )
            v37 += ((1 - (_DWORD)v39) << 16) - v38;
          *(_DWORD *)(*(_QWORD *)v40 + 24LL * v37 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * ((unsigned __int64)v37 >> 8)) + 16LL * (unsigned __int8)v37,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        if ( v26 )
          bDeleteDCInternalEx(v25, 0LL);
      }
      return v4;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v53);
    v44 = GreCreateDisplayDC(*(_QWORD *)(gpDispInfo + 40), 1u, 0, v42);
    if ( !v53 )
      UserSessionSwitchLeaveCrit(v43);
    return v44;
  }
}
