/*
 * XREFs of NtUserMapPointsByVisualIdentifier @ 0x1C0118DF0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0014CA0 (Win32AllocPoolWithQuota.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1C011C9D0 (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 */

__int64 __fastcall NtUserMapPointsByVisualIdentifier(
        __int64 *a1,
        __int64 *a2,
        unsigned int a3,
        const void *a4,
        volatile void *Address)
{
  struct _LUID *v7; // r12
  struct _LUID *v8; // r15
  struct VisualPoint *v9; // rsi
  struct VisualPoint *v10; // rbx
  unsigned __int64 v11; // rdi
  ULONG64 v12; // rcx
  struct VisualPoint *v13; // rax
  struct VisualPoint *v14; // rax
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v21; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v22[2]; // [rsp+58h] [rbp-70h] BYREF
  __int64 *v23; // [rsp+68h] [rbp-60h]
  _QWORD *v24; // [rsp+70h] [rbp-58h]
  __int64 v25; // [rsp+78h] [rbp-50h]
  __int64 v26; // [rsp+80h] [rbp-48h]

  v7 = 0LL;
  v23 = 0LL;
  v8 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v22[0] = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 8LL * a3;
  if ( v11 > 0xFFFFFFFF )
    goto LABEL_25;
  if ( !(_DWORD)v11 )
  {
LABEL_24:
    v17 = 1;
    goto LABEL_27;
  }
  if ( a1 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v25 = *a1;
    v21 = v25;
    v7 = (struct _LUID *)&v21;
    v23 = &v21;
  }
  if ( a2 )
  {
    a1 = a2 + 1;
    if ( a2 + 1 < a2 || (unsigned __int64)a1 > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v26 = *a2;
    v22[0] = v26;
    v8 = (struct _LUID *)v22;
    v24 = v22;
  }
  if ( ((PsGetCurrentProcessWow64Process(a1) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (ULONG64)a4 + (unsigned int)v11;
  if ( v12 > MmUserProbeAddress || v12 < (unsigned __int64)a4 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v13 = (struct VisualPoint *)Win32AllocPoolWithQuota((unsigned int)v11, 0x766E6355u);
  v9 = v13;
  if ( !v13 )
    ExRaiseStatus(-1073741801);
  memmove(v13, a4, (unsigned int)v11);
  v14 = (struct VisualPoint *)Win32AllocPoolWithQuota((unsigned int)v11, 0x766E6355u);
  v10 = v14;
  if ( !v14 )
  {
LABEL_25:
    v17 = 0;
    v18 = 8LL;
    goto LABEL_26;
  }
  v15 = MapPointsByVisualIdentifierInternal(v7, v8, a3, v9, v14);
  if ( v15 >= 0 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16);
    ProbeForWrite(Address, (unsigned int)v11, CurrentProcessWow64Process != 0 ? 1 : 4);
    memmove((void *)Address, v10, (unsigned int)v11);
    goto LABEL_24;
  }
  v17 = 0;
  v18 = RtlNtStatusToDosError(v15);
LABEL_26:
  UserSetLastError(v18, (__int64)a2);
LABEL_27:
  if ( v9 )
    Win32FreePool((__int64)v9);
  if ( v10 )
    Win32FreePool((__int64)v10);
  return v17;
}
