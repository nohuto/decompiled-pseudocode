/*
 * XREFs of ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00CCD6C
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C002B420 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01D3868 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     SpbCheckRect @ 0x1C0209430 (SpbCheckRect.c)
 */

__int64 __fastcall BltValidInit(struct tagSMWP *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  int v5; // ebp
  int v6; // r12d
  int v7; // esi
  unsigned __int64 v8; // rdi
  int v9; // r15d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  __int64 *v13; // r13
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  HRGN EmptyRgn; // rax

  v4 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
  v5 = *((_DWORD *)a1 + 7);
  v6 = 0;
  v7 = 0;
  while ( --v5 >= 0 )
  {
    v8 = *v4;
    v9 = *((_DWORD *)v4 + 8);
    v4[12] = 0LL;
    if ( v8 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
        PsGetThreadWin32Thread(CurrentThread);
      a2 = (unsigned __int16)v8;
      a1 = (struct tagSMWP *)gpsi;
      if ( (unsigned __int64)(unsigned __int16)v8 < *(_QWORD *)(gpsi + 8LL)
        && ((v11 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v8 * LODWORD(gSharedInfo[2]),
             v12 = v8 >> 16,
             v13 = (__int64 *)HMPkheFromPhe(v11),
             (_WORD)v12 == *(_WORD *)(v11 + 26))
         || (_WORD)v12 == 0xFFFF
         || !(_WORD)v12 && PsGetCurrentProcessWow64Process(a1))
        && (*(_BYTE *)(v11 + 25) & 1) == 0
        && *(_BYTE *)(v11 + 24) == 1
        && (v14 = *v13) != 0
        && ((v15 = v4[1], v15 - 2 > 0xFFFFFFFFFFFFFFFBuLL) || (LOBYTE(a2) = 1, HMValidateHandleNoSecure(v15, a2))) )
      {
        a1 = (struct tagSMWP *)gpDispInfo;
        if ( *(_QWORD *)(gpDispInfo + 32LL) && (v9 & 8) == 0 )
          SpbCheckRect((struct tagWND *)v14, (struct tagRECT *)(*(_QWORD *)(v14 + 40) + 88LL), 1u);
        ++v6;
        if ( (v9 & 0x18E7) != 0x1807 )
          v7 = 1;
        if ( (v4[4] & 8) == 0 )
        {
          v16 = gpsi;
          if ( !*(_DWORD *)(gpsi + 2220LL) )
            PreventInterMonitorBlts((struct tagCVR *)v4);
          *((_DWORD *)v4 + 22) = 0;
          EmptyRgn = (HRGN)CreateEmptyRgn(v16, a2);
          v4[12] = (unsigned __int64)EmptyRgn;
          if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn((struct tagWND *)v14, EmptyRgn) )
            *((_DWORD *)v4 + 22) = 2;
        }
      }
      else
      {
        *v4 = 0LL;
        *((_DWORD *)v4 + 8) = 6159;
      }
    }
    v4 += 21;
  }
  return v6 & (unsigned int)-(v7 != 0);
}
