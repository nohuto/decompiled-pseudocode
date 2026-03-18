/*
 * XREFs of ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C0129A70
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C01299B0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0129AEC (xxxCallNextHookEx.c)
 */

__int64 __fastcall NtUserfnHkINLPMSG(int a1, unsigned int a2, __int64 a3, struct tagMSG *a4)
{
  struct tagMSG *v6; // rax
  __int64 result; // rax
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  __int128 v10; // [rsp+50h] [rbp-18h]

  v6 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v6 = (struct tagMSG *)MmUserProbeAddress;
  v8 = *(_OWORD *)v6;
  v9 = *((_OWORD *)v6 + 1);
  v10 = *((_OWORD *)v6 + 2);
  if ( a1 == 3 && (DWORD2(v8) == 576 || DWORD2(v8) == 281) )
  {
    *((_QWORD *)&v9 + 1) = *(_QWORD *)(gptiCurrent + 688LL);
    *(_QWORD *)&v9 = *(_QWORD *)(gptiCurrent + 696LL);
  }
  result = xxxCallNextHookEx(a2, a3, &v8);
  if ( a1 == 3 )
  {
    *(_OWORD *)a4 = v8;
    *((_OWORD *)a4 + 1) = v9;
    *((_OWORD *)a4 + 2) = v10;
  }
  return result;
}
