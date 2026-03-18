/*
 * XREFs of ?GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ @ 0x1C00D6F10
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00D6DB0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

const union _LARGE_INTEGER *__fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  __int64 *v1; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp-19h] BYREF
  int v11; // [rsp+38h] [rbp-11h]
  const WCHAR *v12; // [rsp+40h] [rbp-9h]
  __int64 *v13; // [rsp+48h] [rbp-1h]
  int v14; // [rsp+50h] [rbp+7h]
  __int64 v15; // [rsp+58h] [rbp+Fh]
  int v16; // [rsp+60h] [rbp+17h]
  _BYTE v17[56]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+B0h] [rbp+67h] BYREF

  v1 = (__int64 *)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
  {
    v10 = 0LL;
    v15 = 0LL;
    v16 = 0;
    v12 = L"Timestamp";
    v18 = 4294967288LL;
    v11 = 292;
    v13 = &v18;
    v14 = 184549376;
    memset(v17, 0, sizeof(v17));
    v3 = RtlQueryRegistryValuesEx(0x40000000LL, *((_QWORD *)this + 8), &v10, 0LL, 0LL);
    v7 = v3;
    if ( v3 < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v5, v4, v6);
      *(_QWORD *)(v9 + 24) = v7;
      WdLogEvent5_WdError(v9);
    }
    else
    {
      *v1 = v18;
    }
  }
  return (const union _LARGE_INTEGER *)v1;
}
