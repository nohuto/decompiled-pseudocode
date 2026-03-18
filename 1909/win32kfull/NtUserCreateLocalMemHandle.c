/*
 * XREFs of NtUserCreateLocalMemHandle @ 0x1C010B630
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall NtUserCreateLocalMemHandle(unsigned __int64 a1, volatile void *a2, unsigned int a3, _DWORD *a4)
{
  ULONG64 v8; // rcx
  __int64 v9; // r14
  unsigned int v10; // ebx
  unsigned int v11; // eax

  EnterCrit(0LL, 1LL);
  v9 = HMValidateHandle(a1, 6);
  v10 = 0;
  if ( v9 )
  {
    if ( a2 )
      ProbeForWrite(a2, a3, 1u);
    if ( a4 )
    {
      v8 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = *(_DWORD *)(v9 + 16);
    }
    if ( a2 && (v11 = *(_DWORD *)(v9 + 16), a3 >= v11) )
      memmove((void *)a2, (const void *)(v9 + 20), v11);
    else
      v10 = -1073741789;
  }
  else
  {
    v10 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
