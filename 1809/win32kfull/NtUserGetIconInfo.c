/*
 * XREFs of NtUserGetIconInfo @ 0x1C006CB50
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C006CF78 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C015BD0C (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall NtUserGetIconInfo(
        __int64 a1,
        ULONG64 a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        int a6)
{
  __int64 v10; // rdi
  __int64 v11; // rdx
  struct tagCURSOR *v12; // rax
  ULONG64 v13; // rcx
  struct tagCURSOR *VirtualizedDpiCursor; // r13
  ULONG64 v15; // rdx
  _DWORD *v16; // rdx
  ULONG64 v17; // rcx
  _BYTE *v18; // rdx
  BOOL IconInfo; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _UNICODE_STRING *v25; // [rsp+40h] [rbp-78h]
  struct _UNICODE_STRING *v26; // [rsp+48h] [rbp-70h]
  _BYTE v27[8]; // [rsp+60h] [rbp-58h] BYREF
  int v28; // [rsp+68h] [rbp-50h] BYREF
  volatile void *v29; // [rsp+70h] [rbp-48h]
  int v30; // [rsp+78h] [rbp-40h] BYREF
  volatile void *v31; // [rsp+80h] [rbp-38h]

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v27);
  v10 = 3LL;
  LOBYTE(v11) = 3;
  v12 = (struct tagCURSOR *)HMValidateHandle(a1, v11);
  if ( v12 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v12);
    if ( a3 )
    {
      v17 = (ULONG64)a3;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        v17 = MmUserProbeAddress;
      v28 = *(_DWORD *)v17;
      v29 = *(volatile void **)(v17 + 8);
      ProbeForWrite(v29, HIWORD(v28), 2u);
      v26 = (struct _UNICODE_STRING *)&v28;
    }
    else
    {
      v26 = 0LL;
    }
    if ( a4 )
    {
      v15 = (ULONG64)a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v15 = MmUserProbeAddress;
      v30 = *(_DWORD *)v15;
      v31 = *(volatile void **)(v15 + 8);
      ProbeForWrite(v31, HIWORD(v30), 2u);
      v25 = (struct _UNICODE_STRING *)&v30;
    }
    else
    {
      v25 = 0LL;
    }
    if ( a5 )
    {
      v13 = MmUserProbeAddress;
      v16 = a5;
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = *v16;
    }
    if ( PsGetCurrentProcessWow64Process(v13) )
      v10 = 0LL;
    if ( (v10 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v18 = (_BYTE *)MmUserProbeAddress;
    *v18 = *v18;
    v18[31] = v18[31];
    IconInfo = _InternalGetIconInfo(VirtualizedDpiCursor, (struct _ICONINFO *)a2, v26, v25, a5, a6 != 0);
    if ( a3 )
    {
      *(_DWORD *)(&v26->MaximumLength + 1) = 0;
      *a3 = *v26;
    }
    if ( a4 )
    {
      *(_DWORD *)(&v25->MaximumLength + 1) = 0;
      *a4 = *v25;
    }
  }
  else
  {
    IconInfo = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v27);
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return IconInfo;
}
