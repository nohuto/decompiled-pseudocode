/*
 * XREFs of NtUserGetIconInfo @ 0x1C002F700
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C002FB20 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0030084 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
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
  __int64 v20; // rcx
  struct _UNICODE_STRING *v22; // [rsp+40h] [rbp-78h]
  struct _UNICODE_STRING *v23; // [rsp+48h] [rbp-70h]
  __int64 v24; // [rsp+50h] [rbp-68h] BYREF
  volatile void *v25; // [rsp+58h] [rbp-60h]
  __int64 v26; // [rsp+60h] [rbp-58h] BYREF
  volatile void *v27; // [rsp+68h] [rbp-50h]
  __int64 v28; // [rsp+78h] [rbp-40h]
  _BYTE v29[32]; // [rsp+80h] [rbp-38h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v29);
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
      LODWORD(v24) = *(_DWORD *)v17;
      v25 = *(volatile void **)(v17 + 8);
      ProbeForWrite(v25, WORD1(v24), 2u);
      v23 = (struct _UNICODE_STRING *)&v24;
    }
    else
    {
      v23 = 0LL;
    }
    if ( a4 )
    {
      v15 = (ULONG64)a4;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        v15 = MmUserProbeAddress;
      LODWORD(v26) = *(_DWORD *)v15;
      v27 = *(volatile void **)(v15 + 8);
      ProbeForWrite(v27, WORD1(v26), 2u);
      v22 = (struct _UNICODE_STRING *)&v26;
    }
    else
    {
      v22 = 0LL;
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
    {
      v28 = 1LL;
      v10 = 0LL;
    }
    else
    {
      v28 = 4LL;
    }
    if ( (v10 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v18 = (_BYTE *)MmUserProbeAddress;
    *v18 = *v18;
    v18[31] = v18[31];
    IconInfo = _InternalGetIconInfo(VirtualizedDpiCursor, (struct _ICONINFO *)a2, v23, v22, a5, a6 != 0);
    if ( a3 )
    {
      *(_DWORD *)(&v23->MaximumLength + 1) = 0;
      *a3 = *v23;
    }
    if ( a4 )
    {
      *(_DWORD *)(&v22->MaximumLength + 1) = 0;
      *a4 = *v22;
    }
  }
  else
  {
    IconInfo = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v29);
  UserSessionSwitchLeaveCrit(v20);
  return IconInfo;
}
