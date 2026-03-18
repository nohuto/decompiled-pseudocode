/*
 * XREFs of NtUserShutdownBlockReasonQuery @ 0x1C012CB00
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonQuery(__int64 a1, volatile void *a2, unsigned int *a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  __int64 v12; // rdx
  const wchar_t *Prop; // r15
  unsigned int *v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rax

  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0;
  if ( v6 )
  {
    Prop = (const wchar_t *)GetProp(v6, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError(87LL, v12, v9, v10);
      goto LABEL_4;
    }
    v15 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v15 = (unsigned int *)MmUserProbeAddress;
    v16 = *v15;
    if ( (unsigned int)v16 > 0x101 )
      v16 = 257LL;
    if ( a2 )
    {
      if ( !(_DWORD)v16 )
        goto LABEL_3;
      v17 = v16;
      ProbeForWrite(a2, 2 * v16, 2u);
      RtlStringCchCopyW((NTSTRSAFE_PWSTR)a2, v17, Prop);
    }
    v8 = MmUserProbeAddress;
    v7 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v18 = -1LL;
    do
      ++v18;
    while ( Prop[v18] );
    *a3 = v18 + 1;
    v11 = 1;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
