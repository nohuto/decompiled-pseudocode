/*
 * XREFs of ?DxgkCddLogEvent@@YAXIEPEAU_DXGKETW_PARAMS@@@Z @ 0x1C0152510
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     McTemplateK0p @ 0x1C0035594 (McTemplateK0p.c)
 *     McTemplateK0qqqqqqqttQ3 @ 0x1C003C018 (McTemplateK0qqqqqqqttQ3.c)
 */

void __fastcall DxgkCddLogEvent(__int64 a1, __int64 a2, const GUID *a3)
{
  int v4; // esi
  const EVENT_DESCRIPTOR *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = a1;
  if ( (_DWORD)a1 == 8012 )
  {
    if ( !*(_QWORD *)&a3->Data1 )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v8 + 24) = 2632LL;
      WdLogEvent5_WdAssertion(v8);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      McTemplateK0p(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventGdiRenderDuringCS,
        a3,
        *(_QWORD *)&a3->Data1);
  }
  else
  {
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 0x20) == 0 )
      return;
    if ( a3 )
    {
      if ( (_BYTE)a2 == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0qqqqqqqttQ3(
            a1,
            &EventExtendedProfilerEnter,
            a3,
            a1,
            a3->Data1,
            *(_DWORD *)&a3->Data2,
            *(_DWORD *)a3->Data4,
            *(_DWORD *)&a3->Data4[4],
            a3[1].Data1,
            *(_DWORD *)&a3[1].Data2,
            *(_DWORD *)a3[1].Data4,
            *(_DWORD *)&a3[1].Data4[4],
            (__int64)&a3[2]);
      }
      else if ( (_BYTE)a2 == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0qqqqqqqttQ3(
            a1,
            &EventExtendedProfilerExit,
            a3,
            a1,
            a3->Data1,
            *(_DWORD *)&a3->Data2,
            *(_DWORD *)a3->Data4,
            *(_DWORD *)&a3->Data4[4],
            a3[1].Data1,
            *(_DWORD *)&a3[1].Data2,
            *(_DWORD *)a3[1].Data4,
            *(_DWORD *)&a3[1].Data4[4],
            (__int64)&a3[2]);
      }
      else
      {
        if ( (_BYTE)a2 )
        {
          v7 = WdLogNewEntry5_WdAssertion(a1, a2);
          *(_QWORD *)(v7 + 24) = 2635LL;
          WdLogEvent5_WdAssertion(v7);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0qqqqqqqttQ3(
            a1,
            &EventExtendedProfilerInfo,
            a3,
            v4,
            a3->Data1,
            *(_DWORD *)&a3->Data2,
            *(_DWORD *)a3->Data4,
            *(_DWORD *)&a3->Data4[4],
            a3[1].Data1,
            *(_DWORD *)&a3[1].Data2,
            *(_DWORD *)a3[1].Data4,
            *(_DWORD *)&a3[1].Data4[4],
            (__int64)&a3[2]);
      }
    }
    else if ( (_BYTE)a2 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        v5 = &EventProfilerEnter;
LABEL_8:
        McTemplateK0q(a1, v5, a3, v4);
      }
    }
    else if ( (_BYTE)a2 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        v5 = &EventProfilerExit;
        goto LABEL_8;
      }
    }
    else
    {
      if ( (_BYTE)a2 )
      {
        v6 = WdLogNewEntry5_WdAssertion(a1, a2);
        *(_QWORD *)(v6 + 24) = 2596LL;
        WdLogEvent5_WdAssertion(v6);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        v5 = (const EVENT_DESCRIPTOR *)&EventProfilerInfo;
        goto LABEL_8;
      }
    }
  }
}
