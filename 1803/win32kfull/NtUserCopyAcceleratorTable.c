/*
 * XREFs of NtUserCopyAcceleratorTable @ 0x1C00EE8E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserCopyAcceleratorTable(__int64 a1, char *a2, int a3)
{
  unsigned __int64 v3; // rdi
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 v19; // rcx
  _BYTE v20[48]; // [rsp+38h] [rbp-30h] BYREF

  v3 = a3;
  v6 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  v7 = HMValidateHandle(a1, 8);
  v12 = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      if ( v3 > 0x2AAAAAAAAAAAAAAALL )
        ExRaiseAccessViolation();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v8, v10, v11);
      ProbeForWrite(a2, 6 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
      if ( (int)v3 > *(_DWORD *)(v12 + 24) )
        LODWORD(v3) = *(_DWORD *)(v12 + 24);
      while ( v6 < (int)v3 )
      {
        v19 = 3LL * v6;
        *(_BYTE *)(v12 + 2 * v19 + 29) = 0;
        *(_DWORD *)&a2[2 * v19] = *(_DWORD *)(v12 + 6LL * v6 + 28);
        *(_WORD *)&a2[2 * v19 + 4] = *(_WORD *)(v12 + 6LL * v6 + 32);
        a2[2 * v19] &= ~0x80u;
        ++v6;
      }
    }
    else
    {
      LODWORD(v3) = *(_DWORD *)(v7 + 24);
    }
  }
  else
  {
    LODWORD(v3) = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return (unsigned int)v3;
}
