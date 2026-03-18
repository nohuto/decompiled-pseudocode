/*
 * XREFs of DxgkWaitForVerticalBlankEvent2 @ 0x1C01D7860
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0126C60 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent2(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  PVOID v14; // rcx
  struct _KEVENT **v15; // rax
  unsigned int v16; // esi
  PVOID *v17; // rdi
  __int64 v18; // rcx
  const GUID *v19; // r8
  PVOID *v21; // rbx
  __int64 v22; // rcx
  const GUID *v23; // r8
  int v24; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-E0h]
  char v26; // [rsp+40h] [rbp-D8h]
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v28[4]; // [rsp+50h] [rbp-C8h]
  HANDLE Handle[2]; // [rsp+60h] [rbp-B8h]
  __int128 v30; // [rsp+70h] [rbp-A8h]
  __int128 v31; // [rsp+80h] [rbp-98h]
  __int128 v32; // [rsp+90h] [rbp-88h]
  _QWORD v33[10]; // [rsp+A0h] [rbp-78h] BYREF

  v3 = (_OWORD *)a1;
  v4 = 0;
  v24 = -1;
  v25 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v26 = 1;
    v24 = 2083;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2083);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 2083);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v28 = *v3;
  *(_OWORD *)Handle = v3[1];
  v30 = v3[2];
  v31 = v3[3];
  v32 = v3[4];
  v7 = v28[3];
  if ( v28[3] > 8 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v6);
    v8[3] = v7;
    v8[4] = 32LL;
    v8[5] = -1073741811LL;
LABEL_26:
    WdLogEvent5_WdWarning(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v22, &EventProfilerExit, v23, v24);
    }
    return 3221225485LL;
  }
  memset(v33, 0, 0x48uLL);
  v9 = 0LL;
  if ( v28[3] )
  {
    while ( 1 )
    {
      v10 = (unsigned int)v9;
      v11 = ObReferenceObjectByHandle(Handle[v9], 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v13 = (unsigned int)(v9 + 1);
      v14 = Object;
      v33[v13] = Object;
      if ( v11 < 0 )
        break;
      v9 = (unsigned int)v13;
      if ( (unsigned int)v13 >= (unsigned int)v7 )
      {
        v4 = v7 + 1;
        goto LABEL_13;
      }
    }
    if ( (_DWORD)v9 )
    {
      v21 = (PVOID *)&v33[1];
      v10 = (unsigned int)v9;
      do
      {
        ObfDereferenceObject(*v21++);
        --v9;
      }
      while ( v9 );
    }
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v12, v13);
    v8[3] = Handle[v10];
    v8[4] = -1073741811LL;
    goto LABEL_26;
  }
LABEL_13:
  v15 = (struct _KEVENT **)v33;
  if ( !v4 )
    v15 = 0LL;
  v16 = DxgkWaitForVerticalBlankEventInternal(v28[0], v28[1], v28[2], v4, v15);
  if ( (_DWORD)v7 )
  {
    v17 = (PVOID *)&v33[1];
    do
    {
      ObfDereferenceObject(*v17++);
      --v7;
    }
    while ( v7 );
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, v24);
  return v16;
}
