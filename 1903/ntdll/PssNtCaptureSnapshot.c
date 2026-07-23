/*
 * XREFs of PssNtCaptureSnapshot @ 0x1801101A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x18009D080 (ZwCreateProcessEx.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     PssNtFreeSnapshot @ 0x180110900 (PssNtFreeSnapshot.c)
 *     sub_180110FD0 @ 0x180110FD0 (sub_180110FD0.c)
 *     sub_180111230 @ 0x180111230 (sub_180111230.c)
 *     sub_18011138C @ 0x18011138C (sub_18011138C.c)
 *     sub_180111530 @ 0x180111530 (sub_180111530.c)
 *     sub_1801118C0 @ 0x1801118C0 (sub_1801118C0.c)
 *     sub_180111DA4 @ 0x180111DA4 (sub_180111DA4.c)
 *     sub_180112808 @ 0x180112808 (sub_180112808.c)
 */

NTSTATUS __cdecl PssNtCaptureSnapshot(
        PHANDLE SnapshotHandle,
        HANDLE ProcessHandle,
        ULONG CaptureFlags,
        ULONG ThreadContextFlags)
{
  HANDLE v5; // r13
  NTSTATUS result; // eax
  ULONG v8; // r15d
  __int64 v9; // rbx
  ULONG v10; // esi
  HANDLE v11; // rcx
  int v12; // r12d
  int v13; // r12d
  ULONG i; // eax
  int v15; // r13d
  NTSTATUS v16; // r15d
  PVOID BaseAddress; // [rsp+58h] [rbp-29h] BYREF
  __int64 v18; // [rsp+60h] [rbp-21h] BYREF
  __int64 v19; // [rsp+68h] [rbp-19h] BYREF
  __int64 v20; // [rsp+70h] [rbp-11h] BYREF
  __int64 v21; // [rsp+78h] [rbp-9h] BYREF
  __int64 v22; // [rsp+80h] [rbp-1h] BYREF
  __int64 v23; // [rsp+88h] [rbp+7h] BYREF
  __int64 v24; // [rsp+90h] [rbp+Fh] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+17h] BYREF
  HANDLE ProcessHandlea; // [rsp+A0h] [rbp+1Fh] BYREF

  v5 = ProcessHandle;
  if ( (CaptureFlags & 0x3FFC000) != 0 )
    return -1073741811;
  v8 = CaptureFlags & 0x1C000000;
  if ( (CaptureFlags & 0x1C000000) == 0x4000000 )
    return -1073741776;
  v9 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v10 = CaptureFlags & 0x40000000;
  if ( (CaptureFlags & 0x40000000) != 0 )
  {
    v9 = MEMORY[0x7FFE0300];
    sub_180110FD0(&v24, &v23);
  }
  v11 = *SnapshotHandle;
  v12 = 0;
  BaseAddress = v11;
  if ( !v11 )
  {
    RegionSize = 1144LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
    v11 = BaseAddress;
    v12 = 1;
    *SnapshotHandle = BaseAddress;
  }
  memset(v11, 0, 0x478uLL);
  *(_DWORD *)BaseAddress = 1146311504;
  *((_DWORD *)BaseAddress + 1) = v12;
  *((_DWORD *)BaseAddress + 2) = CaptureFlags;
  v13 = sub_18011138C(BaseAddress, v5, CaptureFlags);
  if ( v13 < 0 )
    goto LABEL_11;
  if ( (CaptureFlags & 2) != 0 )
  {
    if ( v10 )
      sub_180110FD0(&v21, &v20);
    v22 = 2147352576LL;
    v13 = sub_180111530(BaseAddress, v5, CaptureFlags, &v22);
    if ( v13 < 0 )
      goto LABEL_11;
    if ( v10 )
    {
      sub_180110FD0(&v19, &v18);
      *((_QWORD *)BaseAddress + 135) = v18 - v20;
      *((_QWORD *)BaseAddress + 136) = 1000000 * (v19 - v21) / v9;
    }
  }
  if ( (CaptureFlags & 0x800) != 0 )
  {
    if ( v10 )
      sub_180110FD0(&v21, &v20);
    v13 = sub_1801118C0(BaseAddress, v5, CaptureFlags);
    if ( v13 >= 0 )
    {
      if ( v10 )
      {
        sub_180110FD0(&v19, &v18);
        *((_QWORD *)BaseAddress + 133) = v18 - v20;
        *((_QWORD *)BaseAddress + 134) = 1000000 * (v19 - v21) / v9;
      }
      goto LABEL_24;
    }
LABEL_11:
    PssNtFreeSnapshot(BaseAddress);
    *SnapshotHandle = 0LL;
    return v13;
  }
LABEL_24:
  if ( (CaptureFlags & 1) == 0 )
    goto LABEL_43;
  if ( v10 )
    sub_180110FD0(&v21, &v20);
  for ( i = ((int)CaptureFlags >> 31) & 0x1000; ; i = ((int)CaptureFlags >> 31) & 0x1000 )
  {
    v15 = v8 & 0x8000000;
    LODWORD(v22) = v8 & 0x10000000;
    if ( (v8 & 0x10000000) != 0 )
    {
      i |= 0x400u;
    }
    else if ( v15 )
    {
      i |= 1u;
    }
    v13 = ZwCreateProcessEx(&ProcessHandlea, 0x2000000u, 0LL, ProcessHandle, i, 0LL, 0LL, 0LL, 0);
    if ( v13 < 0 )
    {
      if ( (v8 & 0x4000000) == 0 )
        goto LABEL_11;
      if ( (_DWORD)v22 )
      {
        v8 &= ~0x10000000u;
        continue;
      }
      if ( !v15 )
        goto LABEL_11;
      v8 &= ~0x8000000u;
      v13 = -1073741267;
    }
    if ( v13 != -1073741267 )
      break;
  }
  *((_QWORD *)BaseAddress + 110) = MEMORY[0x7FFE0014];
  *((_QWORD *)BaseAddress + 109) = ProcessHandlea;
  if ( v10 )
  {
    sub_180110FD0(&v19, &v18);
    *((_QWORD *)BaseAddress + 131) = v18 - v20;
    *((_QWORD *)BaseAddress + 132) = 1000000 * (v19 - v21) / v9;
  }
  v5 = ProcessHandle;
LABEL_43:
  if ( (CaptureFlags & 4) != 0 )
  {
    if ( v10 )
      sub_180110FD0(&v21, &v20);
    v16 = sub_180111DA4(BaseAddress, v5, CaptureFlags);
    if ( v16 < 0 )
    {
LABEL_47:
      PssNtFreeSnapshot(BaseAddress);
      *SnapshotHandle = 0LL;
      return v16;
    }
    if ( v10 )
    {
      sub_180110FD0(&v19, &v18);
      *((_QWORD *)BaseAddress + 137) = v18 - v20;
      *((_QWORD *)BaseAddress + 138) = 1000000 * (v19 - v21) / v9;
    }
  }
  if ( (CaptureFlags & 0x80u) == 0 )
  {
LABEL_56:
    if ( v10 )
    {
      sub_180110FD0(&v19, &v18);
      *((_QWORD *)BaseAddress + 129) = v18 - v23;
      *((_QWORD *)BaseAddress + 130) = 1000000 * (v19 - v24) / v9;
    }
  }
  else
  {
    if ( v10 )
      sub_180110FD0(&v21, &v20);
    v16 = sub_180112808(BaseAddress, v5, CaptureFlags, ThreadContextFlags);
    if ( v16 < 0 )
      goto LABEL_47;
    if ( v10 )
    {
      sub_180110FD0(&v19, &v18);
      *((_QWORD *)BaseAddress + 139) = v18 - v20;
      *((_QWORD *)BaseAddress + 140) = 1000000 * (v19 - v21) / v9;
      goto LABEL_56;
    }
  }
  if ( (CaptureFlags & 0x2000) != 0 )
    sub_180111230(BaseAddress, v5);
  return 0;
}
