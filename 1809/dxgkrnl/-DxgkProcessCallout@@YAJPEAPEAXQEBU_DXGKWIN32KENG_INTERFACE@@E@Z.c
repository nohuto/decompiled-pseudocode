/*
 * XREFs of ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00E2530
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00E97AC (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 */

__int64 __fastcall DxgkProcessCallout(
        struct DXGPROCESS **a1,
        const struct _DXGKWIN32KENG_INTERFACE *const a2,
        const GUID *a3)
{
  char v3; // si
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  const GUID *v9; // r8
  struct DXGPROCESS *v11; // rax
  _QWORD *v12; // rax
  int v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  char v15; // [rsp+40h] [rbp-18h]
  struct DXGPROCESS *v16; // [rsp+78h] [rbp+20h] BYREF

  v13 = -1;
  v3 = (char)a3;
  v14 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v15 = 1;
    v13 = 2000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2000);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 2000);
  if ( v3 == 1 )
  {
    if ( *(_WORD *)a2 != 400 || *((_WORD *)a2 + 1) != 7 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdAssertion(v6);
      v12[3] = *((unsigned __int16 *)a2 + 1);
      v12[4] = *(unsigned __int16 *)a2;
      v12[5] = 7LL;
      v12[6] = 400LL;
      WdLogEvent5_WdAssertion(v12);
      v7 = -1073741811;
      goto LABEL_6;
    }
    if ( DXGPROCESS::CreateDxgProcess(&v16, 0LL, 0LL, 0, 0LL, 0LL) >= 0 )
    {
      v11 = v16;
      *a1 = v16;
      *((_QWORD *)v11 + 13) = a2;
    }
  }
  else
  {
    *a1 = 0LL;
  }
  v7 = 0;
LABEL_6:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, v13);
  return v7;
}
