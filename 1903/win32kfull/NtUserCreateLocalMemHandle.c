/*
 * XREFs of NtUserCreateLocalMemHandle @ 0x1C0130D40
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall NtUserCreateLocalMemHandle(unsigned __int64 a1, volatile void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG64 v11; // rcx
  __int64 v12; // r14
  unsigned int v13; // ebx
  unsigned int v14; // eax

  EnterCrit(0LL, 1LL);
  LOBYTE(v8) = 6;
  v12 = HMValidateHandle(a1, v8, v9, v10);
  v13 = 0;
  if ( v12 )
  {
    if ( a2 )
      ProbeForWrite(a2, a3, 1u);
    if ( a4 )
    {
      v11 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = *(_DWORD *)(v12 + 16);
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
  UserSessionSwitchLeaveCrit(v11);
  return v13;
}
