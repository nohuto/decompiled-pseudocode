/*
 * XREFs of ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C006E0F0
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C006DF00 (NtUserDeferWindowPosAndBand.c)
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C0109000 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 * Callees:
 *     IsValidBandForProcess @ 0x1C000D42C (IsValidBandForProcess.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0071F34 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsValidBand @ 0x1C011C210 (IsValidBand.c)
 */

__int64 __fastcall _DeferWindowPosAndBand(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        char a10)
{
  unsigned int v14; // ecx
  int v15; // ebx
  unsigned int v16; // edi
  int v17; // edx
  int v18; // eax
  int v19; // r8d
  __int64 v21; // r10
  __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // r8
  __int64 v27; // rcx
  _QWORD *v28; // rax

  if ( (a10 & 1) != 0 )
  {
    v16 = a9;
    if ( (unsigned __int64)a3 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
    {
      v23 = *(_DWORD *)(a3[5] + 236LL);
      if ( v23 != a9 && *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL) != v23 )
        goto LABEL_43;
    }
    v15 = 0;
    if ( (a10 & 2) == 0 && !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
      goto LABEL_43;
    if ( !(unsigned int)IsValidBand(a9) )
      goto LABEL_37;
    if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(v21 + 424), a9, 0LL)
      || a9 == 15
      || *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL) == 15 )
    {
LABEL_43:
      v24 = 5LL;
      goto LABEL_38;
    }
    if ( *(_QWORD *)(a2 + 80) != GetDesktopWindow(a2) || *(char *)(v22 + 20) < 0 )
      goto LABEL_37;
    if ( (unsigned __int64)a3 > 1 )
    {
      if ( (unsigned __int64)a3 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( *(_DWORD *)(a3[5] + 236LL) != a9 )
        {
          v25 = *(_DWORD *)(a1 + 28) - 1;
          if ( v25 >= 0 )
          {
            v26 = *(_QWORD *)(a1 + 40);
            v27 = v25;
            v28 = (_QWORD *)(v26 + 168LL * v25);
            while ( *v28 != *a3 )
            {
              --v25;
              v28 -= 21;
              if ( --v27 < 0 )
                goto LABEL_50;
            }
            if ( *(_DWORD *)(168LL * v25 + v26 + 152) != a9 )
              goto LABEL_37;
          }
LABEL_50:
          if ( v25 == -1 )
          {
LABEL_37:
            v24 = 87LL;
LABEL_38:
            UserSetLastError(v24);
            return 0LL;
          }
        }
      }
      else if ( a9 != 1 )
      {
        goto LABEL_37;
      }
    }
    v14 = a8 & 0xFFF9FBFF | 0x60000;
  }
  else
  {
    v14 = a8;
    v15 = 0;
    v16 = 0;
  }
  if ( (((a10 & 1) != 0 ? -459776 : -66560) & v14) != 0 )
    goto LABEL_37;
  if ( (v14 & 2) != 0 )
  {
    v17 = a5;
  }
  else
  {
    if ( a4 > 0x7FFF )
    {
      a4 = 0x7FFF;
    }
    else if ( a4 < -32768 )
    {
      a4 = -32768;
    }
    v17 = a5;
    if ( a5 > 0x7FFF )
    {
      v17 = 0x7FFF;
    }
    else if ( a5 < -32768 )
    {
      v17 = -32768;
    }
  }
  v18 = a6;
  if ( (v14 & 1) != 0 )
  {
    v15 = a7;
  }
  else
  {
    if ( a6 < 0 )
    {
      v18 = 0;
    }
    else if ( a6 > 0x7FFF )
    {
      v18 = 0x7FFF;
    }
    v19 = a7;
    if ( a7 >= 0 )
    {
      if ( a7 > 0x7FFF )
        v19 = 0x7FFF;
      v15 = v19;
    }
  }
  return _DeferWindowPos(a1, a2, a3, (unsigned int)a4, v17, v18, v15, v14, v16);
}
