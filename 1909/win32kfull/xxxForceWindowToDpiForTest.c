/*
 * XREFs of xxxForceWindowToDpiForTest @ 0x1C01E7CA8
 * Callers:
 *     NtUserForceWindowToDpiForTest @ 0x1C022B420 (NtUserForceWindowToDpiForTest.c)
 * Callees:
 *     xxxNotifyMonitorChanged @ 0x1C006935C (xxxNotifyMonitorChanged.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxForceWindowToDpiForTest(struct tagWND *a1, int a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rbx
  _OWORD *v6; // r8
  unsigned int v7; // edi
  unsigned int v8; // edx
  unsigned __int16 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r14
  unsigned __int64 *i; // r14
  __int64 v14; // rax
  __int64 v15; // rsi
  _DWORD *v16; // rax
  _DWORD *v17; // rcx

  v4 = Win32AllocPoolZInit(100LL, 1886872661LL);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = (_OWORD *)*((_QWORD *)a1 + 36);
    v7 = 1;
    *(_OWORD *)v4 = *v6;
    *(_OWORD *)(v4 + 16) = v6[1];
    *(_OWORD *)(v4 + 32) = v6[2];
    *(_OWORD *)(v4 + 48) = v6[3];
    *(_OWORD *)(v4 + 64) = v6[4];
    *(_OWORD *)(v4 + 80) = v6[5];
    *(_DWORD *)v4 = 1;
    v8 = (100 * a2 + 48) / 0x60u;
    *(_DWORD *)(v4 + 4) = v8;
    *(_DWORD *)(v4 + 8) = v8;
    *(_DWORD *)(v4 + 12) = v8;
    *(_DWORD *)(v4 + 16) = v8;
    v9 = *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL);
    v12 = BuildHwndList(a1);
    if ( v12 )
    {
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x4000000u;
      for ( i = (unsigned __int64 *)(v12 + 32); *i != 1; ++i )
      {
        LOBYTE(v10) = 1;
        v14 = HMValidateHandleNoSecure(*i, v10, v11);
        v15 = v14;
        if ( v14 )
        {
          *(_WORD *)(*(_QWORD *)(v14 + 40) + 284LL) = a2;
          v16 = *(_DWORD **)(v14 + 288);
          if ( v16 )
          {
            --*v16;
            v17 = *(_DWORD **)(v15 + 288);
            if ( !*v17 )
              Win32FreePool(v17);
          }
          *(_QWORD *)(v15 + 288) = v5;
          ++*v5;
        }
      }
    }
    else
    {
      v7 = 0;
    }
    if ( (*v5)-- == 1 )
      Win32FreePool(v5);
    xxxNotifyMonitorChanged(a1, 0LL, 0LL, v9);
  }
  else
  {
    return 0;
  }
  return v7;
}
