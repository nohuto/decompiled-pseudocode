/*
 * XREFs of ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C014C37C
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C014C2B0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00552B8 (xxxCallNextHookEx.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserfnHkINLPMSG(int a1, __int64 a2, __int64 a3, struct tagMSG *a4)
{
  struct tagMSG *v6; // rax
  __int64 result; // rax
  _OWORD v8[3]; // [rsp+30h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  v6 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v6 = (struct tagMSG *)MmUserProbeAddress;
  v8[0] = *(_OWORD *)v6;
  v8[1] = *((_OWORD *)v6 + 1);
  v8[2] = *((_OWORD *)v6 + 2);
  if ( a1 == 3 && (DWORD2(v8[0]) == 576 || DWORD2(v8[0]) == 281) )
  {
    *((_QWORD *)&v8[1] + 1) = *(_QWORD *)(gptiCurrent + 696LL);
    *(_QWORD *)&v8[1] = *(_QWORD *)(gptiCurrent + 704LL);
  }
  result = xxxCallNextHookEx();
  if ( a1 == 3 )
  {
    *(_OWORD *)a4 = v8[0];
    *((_OWORD *)a4 + 1) = v8[1];
    *((_OWORD *)a4 + 2) = v8[2];
  }
  return result;
}
