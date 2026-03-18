/*
 * XREFs of NtUserGetIconInfo @ 0x1C0015860
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     _InternalGetIconInfo @ 0x1C0015C34 (_InternalGetIconInfo.c)
 *     FindSystemDpiCursorSize @ 0x1C00160FC (FindSystemDpiCursorSize.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetIconInfo(__int64 a1, ULONG64 a2, _OWORD *a3, _OWORD *a4, ULONG64 a5, int a6)
{
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  int SystemDpiCursorSize; // r13d
  ULONG64 v14; // rdx
  _DWORD *v15; // rdx
  ULONG64 v16; // rcx
  _BYTE *v17; // rdx
  int IconInfo; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int *v24; // [rsp+40h] [rbp-78h]
  int *v25; // [rsp+48h] [rbp-70h]
  _BYTE v26[8]; // [rsp+60h] [rbp-58h] BYREF
  int v27; // [rsp+68h] [rbp-50h] BYREF
  volatile void *v28; // [rsp+70h] [rbp-48h]
  int v29; // [rsp+78h] [rbp-40h] BYREF
  volatile void *v30; // [rsp+80h] [rbp-38h]

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
  v10 = 3LL;
  LOBYTE(v11) = 3;
  v12 = HMValidateHandle(a1, v11);
  if ( v12 )
  {
    SystemDpiCursorSize = FindSystemDpiCursorSize(v12);
    if ( a3 )
    {
      v16 = (ULONG64)a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v16 = MmUserProbeAddress;
      v27 = *(_DWORD *)v16;
      v28 = *(volatile void **)(v16 + 8);
      ProbeForWrite(v28, HIWORD(v27), 2u);
      v25 = &v27;
    }
    else
    {
      v25 = 0LL;
    }
    if ( a4 )
    {
      v14 = (ULONG64)a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v14 = MmUserProbeAddress;
      v29 = *(_DWORD *)v14;
      v30 = *(volatile void **)(v14 + 8);
      ProbeForWrite(v30, HIWORD(v29), 2u);
      v24 = &v29;
    }
    else
    {
      v24 = 0LL;
    }
    if ( a5 )
    {
      v15 = (_DWORD *)a5;
      if ( a5 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = *v15;
    }
    if ( PsGetCurrentProcessWow64Process() )
      v10 = 0LL;
    if ( (v10 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v17 = (_BYTE *)MmUserProbeAddress;
    *v17 = *v17;
    v17[31] = v17[31];
    IconInfo = InternalGetIconInfo(SystemDpiCursorSize, a2, (_DWORD)v25, (_DWORD)v24, a5, a6);
    if ( a3 )
    {
      v25[1] = 0;
      *a3 = *(_OWORD *)v25;
    }
    if ( a4 )
    {
      v24[1] = 0;
      *a4 = *(_OWORD *)v24;
    }
  }
  else
  {
    IconInfo = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v26);
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return IconInfo;
}
