/*
 * XREFs of ReportHangInternal2 @ 0x18007FEAC
 * Callers:
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x18007FE3C (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     RhpCaptureSnapshots @ 0x1800800C4 (RhpCaptureSnapshots.c)
 *     ?WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z @ 0x18008034C (-WersvcSendMessage@@YAJPEBGPEAU_WERSVC_MSG@@1K@Z.c)
 */

__int64 __fastcall ReportHangInternal2(void *Src, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  int v6; // ebx
  __int64 v7; // rdi
  DWORD TickCount; // eax
  int v9; // r9d
  const unsigned __int16 *v10; // rcx
  unsigned int v11; // r9d
  _QWORD *v12; // rsi
  ULONG v13; // ecx
  __int64 v14; // rax
  HANDLE Object[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[40]; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+68h] [rbp-98h]
  int v19; // [rsp+6Ch] [rbp-94h]
  HANDLE Handle; // [rsp+5A8h] [rbp+4A8h]
  HANDLE v21; // [rsp+5B0h] [rbp+4B0h]
  _DWORD v22[12]; // [rsp+5C0h] [rbp+4C0h] BYREF
  union _LARGE_INTEGER v23; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v24; // [rsp+630h] [rbp+530h]
  _BYTE v25[128]; // [rsp+638h] [rbp+538h] BYREF
  char v26; // [rsp+6B8h] [rbp+5B8h] BYREF
  char v27; // [rsp+6C8h] [rbp+5C8h] BYREF
  __int64 v28; // [rsp+708h] [rbp+608h]
  int v29; // [rsp+B20h] [rbp+A20h]
  DWORD v30; // [rsp+B24h] [rbp+A24h]

  v4 = a2;
  memset_0(v22, 0, 0x578uLL);
  memset_0(v17, 0, 0x578uLL);
  if ( !(_DWORD)v4 && !a3 )
  {
    v6 = -1073741811;
    goto LABEL_23;
  }
  v7 = 16LL;
  if ( (unsigned int)v4 > 0x10 )
  {
    v6 = -1073740757;
    goto LABEL_23;
  }
  memset_0(v22, 0, 0x578uLL);
  v22[0] = 91751760;
  v22[10] = 0x10000000;
  memcpy_0(&v23, Src, 4 * v4);
  v28 = 0LL;
  v24 = a3;
  TickCount = GetTickCount();
  v29 = 229500;
  v30 = TickCount;
  RhpCaptureSnapshots((unsigned int)v25, (unsigned int)&v26, (unsigned int)&v27, v9, (__int64)&v23);
  v6 = WersvcSendMessage(v10, (struct _WERSVC_MSG *)v22, (struct _WERSVC_MSG *)v17, v11);
  v12 = v25;
  do
  {
    if ( *v12 )
      PssNtFreeSnapshot();
    ++v12;
    --v7;
  }
  while ( v7 );
  if ( v6 >= 0 )
  {
    if ( v6 == 258 )
    {
      v6 = -1073741248;
      goto LABEL_23;
    }
    switch ( v18 )
    {
      case 268435457:
        goto LABEL_16;
      case 268435458:
        v6 = v19;
        if ( v19 < 0 )
          goto LABEL_23;
        break;
      case 268435461:
LABEL_16:
        v13 = 0;
        if ( Handle )
        {
          Object[0] = Handle;
          v13 = 1;
        }
        if ( v21 )
        {
          v14 = v13++;
          Object[v14] = v21;
        }
        if ( v13 )
          NtWaitForMultipleObjects(v13, Object, WaitAny, 0, 0LL);
        v6 = 0;
        goto LABEL_23;
    }
    v6 = -1073741823;
  }
LABEL_23:
  if ( Handle )
    NtClose(Handle);
  if ( v21 )
    NtClose(v21);
  return (unsigned int)v6;
}
