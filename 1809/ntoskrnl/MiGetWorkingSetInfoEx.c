/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x1402BF044
 * Callers:
 *     MiGetWorkingSetInfo @ 0x1402BEEB4 (MiGetWorkingSetInfo.c)
 *     MmLogSystemShareablePfnInfo @ 0x14085C930 (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x1408BFA78 (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // r14
  int v10; // r12d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _QWORD v18[6]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v19[22]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[48]; // [rsp+100h] [rbp+0h] BYREF

  memset(v18, 0, 0x28uLL);
  memset(v19, 0, sizeof(v19));
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v9 = a1 - 1280;
    if ( (PVOID)(a1 - 1280) == PsIdleProcess )
    {
      if ( a4 )
        *a2 = 0LL;
      else
        a2[1] = 0LL;
      return 0LL;
    }
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v9 )
    {
      KiStackAttachProcess((_KPROCESS *)(a1 - 1280), 0LL, (__int64)v20);
      v10 = 1;
    }
  }
  v19[5] = -1LL;
  v19[19] = MiQueryLeafPte;
  LODWORD(v19[0]) = 6;
  v19[21] = v18;
  BYTE4(v19[0]) = MiLockWorkingSetShared(a1);
  if ( !v9 || (*(_DWORD *)(v9 + 772) & 0x20) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 120);
    v13 = v12;
    if ( a4 )
    {
      if ( !v12 )
      {
LABEL_29:
        if ( a4 )
        {
          v12 = v18[2];
          goto LABEL_27;
        }
        goto LABEL_31;
      }
      if ( a3 < 0x10 )
      {
LABEL_26:
        v8 = -1073741820;
        if ( a4 )
        {
LABEL_27:
          *a2 = v12;
          goto LABEL_33;
        }
        v17 = v12 - *(_QWORD *)(a1 + 128);
LABEL_32:
        a2[1] = v17;
        goto LABEL_33;
      }
      v14 = 1LL;
      v15 = (a3 - 16) >> 3;
    }
    else
    {
      v13 = v12 - *(_QWORD *)(a1 + 128);
      if ( !v13 )
      {
LABEL_31:
        v17 = v18[2];
        goto LABEL_32;
      }
      if ( a3 < 0x30 )
        goto LABEL_26;
      v14 = 2LL;
      v15 = (a3 - 48) >> 5;
    }
    v16 = v15 + 1;
    if ( v13 <= v16 )
    {
      if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
        LODWORD(v19[0]) |= 1u;
      v19[3] = a1;
      if ( a4 )
        LODWORD(v18[0]) |= 1u;
      v18[3] = v16;
      v18[1] = &a2[v14];
      v18[4] = v9;
      if ( (unsigned int)MiWalkPageTables((int *)v19) == 4 )
      {
        v12 = *(_QWORD *)(a1 + 120);
        goto LABEL_26;
      }
      goto LABEL_29;
    }
    goto LABEL_26;
  }
  v8 = -1073741558;
LABEL_33:
  MiUnlockWorkingSetShared(a1, BYTE4(v19[0]));
  if ( v10 == 1 )
    KiUnstackDetachProcess((__int64)v20, 0LL);
  return v8;
}
