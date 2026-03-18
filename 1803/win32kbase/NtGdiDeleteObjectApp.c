/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C001EE60
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0020A90 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0024090 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C00242E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C002EE90 (HmgShareLockCheckIgnoreStockBit.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 *     bDeleteBrush @ 0x1C003CFE0 (bDeleteBrush.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003F968 (--1EPALOBJ@@QEAA@XZ.c)
 *     bDeletePalette @ 0x1C0040B60 (bDeletePalette.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0075F4C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(HBRUSH a1)
{
  unsigned int v2; // ebp
  int v3; // edi
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r10
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  __int64 v16; // rbx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // r8d
  int v21; // ecx
  unsigned int v22; // ebx
  _QWORD v23[2]; // [rsp+30h] [rbp-48h] BYREF
  int v24; // [rsp+40h] [rbp-38h]
  unsigned int v25; // [rsp+80h] [rbp+8h] BYREF
  struct OBJECT *v26; // [rsp+88h] [rbp+10h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (unsigned int)a1 >> 16;
  v3 = BYTE2(a1) & 0x1F;
  v4 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a1,
                                  1)
           + 13) == ((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000) >> 16 )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)a1;
    }
  }
  v5 = 0;
  v6 = 1;
  v7 = *((_QWORD *)gpHandleManager + 2);
  LODWORD(v8) = *(_DWORD *)(v7 + 2056);
  if ( v4 < (unsigned int)v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
  {
    v9 = ((v4 - (unsigned int)v8) >> 16) + 1;
    if ( v4 < (unsigned int)v8 )
      v9 = 0LL;
    v10 = *(_QWORD *)(v7 + 8 * v9 + 8);
    if ( (_DWORD)v9 )
      v4 += ((1 - (_DWORD)v9) << 16) - v8;
    v8 = 0LL;
    if ( v4 < *(_DWORD *)(v10 + 20) )
    {
      v7 = (unsigned __int64)v4 >> 8;
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * v7) + 16LL * (unsigned __int8)v4 + 8) )
        v8 = *(_QWORD *)v10 + 24LL * v4;
    }
    if ( v8
      && *(unsigned __int8 *)(v8 + 14) == v3
      && *(_WORD *)(v8 + 12) == (_WORD)v2
      && (*(_DWORD *)(v8 + 8) & 0xFFFFFFFE) == 0 )
    {
      if ( !a1 )
        return 0;
      return v6;
    }
  }
  if ( v3 == 4 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v23, (HRGN)a1, 0);
    v16 = v23[0];
    if ( !v23[0]
      || *(_DWORD *)(v23[0] + 32LL)
      || (v17 = RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v23), v16 = v23[0], !v17) )
    {
      v6 = 0;
    }
    if ( !v24 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)v23);
    if ( v16 )
      _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
    return v6;
  }
  v11 = v3 - 1;
  if ( v11 )
  {
    v12 = v11 - 4;
    if ( v12 )
    {
      v13 = v12 - 3;
      if ( v13 )
      {
        v14 = v13 - 2;
        if ( v14 )
        {
          if ( v14 == 6 )
            return bDeleteBrush(a1);
          else
            return 0LL;
        }
        else
        {
          return bDeleteFont(a1, 0LL);
        }
      }
      else
      {
        return bDeletePalette((HPALETTE)a1);
      }
    }
    else
    {
      v18 = (int)ghsemDynamicModeChange;
      if ( ghsemDynamicModeChange )
        ExEnterPriorityRegionAndAcquireResourceShared();
      if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz(
          v18,
          (unsigned int)&LockAcquireShared,
          v8,
          (_DWORD)ghsemDynamicModeChange,
          (__int64)L"ghsemDynamicModeChange");
      LOBYTE(v7) = 5;
      v26 = (struct OBJECT *)HmgShareLockCheckIgnoreStockBit(a1, v7);
      if ( v26 )
      {
        v19 = SURFREF::bDeleteSurface(&v26, 0LL);
        v21 = (int)v26;
        v22 = v19;
        if ( v26 )
          HmgDecrementShareReferenceCountEx(v26);
        v5 = v22;
      }
      else
      {
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v26);
      }
      if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz(
          v21,
          (unsigned int)&LockRelease,
          v20,
          (_DWORD)ghsemDynamicModeChange,
          (__int64)L"ghsemDynamicModeChange");
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
      return v5;
    }
  }
  else
  {
    v25 = 0;
    return bDeleteDCInternalEx((HDC)a1, &v25);
  }
}
