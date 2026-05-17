/*
 * XREFs of RtlWow64GetProcessMachines @ 0x180078240
 * Callers:
 *     sub_180062218 @ 0x180062218 (sub_180062218.c)
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformationEx @ 0x18009F230 (ZwQuerySystemInformationEx.c)
 *     __chkstk @ 0x1800A1730 (__chkstk.c)
 */

__int64 __fastcall RtlWow64GetProcessMachines(__int64 a1, __int16 *a2, __int16 *a3)
{
  int v5; // r10d
  __int16 v6; // cx
  __int16 v7; // dx
  unsigned int *v9; // rbx
  unsigned int v10; // r8d
  __int64 v11; // r11
  unsigned int *v12; // r9
  struct _TEB *v13; // rcx
  __int64 SpareUlong0; // rax
  _WORD *v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  unsigned int v20; // [rsp+30h] [rbp+0h] BYREF
  __int64 v21; // [rsp+38h] [rbp+8h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp+10h] BYREF

  v21 = a1;
  v5 = 0;
  if ( a1 == -1 )
  {
    if ( !NtCurrentTeb()->SpareUlong0 )
    {
      v6 = 0;
      v7 = -31132;
      goto LABEL_4;
    }
    v13 = NtCurrentTeb();
    SpareUlong0 = (int)v13->SpareUlong0;
    if ( (int)SpareUlong0 < 0 )
      v13 = (struct _TEB *)((char *)v13 + SpareUlong0);
    if ( (_DWORD)v13 == LODWORD(v13->NtTib.SubSystemTib) )
      v15 = (_WORD *)LODWORD(v13->glDispatchTable[137]);
    else
      v15 = v13->TlsSlots[10];
    if ( v15 )
    {
      v6 = v15[17];
      if ( v6 )
      {
        if ( v15[16] )
        {
          v7 = v15[16];
LABEL_4:
          *a2 = v6;
          if ( a3 )
            *a3 = v7;
          return (unsigned int)v5;
        }
      }
    }
  }
  v20 = 16;
  v9 = (unsigned int *)v22;
  v5 = ZwQuerySystemInformationEx(181LL, &v21, 8LL, v22, 16, &v20);
  if ( v5 == -1073741789 )
  {
    v16 = v20 + 15LL;
    if ( v16 <= v20 )
      v16 = 0xFFFFFFFFFFFFFF0LL;
    v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
    v18 = alloca(v17);
    v19 = alloca(v17);
    v9 = &v20;
    v5 = ZwQuerySystemInformationEx(181LL, &v21, 8LL, &v20, v20, &v20);
  }
  if ( v5 >= 0 )
  {
    v10 = *v9;
    v6 = 0;
    v7 = 0;
    LODWORD(v11) = 0;
    if ( (unsigned __int16)*v9 )
    {
      v12 = v9;
      do
      {
        if ( (v10 & 0xC0000) == 0x80000 )
          v6 = *(_WORD *)v12;
        if ( (v10 & 0x40000) != 0 )
          v7 = *(_WORD *)v12;
        v11 = (unsigned int)(v11 + 1);
        v12 = &v9[v11];
        v10 = *v12;
      }
      while ( (unsigned __int16)*v12 );
    }
    goto LABEL_4;
  }
  return (unsigned int)v5;
}
