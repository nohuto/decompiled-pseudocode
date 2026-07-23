/*
 * XREFs of TpCallbackIndependent @ 0x1800331B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003382C @ 0x18003382C (sub_18003382C.c)
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

NTSTATUS __fastcall TpCallbackIndependent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdi
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // rcx
  int v11; // eax
  int v12; // ecx
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v15; // [rsp+38h] [rbp+10h]

  v4 = 0;
  v6 = 0LL;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    sub_18010EFC8(a1, a2, a1, a4);
    v11 = -1073741811;
    goto LABEL_12;
  }
  v7 = *(_QWORD *)(a1 + 184);
  if ( v7 )
    v6 = *(_QWORD *)(v7 + 144);
  else
    v6 = *(_QWORD *)(a1 + 128);
  if ( !v6 )
  {
    v11 = -1073741811;
LABEL_17:
    v12 = v11;
    goto LABEL_18;
  }
  if ( qword_180166458 == v6 )
  {
    v11 = -1073741637;
    goto LABEL_17;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 416));
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 420));
  _m_prefetchw((const void *)(v6 + 8));
  v8 = *(_QWORD *)(v6 + 8);
  v15 = v8;
  do
  {
    LODWORD(v15) = (unsigned __int16)(v15 ^ (v15 + 1)) ^ (unsigned int)v15;
    v9 = v8;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8), v15, v8);
    v15 = v8;
  }
  while ( v9 != v8 );
  *(_DWORD *)(a1 + 144) |= 0x10u;
  v10 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 72) = 2;
  if ( v10 )
    sub_18003382C();
  v11 = 0;
LABEL_12:
  v12 = v11;
  if ( v11 >= 0 )
  {
    WorkerFactoryInformation = 2;
    return ZwSetInformationWorkerFactory(*(HANDLE *)(v6 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
  }
LABEL_18:
  if ( v11 != -1073741637 )
    return v12;
  return v4;
}
