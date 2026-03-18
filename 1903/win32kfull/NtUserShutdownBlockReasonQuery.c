/*
 * XREFs of NtUserShutdownBlockReasonQuery @ 0x1C013ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonQuery(__int64 a1, volatile void *a2, unsigned int *a3)
{
  __int64 v6; // rax
  ULONG64 v7; // rcx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char *Prop; // r15
  unsigned int *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  _DWORD *v17; // rdx
  __int64 v18; // rax

  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0;
  if ( v6 )
  {
    Prop = (char *)GetProp(v6, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError(87LL, v9, v10, v11);
      goto LABEL_4;
    }
    v14 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v14 = (unsigned int *)MmUserProbeAddress;
    v15 = *v14;
    if ( (unsigned int)v15 > 0x101 )
      v15 = 257LL;
    if ( a2 )
    {
      if ( !(_DWORD)v15 )
        goto LABEL_3;
      v16 = v15;
      ProbeForWrite(a2, 2 * v15, 2u);
      RtlStringCchCopyW((char *)a2, v16, Prop);
    }
    v7 = MmUserProbeAddress;
    v17 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v17 = (_DWORD *)MmUserProbeAddress;
    *v17 = *v17;
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)&Prop[2 * v18] );
    *a3 = v18 + 1;
    v8 = 1;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
