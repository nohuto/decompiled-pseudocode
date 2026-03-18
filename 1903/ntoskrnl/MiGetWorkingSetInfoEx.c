/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x1402D87D8
 * Callers:
 *     MiGetWorkingSetInfo @ 0x1402D8630 (MiGetWorkingSetInfo.c)
 *     MmLogSystemShareablePfnInfo @ 0x140898260 (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x1408FB4F4 (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, int a2, unsigned __int64 *a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // r14
  int v10; // r12d
  int v11; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  _QWORD v18[6]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v19[22]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[48]; // [rsp+100h] [rbp+0h] BYREF

  memset(v20, 0, sizeof(v20));
  memset(v18, 0, 0x28uLL);
  memset(v19, 0, 0xA8uLL);
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 1;
  if ( a2 < 0 )
  {
    if ( (a2 & 0x40000000) != 0 )
      v11 = 3;
    LODWORD(v18[0]) = v11;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v9 = a1 - 1280;
    if ( (PVOID)(a1 - 1280) == PsIdleProcess )
    {
      if ( a2 >= 0 )
        a3[1] = 0LL;
      else
        *a3 = 0LL;
      return 0LL;
    }
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v9 )
    {
      KiStackAttachProcess((_KPROCESS *)(a1 - 1280), 0, (__int64)v20);
      v10 = 1;
    }
  }
  v19[4] = -1LL;
  v19[18] = MiQueryLeafPte;
  LOWORD(v19[0]) = -32762;
  v19[20] = v18;
  BYTE6(v19[0]) = MiLockWorkingSetShared(a1);
  if ( !v9 || (*(_DWORD *)(v9 + 780) & 0x20) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 120);
    v14 = v13;
    if ( a2 >= 0 )
    {
      v14 = v13 - *(_QWORD *)(a1 + 128);
      if ( !v14 )
        goto LABEL_31;
      if ( a4 < 0x30 )
      {
LABEL_28:
        v8 = -1073741820;
        if ( a2 < 0 )
        {
LABEL_29:
          *a3 = v13;
          goto LABEL_33;
        }
        v13 -= *(_QWORD *)(a1 + 128);
LABEL_32:
        a3[1] = v13;
        goto LABEL_33;
      }
      v15 = 2LL;
      v16 = (a4 - 48) >> 5;
    }
    else
    {
      if ( !v13 )
        goto LABEL_31;
      if ( a4 < 0x10 )
        goto LABEL_28;
      v15 = 1LL;
      v16 = (a4 - 16) >> 3;
    }
    v17 = v16 + 1;
    if ( v14 <= v17 )
    {
      if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
        LOWORD(v19[0]) |= 1u;
      v18[3] = v17;
      v19[2] = a1;
      v18[1] = &a3[v15];
      v18[4] = v9;
      if ( (unsigned int)MiWalkPageTables((__int16 *)v19) == 4 )
      {
        v13 = *(_QWORD *)(a1 + 120);
        goto LABEL_28;
      }
LABEL_31:
      v13 = v18[2];
      if ( a2 < 0 )
        goto LABEL_29;
      goto LABEL_32;
    }
    goto LABEL_28;
  }
  v8 = -1073741558;
LABEL_33:
  MiUnlockWorkingSetShared(a1, BYTE6(v19[0]));
  if ( v10 == 1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v20, 0);
  return v8;
}
