/*
 * XREFs of NtUserGetIconSize @ 0x1C0012860
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     _GetIconSize @ 0x1C0016068 (_GetIconSize.c)
 *     FindSystemDpiCursorSize @ 0x1C00160FC (FindSystemDpiCursorSize.c)
 *     GetAnimatedCursorFrame @ 0x1C001C38C (GetAnimatedCursorFrame.c)
 */

__int64 __fastcall NtUserGetIconSize(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 SystemDpiCursorSize; // rax
  int v17; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v18[9]; // [rsp+24h] [rbp-24h] BYREF

  v8 = 0;
  v17 = 0;
  v18[0] = 0;
  EnterSharedCrit(0LL, 1LL);
  LOBYTE(v9) = 3;
  v10 = HMValidateHandle(a1, v9);
  if ( v10 )
  {
    SystemDpiCursorSize = FindSystemDpiCursorSize(v10);
    if ( (*(_DWORD *)(SystemDpiCursorSize + 80) & 8) == 0
      || (SystemDpiCursorSize = GetAnimatedCursorFrame(SystemDpiCursorSize, a2)) != 0 )
    {
      GetIconSize(SystemDpiCursorSize, &v17, v18);
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = v17;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v18[0];
      v8 = 1;
      v18[1] = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v8;
}
