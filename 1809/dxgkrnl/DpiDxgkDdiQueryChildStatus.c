/*
 * XREFs of DpiDxgkDdiQueryChildStatus @ 0x1C01450A8
 * Callers:
 *     DpiPdoIsChildConnected @ 0x1C0144E00 (DpiPdoIsChildConnected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pdqttq @ 0x1C004B41C (McTemplateK0pdqttq.c)
 */

__int64 __fastcall DpiDxgkDdiQueryChildStatus(__int64 a1, __int64 a2, const GUID *a3, unsigned __int8 a4)
{
  unsigned int Data1; // ebx
  GUID *v6; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-48h]
  int v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]
  int v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-38h]
  int v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+38h] [rbp-30h]
  int v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+40h] [rbp-28h]
  int v27; // [rsp+40h] [rbp-28h]

  Data1 = 0;
  v6 = (GUID *)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v27 = 0;
    v25 = a4;
    v23 = 0;
    v21 = 0;
    v19 = 0;
    McTemplateK0pdqttq(a1, &EventEnterDdiQueryChildStatus, a3, a2, v19, v21, v23, v25, v27);
  }
  LOBYTE(a3) = a4;
  v9 = (*(__int64 (__fastcall **)(__int64, GUID *, const GUID *))(a1 + 208))(a2, v6, a3);
  v14 = v9;
  if ( bTracingEnabled )
  {
    v10 = 0LL;
    LOBYTE(v11) = 0;
    if ( v6 )
    {
      Data1 = v6->Data1;
      v10 = *(unsigned int *)&v6->Data2;
      LOBYTE(v11) = v6->Data4[0];
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v26) = v9;
      LODWORD(v24) = a4;
      LODWORD(v22) = (unsigned __int8)v11;
      LODWORD(v20) = v10;
      LODWORD(v18) = Data1;
      McTemplateK0pdqttq((unsigned __int8)v11, &EventExitDdiQueryChildStatus, v12, a2, v18, v20, v22, v24, v26);
    }
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
  v15[3] = a1;
  v15[4] = *(unsigned int *)&v6->Data2;
  v16 = v6->Data1;
  LODWORD(v16) = v16 | 0x80000000;
  if ( a4 != 1 )
    v16 = v6->Data1;
  v15[5] = v16;
  v15[6] = v6->Data4[0];
  v15[7] = v14;
  return (unsigned int)v14;
}
