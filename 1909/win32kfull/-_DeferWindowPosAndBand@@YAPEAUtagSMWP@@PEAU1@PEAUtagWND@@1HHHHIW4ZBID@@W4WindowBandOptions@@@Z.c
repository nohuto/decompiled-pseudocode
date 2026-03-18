/*
 * XREFs of ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0023074
 * Callers:
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C0017748 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0023250 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IsValidBandForProcess @ 0x1C005FD70 (IsValidBandForProcess.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C006C5E8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     IsValidBand @ 0x1C00FE118 (IsValidBand.c)
 */

__int64 __fastcall _DeferWindowPosAndBand(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        char a10)
{
  unsigned int v13; // ecx
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // edx
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax

  if ( (a10 & 1) == 0 )
  {
    v13 = a8;
    goto LABEL_3;
  }
  if ( (unsigned __int64)a3 - 2 > 0xFFFFFFFFFFFFFFFBuLL
    || (v18 = *(_DWORD *)(a3[5] + 236LL), v18 == a9)
    || *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL) == v18 )
  {
    if ( (a10 & 2) != 0 || (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    {
      if ( !(unsigned int)IsValidBand(a9) )
        goto LABEL_31;
      if ( (unsigned int)IsValidBandForProcess(*(_QWORD *)(v15 + 416), a9, 0LL)
        && a9 != 15
        && *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL) != 15 )
      {
        if ( *(_QWORD *)(a2 + 104) == GetDesktopWindow(a2) && *(char *)(v16 + 20) >= 0 )
        {
          if ( (unsigned __int64)a3 <= 1 )
          {
LABEL_15:
            v13 = a8 & 0xFFF9FBFF | 0x60000;
LABEL_3:
            if ( (((a10 & 1) != 0 ? -459776 : -66560) & v13) == 0 )
              return _DeferWindowPos(a1, a2, a3);
            goto LABEL_31;
          }
          if ( (unsigned __int64)a3 <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            if ( *(_DWORD *)(a3[5] + 236LL) == a9 )
              goto LABEL_15;
            v19 = *(_DWORD *)(a1 + 28) - 1;
            if ( v19 < 0 )
              goto LABEL_30;
            v20 = *(_QWORD *)(a1 + 40);
            v21 = v19;
            v22 = (_QWORD *)(v20 + 168LL * v19);
            while ( *v22 != *a3 )
            {
              --v19;
              v22 -= 21;
              if ( --v21 < 0 )
                goto LABEL_30;
            }
            if ( *(_DWORD *)(168LL * v19 + v20 + 152) == a9 )
            {
LABEL_30:
              if ( v19 != -1 )
                goto LABEL_15;
            }
          }
          else if ( a9 == 1 )
          {
            goto LABEL_15;
          }
        }
LABEL_31:
        v17 = 87LL;
        goto LABEL_32;
      }
    }
  }
  v17 = 5LL;
LABEL_32:
  UserSetLastError(v17);
  return 0LL;
}
