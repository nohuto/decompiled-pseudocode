/*
 * XREFs of DpiDxgkDdiQueryChildStatus @ 0x1C015B4A4
 * Callers:
 *     DpiPdoIsChildConnected @ 0x1C015B218 (DpiPdoIsChildConnected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pdqttq @ 0x1C00526B0 (McTemplateK0pdqttq.c)
 */

__int64 __fastcall DpiDxgkDdiQueryChildStatus(__int64 a1, __int64 a2, const GUID *a3, unsigned __int8 a4)
{
  unsigned int Data1; // ebx
  GUID *v6; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-48h]
  int v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+30h] [rbp-38h]
  int v22; // [rsp+30h] [rbp-38h]
  __int64 v23; // [rsp+38h] [rbp-30h]
  int v24; // [rsp+38h] [rbp-30h]
  __int64 v25; // [rsp+40h] [rbp-28h]
  int v26; // [rsp+40h] [rbp-28h]

  Data1 = 0;
  v6 = (GUID *)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v26 = 0;
    v24 = a4;
    v22 = 0;
    v20 = 0;
    v18 = 0;
    McTemplateK0pdqttq(a1, &EventEnterDdiQueryChildStatus, a3, a2, v18, v20, v22, v24, v26);
  }
  LOBYTE(a3) = a4;
  v9 = (*(__int64 (__fastcall **)(__int64, GUID *, const GUID *))(a1 + 208))(a2, v6, a3);
  v13 = v9;
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
      LODWORD(v25) = v9;
      LODWORD(v23) = a4;
      LODWORD(v21) = (unsigned __int8)v11;
      LODWORD(v19) = v10;
      LODWORD(v17) = Data1;
      McTemplateK0pdqttq((unsigned __int8)v11, &EventExitDdiQueryChildStatus, v12, a2, v17, v19, v21, v23, v25);
    }
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
  v14[3] = a1;
  v14[4] = *(unsigned int *)&v6->Data2;
  v15 = v6->Data1;
  LODWORD(v15) = v15 | 0x80000000;
  if ( a4 != 1 )
    v15 = v6->Data1;
  v14[5] = v15;
  v14[6] = v6->Data4[0];
  v14[7] = v13;
  return (unsigned int)v13;
}
