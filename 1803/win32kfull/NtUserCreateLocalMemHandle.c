/*
 * XREFs of NtUserCreateLocalMemHandle @ 0x1C0134BA0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall NtUserCreateLocalMemHandle(__int64 a1, volatile void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  unsigned int v13; // ebx
  unsigned int v14; // eax

  EnterCrit(0LL, 1LL);
  v12 = HMValidateHandle(a1, 6);
  v13 = 0;
  if ( v12 )
  {
    if ( a2 )
      ProbeForWrite(a2, a3, 1u);
    if ( a4 )
    {
      v8 = *(unsigned int *)(v12 + 16);
      v9 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v8;
    }
    if ( a2 && (v14 = *(_DWORD *)(v12 + 16), a3 >= v14) )
      memmove((void *)a2, (const void *)(v12 + 20), v14);
    else
      v13 = -1073741789;
  }
  else
  {
    v13 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v13;
}
