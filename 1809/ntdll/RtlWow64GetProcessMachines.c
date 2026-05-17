/*
 * XREFs of RtlWow64GetProcessMachines @ 0x18007F950
 * Callers:
 *     LdrpGetModuleName @ 0x18006A6E8 (LdrpGetModuleName.c)
 *     RtlQueryProcessDebugInformation @ 0x18007D750 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x1800A2E10 (NtQuerySystemInformationEx.c)
 *     _alloca_probe @ 0x1800A5210 (_alloca_probe.c)
 */

__int64 __fastcall RtlWow64GetProcessMachines(__int64 a1, _WORD *a2, __int16 *a3)
{
  int v5; // r9d
  __int16 v6; // cx
  __int16 v7; // dx
  unsigned int *v9; // rbx
  unsigned int v10; // r8d
  __int64 v11; // rsi
  __int16 v12; // r10
  __int16 v13; // r11
  struct _TEB *v14; // rcx
  __int64 WowTebOffset; // rax
  _WORD *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  void *v19; // rsp
  void *v20; // rsp
  unsigned int v21; // [rsp+30h] [rbp+0h] BYREF
  __int64 v22; // [rsp+38h] [rbp+8h] BYREF
  _BYTE v23[16]; // [rsp+40h] [rbp+10h] BYREF

  v22 = a1;
  v5 = 0;
  if ( a1 == -1 )
  {
    if ( !NtCurrentTeb()->WowTebOffset )
    {
      v6 = 0;
      v7 = -31132;
      goto LABEL_4;
    }
    v14 = NtCurrentTeb();
    WowTebOffset = v14->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v14 = (struct _TEB *)((char *)v14 + WowTebOffset);
    if ( (_DWORD)v14 == LODWORD(v14->NtTib.SubSystemTib) )
      v16 = (_WORD *)LODWORD(v14->glDispatchTable[137]);
    else
      v16 = v14->TlsSlots[10];
    if ( v16 )
    {
      v6 = v16[17];
      if ( v6 )
      {
        if ( v16[16] )
        {
          v7 = v16[16];
LABEL_4:
          *a2 = v6;
          if ( a3 )
            *a3 = v7;
          return (unsigned int)v5;
        }
      }
    }
  }
  v21 = 16;
  v9 = (unsigned int *)v23;
  v5 = NtQuerySystemInformationEx(181LL, &v22, 8LL, v23, 16, &v21);
  if ( v5 == -1073741789 )
  {
    v17 = v21 + 15LL;
    if ( v17 <= v21 )
      v17 = 0xFFFFFFFFFFFFFF0LL;
    v18 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
    v19 = alloca(v18);
    v20 = alloca(v18);
    v9 = &v21;
    v5 = NtQuerySystemInformationEx(181LL, &v22, 8LL, &v21, v21, &v21);
  }
  if ( v5 >= 0 )
  {
    v10 = *v9;
    v6 = 0;
    v7 = 0;
    for ( LODWORD(v11) = 0; (_WORD)v10; v10 = v9[v11] )
    {
      v12 = v10;
      v13 = v10;
      if ( (v10 & 0xC0000) == 0x80000 )
        v12 = v10;
      else
        v13 = v6;
      v6 = v13;
      if ( (v10 & 0x40000) == 0 )
        v12 = v7;
      v11 = (unsigned int)(v11 + 1);
      v7 = v12;
    }
    goto LABEL_4;
  }
  return (unsigned int)v5;
}
