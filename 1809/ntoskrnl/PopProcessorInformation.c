/*
 * XREFs of PopProcessorInformation @ 0x14070E9B8
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeQueryGroupAffinity @ 0x1400F3700 (KeQueryGroupAffinity.c)
 *     PpmPerfGetCurrentState @ 0x140131E94 (PpmPerfGetCurrentState.c)
 */

__int64 __fastcall PopProcessorInformation(__int64 a1, __int64 a2, USHORT a3, _DWORD *a4)
{
  KAFFINITY GroupAffinity; // rdi
  unsigned int v8; // ebx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v12; // r14d
  __int64 Prcb; // rbp
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int16 *v19[2]; // [rsp+30h] [rbp-48h] BYREF
  USHORT v20; // [rsp+40h] [rbp-38h]
  ULONG v21; // [rsp+90h] [rbp+18h] BYREF

  GroupAffinity = KeQueryGroupAffinity(a3);
  v8 = 0;
  v9 = ((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
     + (((GroupAffinity - ((GroupAffinity >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  v10 = (0x101010101010101LL * ((v9 + (v9 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( (unsigned int)(24 * v10) > 0x600 )
  {
    if ( a4 )
      *a4 = 0;
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( (_DWORD)v10 )
    {
      CurrentThread = KeGetCurrentThread();
      v12 = 0;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
      v20 = a3;
      v19[1] = (unsigned __int16 *)GroupAffinity;
      v19[0] = 0LL;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v21, v19) && v12 < (unsigned int)v10 )
      {
        Prcb = KeGetPrcb(v21);
        *(_DWORD *)(a1 + 24LL * v12) = *(unsigned __int8 *)(Prcb + 209);
        PpmPerfGetCurrentState(
          Prcb,
          (_DWORD *)(a1 + 8 + 24LL * v12),
          (unsigned int *)(a1 + 12 + 24LL * v12),
          0LL,
          0LL,
          0LL);
        v14 = *(_QWORD *)(Prcb + 24176);
        if ( v14 )
          v15 = *(_DWORD *)(v14 + 308);
        else
          v15 = *(_DWORD *)(Prcb + 68);
        *(_DWORD *)(a1 + 24LL * v12 + 4) = v15;
        v16 = *(_QWORD *)(Prcb + 23808);
        if ( v16 )
        {
          *(_DWORD *)(a1 + 24LL * v12 + 16) = *(_DWORD *)(v16 + 32);
          v17 = *(_DWORD *)(v16 + 16) + 1;
        }
        else
        {
          *(_DWORD *)(a1 + 24LL * v12 + 16) = 0;
          v17 = 0;
        }
        *(_DWORD *)(a1 + 24LL * v12++ + 20) = v17;
      }
      PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    }
    *a4 = 24 * v10;
  }
  return v8;
}
