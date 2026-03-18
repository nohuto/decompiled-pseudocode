/*
 * XREFs of ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00F42B0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00F4554 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 */

__int64 __fastcall DxgkProcessCallout(
        struct DXGPROCESS **a1,
        const struct _DXGKWIN32KENG_INTERFACE *const a2,
        const GUID *a3)
{
  char v3; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  const GUID *v10; // r8
  struct DXGPROCESS *v12; // rax
  _QWORD *v13; // rax
  int v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]
  char v16; // [rsp+40h] [rbp-18h]
  struct DXGPROCESS *v17; // [rsp+78h] [rbp+20h] BYREF

  v14 = -1;
  v3 = (char)a3;
  v15 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v16 = 1;
    v14 = 2000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2000);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2000LL);
  if ( v3 == 1 )
  {
    if ( *(_WORD *)a2 != 464 || *((_WORD *)a2 + 1) != 11 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7, v6);
      v13[3] = *((unsigned __int16 *)a2 + 1);
      v13[4] = *(unsigned __int16 *)a2;
      v13[5] = 11LL;
      v13[6] = 464LL;
      WdLogEvent5_WdAssertion(v13);
      v8 = -1073741811;
      goto LABEL_6;
    }
    if ( DXGPROCESS::CreateDxgProcess(&v17, 0LL, 0LL, 0, 0LL, 0LL) >= 0 )
    {
      v12 = v17;
      *a1 = v17;
      *((_QWORD *)v12 + 12) = a2;
    }
  }
  else
  {
    *a1 = 0LL;
  }
  v8 = 0;
LABEL_6:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14, v6);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v14);
  return v8;
}
