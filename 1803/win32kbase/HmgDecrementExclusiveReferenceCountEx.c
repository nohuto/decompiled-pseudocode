/*
 * XREFs of HmgDecrementExclusiveReferenceCountEx @ 0x1C00290B0
 * Callers:
 *     GreGetClipBox @ 0x1C00197D0 (GreGetClipBox.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall HmgDecrementExclusiveReferenceCountEx(int *a1, int a2, int *a3)
{
  unsigned int v5; // eax
  unsigned int v7; // edx
  int v8; // eax
  unsigned int v9; // ebx
  GdiHandleManager *v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // r9
  _DWORD *v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // r10
  unsigned __int16 *v21; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+38h] [rbp-30h]

  *a3 = 0;
  v5 = *a1;
  v7 = *a1;
  v21 = 0LL;
  v22 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v21, (unsigned __int16)v5 | (v7 >> 8) & 0xFF0000, 0, a2, 1);
  if ( v22 )
  {
    if ( (*((_BYTE *)v21 + 15) & 8) == 0 || a1[2] || (v8 = 1, *((_WORD *)a1 + 6) != 1) )
      v8 = 0;
    *a3 = v8;
    _InterlockedDecrement(a1 + 3);
    v9 = *(_DWORD *)v21 & 0xFFFFFF;
    if ( v9 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v21,
                                    1)
             + 13) == HIWORD(v9) )
          v9 = (unsigned __int16)v9;
      }
      else
      {
        v9 = *v21;
      }
    }
    v10 = gpHandleManager;
    v11 = *((_QWORD *)gpHandleManager + 2);
    v12 = *(_DWORD *)(v11 + 2056);
    if ( v9 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
      goto LABEL_31;
    v13 = ((v9 - v12) >> 16) + 1;
    if ( v9 < v12 )
      v13 = 0LL;
    v14 = *(_QWORD *)(v11 + 8 * v13 + 8);
    if ( (_DWORD)v13 )
      v9 += ((1 - (_DWORD)v13) << 16) - v12;
    if ( v9 >= *(_DWORD *)(v14 + 20) )
LABEL_31:
      v15 = 0LL;
    else
      v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                       + 16LL * (unsigned __int8)v9
                       + 8);
    v16 = (unsigned __int16)*v15 | (*v15 >> 8) & 0xFF0000;
    if ( v16 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v15,
                                    1)
             + 13) == HIWORD(v16) )
          v16 = (unsigned __int16)v16;
      }
      else
      {
        v16 = (unsigned __int16)*v15;
      }
    }
    v17 = *((_QWORD *)v10 + 2);
    v18 = *(_DWORD *)(v17 + 2056);
    if ( v16 < v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
    {
      v19 = ((v16 - v18) >> 16) + 1;
      if ( v16 < v18 )
        v19 = 0LL;
      v20 = *(_QWORD *)(v17 + 8 * v19 + 8);
      if ( (_DWORD)v19 )
        v16 += ((1 - (_DWORD)v19) << 16) - v18;
      *(_DWORD *)(*(_QWORD *)v20 + 24LL * v16 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v16 >> 8)) + 16LL * (unsigned __int8)v16,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
}
