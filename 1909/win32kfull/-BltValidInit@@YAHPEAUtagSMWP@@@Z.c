/*
 * XREFs of ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C006E43C
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0031890 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01D36D8 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     SpbCheckRect @ 0x1C0209180 (SpbCheckRect.c)
 */

__int64 __fastcall BltValidInit(struct tagSMWP *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rbx
  int v4; // ebp
  int v5; // r12d
  int v6; // esi
  unsigned __int64 v7; // rdi
  int v8; // r15d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v10; // r14
  unsigned __int64 v11; // rdi
  __int64 *v12; // r13
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  HRGN EmptyRgn; // rax

  v3 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
  v4 = *((_DWORD *)a1 + 7);
  v5 = 0;
  v6 = 0;
  while ( --v4 >= 0 )
  {
    v7 = *v3;
    v8 = *((_DWORD *)v3 + 8);
    v3[12] = 0LL;
    if ( v7 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
        PsGetThreadWin32Thread(CurrentThread);
      a2 = (unsigned __int16)v7;
      a1 = (struct tagSMWP *)gpsi;
      if ( (unsigned __int64)(unsigned __int16)v7 < *(_QWORD *)(gpsi + 8LL)
        && ((v10 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v7 * LODWORD(gSharedInfo[2]),
             v11 = v7 >> 16,
             v12 = (__int64 *)HMPkheFromPhe(v10),
             (_WORD)v11 == *(_WORD *)(v10 + 26))
         || (_WORD)v11 == 0xFFFF
         || !(_WORD)v11 && PsGetCurrentProcessWow64Process(a1))
        && (*(_BYTE *)(v10 + 25) & 1) == 0
        && *(_BYTE *)(v10 + 24) == 1
        && (v13 = *v12) != 0
        && ((v14 = v3[1], v14 - 2 > 0xFFFFFFFFFFFFFFFBuLL) || (LOBYTE(a2) = 1, HMValidateHandleNoSecure(v14, a2))) )
      {
        a1 = (struct tagSMWP *)gpDispInfo;
        if ( *(_QWORD *)(gpDispInfo + 32LL) && (v8 & 8) == 0 )
          SpbCheckRect((struct tagWND *)v13, (struct tagRECT *)(*(_QWORD *)(v13 + 40) + 88LL), 1u);
        ++v5;
        if ( (v8 & 0x18E7) != 0x1807 )
          v6 = 1;
        if ( (v3[4] & 8) == 0 )
        {
          v15 = gpsi;
          if ( !*(_DWORD *)(gpsi + 2220LL) )
            PreventInterMonitorBlts((struct tagCVR *)v3);
          *((_DWORD *)v3 + 22) = 0;
          EmptyRgn = (HRGN)CreateEmptyRgn(v15, a2);
          v3[12] = (unsigned __int64)EmptyRgn;
          if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn((struct tagWND *)v13, EmptyRgn) )
            *((_DWORD *)v3 + 22) = 2;
        }
      }
      else
      {
        *v3 = 0LL;
        *((_DWORD *)v3 + 8) = 6159;
      }
    }
    v3 += 21;
  }
  return v5 & (unsigned int)-(v6 != 0);
}
