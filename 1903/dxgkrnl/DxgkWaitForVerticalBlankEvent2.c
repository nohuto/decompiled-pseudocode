/*
 * XREFs of DxgkWaitForVerticalBlankEvent2 @ 0x1C0205BA0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0134F10 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent2(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const GUID *v11; // r8
  __int64 v13; // rdi
  __int64 v14; // rsi
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  PVOID v18; // rcx
  struct _KEVENT **v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // esi
  PVOID *v22; // rdi
  __int64 v23; // rcx
  const GUID *v24; // r8
  PVOID *v25; // rbx
  int v26; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+38h] [rbp-E0h]
  char v28; // [rsp+40h] [rbp-D8h]
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v30[4]; // [rsp+50h] [rbp-C8h]
  HANDLE Handle[2]; // [rsp+60h] [rbp-B8h]
  __int128 v32; // [rsp+70h] [rbp-A8h]
  __int128 v33; // [rsp+80h] [rbp-98h]
  __int128 v34; // [rsp+90h] [rbp-88h]
  _QWORD v35[10]; // [rsp+A0h] [rbp-78h] BYREF

  v3 = (_OWORD *)a1;
  v4 = 0;
  v26 = -1;
  v27 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v28 = 1;
    v26 = 2083;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2083);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 2083LL);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v30 = *v3;
  *(_OWORD *)Handle = v3[1];
  v32 = v3[2];
  v33 = v3[3];
  v34 = v3[4];
  v7 = v30[3];
  if ( v30[3] > 8 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v6);
    v8[3] = v7;
    v8[4] = 32LL;
    v8[5] = -1073741811LL;
LABEL_9:
    WdLogEvent5_WdWarning(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v9);
    if ( v28 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v10, &EventProfilerExit, v11, v26);
    }
    return 3221225485LL;
  }
  memset(v35, 0, 0x48uLL);
  v13 = 0LL;
  if ( v30[3] )
  {
    while ( 1 )
    {
      v14 = (unsigned int)v13;
      v15 = ObReferenceObjectByHandle(Handle[v13], 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v17 = (unsigned int)(v13 + 1);
      v18 = Object;
      v35[v17] = Object;
      if ( v15 < 0 )
        break;
      v13 = (unsigned int)v17;
      if ( (unsigned int)v17 >= (unsigned int)v7 )
      {
        v4 = v7 + 1;
        goto LABEL_17;
      }
    }
    if ( (_DWORD)v13 )
    {
      v25 = (PVOID *)&v35[1];
      v14 = (unsigned int)v13;
      do
      {
        ObfDereferenceObject(*v25++);
        --v13;
      }
      while ( v13 );
    }
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v16, v17);
    v8[3] = Handle[v14];
    v8[4] = -1073741811LL;
    goto LABEL_9;
  }
LABEL_17:
  v19 = (struct _KEVENT **)v35;
  if ( !v4 )
    v19 = 0LL;
  v21 = DxgkWaitForVerticalBlankEventInternal(v30[0], v30[1], v30[2], v4, v19);
  if ( (_DWORD)v7 )
  {
    v22 = (PVOID *)&v35[1];
    do
    {
      ObfDereferenceObject(*v22++);
      --v7;
    }
    while ( v7 );
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v20);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v26);
  return v21;
}
