/*
 * XREFs of NtUserCopyAcceleratorTable @ 0x1C0106FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserCopyAcceleratorTable(__int64 a1, char *a2, int a3)
{
  unsigned __int64 v3; // rdi
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rcx
  _BYTE v18[48]; // [rsp+38h] [rbp-30h] BYREF

  v3 = a3;
  v6 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  LOBYTE(v7) = 8;
  v8 = HMValidateHandle(a1, v7);
  v10 = v8;
  if ( v8 )
  {
    if ( a2 )
    {
      if ( v3 > 0x2AAAAAAAAAAAAAAALL )
        ExRaiseAccessViolation();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9);
      ProbeForWrite(a2, 6 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
      if ( (int)v3 > *(_DWORD *)(v10 + 24) )
        LODWORD(v3) = *(_DWORD *)(v10 + 24);
      while ( v6 < (int)v3 )
      {
        v17 = 3LL * v6;
        *(_BYTE *)(v10 + 2 * v17 + 29) = 0;
        *(_DWORD *)&a2[2 * v17] = *(_DWORD *)(v10 + 6LL * v6 + 28);
        *(_WORD *)&a2[2 * v17 + 4] = *(_WORD *)(v10 + 6LL * v6 + 32);
        a2[2 * v17] &= ~0x80u;
        ++v6;
      }
    }
    else
    {
      LODWORD(v3) = *(_DWORD *)(v8 + 24);
    }
  }
  else
  {
    LODWORD(v3) = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return (unsigned int)v3;
}
