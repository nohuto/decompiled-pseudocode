/*
 * XREFs of ?RefreshSizesForMonitors@CCursorSizes@@QEAAXXZ @ 0x1C010DE50
 * Callers:
 *     EditionUpdateCursorSizes @ 0x1C010DE30 (EditionUpdateCursorSizes.c)
 * Callees:
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00A2CB8 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0100AFC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     GetCursorSizeFromIndex @ 0x1C010E0C8 (GetCursorSizeFromIndex.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C012E960 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01B8548 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 */

void __fastcall CCursorSizes::RefreshSizesForMonitors(CCursorSizes *this)
{
  CCursorSizes *v1; // r13
  __int64 v2; // rdx
  unsigned int v3; // r15d
  _BYTE *v4; // rcx
  _BYTE *v5; // rdx
  unsigned __int8 *v6; // r12
  _DWORD *v7; // rdi
  __int64 v8; // rsi
  int v9; // r14d
  unsigned int *v10; // rbx
  unsigned __int16 v11; // cx
  int *v12; // rax
  char v13; // [rsp+38h] [rbp-89h]
  int CursorSizeFromIndex; // [rsp+40h] [rbp-81h] BYREF
  _BYTE *v15; // [rsp+48h] [rbp-79h]
  _BYTE *v16; // [rsp+50h] [rbp-71h]
  _BYTE v17[40]; // [rsp+58h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-41h] BYREF
  int *p_CursorSizeFromIndex; // [rsp+A0h] [rbp-21h]
  int v20; // [rsp+A8h] [rbp-19h]
  int v21; // [rsp+ACh] [rbp-15h]
  EVENT_DATA_DESCRIPTOR v22; // [rsp+B0h] [rbp-11h] BYREF
  int *v23; // [rsp+D0h] [rbp+Fh]
  int v24; // [rsp+D8h] [rbp+17h]
  int v25; // [rsp+DCh] [rbp+1Bh]
  int v26; // [rsp+E0h] [rbp+1Fh] BYREF
  char v27; // [rsp+E4h] [rbp+23h] BYREF

  v1 = gpCursorSizes;
  v13 = 0;
  memset(v17, 0, sizeof(v17));
  CPushLock::AcquireLockExclusive((CCursorSizes *)((char *)gpCursorSizes + 64));
  v26 = 0;
  v27 = 0;
  v2 = *(_QWORD *)(gpDispInfo + 104LL);
  while ( v2 )
  {
    v11 = *(_WORD *)(*(_QWORD *)(v2 + 40) + 64LL);
    if ( v11 >= 0x90u )
    {
      if ( v11 >= 0xC0u )
      {
        if ( v11 >= 0x120u )
        {
          v12 = (int *)((char *)&v26 + 3);
          if ( v11 >= 0x180u )
            v12 = (int *)&v27;
        }
        else
        {
          v12 = (int *)((char *)&v26 + 2);
        }
      }
      else
      {
        v12 = (int *)((char *)&v26 + 1);
      }
    }
    else
    {
      v12 = &v26;
    }
    v2 = *(_QWORD *)(v2 + 56);
    *(_BYTE *)v12 = 1;
  }
  v3 = 0;
  v4 = (_BYTE *)(v17 - (_BYTE *)v1);
  v5 = (_BYTE *)(&v17[4] - (_BYTE *)v1);
  v15 = (_BYTE *)(v17 - (_BYTE *)v1);
  v16 = (_BYTE *)(&v17[4] - (_BYTE *)v1);
  v6 = (unsigned __int8 *)&v26;
  v7 = (_DWORD *)((char *)v1 + 20);
  v8 = 5LL;
  do
  {
    v9 = *v6;
    if ( (*v7 != 0) != v9 )
    {
      if ( (_BYTE)v9 )
      {
        v13 = 1;
      }
      else
      {
        *(_DWORD *)((char *)v7 + (_QWORD)v5 - 20) = v7[1];
        *(_DWORD *)((char *)v7 + (_QWORD)v4 - 20) = 1;
      }
      CursorSizeFromIndex = GetCursorSizeFromIndex(v3);
      if ( (_BYTE)v9 )
      {
        if ( dword_1C030D340 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 8uLL) )
        {
          v21 = 0;
          p_CursorSizeFromIndex = &CursorSizeFromIndex;
          v20 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D30E1, 0LL, 0LL, 3u, &pData);
        }
      }
      else if ( dword_1C030D340 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 8uLL) )
      {
        v25 = 0;
        v23 = &CursorSizeFromIndex;
        v24 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D311B, 0LL, 0LL, 3u, &v22);
      }
      v4 = v15;
      v5 = v16;
      *v7 = v9;
    }
    ++v3;
    ++v6;
    v7 += 2;
  }
  while ( v3 < 5 );
  CPushLock::ReleaseLock((CCursorSizes *)((char *)v1 + 64));
  v10 = (unsigned int *)&v17[4];
  do
  {
    if ( *(v10 - 1) )
      _CleanupUnneededSystemCursorSizes(*v10);
    v10 += 2;
    --v8;
  }
  while ( v8 );
  if ( v13 )
  {
    _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 4u);
    KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
  }
  CCursorSizes::UpdateGlobalCursorSize(v1, (const struct tagPOINT *)(gpsi + 4960LL), 1);
}
